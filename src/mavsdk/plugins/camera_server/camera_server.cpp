// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/camera_server/camera_server.proto)

#include <iomanip>

#include "camera_server_impl.h"
#include "plugins/camera_server/camera_server.h"

namespace mavsdk {

using Information = CameraServer::Information;
using Position = CameraServer::Position;
using Quaternion = CameraServer::Quaternion;
using CaptureInfo = CameraServer::CaptureInfo;




CameraServer::CameraServer(std::shared_ptr<ServerComponent> server_component) : ServerPluginBase(), _impl{std::make_unique<CameraServerImpl>(server_component)} {}


CameraServer::~CameraServer() {}





CameraServer::Result CameraServer::set_information(Information information) const
{
    return _impl->set_information(information);
}





CameraServer::Result CameraServer::set_in_progress(bool in_progress) const
{
    return _impl->set_in_progress(in_progress);
}



    
CameraServer::TakePhotoHandle CameraServer::subscribe_take_photo(const TakePhotoCallback& callback)
{
    return _impl->subscribe_take_photo(callback);
}

void CameraServer::unsubscribe_take_photo(TakePhotoHandle handle)
{
    _impl->unsubscribe_take_photo(handle);
}
    







CameraServer::Result CameraServer::respond_take_photo(TakePhotoFeedback take_photo_feedback, CaptureInfo capture_info) const
{
    return _impl->respond_take_photo(take_photo_feedback, capture_info);
}



bool operator==(const CameraServer::Information& lhs, const CameraServer::Information& rhs)
{
    return
        (rhs.vendor_name == lhs.vendor_name) &&
        (rhs.model_name == lhs.model_name) &&
        (rhs.firmware_version == lhs.firmware_version) &&
        ((std::isnan(rhs.focal_length_mm) && std::isnan(lhs.focal_length_mm)) || rhs.focal_length_mm == lhs.focal_length_mm) &&
        ((std::isnan(rhs.horizontal_sensor_size_mm) && std::isnan(lhs.horizontal_sensor_size_mm)) || rhs.horizontal_sensor_size_mm == lhs.horizontal_sensor_size_mm) &&
        ((std::isnan(rhs.vertical_sensor_size_mm) && std::isnan(lhs.vertical_sensor_size_mm)) || rhs.vertical_sensor_size_mm == lhs.vertical_sensor_size_mm) &&
        (rhs.horizontal_resolution_px == lhs.horizontal_resolution_px) &&
        (rhs.vertical_resolution_px == lhs.vertical_resolution_px) &&
        (rhs.lens_id == lhs.lens_id) &&
        (rhs.definition_file_version == lhs.definition_file_version) &&
        (rhs.definition_file_uri == lhs.definition_file_uri);
}

std::ostream& operator<<(std::ostream& str, CameraServer::Information const& information)
{
    str << std::setprecision(15);
    str << "information:" << '\n'
        << "{\n";
    str << "    vendor_name: " << information.vendor_name << '\n';
    str << "    model_name: " << information.model_name << '\n';
    str << "    firmware_version: " << information.firmware_version << '\n';
    str << "    focal_length_mm: " << information.focal_length_mm << '\n';
    str << "    horizontal_sensor_size_mm: " << information.horizontal_sensor_size_mm << '\n';
    str << "    vertical_sensor_size_mm: " << information.vertical_sensor_size_mm << '\n';
    str << "    horizontal_resolution_px: " << information.horizontal_resolution_px << '\n';
    str << "    vertical_resolution_px: " << information.vertical_resolution_px << '\n';
    str << "    lens_id: " << information.lens_id << '\n';
    str << "    definition_file_version: " << information.definition_file_version << '\n';
    str << "    definition_file_uri: " << information.definition_file_uri << '\n';
    str << '}';
    return str;
}


bool operator==(const CameraServer::Position& lhs, const CameraServer::Position& rhs)
{
    return
        ((std::isnan(rhs.latitude_deg) && std::isnan(lhs.latitude_deg)) || rhs.latitude_deg == lhs.latitude_deg) &&
        ((std::isnan(rhs.longitude_deg) && std::isnan(lhs.longitude_deg)) || rhs.longitude_deg == lhs.longitude_deg) &&
        ((std::isnan(rhs.absolute_altitude_m) && std::isnan(lhs.absolute_altitude_m)) || rhs.absolute_altitude_m == lhs.absolute_altitude_m) &&
        ((std::isnan(rhs.relative_altitude_m) && std::isnan(lhs.relative_altitude_m)) || rhs.relative_altitude_m == lhs.relative_altitude_m);
}

std::ostream& operator<<(std::ostream& str, CameraServer::Position const& position)
{
    str << std::setprecision(15);
    str << "position:" << '\n'
        << "{\n";
    str << "    latitude_deg: " << position.latitude_deg << '\n';
    str << "    longitude_deg: " << position.longitude_deg << '\n';
    str << "    absolute_altitude_m: " << position.absolute_altitude_m << '\n';
    str << "    relative_altitude_m: " << position.relative_altitude_m << '\n';
    str << '}';
    return str;
}


bool operator==(const CameraServer::Quaternion& lhs, const CameraServer::Quaternion& rhs)
{
    return
        ((std::isnan(rhs.w) && std::isnan(lhs.w)) || rhs.w == lhs.w) &&
        ((std::isnan(rhs.x) && std::isnan(lhs.x)) || rhs.x == lhs.x) &&
        ((std::isnan(rhs.y) && std::isnan(lhs.y)) || rhs.y == lhs.y) &&
        ((std::isnan(rhs.z) && std::isnan(lhs.z)) || rhs.z == lhs.z);
}

std::ostream& operator<<(std::ostream& str, CameraServer::Quaternion const& quaternion)
{
    str << std::setprecision(15);
    str << "quaternion:" << '\n'
        << "{\n";
    str << "    w: " << quaternion.w << '\n';
    str << "    x: " << quaternion.x << '\n';
    str << "    y: " << quaternion.y << '\n';
    str << "    z: " << quaternion.z << '\n';
    str << '}';
    return str;
}


bool operator==(const CameraServer::CaptureInfo& lhs, const CameraServer::CaptureInfo& rhs)
{
    return
        (rhs.position == lhs.position) &&
        (rhs.attitude_quaternion == lhs.attitude_quaternion) &&
        (rhs.time_utc_us == lhs.time_utc_us) &&
        (rhs.is_success == lhs.is_success) &&
        (rhs.index == lhs.index) &&
        (rhs.file_url == lhs.file_url);
}

std::ostream& operator<<(std::ostream& str, CameraServer::CaptureInfo const& capture_info)
{
    str << std::setprecision(15);
    str << "capture_info:" << '\n'
        << "{\n";
    str << "    position: " << capture_info.position << '\n';
    str << "    attitude_quaternion: " << capture_info.attitude_quaternion << '\n';
    str << "    time_utc_us: " << capture_info.time_utc_us << '\n';
    str << "    is_success: " << capture_info.is_success << '\n';
    str << "    index: " << capture_info.index << '\n';
    str << "    file_url: " << capture_info.file_url << '\n';
    str << '}';
    return str;
}



std::ostream& operator<<(std::ostream& str, CameraServer::Result const& result)
{
    switch (result) {
        case CameraServer::Result::Unknown:
            return str << "Unknown";
        case CameraServer::Result::Success:
            return str << "Success";
        case CameraServer::Result::InProgress:
            return str << "In Progress";
        case CameraServer::Result::Busy:
            return str << "Busy";
        case CameraServer::Result::Denied:
            return str << "Denied";
        case CameraServer::Result::Error:
            return str << "Error";
        case CameraServer::Result::Timeout:
            return str << "Timeout";
        case CameraServer::Result::WrongArgument:
            return str << "Wrong Argument";
        case CameraServer::Result::NoSystem:
            return str << "No System";
        default:
            return str << "Unknown";
    }
}



std::ostream& operator<<(std::ostream& str, CameraServer::TakePhotoFeedback const& take_photo_feedback)
{
    switch (take_photo_feedback) {
        case CameraServer::TakePhotoFeedback::Unknown:
            return str << "Unknown";
        case CameraServer::TakePhotoFeedback::Ok:
            return str << "Ok";
        case CameraServer::TakePhotoFeedback::Busy:
            return str << "Busy";
        case CameraServer::TakePhotoFeedback::Failed:
            return str << "Failed";
        default:
            return str << "Unknown";
    }
}


} // namespace mavsdk