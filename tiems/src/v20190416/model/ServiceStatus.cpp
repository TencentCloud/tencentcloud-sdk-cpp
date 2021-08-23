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

#include <tencentcloud/tiems/v20190416/model/ServiceStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

ServiceStatus::ServiceStatus() :
    m_desiredReplicasHasBeenSet(false),
    m_currentReplicasHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_replicaInfosHasBeenSet(false)
{
}

CoreInternalOutcome ServiceStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DesiredReplicas") && !value["DesiredReplicas"].IsNull())
    {
        if (!value["DesiredReplicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.DesiredReplicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredReplicas = value["DesiredReplicas"].GetUint64();
        m_desiredReplicasHasBeenSet = true;
    }

    if (value.HasMember("CurrentReplicas") && !value["CurrentReplicas"].IsNull())
    {
        if (!value["CurrentReplicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.CurrentReplicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentReplicas = value["CurrentReplicas"].GetUint64();
        m_currentReplicasHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.Conditions` is not array type"));

        const rapidjson::Value &tmpValue = value["Conditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Conditions item;
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

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.Replicas` is not array type"));

        const rapidjson::Value &tmpValue = value["Replicas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_replicas.push_back((*itr).GetString());
        }
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ReplicaInfos") && !value["ReplicaInfos"].IsNull())
    {
        if (!value["ReplicaInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.ReplicaInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ReplicaInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReplicaInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_replicaInfos.push_back(item);
        }
        m_replicaInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_desiredReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredReplicas, allocator);
    }

    if (m_currentReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentReplicas, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_replicas.begin(); itr != m_replicas.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_replicaInfos.begin(); itr != m_replicaInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ServiceStatus::GetDesiredReplicas() const
{
    return m_desiredReplicas;
}

void ServiceStatus::SetDesiredReplicas(const uint64_t& _desiredReplicas)
{
    m_desiredReplicas = _desiredReplicas;
    m_desiredReplicasHasBeenSet = true;
}

bool ServiceStatus::DesiredReplicasHasBeenSet() const
{
    return m_desiredReplicasHasBeenSet;
}

uint64_t ServiceStatus::GetCurrentReplicas() const
{
    return m_currentReplicas;
}

void ServiceStatus::SetCurrentReplicas(const uint64_t& _currentReplicas)
{
    m_currentReplicas = _currentReplicas;
    m_currentReplicasHasBeenSet = true;
}

bool ServiceStatus::CurrentReplicasHasBeenSet() const
{
    return m_currentReplicasHasBeenSet;
}

string ServiceStatus::GetStatus() const
{
    return m_status;
}

void ServiceStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServiceStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Conditions> ServiceStatus::GetConditions() const
{
    return m_conditions;
}

void ServiceStatus::SetConditions(const vector<Conditions>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool ServiceStatus::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

vector<string> ServiceStatus::GetReplicas() const
{
    return m_replicas;
}

void ServiceStatus::SetReplicas(const vector<string>& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool ServiceStatus::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

string ServiceStatus::GetMessage() const
{
    return m_message;
}

void ServiceStatus::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ServiceStatus::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<ReplicaInfo> ServiceStatus::GetReplicaInfos() const
{
    return m_replicaInfos;
}

void ServiceStatus::SetReplicaInfos(const vector<ReplicaInfo>& _replicaInfos)
{
    m_replicaInfos = _replicaInfos;
    m_replicaInfosHasBeenSet = true;
}

bool ServiceStatus::ReplicaInfosHasBeenSet() const
{
    return m_replicaInfosHasBeenSet;
}

