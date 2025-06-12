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

#include <tencentcloud/lke/v20231130/model/WorkflowRunDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

WorkflowRunDetail::WorkflowRunDetail() :
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
    m_endTimeHasBeenSet(false),
    m_dialogJsonHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_mainModelNameHasBeenSet(false),
    m_customVariablesHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowRunDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RunEnv") && !value["RunEnv"].IsNull())
    {
        if (!value["RunEnv"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.RunEnv` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runEnv = value["RunEnv"].GetUint64();
        m_runEnvHasBeenSet = true;
    }

    if (value.HasMember("AppBizId") && !value["AppBizId"].IsNull())
    {
        if (!value["AppBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.AppBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appBizId = string(value["AppBizId"].GetString());
        m_appBizIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("FailMessage") && !value["FailMessage"].IsNull())
    {
        if (!value["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(value["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DialogJson") && !value["DialogJson"].IsNull())
    {
        if (!value["DialogJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.DialogJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dialogJson = string(value["DialogJson"].GetString());
        m_dialogJsonHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("MainModelName") && !value["MainModelName"].IsNull())
    {
        if (!value["MainModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.MainModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainModelName = string(value["MainModelName"].GetString());
        m_mainModelNameHasBeenSet = true;
    }

    if (value.HasMember("CustomVariables") && !value["CustomVariables"].IsNull())
    {
        if (!value["CustomVariables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowRunDetail.CustomVariables` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomVariables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomVariable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customVariables.push_back(item);
        }
        m_customVariablesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowRunDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dialogJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DialogJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dialogJson.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_mainModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_customVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customVariables.begin(); itr != m_customVariables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t WorkflowRunDetail::GetRunEnv() const
{
    return m_runEnv;
}

void WorkflowRunDetail::SetRunEnv(const uint64_t& _runEnv)
{
    m_runEnv = _runEnv;
    m_runEnvHasBeenSet = true;
}

bool WorkflowRunDetail::RunEnvHasBeenSet() const
{
    return m_runEnvHasBeenSet;
}

string WorkflowRunDetail::GetAppBizId() const
{
    return m_appBizId;
}

void WorkflowRunDetail::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool WorkflowRunDetail::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string WorkflowRunDetail::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void WorkflowRunDetail::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool WorkflowRunDetail::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string WorkflowRunDetail::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowRunDetail::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowRunDetail::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowRunDetail::GetName() const
{
    return m_name;
}

void WorkflowRunDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WorkflowRunDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t WorkflowRunDetail::GetState() const
{
    return m_state;
}

void WorkflowRunDetail::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool WorkflowRunDetail::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string WorkflowRunDetail::GetFailMessage() const
{
    return m_failMessage;
}

void WorkflowRunDetail::SetFailMessage(const string& _failMessage)
{
    m_failMessage = _failMessage;
    m_failMessageHasBeenSet = true;
}

bool WorkflowRunDetail::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

uint64_t WorkflowRunDetail::GetTotalTokens() const
{
    return m_totalTokens;
}

void WorkflowRunDetail::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool WorkflowRunDetail::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

string WorkflowRunDetail::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowRunDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowRunDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkflowRunDetail::GetStartTime() const
{
    return m_startTime;
}

void WorkflowRunDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WorkflowRunDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string WorkflowRunDetail::GetEndTime() const
{
    return m_endTime;
}

void WorkflowRunDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WorkflowRunDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WorkflowRunDetail::GetDialogJson() const
{
    return m_dialogJson;
}

void WorkflowRunDetail::SetDialogJson(const string& _dialogJson)
{
    m_dialogJson = _dialogJson;
    m_dialogJsonHasBeenSet = true;
}

bool WorkflowRunDetail::DialogJsonHasBeenSet() const
{
    return m_dialogJsonHasBeenSet;
}

string WorkflowRunDetail::GetQuery() const
{
    return m_query;
}

void WorkflowRunDetail::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool WorkflowRunDetail::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string WorkflowRunDetail::GetMainModelName() const
{
    return m_mainModelName;
}

void WorkflowRunDetail::SetMainModelName(const string& _mainModelName)
{
    m_mainModelName = _mainModelName;
    m_mainModelNameHasBeenSet = true;
}

bool WorkflowRunDetail::MainModelNameHasBeenSet() const
{
    return m_mainModelNameHasBeenSet;
}

vector<CustomVariable> WorkflowRunDetail::GetCustomVariables() const
{
    return m_customVariables;
}

void WorkflowRunDetail::SetCustomVariables(const vector<CustomVariable>& _customVariables)
{
    m_customVariables = _customVariables;
    m_customVariablesHasBeenSet = true;
}

bool WorkflowRunDetail::CustomVariablesHasBeenSet() const
{
    return m_customVariablesHasBeenSet;
}

