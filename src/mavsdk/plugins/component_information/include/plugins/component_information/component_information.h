// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/main/protos/component_information/component_information.proto)

#pragma once

#include <array>
#include <cmath>
#include <functional>
#include <limits>
#include <memory>
#include <string>
#include <utility>
#include <vector>


#include "plugin_base.h"

#include "handle.h"

namespace mavsdk {


class System;class ComponentInformationImpl;

/**
 * @brief Access component information such as parameters.
 */
class ComponentInformation : public PluginBase {
public:

    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto component_information = ComponentInformation(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit ComponentInformation(System& system); // deprecated

    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto component_information = ComponentInformation(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit ComponentInformation(std::shared_ptr<System> system); // new


    /**
     * @brief Destructor (internal use only).
     */
    ~ComponentInformation() override;





    /**
     * @brief Meta information for parameter of type float.
     */
    struct FloatParam {
        
        std::string name{}; /**< @brief Name (max 16 chars) */
        std::string short_description{}; /**< @brief Short description */
        std::string long_description{}; /**< @brief Long description */
        std::string unit{}; /**< @brief Unit */
        int32_t decimal_places{}; /**< @brief Decimal places for user to show */
        float start_value{}; /**< @brief Current/starting value */
        float default_value{}; /**< @brief Default value */
        float min_value{}; /**< @brief Minimum value */
        float max_value{}; /**< @brief Maximum value */
    };

    /**
     * @brief Equal operator to compare two `ComponentInformation::FloatParam` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(const ComponentInformation::FloatParam& lhs, const ComponentInformation::FloatParam& rhs);

    /**
     * @brief Stream operator to print information about a `ComponentInformation::FloatParam`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, ComponentInformation::FloatParam const& float_param);




    /**
     * @brief A float param that has been updated.
     */
    struct FloatParamUpdate {
        
        std::string name{}; /**< @brief Name of param that changed */
        float value{}; /**< @brief New value of param */
    };

    /**
     * @brief Equal operator to compare two `ComponentInformation::FloatParamUpdate` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(const ComponentInformation::FloatParamUpdate& lhs, const ComponentInformation::FloatParamUpdate& rhs);

    /**
     * @brief Stream operator to print information about a `ComponentInformation::FloatParamUpdate`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, ComponentInformation::FloatParamUpdate const& float_param_update);





    /**
     * @brief Possible results returned for param requests.
     */
    enum class Result {
        Unknown, /**< @brief Unknown result. */
        Success, /**< @brief Request succeeded. */
        NoSystem, /**< @brief No system is connected. */
    };

    /**
     * @brief Stream operator to print information about a `ComponentInformation::Result`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, ComponentInformation::Result const& result);



    /**
     * @brief Callback type for asynchronous ComponentInformation calls.
     */
    using ResultCallback = std::function<void(Result)>;






    /**
     * @brief List available float params.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    std::pair<Result, std::vector<ComponentInformation::FloatParam>> access_float_params() const;




        

    /**
     * @brief Callback type for subscribe_float_param.
     */
    using FloatParamCallback = std::function<void(FloatParamUpdate)>;

    /**
     * @brief Handle type for subscribe_float_param.
     */
    using FloatParamHandle = Handle<FloatParamUpdate>;

    /**
     * @brief Subscribe to float param changes/updates.
     */
    FloatParamHandle subscribe_float_param(const FloatParamCallback& callback);

    /**
     * @brief Unsubscribe from subscribe_float_param
     */
    void unsubscribe_float_param(FloatParamHandle handle);

        






    /**
     * @brief Copy constructor.
     */
    ComponentInformation(const ComponentInformation& other);

    /**
     * @brief Equality operator (object is not copyable).
     */
    const ComponentInformation& operator=(const ComponentInformation&) = delete;

private:
    /** @private Underlying implementation, set at instantiation */
    std::unique_ptr<ComponentInformationImpl> _impl;
};

} // namespace mavsdk