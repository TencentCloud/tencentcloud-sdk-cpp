/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ump/v20200918/model/CameraConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

CameraConfig::CameraConfig() :
    m_groupCodeHasBeenSet(false),
    m_mallIdHasBeenSet(false),
    m_floorIdHasBeenSet(false),
    m_cameraIdHasBeenSet(false),
    m_cameraIpHasBeenSet(false),
    m_cameraMacHasBeenSet(false),
    m_cameraTypeHasBeenSet(false),
    m_cameraFeatureHasBeenSet(false),
    m_cameraStateHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneTypeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome CameraConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupCode") && !value["GroupCode"].IsNull())
    {
        if (!value["GroupCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.GroupCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupCode = string(value["GroupCode"].GetString());
        m_groupCodeHasBeenSet = true;
    }

    if (value.HasMember("MallId") && !value["MallId"].IsNull())
    {
        if (!value["MallId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.MallId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mallId = value["MallId"].GetUint64();
        m_mallIdHasBeenSet = true;
    }

    if (value.HasMember("FloorId") && !value["FloorId"].IsNull())
    {
        if (!value["FloorId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.FloorId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_floorId = value["FloorId"].GetInt64();
        m_floorIdHasBeenSet = true;
    }

    if (value.HasMember("CameraId") && !value["CameraId"].IsNull())
    {
        if (!value["CameraId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.CameraId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraId = value["CameraId"].GetUint64();
        m_cameraIdHasBeenSet = true;
    }

    if (value.HasMember("CameraIp") && !value["CameraIp"].IsNull())
    {
        if (!value["CameraIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.CameraIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cameraIp = string(value["CameraIp"].GetString());
        m_cameraIpHasBeenSet = true;
    }

    if (value.HasMember("CameraMac") && !value["CameraMac"].IsNull())
    {
        if (!value["CameraMac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.CameraMac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cameraMac = string(value["CameraMac"].GetString());
        m_cameraMacHasBeenSet = true;
    }

    if (value.HasMember("CameraType") && !value["CameraType"].IsNull())
    {
        if (!value["CameraType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.CameraType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraType = value["CameraType"].GetInt64();
        m_cameraTypeHasBeenSet = true;
    }

    if (value.HasMember("CameraFeature") && !value["CameraFeature"].IsNull())
    {
        if (!value["CameraFeature"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.CameraFeature` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraFeature = value["CameraFeature"].GetInt64();
        m_cameraFeatureHasBeenSet = true;
    }

    if (value.HasMember("CameraState") && !value["CameraState"].IsNull())
    {
        if (!value["CameraState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.CameraState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraState = value["CameraState"].GetInt64();
        m_cameraStateHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneType") && !value["ZoneType"].IsNull())
    {
        if (!value["ZoneType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.ZoneType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneType = value["ZoneType"].GetInt64();
        m_zoneTypeHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraConfig.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CameraConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mallId, allocator);
    }

    if (m_floorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FloorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_floorId, allocator);
    }

    if (m_cameraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_cameraIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cameraIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cameraMacHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraMac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cameraMac.c_str(), allocator).Move(), allocator);
    }

    if (m_cameraTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraType, allocator);
    }

    if (m_cameraFeatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraFeature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraFeature, allocator);
    }

    if (m_cameraStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraState, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneType, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

}


string CameraConfig::GetGroupCode() const
{
    return m_groupCode;
}

void CameraConfig::SetGroupCode(const string& _groupCode)
{
    m_groupCode = _groupCode;
    m_groupCodeHasBeenSet = true;
}

bool CameraConfig::GroupCodeHasBeenSet() const
{
    return m_groupCodeHasBeenSet;
}

uint64_t CameraConfig::GetMallId() const
{
    return m_mallId;
}

void CameraConfig::SetMallId(const uint64_t& _mallId)
{
    m_mallId = _mallId;
    m_mallIdHasBeenSet = true;
}

bool CameraConfig::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}

int64_t CameraConfig::GetFloorId() const
{
    return m_floorId;
}

void CameraConfig::SetFloorId(const int64_t& _floorId)
{
    m_floorId = _floorId;
    m_floorIdHasBeenSet = true;
}

bool CameraConfig::FloorIdHasBeenSet() const
{
    return m_floorIdHasBeenSet;
}

uint64_t CameraConfig::GetCameraId() const
{
    return m_cameraId;
}

void CameraConfig::SetCameraId(const uint64_t& _cameraId)
{
    m_cameraId = _cameraId;
    m_cameraIdHasBeenSet = true;
}

bool CameraConfig::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

string CameraConfig::GetCameraIp() const
{
    return m_cameraIp;
}

void CameraConfig::SetCameraIp(const string& _cameraIp)
{
    m_cameraIp = _cameraIp;
    m_cameraIpHasBeenSet = true;
}

bool CameraConfig::CameraIpHasBeenSet() const
{
    return m_cameraIpHasBeenSet;
}

string CameraConfig::GetCameraMac() const
{
    return m_cameraMac;
}

void CameraConfig::SetCameraMac(const string& _cameraMac)
{
    m_cameraMac = _cameraMac;
    m_cameraMacHasBeenSet = true;
}

bool CameraConfig::CameraMacHasBeenSet() const
{
    return m_cameraMacHasBeenSet;
}

int64_t CameraConfig::GetCameraType() const
{
    return m_cameraType;
}

void CameraConfig::SetCameraType(const int64_t& _cameraType)
{
    m_cameraType = _cameraType;
    m_cameraTypeHasBeenSet = true;
}

bool CameraConfig::CameraTypeHasBeenSet() const
{
    return m_cameraTypeHasBeenSet;
}

int64_t CameraConfig::GetCameraFeature() const
{
    return m_cameraFeature;
}

void CameraConfig::SetCameraFeature(const int64_t& _cameraFeature)
{
    m_cameraFeature = _cameraFeature;
    m_cameraFeatureHasBeenSet = true;
}

bool CameraConfig::CameraFeatureHasBeenSet() const
{
    return m_cameraFeatureHasBeenSet;
}

int64_t CameraConfig::GetCameraState() const
{
    return m_cameraState;
}

void CameraConfig::SetCameraState(const int64_t& _cameraState)
{
    m_cameraState = _cameraState;
    m_cameraStateHasBeenSet = true;
}

bool CameraConfig::CameraStateHasBeenSet() const
{
    return m_cameraStateHasBeenSet;
}

uint64_t CameraConfig::GetZoneId() const
{
    return m_zoneId;
}

void CameraConfig::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CameraConfig::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t CameraConfig::GetZoneType() const
{
    return m_zoneType;
}

void CameraConfig::SetZoneType(const int64_t& _zoneType)
{
    m_zoneType = _zoneType;
    m_zoneTypeHasBeenSet = true;
}

bool CameraConfig::ZoneTypeHasBeenSet() const
{
    return m_zoneTypeHasBeenSet;
}

Config CameraConfig::GetConfig() const
{
    return m_config;
}

void CameraConfig::SetConfig(const Config& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CameraConfig::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

int64_t CameraConfig::GetWidth() const
{
    return m_width;
}

void CameraConfig::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CameraConfig::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t CameraConfig::GetHeight() const
{
    return m_height;
}

void CameraConfig::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CameraConfig::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

