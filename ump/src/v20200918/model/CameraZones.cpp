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

#include <tencentcloud/ump/v20200918/model/CameraZones.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

CameraZones::CameraZones() :
    m_cameraIdHasBeenSet(false),
    m_cameraNameHasBeenSet(false),
    m_cameraFeatureHasBeenSet(false),
    m_cameraIpHasBeenSet(false),
    m_cameraStateHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_pixelHasBeenSet(false),
    m_rTSPHasBeenSet(false)
{
}

CoreInternalOutcome CameraZones::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CameraId") && !value["CameraId"].IsNull())
    {
        if (!value["CameraId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraZones.CameraId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraId = value["CameraId"].GetUint64();
        m_cameraIdHasBeenSet = true;
    }

    if (value.HasMember("CameraName") && !value["CameraName"].IsNull())
    {
        if (!value["CameraName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraZones.CameraName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cameraName = string(value["CameraName"].GetString());
        m_cameraNameHasBeenSet = true;
    }

    if (value.HasMember("CameraFeature") && !value["CameraFeature"].IsNull())
    {
        if (!value["CameraFeature"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraZones.CameraFeature` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraFeature = value["CameraFeature"].GetInt64();
        m_cameraFeatureHasBeenSet = true;
    }

    if (value.HasMember("CameraIp") && !value["CameraIp"].IsNull())
    {
        if (!value["CameraIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraZones.CameraIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cameraIp = string(value["CameraIp"].GetString());
        m_cameraIpHasBeenSet = true;
    }

    if (value.HasMember("CameraState") && !value["CameraState"].IsNull())
    {
        if (!value["CameraState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraZones.CameraState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraState = value["CameraState"].GetInt64();
        m_cameraStateHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CameraZones.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BunkZone item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zones.push_back(item);
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("Pixel") && !value["Pixel"].IsNull())
    {
        if (!value["Pixel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraZones.Pixel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pixel = string(value["Pixel"].GetString());
        m_pixelHasBeenSet = true;
    }

    if (value.HasMember("RTSP") && !value["RTSP"].IsNull())
    {
        if (!value["RTSP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraZones.RTSP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rTSP = string(value["RTSP"].GetString());
        m_rTSPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CameraZones::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cameraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_cameraNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cameraName.c_str(), allocator).Move(), allocator);
    }

    if (m_cameraFeatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraFeature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraFeature, allocator);
    }

    if (m_cameraIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cameraIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cameraStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraState, allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pixelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pixel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pixel.c_str(), allocator).Move(), allocator);
    }

    if (m_rTSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTSP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rTSP.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CameraZones::GetCameraId() const
{
    return m_cameraId;
}

void CameraZones::SetCameraId(const uint64_t& _cameraId)
{
    m_cameraId = _cameraId;
    m_cameraIdHasBeenSet = true;
}

bool CameraZones::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

string CameraZones::GetCameraName() const
{
    return m_cameraName;
}

void CameraZones::SetCameraName(const string& _cameraName)
{
    m_cameraName = _cameraName;
    m_cameraNameHasBeenSet = true;
}

bool CameraZones::CameraNameHasBeenSet() const
{
    return m_cameraNameHasBeenSet;
}

int64_t CameraZones::GetCameraFeature() const
{
    return m_cameraFeature;
}

void CameraZones::SetCameraFeature(const int64_t& _cameraFeature)
{
    m_cameraFeature = _cameraFeature;
    m_cameraFeatureHasBeenSet = true;
}

bool CameraZones::CameraFeatureHasBeenSet() const
{
    return m_cameraFeatureHasBeenSet;
}

string CameraZones::GetCameraIp() const
{
    return m_cameraIp;
}

void CameraZones::SetCameraIp(const string& _cameraIp)
{
    m_cameraIp = _cameraIp;
    m_cameraIpHasBeenSet = true;
}

bool CameraZones::CameraIpHasBeenSet() const
{
    return m_cameraIpHasBeenSet;
}

int64_t CameraZones::GetCameraState() const
{
    return m_cameraState;
}

void CameraZones::SetCameraState(const int64_t& _cameraState)
{
    m_cameraState = _cameraState;
    m_cameraStateHasBeenSet = true;
}

bool CameraZones::CameraStateHasBeenSet() const
{
    return m_cameraStateHasBeenSet;
}

vector<BunkZone> CameraZones::GetZones() const
{
    return m_zones;
}

void CameraZones::SetZones(const vector<BunkZone>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CameraZones::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string CameraZones::GetPixel() const
{
    return m_pixel;
}

void CameraZones::SetPixel(const string& _pixel)
{
    m_pixel = _pixel;
    m_pixelHasBeenSet = true;
}

bool CameraZones::PixelHasBeenSet() const
{
    return m_pixelHasBeenSet;
}

string CameraZones::GetRTSP() const
{
    return m_rTSP;
}

void CameraZones::SetRTSP(const string& _rTSP)
{
    m_rTSP = _rTSP;
    m_rTSPHasBeenSet = true;
}

bool CameraZones::RTSPHasBeenSet() const
{
    return m_rTSPHasBeenSet;
}

