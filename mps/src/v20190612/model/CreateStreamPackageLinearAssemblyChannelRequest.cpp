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

#include <tencentcloud/mps/v20190612/model/CreateStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateStreamPackageLinearAssemblyChannelRequest::CreateStreamPackageLinearAssemblyChannelRequest() :
    m_nameHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_playbackModeHasBeenSet(false),
    m_timeShiftEnableHasBeenSet(false),
    m_timeShiftConfHasBeenSet(false),
    m_slateConfHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
}

string CreateStreamPackageLinearAssemblyChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tier.c_str(), allocator).Move(), allocator);
    }

    if (m_playbackModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaybackMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playbackMode.c_str(), allocator).Move(), allocator);
    }

    if (m_timeShiftEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeShiftEnable, allocator);
    }

    if (m_timeShiftConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeShiftConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_slateConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlateConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slateConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamPackageLinearAssemblyChannelRequest::GetName() const
{
    return m_name;
}

void CreateStreamPackageLinearAssemblyChannelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateStreamPackageLinearAssemblyChannelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateStreamPackageLinearAssemblyChannelRequest::GetTier() const
{
    return m_tier;
}

void CreateStreamPackageLinearAssemblyChannelRequest::SetTier(const string& _tier)
{
    m_tier = _tier;
    m_tierHasBeenSet = true;
}

bool CreateStreamPackageLinearAssemblyChannelRequest::TierHasBeenSet() const
{
    return m_tierHasBeenSet;
}

string CreateStreamPackageLinearAssemblyChannelRequest::GetPlaybackMode() const
{
    return m_playbackMode;
}

void CreateStreamPackageLinearAssemblyChannelRequest::SetPlaybackMode(const string& _playbackMode)
{
    m_playbackMode = _playbackMode;
    m_playbackModeHasBeenSet = true;
}

bool CreateStreamPackageLinearAssemblyChannelRequest::PlaybackModeHasBeenSet() const
{
    return m_playbackModeHasBeenSet;
}

bool CreateStreamPackageLinearAssemblyChannelRequest::GetTimeShiftEnable() const
{
    return m_timeShiftEnable;
}

void CreateStreamPackageLinearAssemblyChannelRequest::SetTimeShiftEnable(const bool& _timeShiftEnable)
{
    m_timeShiftEnable = _timeShiftEnable;
    m_timeShiftEnableHasBeenSet = true;
}

bool CreateStreamPackageLinearAssemblyChannelRequest::TimeShiftEnableHasBeenSet() const
{
    return m_timeShiftEnableHasBeenSet;
}

TimeShiftInfo CreateStreamPackageLinearAssemblyChannelRequest::GetTimeShiftConf() const
{
    return m_timeShiftConf;
}

void CreateStreamPackageLinearAssemblyChannelRequest::SetTimeShiftConf(const TimeShiftInfo& _timeShiftConf)
{
    m_timeShiftConf = _timeShiftConf;
    m_timeShiftConfHasBeenSet = true;
}

bool CreateStreamPackageLinearAssemblyChannelRequest::TimeShiftConfHasBeenSet() const
{
    return m_timeShiftConfHasBeenSet;
}

SlateInfo CreateStreamPackageLinearAssemblyChannelRequest::GetSlateConf() const
{
    return m_slateConf;
}

void CreateStreamPackageLinearAssemblyChannelRequest::SetSlateConf(const SlateInfo& _slateConf)
{
    m_slateConf = _slateConf;
    m_slateConfHasBeenSet = true;
}

bool CreateStreamPackageLinearAssemblyChannelRequest::SlateConfHasBeenSet() const
{
    return m_slateConfHasBeenSet;
}

vector<OutputReq> CreateStreamPackageLinearAssemblyChannelRequest::GetOutputs() const
{
    return m_outputs;
}

void CreateStreamPackageLinearAssemblyChannelRequest::SetOutputs(const vector<OutputReq>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool CreateStreamPackageLinearAssemblyChannelRequest::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}


