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

#include <tencentcloud/cfw/v20190904/model/ClusterFwPreAccessCheckResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ClusterFwPreAccessCheckResult::ClusterFwPreAccessCheckResult() :
    m_statusHasBeenSet(false),
    m_currentStageHasBeenSet(false),
    m_stagesHasBeenSet(false),
    m_policyRouteReportHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterFwPreAccessCheckResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterFwPreAccessCheckResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CurrentStage") && !value["CurrentStage"].IsNull())
    {
        if (!value["CurrentStage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterFwPreAccessCheckResult.CurrentStage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStage = string(value["CurrentStage"].GetString());
        m_currentStageHasBeenSet = true;
    }

    if (value.HasMember("Stages") && !value["Stages"].IsNull())
    {
        if (!value["Stages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterFwPreAccessCheckResult.Stages` is not array type"));

        const rapidjson::Value &tmpValue = value["Stages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterFwPreAccessCheckStage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stages.push_back(item);
        }
        m_stagesHasBeenSet = true;
    }

    if (value.HasMember("PolicyRouteReport") && !value["PolicyRouteReport"].IsNull())
    {
        if (!value["PolicyRouteReport"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterFwPreAccessCheckResult.PolicyRouteReport` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_policyRouteReport.Deserialize(value["PolicyRouteReport"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_policyRouteReportHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterFwPreAccessCheckResult.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterFwPreAccessCheckResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_currentStageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStage.c_str(), allocator).Move(), allocator);
    }

    if (m_stagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stages.begin(); itr != m_stages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policyRouteReportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyRouteReport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policyRouteReport.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ClusterFwPreAccessCheckResult::GetStatus() const
{
    return m_status;
}

void ClusterFwPreAccessCheckResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterFwPreAccessCheckResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClusterFwPreAccessCheckResult::GetCurrentStage() const
{
    return m_currentStage;
}

void ClusterFwPreAccessCheckResult::SetCurrentStage(const string& _currentStage)
{
    m_currentStage = _currentStage;
    m_currentStageHasBeenSet = true;
}

bool ClusterFwPreAccessCheckResult::CurrentStageHasBeenSet() const
{
    return m_currentStageHasBeenSet;
}

vector<ClusterFwPreAccessCheckStage> ClusterFwPreAccessCheckResult::GetStages() const
{
    return m_stages;
}

void ClusterFwPreAccessCheckResult::SetStages(const vector<ClusterFwPreAccessCheckStage>& _stages)
{
    m_stages = _stages;
    m_stagesHasBeenSet = true;
}

bool ClusterFwPreAccessCheckResult::StagesHasBeenSet() const
{
    return m_stagesHasBeenSet;
}

PolicyRoutePreCheckReport ClusterFwPreAccessCheckResult::GetPolicyRouteReport() const
{
    return m_policyRouteReport;
}

void ClusterFwPreAccessCheckResult::SetPolicyRouteReport(const PolicyRoutePreCheckReport& _policyRouteReport)
{
    m_policyRouteReport = _policyRouteReport;
    m_policyRouteReportHasBeenSet = true;
}

bool ClusterFwPreAccessCheckResult::PolicyRouteReportHasBeenSet() const
{
    return m_policyRouteReportHasBeenSet;
}

string ClusterFwPreAccessCheckResult::GetUpdateTime() const
{
    return m_updateTime;
}

void ClusterFwPreAccessCheckResult::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ClusterFwPreAccessCheckResult::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

