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

#include <tencentcloud/live/v20180801/model/RemuxStatisticsDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

RemuxStatisticsDataInfo::RemuxStatisticsDataInfo() :
    m_remuxHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_channelIdHasBeenSet(false)
{
}

CoreInternalOutcome RemuxStatisticsDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Remux") && !value["Remux"].IsNull())
    {
        if (!value["Remux"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemuxStatisticsDataInfo.Remux` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remux = value["Remux"].GetInt64();
        m_remuxHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemuxStatisticsDataInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemuxStatisticsDataInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemuxStatisticsDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_remuxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remux, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

}


int64_t RemuxStatisticsDataInfo::GetRemux() const
{
    return m_remux;
}

void RemuxStatisticsDataInfo::SetRemux(const int64_t& _remux)
{
    m_remux = _remux;
    m_remuxHasBeenSet = true;
}

bool RemuxStatisticsDataInfo::RemuxHasBeenSet() const
{
    return m_remuxHasBeenSet;
}

string RemuxStatisticsDataInfo::GetTime() const
{
    return m_time;
}

void RemuxStatisticsDataInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool RemuxStatisticsDataInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string RemuxStatisticsDataInfo::GetChannelId() const
{
    return m_channelId;
}

void RemuxStatisticsDataInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool RemuxStatisticsDataInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

