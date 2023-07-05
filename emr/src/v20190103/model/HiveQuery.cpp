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

#include <tencentcloud/emr/v20190103/model/HiveQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

HiveQuery::HiveQuery() :
    m_statementHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_userHasBeenSet(false),
    m_jobIdsHasBeenSet(false),
    m_executionEngineHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome HiveQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Statement") && !value["Statement"].IsNull())
    {
        if (!value["Statement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveQuery.Statement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statement = string(value["Statement"].GetString());
        m_statementHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveQuery.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiveQuery.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiveQuery.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveQuery.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveQuery.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("JobIds") && !value["JobIds"].IsNull())
    {
        if (!value["JobIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HiveQuery.JobIds` is not array type"));

        const rapidjson::Value &tmpValue = value["JobIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_jobIds.push_back((*itr).GetString());
        }
        m_jobIdsHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEngine") && !value["ExecutionEngine"].IsNull())
    {
        if (!value["ExecutionEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveQuery.ExecutionEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEngine = string(value["ExecutionEngine"].GetString());
        m_executionEngineHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveQuery.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HiveQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statement.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_jobIds.begin(); itr != m_jobIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_executionEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


string HiveQuery::GetStatement() const
{
    return m_statement;
}

void HiveQuery::SetStatement(const string& _statement)
{
    m_statement = _statement;
    m_statementHasBeenSet = true;
}

bool HiveQuery::StatementHasBeenSet() const
{
    return m_statementHasBeenSet;
}

string HiveQuery::GetDuration() const
{
    return m_duration;
}

void HiveQuery::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool HiveQuery::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t HiveQuery::GetStartTime() const
{
    return m_startTime;
}

void HiveQuery::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool HiveQuery::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t HiveQuery::GetEndTime() const
{
    return m_endTime;
}

void HiveQuery::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool HiveQuery::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string HiveQuery::GetState() const
{
    return m_state;
}

void HiveQuery::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool HiveQuery::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string HiveQuery::GetUser() const
{
    return m_user;
}

void HiveQuery::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool HiveQuery::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

vector<string> HiveQuery::GetJobIds() const
{
    return m_jobIds;
}

void HiveQuery::SetJobIds(const vector<string>& _jobIds)
{
    m_jobIds = _jobIds;
    m_jobIdsHasBeenSet = true;
}

bool HiveQuery::JobIdsHasBeenSet() const
{
    return m_jobIdsHasBeenSet;
}

string HiveQuery::GetExecutionEngine() const
{
    return m_executionEngine;
}

void HiveQuery::SetExecutionEngine(const string& _executionEngine)
{
    m_executionEngine = _executionEngine;
    m_executionEngineHasBeenSet = true;
}

bool HiveQuery::ExecutionEngineHasBeenSet() const
{
    return m_executionEngineHasBeenSet;
}

string HiveQuery::GetId() const
{
    return m_id;
}

void HiveQuery::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool HiveQuery::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

