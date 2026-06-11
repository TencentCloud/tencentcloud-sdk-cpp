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

#include <tencentcloud/cynosdb/v20190107/model/ClusterPeriodScalePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ClusterPeriodScalePolicy::ClusterPeriodScalePolicy() :
    m_policyIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_scaleStartTimeHasBeenSet(false),
    m_scaleEndTimeHasBeenSet(false),
    m_policyStartTimeHasBeenSet(false),
    m_policyEndTimeHasBeenSet(false),
    m_periodTypeHasBeenSet(false),
    m_periodConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ClusterPeriodScalePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("MinCpu") && !value["MinCpu"].IsNull())
    {
        if (!value["MinCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.MinCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minCpu = value["MinCpu"].GetDouble();
        m_minCpuHasBeenSet = true;
    }

    if (value.HasMember("MaxCpu") && !value["MaxCpu"].IsNull())
    {
        if (!value["MaxCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.MaxCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCpu = value["MaxCpu"].GetDouble();
        m_maxCpuHasBeenSet = true;
    }

    if (value.HasMember("ScaleStartTime") && !value["ScaleStartTime"].IsNull())
    {
        if (!value["ScaleStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.ScaleStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleStartTime = string(value["ScaleStartTime"].GetString());
        m_scaleStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ScaleEndTime") && !value["ScaleEndTime"].IsNull())
    {
        if (!value["ScaleEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.ScaleEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleEndTime = string(value["ScaleEndTime"].GetString());
        m_scaleEndTimeHasBeenSet = true;
    }

    if (value.HasMember("PolicyStartTime") && !value["PolicyStartTime"].IsNull())
    {
        if (!value["PolicyStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.PolicyStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyStartTime = string(value["PolicyStartTime"].GetString());
        m_policyStartTimeHasBeenSet = true;
    }

    if (value.HasMember("PolicyEndTime") && !value["PolicyEndTime"].IsNull())
    {
        if (!value["PolicyEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.PolicyEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyEndTime = string(value["PolicyEndTime"].GetString());
        m_policyEndTimeHasBeenSet = true;
    }

    if (value.HasMember("PeriodType") && !value["PeriodType"].IsNull())
    {
        if (!value["PeriodType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.PeriodType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodType = string(value["PeriodType"].GetString());
        m_periodTypeHasBeenSet = true;
    }

    if (value.HasMember("PeriodConfig") && !value["PeriodConfig"].IsNull())
    {
        if (!value["PeriodConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.PeriodConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["PeriodConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_periodConfig.push_back((*itr).GetInt64());
        }
        m_periodConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPeriodScalePolicy.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterPeriodScalePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_scaleStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_policyStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_policyEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_periodConfig.begin(); itr != m_periodConfig.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ClusterPeriodScalePolicy::GetPolicyId() const
{
    return m_policyId;
}

void ClusterPeriodScalePolicy::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ClusterPeriodScalePolicy::GetInstanceType() const
{
    return m_instanceType;
}

void ClusterPeriodScalePolicy::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

double ClusterPeriodScalePolicy::GetMinCpu() const
{
    return m_minCpu;
}

void ClusterPeriodScalePolicy::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double ClusterPeriodScalePolicy::GetMaxCpu() const
{
    return m_maxCpu;
}

void ClusterPeriodScalePolicy::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

string ClusterPeriodScalePolicy::GetScaleStartTime() const
{
    return m_scaleStartTime;
}

void ClusterPeriodScalePolicy::SetScaleStartTime(const string& _scaleStartTime)
{
    m_scaleStartTime = _scaleStartTime;
    m_scaleStartTimeHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::ScaleStartTimeHasBeenSet() const
{
    return m_scaleStartTimeHasBeenSet;
}

string ClusterPeriodScalePolicy::GetScaleEndTime() const
{
    return m_scaleEndTime;
}

void ClusterPeriodScalePolicy::SetScaleEndTime(const string& _scaleEndTime)
{
    m_scaleEndTime = _scaleEndTime;
    m_scaleEndTimeHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::ScaleEndTimeHasBeenSet() const
{
    return m_scaleEndTimeHasBeenSet;
}

string ClusterPeriodScalePolicy::GetPolicyStartTime() const
{
    return m_policyStartTime;
}

void ClusterPeriodScalePolicy::SetPolicyStartTime(const string& _policyStartTime)
{
    m_policyStartTime = _policyStartTime;
    m_policyStartTimeHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::PolicyStartTimeHasBeenSet() const
{
    return m_policyStartTimeHasBeenSet;
}

string ClusterPeriodScalePolicy::GetPolicyEndTime() const
{
    return m_policyEndTime;
}

void ClusterPeriodScalePolicy::SetPolicyEndTime(const string& _policyEndTime)
{
    m_policyEndTime = _policyEndTime;
    m_policyEndTimeHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::PolicyEndTimeHasBeenSet() const
{
    return m_policyEndTimeHasBeenSet;
}

string ClusterPeriodScalePolicy::GetPeriodType() const
{
    return m_periodType;
}

void ClusterPeriodScalePolicy::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

vector<int64_t> ClusterPeriodScalePolicy::GetPeriodConfig() const
{
    return m_periodConfig;
}

void ClusterPeriodScalePolicy::SetPeriodConfig(const vector<int64_t>& _periodConfig)
{
    m_periodConfig = _periodConfig;
    m_periodConfigHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::PeriodConfigHasBeenSet() const
{
    return m_periodConfigHasBeenSet;
}

string ClusterPeriodScalePolicy::GetCreateTime() const
{
    return m_createTime;
}

void ClusterPeriodScalePolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterPeriodScalePolicy::GetUpdateTime() const
{
    return m_updateTime;
}

void ClusterPeriodScalePolicy::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ClusterPeriodScalePolicy::GetStatus() const
{
    return m_status;
}

void ClusterPeriodScalePolicy::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterPeriodScalePolicy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

