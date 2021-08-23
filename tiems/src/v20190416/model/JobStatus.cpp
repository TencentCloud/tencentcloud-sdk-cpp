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

#include <tencentcloud/tiems/v20190416/model/JobStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

JobStatus::JobStatus() :
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_desiredWorkersHasBeenSet(false),
    m_currentWorkersHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_replicaInfosHasBeenSet(false)
{
}

CoreInternalOutcome JobStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatus.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("DesiredWorkers") && !value["DesiredWorkers"].IsNull())
    {
        if (!value["DesiredWorkers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatus.DesiredWorkers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredWorkers = value["DesiredWorkers"].GetUint64();
        m_desiredWorkersHasBeenSet = true;
    }

    if (value.HasMember("CurrentWorkers") && !value["CurrentWorkers"].IsNull())
    {
        if (!value["CurrentWorkers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobStatus.CurrentWorkers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentWorkers = value["CurrentWorkers"].GetUint64();
        m_currentWorkersHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobStatus.Replicas` is not array type"));

        const rapidjson::Value &tmpValue = value["Replicas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_replicas.push_back((*itr).GetString());
        }
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("ReplicaInfos") && !value["ReplicaInfos"].IsNull())
    {
        if (!value["ReplicaInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobStatus.ReplicaInfos` is not array type"));

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

void JobStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredWorkersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredWorkers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredWorkers, allocator);
    }

    if (m_currentWorkersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentWorkers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentWorkers, allocator);
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


string JobStatus::GetStatus() const
{
    return m_status;
}

void JobStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool JobStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string JobStatus::GetMessage() const
{
    return m_message;
}

void JobStatus::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool JobStatus::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t JobStatus::GetDesiredWorkers() const
{
    return m_desiredWorkers;
}

void JobStatus::SetDesiredWorkers(const uint64_t& _desiredWorkers)
{
    m_desiredWorkers = _desiredWorkers;
    m_desiredWorkersHasBeenSet = true;
}

bool JobStatus::DesiredWorkersHasBeenSet() const
{
    return m_desiredWorkersHasBeenSet;
}

uint64_t JobStatus::GetCurrentWorkers() const
{
    return m_currentWorkers;
}

void JobStatus::SetCurrentWorkers(const uint64_t& _currentWorkers)
{
    m_currentWorkers = _currentWorkers;
    m_currentWorkersHasBeenSet = true;
}

bool JobStatus::CurrentWorkersHasBeenSet() const
{
    return m_currentWorkersHasBeenSet;
}

vector<string> JobStatus::GetReplicas() const
{
    return m_replicas;
}

void JobStatus::SetReplicas(const vector<string>& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool JobStatus::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

vector<ReplicaInfo> JobStatus::GetReplicaInfos() const
{
    return m_replicaInfos;
}

void JobStatus::SetReplicaInfos(const vector<ReplicaInfo>& _replicaInfos)
{
    m_replicaInfos = _replicaInfos;
    m_replicaInfosHasBeenSet = true;
}

bool JobStatus::ReplicaInfosHasBeenSet() const
{
    return m_replicaInfosHasBeenSet;
}

