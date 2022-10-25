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

#include <tencentcloud/tem/v20210701/model/WorkloadInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

WorkloadInfo::WorkloadInfo() :
    m_clusterIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_readyReplicasHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_updatedReplicasHasBeenSet(false),
    m_updatedReadyReplicasHasBeenSet(false),
    m_updateRevisionHasBeenSet(false),
    m_currentRevisionHasBeenSet(false)
{
}

CoreInternalOutcome WorkloadInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadInfo.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("ReadyReplicas") && !value["ReadyReplicas"].IsNull())
    {
        if (!value["ReadyReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadInfo.ReadyReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readyReplicas = value["ReadyReplicas"].GetInt64();
        m_readyReplicasHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadInfo.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("UpdatedReplicas") && !value["UpdatedReplicas"].IsNull())
    {
        if (!value["UpdatedReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadInfo.UpdatedReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedReplicas = value["UpdatedReplicas"].GetInt64();
        m_updatedReplicasHasBeenSet = true;
    }

    if (value.HasMember("UpdatedReadyReplicas") && !value["UpdatedReadyReplicas"].IsNull())
    {
        if (!value["UpdatedReadyReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadInfo.UpdatedReadyReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedReadyReplicas = value["UpdatedReadyReplicas"].GetInt64();
        m_updatedReadyReplicasHasBeenSet = true;
    }

    if (value.HasMember("UpdateRevision") && !value["UpdateRevision"].IsNull())
    {
        if (!value["UpdateRevision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadInfo.UpdateRevision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateRevision = string(value["UpdateRevision"].GetString());
        m_updateRevisionHasBeenSet = true;
    }

    if (value.HasMember("CurrentRevision") && !value["CurrentRevision"].IsNull())
    {
        if (!value["CurrentRevision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadInfo.CurrentRevision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentRevision = string(value["CurrentRevision"].GetString());
        m_currentRevisionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkloadInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_readyReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadyReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readyReplicas, allocator);
    }

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

    if (m_updatedReadyReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedReadyReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedReadyReplicas, allocator);
    }

    if (m_updateRevisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateRevision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateRevision.c_str(), allocator).Move(), allocator);
    }

    if (m_currentRevisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentRevision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentRevision.c_str(), allocator).Move(), allocator);
    }

}


string WorkloadInfo::GetClusterId() const
{
    return m_clusterId;
}

void WorkloadInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool WorkloadInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string WorkloadInfo::GetApplicationName() const
{
    return m_applicationName;
}

void WorkloadInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool WorkloadInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string WorkloadInfo::GetVersionName() const
{
    return m_versionName;
}

void WorkloadInfo::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool WorkloadInfo::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

int64_t WorkloadInfo::GetReadyReplicas() const
{
    return m_readyReplicas;
}

void WorkloadInfo::SetReadyReplicas(const int64_t& _readyReplicas)
{
    m_readyReplicas = _readyReplicas;
    m_readyReplicasHasBeenSet = true;
}

bool WorkloadInfo::ReadyReplicasHasBeenSet() const
{
    return m_readyReplicasHasBeenSet;
}

int64_t WorkloadInfo::GetReplicas() const
{
    return m_replicas;
}

void WorkloadInfo::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool WorkloadInfo::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

int64_t WorkloadInfo::GetUpdatedReplicas() const
{
    return m_updatedReplicas;
}

void WorkloadInfo::SetUpdatedReplicas(const int64_t& _updatedReplicas)
{
    m_updatedReplicas = _updatedReplicas;
    m_updatedReplicasHasBeenSet = true;
}

bool WorkloadInfo::UpdatedReplicasHasBeenSet() const
{
    return m_updatedReplicasHasBeenSet;
}

int64_t WorkloadInfo::GetUpdatedReadyReplicas() const
{
    return m_updatedReadyReplicas;
}

void WorkloadInfo::SetUpdatedReadyReplicas(const int64_t& _updatedReadyReplicas)
{
    m_updatedReadyReplicas = _updatedReadyReplicas;
    m_updatedReadyReplicasHasBeenSet = true;
}

bool WorkloadInfo::UpdatedReadyReplicasHasBeenSet() const
{
    return m_updatedReadyReplicasHasBeenSet;
}

string WorkloadInfo::GetUpdateRevision() const
{
    return m_updateRevision;
}

void WorkloadInfo::SetUpdateRevision(const string& _updateRevision)
{
    m_updateRevision = _updateRevision;
    m_updateRevisionHasBeenSet = true;
}

bool WorkloadInfo::UpdateRevisionHasBeenSet() const
{
    return m_updateRevisionHasBeenSet;
}

string WorkloadInfo::GetCurrentRevision() const
{
    return m_currentRevision;
}

void WorkloadInfo::SetCurrentRevision(const string& _currentRevision)
{
    m_currentRevision = _currentRevision;
    m_currentRevisionHasBeenSet = true;
}

bool WorkloadInfo::CurrentRevisionHasBeenSet() const
{
    return m_currentRevisionHasBeenSet;
}

