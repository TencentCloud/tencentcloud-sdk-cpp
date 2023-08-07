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

#include <tencentcloud/iss/v20230517/model/ControlDeviceStreamData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ControlDeviceStreamData::ControlDeviceStreamData() :
    m_flvHasBeenSet(false),
    m_hlsHasBeenSet(false),
    m_rtmpHasBeenSet(false)
{
}

CoreInternalOutcome ControlDeviceStreamData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Flv") && !value["Flv"].IsNull())
    {
        if (!value["Flv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ControlDeviceStreamData.Flv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flv = string(value["Flv"].GetString());
        m_flvHasBeenSet = true;
    }

    if (value.HasMember("Hls") && !value["Hls"].IsNull())
    {
        if (!value["Hls"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ControlDeviceStreamData.Hls` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hls = string(value["Hls"].GetString());
        m_hlsHasBeenSet = true;
    }

    if (value.HasMember("Rtmp") && !value["Rtmp"].IsNull())
    {
        if (!value["Rtmp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ControlDeviceStreamData.Rtmp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rtmp = string(value["Rtmp"].GetString());
        m_rtmpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ControlDeviceStreamData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flv.c_str(), allocator).Move(), allocator);
    }

    if (m_hlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hls.c_str(), allocator).Move(), allocator);
    }

    if (m_rtmpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rtmp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rtmp.c_str(), allocator).Move(), allocator);
    }

}


string ControlDeviceStreamData::GetFlv() const
{
    return m_flv;
}

void ControlDeviceStreamData::SetFlv(const string& _flv)
{
    m_flv = _flv;
    m_flvHasBeenSet = true;
}

bool ControlDeviceStreamData::FlvHasBeenSet() const
{
    return m_flvHasBeenSet;
}

string ControlDeviceStreamData::GetHls() const
{
    return m_hls;
}

void ControlDeviceStreamData::SetHls(const string& _hls)
{
    m_hls = _hls;
    m_hlsHasBeenSet = true;
}

bool ControlDeviceStreamData::HlsHasBeenSet() const
{
    return m_hlsHasBeenSet;
}

string ControlDeviceStreamData::GetRtmp() const
{
    return m_rtmp;
}

void ControlDeviceStreamData::SetRtmp(const string& _rtmp)
{
    m_rtmp = _rtmp;
    m_rtmpHasBeenSet = true;
}

bool ControlDeviceStreamData::RtmpHasBeenSet() const
{
    return m_rtmpHasBeenSet;
}

