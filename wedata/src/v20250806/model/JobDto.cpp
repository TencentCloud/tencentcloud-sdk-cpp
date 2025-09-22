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

#include <tencentcloud/wedata/v20250806/model/JobDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

JobDto::JobDto() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_scriptIdHasBeenSet(false),
    m_jobExecutionListHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_timeCostHasBeenSet(false),
    m_scriptContentTruncateHasBeenSet(false)
{
}

CoreInternalOutcome JobDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("ScriptId") && !value["ScriptId"].IsNull())
    {
        if (!value["ScriptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.ScriptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptId = string(value["ScriptId"].GetString());
        m_scriptIdHasBeenSet = true;
    }

    if (value.HasMember("JobExecutionList") && !value["JobExecutionList"].IsNull())
    {
        if (!value["JobExecutionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobDto.JobExecutionList` is not array type"));

        const rapidjson::Value &tmpValue = value["JobExecutionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            JobExecutionDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_jobExecutionList.push_back(item);
        }
        m_jobExecutionListHasBeenSet = true;
    }

    if (value.HasMember("ScriptContent") && !value["ScriptContent"].IsNull())
    {
        if (!value["ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContent = string(value["ScriptContent"].GetString());
        m_scriptContentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("TimeCost") && !value["TimeCost"].IsNull())
    {
        if (!value["TimeCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.TimeCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeCost = value["TimeCost"].GetInt64();
        m_timeCostHasBeenSet = true;
    }

    if (value.HasMember("ScriptContentTruncate") && !value["ScriptContentTruncate"].IsNull())
    {
        if (!value["ScriptContentTruncate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `JobDto.ScriptContentTruncate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContentTruncate = value["ScriptContentTruncate"].GetBool();
        m_scriptContentTruncateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobExecutionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobExecutionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_jobExecutionList.begin(); itr != m_jobExecutionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_timeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeCost, allocator);
    }

    if (m_scriptContentTruncateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContentTruncate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scriptContentTruncate, allocator);
    }

}


string JobDto::GetJobId() const
{
    return m_jobId;
}

void JobDto::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobDto::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobDto::GetJobName() const
{
    return m_jobName;
}

void JobDto::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool JobDto::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string JobDto::GetJobType() const
{
    return m_jobType;
}

void JobDto::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool JobDto::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string JobDto::GetScriptId() const
{
    return m_scriptId;
}

void JobDto::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool JobDto::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

vector<JobExecutionDto> JobDto::GetJobExecutionList() const
{
    return m_jobExecutionList;
}

void JobDto::SetJobExecutionList(const vector<JobExecutionDto>& _jobExecutionList)
{
    m_jobExecutionList = _jobExecutionList;
    m_jobExecutionListHasBeenSet = true;
}

bool JobDto::JobExecutionListHasBeenSet() const
{
    return m_jobExecutionListHasBeenSet;
}

string JobDto::GetScriptContent() const
{
    return m_scriptContent;
}

void JobDto::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool JobDto::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string JobDto::GetStatus() const
{
    return m_status;
}

void JobDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool JobDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string JobDto::GetCreateTime() const
{
    return m_createTime;
}

void JobDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JobDto::GetUpdateTime() const
{
    return m_updateTime;
}

void JobDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool JobDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string JobDto::GetEndTime() const
{
    return m_endTime;
}

void JobDto::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool JobDto::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string JobDto::GetOwnerUin() const
{
    return m_ownerUin;
}

void JobDto::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool JobDto::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string JobDto::GetUserUin() const
{
    return m_userUin;
}

void JobDto::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool JobDto::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

int64_t JobDto::GetTimeCost() const
{
    return m_timeCost;
}

void JobDto::SetTimeCost(const int64_t& _timeCost)
{
    m_timeCost = _timeCost;
    m_timeCostHasBeenSet = true;
}

bool JobDto::TimeCostHasBeenSet() const
{
    return m_timeCostHasBeenSet;
}

bool JobDto::GetScriptContentTruncate() const
{
    return m_scriptContentTruncate;
}

void JobDto::SetScriptContentTruncate(const bool& _scriptContentTruncate)
{
    m_scriptContentTruncate = _scriptContentTruncate;
    m_scriptContentTruncateHasBeenSet = true;
}

bool JobDto::ScriptContentTruncateHasBeenSet() const
{
    return m_scriptContentTruncateHasBeenSet;
}

