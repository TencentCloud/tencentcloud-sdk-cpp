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

#include <tencentcloud/lke/v20231130/model/WorkflowRunBase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

WorkflowRunBase::WorkflowRunBase() :
    m_runEnvHasBeenSet(false),
    m_appBizIdHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_failMessageHasBeenSet(false),
    m_totalTokensHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRunBase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RunEnv") && !value["RunEnv"].IsNull())
    {
        if (!value["RunEnv"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.RunEnv` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runEnv = value["RunEnv"].GetUint64();
        m_runEnvHasBeenSet = true;
    }

    if (value.HasMember("AppBizId") && !value["AppBizId"].IsNull())
    {
        if (!value["AppBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.AppBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appBizId = string(value["AppBizId"].GetString());
        m_appBizIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("FailMessage") && !value["FailMessage"].IsNull())
    {
        if (!value["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(value["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunBase.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRunBase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runEnv, allocator);
    }

    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WorkflowRunBase::GetRunEnv() const
{
    return m_runEnv;
}

void WorkflowRunBase::SetRunEnv(const uint64_t& _runEnv)
{
    m_runEnv = _runEnv;
    m_runEnvHasBeenSet = true;
}

bool WorkflowRunBase::RunEnvHasBeenSet() const
{
    return m_runEnvHasBeenSet;
}

string WorkflowRunBase::GetAppBizId() const
{
    return m_appBizId;
}

void WorkflowRunBase::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool WorkflowRunBase::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string WorkflowRunBase::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void WorkflowRunBase::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool WorkflowRunBase::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string WorkflowRunBase::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowRunBase::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowRunBase::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowRunBase::GetName() const
{
    return m_name;
}

void WorkflowRunBase::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WorkflowRunBase::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t WorkflowRunBase::GetState() const
{
    return m_state;
}

void WorkflowRunBase::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool WorkflowRunBase::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string WorkflowRunBase::GetFailMessage() const
{
    return m_failMessage;
}

void WorkflowRunBase::SetFailMessage(const string& _failMessage)
{
    m_failMessage = _failMessage;
    m_failMessageHasBeenSet = true;
}

bool WorkflowRunBase::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

uint64_t WorkflowRunBase::GetTotalTokens() const
{
    return m_totalTokens;
}

void WorkflowRunBase::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool WorkflowRunBase::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

string WorkflowRunBase::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowRunBase::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowRunBase::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkflowRunBase::GetStartTime() const
{
    return m_startTime;
}

void WorkflowRunBase::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WorkflowRunBase::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string WorkflowRunBase::GetEndTime() const
{
    return m_endTime;
}

void WorkflowRunBase::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WorkflowRunBase::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

