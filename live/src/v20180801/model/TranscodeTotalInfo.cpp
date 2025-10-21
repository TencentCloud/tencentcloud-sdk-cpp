/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/live/v20180801/model/TranscodeTotalInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TranscodeTotalInfo::TranscodeTotalInfo() :
    m_timeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_moduleCodecHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

CoreInternalOutcome TranscodeTotalInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTotalInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTotalInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ModuleCodec") && !value["ModuleCodec"].IsNull())
    {
        if (!value["ModuleCodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTotalInfo.ModuleCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleCodec = string(value["ModuleCodec"].GetString());
        m_moduleCodecHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTotalInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscodeTotalInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_moduleCodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

}


string TranscodeTotalInfo::GetTime() const
{
    return m_time;
}

void TranscodeTotalInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TranscodeTotalInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t TranscodeTotalInfo::GetDuration() const
{
    return m_duration;
}

void TranscodeTotalInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TranscodeTotalInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string TranscodeTotalInfo::GetModuleCodec() const
{
    return m_moduleCodec;
}

void TranscodeTotalInfo::SetModuleCodec(const string& _moduleCodec)
{
    m_moduleCodec = _moduleCodec;
    m_moduleCodecHasBeenSet = true;
}

bool TranscodeTotalInfo::ModuleCodecHasBeenSet() const
{
    return m_moduleCodecHasBeenSet;
}

string TranscodeTotalInfo::GetResolution() const
{
    return m_resolution;
}

void TranscodeTotalInfo::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool TranscodeTotalInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

