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

#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyStreamPackageLinearAssemblyChannelRequest::ModifyStreamPackageLinearAssemblyChannelRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_playbackModeHasBeenSet(false),
    m_timeShiftEnableHasBeenSet(false),
    m_timeShiftConfHasBeenSet(false),
    m_slateConfHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
}

string ModifyStreamPackageLinearAssemblyChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

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


string ModifyStreamPackageLinearAssemblyChannelRequest::GetId() const
{
    return m_id;
}

void ModifyStreamPackageLinearAssemblyChannelRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyChannelRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyStreamPackageLinearAssemblyChannelRequest::GetName() const
{
    return m_name;
}

void ModifyStreamPackageLinearAssemblyChannelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyChannelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyStreamPackageLinearAssemblyChannelRequest::GetTier() const
{
    return m_tier;
}

void ModifyStreamPackageLinearAssemblyChannelRequest::SetTier(const string& _tier)
{
    m_tier = _tier;
    m_tierHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyChannelRequest::TierHasBeenSet() const
{
    return m_tierHasBeenSet;
}

string ModifyStreamPackageLinearAssemblyChannelRequest::GetPlaybackMode() const
{
    return m_playbackMode;
}

void ModifyStreamPackageLinearAssemblyChannelRequest::SetPlaybackMode(const string& _playbackMode)
{
    m_playbackMode = _playbackMode;
    m_playbackModeHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyChannelRequest::PlaybackModeHasBeenSet() const
{
    return m_playbackModeHasBeenSet;
}

bool ModifyStreamPackageLinearAssemblyChannelRequest::GetTimeShiftEnable() const
{
    return m_timeShiftEnable;
}

void ModifyStreamPackageLinearAssemblyChannelRequest::SetTimeShiftEnable(const bool& _timeShiftEnable)
{
    m_timeShiftEnable = _timeShiftEnable;
    m_timeShiftEnableHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyChannelRequest::TimeShiftEnableHasBeenSet() const
{
    return m_timeShiftEnableHasBeenSet;
}

TimeShiftInfo ModifyStreamPackageLinearAssemblyChannelRequest::GetTimeShiftConf() const
{
    return m_timeShiftConf;
}

void ModifyStreamPackageLinearAssemblyChannelRequest::SetTimeShiftConf(const TimeShiftInfo& _timeShiftConf)
{
    m_timeShiftConf = _timeShiftConf;
    m_timeShiftConfHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyChannelRequest::TimeShiftConfHasBeenSet() const
{
    return m_timeShiftConfHasBeenSet;
}

SlateInfo ModifyStreamPackageLinearAssemblyChannelRequest::GetSlateConf() const
{
    return m_slateConf;
}

void ModifyStreamPackageLinearAssemblyChannelRequest::SetSlateConf(const SlateInfo& _slateConf)
{
    m_slateConf = _slateConf;
    m_slateConfHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyChannelRequest::SlateConfHasBeenSet() const
{
    return m_slateConfHasBeenSet;
}

vector<OutputInfo> ModifyStreamPackageLinearAssemblyChannelRequest::GetOutputs() const
{
    return m_outputs;
}

void ModifyStreamPackageLinearAssemblyChannelRequest::SetOutputs(const vector<OutputInfo>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyChannelRequest::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}


