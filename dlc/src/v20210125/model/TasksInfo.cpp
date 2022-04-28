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

#include <tencentcloud/dlc/v20210125/model/TasksInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TasksInfo::TasksInfo() :
    m_taskTypeHasBeenSet(false),
    m_failureToleranceHasBeenSet(false),
    m_sQLHasBeenSet(false),
    m_configHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

CoreInternalOutcome TasksInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TasksInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("FailureTolerance") && !value["FailureTolerance"].IsNull())
    {
        if (!value["FailureTolerance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TasksInfo.FailureTolerance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureTolerance = string(value["FailureTolerance"].GetString());
        m_failureToleranceHasBeenSet = true;
    }

    if (value.HasMember("SQL") && !value["SQL"].IsNull())
    {
        if (!value["SQL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TasksInfo.SQL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQL = string(value["SQL"].GetString());
        m_sQLHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TasksInfo.Config` is not array type"));

        const rapidjson::Value &tmpValue = value["Config"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_config.push_back(item);
        }
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TasksInfo.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TasksInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_failureToleranceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureTolerance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureTolerance.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQL.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_config.begin(); itr != m_config.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TasksInfo::GetTaskType() const
{
    return m_taskType;
}

void TasksInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TasksInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TasksInfo::GetFailureTolerance() const
{
    return m_failureTolerance;
}

void TasksInfo::SetFailureTolerance(const string& _failureTolerance)
{
    m_failureTolerance = _failureTolerance;
    m_failureToleranceHasBeenSet = true;
}

bool TasksInfo::FailureToleranceHasBeenSet() const
{
    return m_failureToleranceHasBeenSet;
}

string TasksInfo::GetSQL() const
{
    return m_sQL;
}

void TasksInfo::SetSQL(const string& _sQL)
{
    m_sQL = _sQL;
    m_sQLHasBeenSet = true;
}

bool TasksInfo::SQLHasBeenSet() const
{
    return m_sQLHasBeenSet;
}

vector<KVPair> TasksInfo::GetConfig() const
{
    return m_config;
}

void TasksInfo::SetConfig(const vector<KVPair>& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool TasksInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<KVPair> TasksInfo::GetParams() const
{
    return m_params;
}

void TasksInfo::SetParams(const vector<KVPair>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool TasksInfo::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

