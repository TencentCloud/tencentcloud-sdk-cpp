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

#include <tencentcloud/lighthouse/v20200324/model/FirewallTemplateApplyRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

FirewallTemplateApplyRecord::FirewallTemplateApplyRecord() :
    m_taskIdHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_templateRuleSetHasBeenSet(false),
    m_applyStateHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failedCountHasBeenSet(false),
    m_runningCountHasBeenSet(false),
    m_applyDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome FirewallTemplateApplyRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecord.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecord.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateRuleSet") && !value["TemplateRuleSet"].IsNull())
    {
        if (!value["TemplateRuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecord.TemplateRuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateRuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FirewallTemplateRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateRuleSet.push_back(item);
        }
        m_templateRuleSetHasBeenSet = true;
    }

    if (value.HasMember("ApplyState") && !value["ApplyState"].IsNull())
    {
        if (!value["ApplyState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecord.ApplyState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyState = string(value["ApplyState"].GetString());
        m_applyStateHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecord.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecord.FailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = value["FailedCount"].GetInt64();
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("RunningCount") && !value["RunningCount"].IsNull())
    {
        if (!value["RunningCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecord.RunningCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningCount = value["RunningCount"].GetInt64();
        m_runningCountHasBeenSet = true;
    }

    if (value.HasMember("ApplyDetailSet") && !value["ApplyDetailSet"].IsNull())
    {
        if (!value["ApplyDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecord.ApplyDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplyDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FirewallTemplateApplyRecordDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_applyDetailSet.push_back(item);
        }
        m_applyDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FirewallTemplateApplyRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_templateRuleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateRuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateRuleSet.begin(); itr != m_templateRuleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_applyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyState.c_str(), allocator).Move(), allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCount, allocator);
    }

    if (m_runningCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCount, allocator);
    }

    if (m_applyDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applyDetailSet.begin(); itr != m_applyDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FirewallTemplateApplyRecord::GetTaskId() const
{
    return m_taskId;
}

void FirewallTemplateApplyRecord::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool FirewallTemplateApplyRecord::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string FirewallTemplateApplyRecord::GetApplyTime() const
{
    return m_applyTime;
}

void FirewallTemplateApplyRecord::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool FirewallTemplateApplyRecord::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

vector<FirewallTemplateRule> FirewallTemplateApplyRecord::GetTemplateRuleSet() const
{
    return m_templateRuleSet;
}

void FirewallTemplateApplyRecord::SetTemplateRuleSet(const vector<FirewallTemplateRule>& _templateRuleSet)
{
    m_templateRuleSet = _templateRuleSet;
    m_templateRuleSetHasBeenSet = true;
}

bool FirewallTemplateApplyRecord::TemplateRuleSetHasBeenSet() const
{
    return m_templateRuleSetHasBeenSet;
}

string FirewallTemplateApplyRecord::GetApplyState() const
{
    return m_applyState;
}

void FirewallTemplateApplyRecord::SetApplyState(const string& _applyState)
{
    m_applyState = _applyState;
    m_applyStateHasBeenSet = true;
}

bool FirewallTemplateApplyRecord::ApplyStateHasBeenSet() const
{
    return m_applyStateHasBeenSet;
}

int64_t FirewallTemplateApplyRecord::GetSuccessCount() const
{
    return m_successCount;
}

void FirewallTemplateApplyRecord::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool FirewallTemplateApplyRecord::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t FirewallTemplateApplyRecord::GetFailedCount() const
{
    return m_failedCount;
}

void FirewallTemplateApplyRecord::SetFailedCount(const int64_t& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool FirewallTemplateApplyRecord::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

int64_t FirewallTemplateApplyRecord::GetRunningCount() const
{
    return m_runningCount;
}

void FirewallTemplateApplyRecord::SetRunningCount(const int64_t& _runningCount)
{
    m_runningCount = _runningCount;
    m_runningCountHasBeenSet = true;
}

bool FirewallTemplateApplyRecord::RunningCountHasBeenSet() const
{
    return m_runningCountHasBeenSet;
}

vector<FirewallTemplateApplyRecordDetail> FirewallTemplateApplyRecord::GetApplyDetailSet() const
{
    return m_applyDetailSet;
}

void FirewallTemplateApplyRecord::SetApplyDetailSet(const vector<FirewallTemplateApplyRecordDetail>& _applyDetailSet)
{
    m_applyDetailSet = _applyDetailSet;
    m_applyDetailSetHasBeenSet = true;
}

bool FirewallTemplateApplyRecord::ApplyDetailSetHasBeenSet() const
{
    return m_applyDetailSetHasBeenSet;
}

