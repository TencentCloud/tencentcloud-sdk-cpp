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

#include <tencentcloud/mps/v20190612/model/LinearAssemblyChannelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LinearAssemblyChannelInfo::LinearAssemblyChannelInfo() :
    m_nameHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_playbackModeHasBeenSet(false),
    m_timeShiftConfHasBeenSet(false),
    m_slateConfHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_attachedProgramsHasBeenSet(false),
    m_programSchedulesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_timeShiftEnableHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome LinearAssemblyChannelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Tier") && !value["Tier"].IsNull())
    {
        if (!value["Tier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.Tier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tier = string(value["Tier"].GetString());
        m_tierHasBeenSet = true;
    }

    if (value.HasMember("PlaybackMode") && !value["PlaybackMode"].IsNull())
    {
        if (!value["PlaybackMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.PlaybackMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playbackMode = string(value["PlaybackMode"].GetString());
        m_playbackModeHasBeenSet = true;
    }

    if (value.HasMember("TimeShiftConf") && !value["TimeShiftConf"].IsNull())
    {
        if (!value["TimeShiftConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.TimeShiftConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeShiftConf.Deserialize(value["TimeShiftConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeShiftConfHasBeenSet = true;
    }

    if (value.HasMember("SlateConf") && !value["SlateConf"].IsNull())
    {
        if (!value["SlateConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.SlateConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slateConf.Deserialize(value["SlateConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slateConfHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputs.push_back(item);
        }
        m_outputsHasBeenSet = true;
    }

    if (value.HasMember("AttachedPrograms") && !value["AttachedPrograms"].IsNull())
    {
        if (!value["AttachedPrograms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.AttachedPrograms` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachedPrograms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attachedPrograms.push_back((*itr).GetString());
        }
        m_attachedProgramsHasBeenSet = true;
    }

    if (value.HasMember("ProgramSchedules") && !value["ProgramSchedules"].IsNull())
    {
        if (!value["ProgramSchedules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.ProgramSchedules` is not array type"));

        const rapidjson::Value &tmpValue = value["ProgramSchedules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProgramScheduleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_programSchedules.push_back(item);
        }
        m_programSchedulesHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("TimeShiftEnable") && !value["TimeShiftEnable"].IsNull())
    {
        if (!value["TimeShiftEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.TimeShiftEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_timeShiftEnable = value["TimeShiftEnable"].GetBool();
        m_timeShiftEnableHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyChannelInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LinearAssemblyChannelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tier.c_str(), allocator).Move(), allocator);
    }

    if (m_playbackModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaybackMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playbackMode.c_str(), allocator).Move(), allocator);
    }

    if (m_timeShiftConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeShiftConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slateConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlateConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slateConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_attachedProgramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedPrograms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attachedPrograms.begin(); itr != m_attachedPrograms.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_programSchedulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramSchedules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_programSchedules.begin(); itr != m_programSchedules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_timeShiftEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeShiftEnable, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string LinearAssemblyChannelInfo::GetName() const
{
    return m_name;
}

void LinearAssemblyChannelInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LinearAssemblyChannelInfo::GetTier() const
{
    return m_tier;
}

void LinearAssemblyChannelInfo::SetTier(const string& _tier)
{
    m_tier = _tier;
    m_tierHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::TierHasBeenSet() const
{
    return m_tierHasBeenSet;
}

string LinearAssemblyChannelInfo::GetPlaybackMode() const
{
    return m_playbackMode;
}

void LinearAssemblyChannelInfo::SetPlaybackMode(const string& _playbackMode)
{
    m_playbackMode = _playbackMode;
    m_playbackModeHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::PlaybackModeHasBeenSet() const
{
    return m_playbackModeHasBeenSet;
}

TimeShiftInfo LinearAssemblyChannelInfo::GetTimeShiftConf() const
{
    return m_timeShiftConf;
}

void LinearAssemblyChannelInfo::SetTimeShiftConf(const TimeShiftInfo& _timeShiftConf)
{
    m_timeShiftConf = _timeShiftConf;
    m_timeShiftConfHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::TimeShiftConfHasBeenSet() const
{
    return m_timeShiftConfHasBeenSet;
}

SlateInfo LinearAssemblyChannelInfo::GetSlateConf() const
{
    return m_slateConf;
}

void LinearAssemblyChannelInfo::SetSlateConf(const SlateInfo& _slateConf)
{
    m_slateConf = _slateConf;
    m_slateConfHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::SlateConfHasBeenSet() const
{
    return m_slateConfHasBeenSet;
}

vector<OutputInfo> LinearAssemblyChannelInfo::GetOutputs() const
{
    return m_outputs;
}

void LinearAssemblyChannelInfo::SetOutputs(const vector<OutputInfo>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

vector<string> LinearAssemblyChannelInfo::GetAttachedPrograms() const
{
    return m_attachedPrograms;
}

void LinearAssemblyChannelInfo::SetAttachedPrograms(const vector<string>& _attachedPrograms)
{
    m_attachedPrograms = _attachedPrograms;
    m_attachedProgramsHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::AttachedProgramsHasBeenSet() const
{
    return m_attachedProgramsHasBeenSet;
}

vector<ProgramScheduleInfo> LinearAssemblyChannelInfo::GetProgramSchedules() const
{
    return m_programSchedules;
}

void LinearAssemblyChannelInfo::SetProgramSchedules(const vector<ProgramScheduleInfo>& _programSchedules)
{
    m_programSchedules = _programSchedules;
    m_programSchedulesHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::ProgramSchedulesHasBeenSet() const
{
    return m_programSchedulesHasBeenSet;
}

string LinearAssemblyChannelInfo::GetId() const
{
    return m_id;
}

void LinearAssemblyChannelInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LinearAssemblyChannelInfo::GetRegion() const
{
    return m_region;
}

void LinearAssemblyChannelInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string LinearAssemblyChannelInfo::GetState() const
{
    return m_state;
}

void LinearAssemblyChannelInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

bool LinearAssemblyChannelInfo::GetTimeShiftEnable() const
{
    return m_timeShiftEnable;
}

void LinearAssemblyChannelInfo::SetTimeShiftEnable(const bool& _timeShiftEnable)
{
    m_timeShiftEnable = _timeShiftEnable;
    m_timeShiftEnableHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::TimeShiftEnableHasBeenSet() const
{
    return m_timeShiftEnableHasBeenSet;
}

uint64_t LinearAssemblyChannelInfo::GetCreateTime() const
{
    return m_createTime;
}

void LinearAssemblyChannelInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LinearAssemblyChannelInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

