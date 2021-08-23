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

#include <tencentcloud/ump/v20200918/model/Config.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

Config::Config() :
    m_cameraProducerHasBeenSet(false),
    m_rTSPHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_decodeFpsHasBeenSet(false),
    m_passengerFlowHasBeenSet(false),
    m_faceExposeHasBeenSet(false),
    m_mallAreaHasBeenSet(false),
    m_shopAreaHasBeenSet(false),
    m_trackAreasHasBeenSet(false),
    m_zonesHasBeenSet(false)
{
}

CoreInternalOutcome Config::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CameraProducer") && !value["CameraProducer"].IsNull())
    {
        if (!value["CameraProducer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.CameraProducer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cameraProducer = string(value["CameraProducer"].GetString());
        m_cameraProducerHasBeenSet = true;
    }

    if (value.HasMember("RTSP") && !value["RTSP"].IsNull())
    {
        if (!value["RTSP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.RTSP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rTSP = string(value["RTSP"].GetString());
        m_rTSPHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("DecodeFps") && !value["DecodeFps"].IsNull())
    {
        if (!value["DecodeFps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.DecodeFps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_decodeFps = value["DecodeFps"].GetInt64();
        m_decodeFpsHasBeenSet = true;
    }

    if (value.HasMember("PassengerFlow") && !value["PassengerFlow"].IsNull())
    {
        if (!value["PassengerFlow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.PassengerFlow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passengerFlow = value["PassengerFlow"].GetInt64();
        m_passengerFlowHasBeenSet = true;
    }

    if (value.HasMember("FaceExpose") && !value["FaceExpose"].IsNull())
    {
        if (!value["FaceExpose"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.FaceExpose` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_faceExpose = value["FaceExpose"].GetInt64();
        m_faceExposeHasBeenSet = true;
    }

    if (value.HasMember("MallArea") && !value["MallArea"].IsNull())
    {
        if (!value["MallArea"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Config.MallArea` is not array type"));

        const rapidjson::Value &tmpValue = value["MallArea"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mallArea.push_back(item);
        }
        m_mallAreaHasBeenSet = true;
    }

    if (value.HasMember("ShopArea") && !value["ShopArea"].IsNull())
    {
        if (!value["ShopArea"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Config.ShopArea` is not array type"));

        const rapidjson::Value &tmpValue = value["ShopArea"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shopArea.push_back(item);
        }
        m_shopAreaHasBeenSet = true;
    }

    if (value.HasMember("TrackAreas") && !value["TrackAreas"].IsNull())
    {
        if (!value["TrackAreas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Config.TrackAreas` is not array type"));

        const rapidjson::Value &tmpValue = value["TrackAreas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Polygon item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trackAreas.push_back(item);
        }
        m_trackAreasHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Config.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneArea item;
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


    return CoreInternalOutcome(true);
}

void Config::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cameraProducerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraProducer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cameraProducer.c_str(), allocator).Move(), allocator);
    }

    if (m_rTSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTSP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rTSP.c_str(), allocator).Move(), allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_decodeFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecodeFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_decodeFps, allocator);
    }

    if (m_passengerFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassengerFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passengerFlow, allocator);
    }

    if (m_faceExposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceExpose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceExpose, allocator);
    }

    if (m_mallAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mallArea.begin(); itr != m_mallArea.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_shopAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shopArea.begin(); itr != m_shopArea.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_trackAreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackAreas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trackAreas.begin(); itr != m_trackAreas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string Config::GetCameraProducer() const
{
    return m_cameraProducer;
}

void Config::SetCameraProducer(const string& _cameraProducer)
{
    m_cameraProducer = _cameraProducer;
    m_cameraProducerHasBeenSet = true;
}

bool Config::CameraProducerHasBeenSet() const
{
    return m_cameraProducerHasBeenSet;
}

string Config::GetRTSP() const
{
    return m_rTSP;
}

void Config::SetRTSP(const string& _rTSP)
{
    m_rTSP = _rTSP;
    m_rTSPHasBeenSet = true;
}

bool Config::RTSPHasBeenSet() const
{
    return m_rTSPHasBeenSet;
}

int64_t Config::GetFps() const
{
    return m_fps;
}

void Config::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool Config::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t Config::GetDecodeFps() const
{
    return m_decodeFps;
}

void Config::SetDecodeFps(const int64_t& _decodeFps)
{
    m_decodeFps = _decodeFps;
    m_decodeFpsHasBeenSet = true;
}

bool Config::DecodeFpsHasBeenSet() const
{
    return m_decodeFpsHasBeenSet;
}

int64_t Config::GetPassengerFlow() const
{
    return m_passengerFlow;
}

void Config::SetPassengerFlow(const int64_t& _passengerFlow)
{
    m_passengerFlow = _passengerFlow;
    m_passengerFlowHasBeenSet = true;
}

bool Config::PassengerFlowHasBeenSet() const
{
    return m_passengerFlowHasBeenSet;
}

int64_t Config::GetFaceExpose() const
{
    return m_faceExpose;
}

void Config::SetFaceExpose(const int64_t& _faceExpose)
{
    m_faceExpose = _faceExpose;
    m_faceExposeHasBeenSet = true;
}

bool Config::FaceExposeHasBeenSet() const
{
    return m_faceExposeHasBeenSet;
}

vector<Point> Config::GetMallArea() const
{
    return m_mallArea;
}

void Config::SetMallArea(const vector<Point>& _mallArea)
{
    m_mallArea = _mallArea;
    m_mallAreaHasBeenSet = true;
}

bool Config::MallAreaHasBeenSet() const
{
    return m_mallAreaHasBeenSet;
}

vector<Point> Config::GetShopArea() const
{
    return m_shopArea;
}

void Config::SetShopArea(const vector<Point>& _shopArea)
{
    m_shopArea = _shopArea;
    m_shopAreaHasBeenSet = true;
}

bool Config::ShopAreaHasBeenSet() const
{
    return m_shopAreaHasBeenSet;
}

vector<Polygon> Config::GetTrackAreas() const
{
    return m_trackAreas;
}

void Config::SetTrackAreas(const vector<Polygon>& _trackAreas)
{
    m_trackAreas = _trackAreas;
    m_trackAreasHasBeenSet = true;
}

bool Config::TrackAreasHasBeenSet() const
{
    return m_trackAreasHasBeenSet;
}

vector<ZoneArea> Config::GetZones() const
{
    return m_zones;
}

void Config::SetZones(const vector<ZoneArea>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool Config::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

