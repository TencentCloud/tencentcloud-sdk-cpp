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

#include <tencentcloud/cynosdb/v20190107/model/ClusterServerlessScalePlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ClusterServerlessScalePlan::ClusterServerlessScalePlan() :
    m_planIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_objectInstanceHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_sourceMinCpuHasBeenSet(false),
    m_sourceMaxCpuHasBeenSet(false),
    m_targetMinCpuHasBeenSet(false),
    m_targetMaxCpuHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_scaleTaskIdHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_expectedStartTimeHasBeenSet(false),
    m_expectedEndTimeHasBeenSet(false),
    m_resetTaskIdHasBeenSet(false),
    m_resetTypeHasBeenSet(false),
    m_resetTimeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterServerlessScalePlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.PlanId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_planId = value["PlanId"].GetInt64();
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ObjectInstance") && !value["ObjectInstance"].IsNull())
    {
        if (!value["ObjectInstance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.ObjectInstance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectInstance = string(value["ObjectInstance"].GetString());
        m_objectInstanceHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceMinCpu") && !value["SourceMinCpu"].IsNull())
    {
        if (!value["SourceMinCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.SourceMinCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sourceMinCpu = value["SourceMinCpu"].GetDouble();
        m_sourceMinCpuHasBeenSet = true;
    }

    if (value.HasMember("SourceMaxCpu") && !value["SourceMaxCpu"].IsNull())
    {
        if (!value["SourceMaxCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.SourceMaxCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sourceMaxCpu = value["SourceMaxCpu"].GetDouble();
        m_sourceMaxCpuHasBeenSet = true;
    }

    if (value.HasMember("TargetMinCpu") && !value["TargetMinCpu"].IsNull())
    {
        if (!value["TargetMinCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.TargetMinCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_targetMinCpu = value["TargetMinCpu"].GetDouble();
        m_targetMinCpuHasBeenSet = true;
    }

    if (value.HasMember("TargetMaxCpu") && !value["TargetMaxCpu"].IsNull())
    {
        if (!value["TargetMaxCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.TargetMaxCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_targetMaxCpu = value["TargetMaxCpu"].GetDouble();
        m_targetMaxCpuHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ScaleTaskId") && !value["ScaleTaskId"].IsNull())
    {
        if (!value["ScaleTaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.ScaleTaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleTaskId = value["ScaleTaskId"].GetInt64();
        m_scaleTaskIdHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("ExpectedStartTime") && !value["ExpectedStartTime"].IsNull())
    {
        if (!value["ExpectedStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.ExpectedStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectedStartTime = string(value["ExpectedStartTime"].GetString());
        m_expectedStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpectedEndTime") && !value["ExpectedEndTime"].IsNull())
    {
        if (!value["ExpectedEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.ExpectedEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectedEndTime = string(value["ExpectedEndTime"].GetString());
        m_expectedEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ResetTaskId") && !value["ResetTaskId"].IsNull())
    {
        if (!value["ResetTaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.ResetTaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resetTaskId = value["ResetTaskId"].GetInt64();
        m_resetTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ResetType") && !value["ResetType"].IsNull())
    {
        if (!value["ResetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.ResetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resetType = string(value["ResetType"].GetString());
        m_resetTypeHasBeenSet = true;
    }

    if (value.HasMember("ResetTime") && !value["ResetTime"].IsNull())
    {
        if (!value["ResetTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterServerlessScalePlan.ResetTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resetTime = string(value["ResetTime"].GetString());
        m_resetTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterServerlessScalePlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planId, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_objectInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceMinCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceMinCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceMinCpu, allocator);
    }

    if (m_sourceMaxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceMaxCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceMaxCpu, allocator);
    }

    if (m_targetMinCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetMinCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetMinCpu, allocator);
    }

    if (m_targetMaxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetMaxCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetMaxCpu, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleTaskId, allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_expectedStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectedStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expectedEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectedEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resetTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resetTaskId, allocator);
    }

    if (m_resetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resetType.c_str(), allocator).Move(), allocator);
    }

    if (m_resetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resetTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ClusterServerlessScalePlan::GetPlanId() const
{
    return m_planId;
}

void ClusterServerlessScalePlan::SetPlanId(const int64_t& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool ClusterServerlessScalePlan::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string ClusterServerlessScalePlan::GetClusterId() const
{
    return m_clusterId;
}

void ClusterServerlessScalePlan::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterServerlessScalePlan::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterServerlessScalePlan::GetObjectInstance() const
{
    return m_objectInstance;
}

void ClusterServerlessScalePlan::SetObjectInstance(const string& _objectInstance)
{
    m_objectInstance = _objectInstance;
    m_objectInstanceHasBeenSet = true;
}

bool ClusterServerlessScalePlan::ObjectInstanceHasBeenSet() const
{
    return m_objectInstanceHasBeenSet;
}

string ClusterServerlessScalePlan::GetPolicyId() const
{
    return m_policyId;
}

void ClusterServerlessScalePlan::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ClusterServerlessScalePlan::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ClusterServerlessScalePlan::GetPolicyType() const
{
    return m_policyType;
}

void ClusterServerlessScalePlan::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ClusterServerlessScalePlan::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

double ClusterServerlessScalePlan::GetSourceMinCpu() const
{
    return m_sourceMinCpu;
}

void ClusterServerlessScalePlan::SetSourceMinCpu(const double& _sourceMinCpu)
{
    m_sourceMinCpu = _sourceMinCpu;
    m_sourceMinCpuHasBeenSet = true;
}

bool ClusterServerlessScalePlan::SourceMinCpuHasBeenSet() const
{
    return m_sourceMinCpuHasBeenSet;
}

double ClusterServerlessScalePlan::GetSourceMaxCpu() const
{
    return m_sourceMaxCpu;
}

void ClusterServerlessScalePlan::SetSourceMaxCpu(const double& _sourceMaxCpu)
{
    m_sourceMaxCpu = _sourceMaxCpu;
    m_sourceMaxCpuHasBeenSet = true;
}

bool ClusterServerlessScalePlan::SourceMaxCpuHasBeenSet() const
{
    return m_sourceMaxCpuHasBeenSet;
}

double ClusterServerlessScalePlan::GetTargetMinCpu() const
{
    return m_targetMinCpu;
}

void ClusterServerlessScalePlan::SetTargetMinCpu(const double& _targetMinCpu)
{
    m_targetMinCpu = _targetMinCpu;
    m_targetMinCpuHasBeenSet = true;
}

bool ClusterServerlessScalePlan::TargetMinCpuHasBeenSet() const
{
    return m_targetMinCpuHasBeenSet;
}

double ClusterServerlessScalePlan::GetTargetMaxCpu() const
{
    return m_targetMaxCpu;
}

void ClusterServerlessScalePlan::SetTargetMaxCpu(const double& _targetMaxCpu)
{
    m_targetMaxCpu = _targetMaxCpu;
    m_targetMaxCpuHasBeenSet = true;
}

bool ClusterServerlessScalePlan::TargetMaxCpuHasBeenSet() const
{
    return m_targetMaxCpuHasBeenSet;
}

string ClusterServerlessScalePlan::GetStatus() const
{
    return m_status;
}

void ClusterServerlessScalePlan::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterServerlessScalePlan::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ClusterServerlessScalePlan::GetScaleTaskId() const
{
    return m_scaleTaskId;
}

void ClusterServerlessScalePlan::SetScaleTaskId(const int64_t& _scaleTaskId)
{
    m_scaleTaskId = _scaleTaskId;
    m_scaleTaskIdHasBeenSet = true;
}

bool ClusterServerlessScalePlan::ScaleTaskIdHasBeenSet() const
{
    return m_scaleTaskIdHasBeenSet;
}

string ClusterServerlessScalePlan::GetFailReason() const
{
    return m_failReason;
}

void ClusterServerlessScalePlan::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool ClusterServerlessScalePlan::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string ClusterServerlessScalePlan::GetExpectedStartTime() const
{
    return m_expectedStartTime;
}

void ClusterServerlessScalePlan::SetExpectedStartTime(const string& _expectedStartTime)
{
    m_expectedStartTime = _expectedStartTime;
    m_expectedStartTimeHasBeenSet = true;
}

bool ClusterServerlessScalePlan::ExpectedStartTimeHasBeenSet() const
{
    return m_expectedStartTimeHasBeenSet;
}

string ClusterServerlessScalePlan::GetExpectedEndTime() const
{
    return m_expectedEndTime;
}

void ClusterServerlessScalePlan::SetExpectedEndTime(const string& _expectedEndTime)
{
    m_expectedEndTime = _expectedEndTime;
    m_expectedEndTimeHasBeenSet = true;
}

bool ClusterServerlessScalePlan::ExpectedEndTimeHasBeenSet() const
{
    return m_expectedEndTimeHasBeenSet;
}

int64_t ClusterServerlessScalePlan::GetResetTaskId() const
{
    return m_resetTaskId;
}

void ClusterServerlessScalePlan::SetResetTaskId(const int64_t& _resetTaskId)
{
    m_resetTaskId = _resetTaskId;
    m_resetTaskIdHasBeenSet = true;
}

bool ClusterServerlessScalePlan::ResetTaskIdHasBeenSet() const
{
    return m_resetTaskIdHasBeenSet;
}

string ClusterServerlessScalePlan::GetResetType() const
{
    return m_resetType;
}

void ClusterServerlessScalePlan::SetResetType(const string& _resetType)
{
    m_resetType = _resetType;
    m_resetTypeHasBeenSet = true;
}

bool ClusterServerlessScalePlan::ResetTypeHasBeenSet() const
{
    return m_resetTypeHasBeenSet;
}

string ClusterServerlessScalePlan::GetResetTime() const
{
    return m_resetTime;
}

void ClusterServerlessScalePlan::SetResetTime(const string& _resetTime)
{
    m_resetTime = _resetTime;
    m_resetTimeHasBeenSet = true;
}

bool ClusterServerlessScalePlan::ResetTimeHasBeenSet() const
{
    return m_resetTimeHasBeenSet;
}

