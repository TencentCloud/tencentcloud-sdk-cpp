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

#include <tencentcloud/live/v20180801/model/OutputStatisticsDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

OutputStatisticsDataInfo::OutputStatisticsDataInfo() :
    m_outputHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome OutputStatisticsDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStatisticsDataInfo.Output` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_output = value["Output"].GetInt64();
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStatisticsDataInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStatisticsDataInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStatisticsDataInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputStatisticsDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_output, allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


int64_t OutputStatisticsDataInfo::GetOutput() const
{
    return m_output;
}

void OutputStatisticsDataInfo::SetOutput(const int64_t& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool OutputStatisticsDataInfo::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string OutputStatisticsDataInfo::GetTime() const
{
    return m_time;
}

void OutputStatisticsDataInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool OutputStatisticsDataInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string OutputStatisticsDataInfo::GetChannelId() const
{
    return m_channelId;
}

void OutputStatisticsDataInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool OutputStatisticsDataInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string OutputStatisticsDataInfo::GetType() const
{
    return m_type;
}

void OutputStatisticsDataInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OutputStatisticsDataInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

