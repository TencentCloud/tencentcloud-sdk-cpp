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

#include <tencentcloud/tione/v20211111/model/WorkloadStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

WorkloadStatus::WorkloadStatus() :
    m_replicasHasBeenSet(false),
    m_updatedReplicasHasBeenSet(false),
    m_readyReplicasHasBeenSet(false),
    m_availableReplicasHasBeenSet(false),
    m_unavailableReplicasHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statefulSetConditionHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome WorkloadStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadStatus.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("UpdatedReplicas") && !value["UpdatedReplicas"].IsNull())
    {
        if (!value["UpdatedReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadStatus.UpdatedReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedReplicas = value["UpdatedReplicas"].GetInt64();
        m_updatedReplicasHasBeenSet = true;
    }

    if (value.HasMember("ReadyReplicas") && !value["ReadyReplicas"].IsNull())
    {
        if (!value["ReadyReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadStatus.ReadyReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readyReplicas = value["ReadyReplicas"].GetInt64();
        m_readyReplicasHasBeenSet = true;
    }

    if (value.HasMember("AvailableReplicas") && !value["AvailableReplicas"].IsNull())
    {
        if (!value["AvailableReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadStatus.AvailableReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableReplicas = value["AvailableReplicas"].GetInt64();
        m_availableReplicasHasBeenSet = true;
    }

    if (value.HasMember("UnavailableReplicas") && !value["UnavailableReplicas"].IsNull())
    {
        if (!value["UnavailableReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadStatus.UnavailableReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unavailableReplicas = value["UnavailableReplicas"].GetInt64();
        m_unavailableReplicasHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatefulSetCondition") && !value["StatefulSetCondition"].IsNull())
    {
        if (!value["StatefulSetCondition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkloadStatus.StatefulSetCondition` is not array type"));

        const rapidjson::Value &tmpValue = value["StatefulSetCondition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatefulSetCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statefulSetCondition.push_back(item);
        }
        m_statefulSetConditionHasBeenSet = true;
    }

    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkloadStatus.Conditions` is not array type"));

        const rapidjson::Value &tmpValue = value["Conditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatefulSetCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditions.push_back(item);
        }
        m_conditionsHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadStatus.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkloadStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_updatedReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedReplicas, allocator);
    }

    if (m_readyReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadyReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readyReplicas, allocator);
    }

    if (m_availableReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableReplicas, allocator);
    }

    if (m_unavailableReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnavailableReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unavailableReplicas, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statefulSetConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatefulSetCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statefulSetCondition.begin(); itr != m_statefulSetCondition.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


int64_t WorkloadStatus::GetReplicas() const
{
    return m_replicas;
}

void WorkloadStatus::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool WorkloadStatus::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

int64_t WorkloadStatus::GetUpdatedReplicas() const
{
    return m_updatedReplicas;
}

void WorkloadStatus::SetUpdatedReplicas(const int64_t& _updatedReplicas)
{
    m_updatedReplicas = _updatedReplicas;
    m_updatedReplicasHasBeenSet = true;
}

bool WorkloadStatus::UpdatedReplicasHasBeenSet() const
{
    return m_updatedReplicasHasBeenSet;
}

int64_t WorkloadStatus::GetReadyReplicas() const
{
    return m_readyReplicas;
}

void WorkloadStatus::SetReadyReplicas(const int64_t& _readyReplicas)
{
    m_readyReplicas = _readyReplicas;
    m_readyReplicasHasBeenSet = true;
}

bool WorkloadStatus::ReadyReplicasHasBeenSet() const
{
    return m_readyReplicasHasBeenSet;
}

int64_t WorkloadStatus::GetAvailableReplicas() const
{
    return m_availableReplicas;
}

void WorkloadStatus::SetAvailableReplicas(const int64_t& _availableReplicas)
{
    m_availableReplicas = _availableReplicas;
    m_availableReplicasHasBeenSet = true;
}

bool WorkloadStatus::AvailableReplicasHasBeenSet() const
{
    return m_availableReplicasHasBeenSet;
}

int64_t WorkloadStatus::GetUnavailableReplicas() const
{
    return m_unavailableReplicas;
}

void WorkloadStatus::SetUnavailableReplicas(const int64_t& _unavailableReplicas)
{
    m_unavailableReplicas = _unavailableReplicas;
    m_unavailableReplicasHasBeenSet = true;
}

bool WorkloadStatus::UnavailableReplicasHasBeenSet() const
{
    return m_unavailableReplicasHasBeenSet;
}

string WorkloadStatus::GetStatus() const
{
    return m_status;
}

void WorkloadStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkloadStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<StatefulSetCondition> WorkloadStatus::GetStatefulSetCondition() const
{
    return m_statefulSetCondition;
}

void WorkloadStatus::SetStatefulSetCondition(const vector<StatefulSetCondition>& _statefulSetCondition)
{
    m_statefulSetCondition = _statefulSetCondition;
    m_statefulSetConditionHasBeenSet = true;
}

bool WorkloadStatus::StatefulSetConditionHasBeenSet() const
{
    return m_statefulSetConditionHasBeenSet;
}

vector<StatefulSetCondition> WorkloadStatus::GetConditions() const
{
    return m_conditions;
}

void WorkloadStatus::SetConditions(const vector<StatefulSetCondition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool WorkloadStatus::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

string WorkloadStatus::GetReason() const
{
    return m_reason;
}

void WorkloadStatus::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool WorkloadStatus::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

