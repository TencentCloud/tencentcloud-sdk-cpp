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

#include <tencentcloud/dlc/v20210125/model/DeploymentResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DeploymentResourceInfo::DeploymentResourceInfo() :
    m_deploymentIdHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_workerBillingItemHasBeenSet(false),
    m_workerSpecHasBeenSet(false),
    m_workerResourceTypeHasBeenSet(false),
    m_headBillingItemHasBeenSet(false),
    m_headSpecHasBeenSet(false),
    m_headResourceTypeHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_replicasHasBeenSet(false)
{
}

CoreInternalOutcome DeploymentResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeploymentId") && !value["DeploymentId"].IsNull())
    {
        if (!value["DeploymentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.DeploymentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentId = string(value["DeploymentId"].GetString());
        m_deploymentIdHasBeenSet = true;
    }

    if (value.HasMember("DeploymentName") && !value["DeploymentName"].IsNull())
    {
        if (!value["DeploymentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.DeploymentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentName = string(value["DeploymentName"].GetString());
        m_deploymentNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("WorkerBillingItem") && !value["WorkerBillingItem"].IsNull())
    {
        if (!value["WorkerBillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.WorkerBillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workerBillingItem = string(value["WorkerBillingItem"].GetString());
        m_workerBillingItemHasBeenSet = true;
    }

    if (value.HasMember("WorkerSpec") && !value["WorkerSpec"].IsNull())
    {
        if (!value["WorkerSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.WorkerSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workerSpec = value["WorkerSpec"].GetInt64();
        m_workerSpecHasBeenSet = true;
    }

    if (value.HasMember("WorkerResourceType") && !value["WorkerResourceType"].IsNull())
    {
        if (!value["WorkerResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.WorkerResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workerResourceType = string(value["WorkerResourceType"].GetString());
        m_workerResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("HeadBillingItem") && !value["HeadBillingItem"].IsNull())
    {
        if (!value["HeadBillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.HeadBillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headBillingItem = string(value["HeadBillingItem"].GetString());
        m_headBillingItemHasBeenSet = true;
    }

    if (value.HasMember("HeadSpec") && !value["HeadSpec"].IsNull())
    {
        if (!value["HeadSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.HeadSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_headSpec = value["HeadSpec"].GetInt64();
        m_headSpecHasBeenSet = true;
    }

    if (value.HasMember("HeadResourceType") && !value["HeadResourceType"].IsNull())
    {
        if (!value["HeadResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.HeadResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headResourceType = string(value["HeadResourceType"].GetString());
        m_headResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentResourceInfo.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeploymentResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deploymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentId.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_workerBillingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerBillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workerBillingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_workerSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workerSpec, allocator);
    }

    if (m_workerResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workerResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_headBillingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadBillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headBillingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_headSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headSpec, allocator);
    }

    if (m_headResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

}


string DeploymentResourceInfo::GetDeploymentId() const
{
    return m_deploymentId;
}

void DeploymentResourceInfo::SetDeploymentId(const string& _deploymentId)
{
    m_deploymentId = _deploymentId;
    m_deploymentIdHasBeenSet = true;
}

bool DeploymentResourceInfo::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

string DeploymentResourceInfo::GetDeploymentName() const
{
    return m_deploymentName;
}

void DeploymentResourceInfo::SetDeploymentName(const string& _deploymentName)
{
    m_deploymentName = _deploymentName;
    m_deploymentNameHasBeenSet = true;
}

bool DeploymentResourceInfo::DeploymentNameHasBeenSet() const
{
    return m_deploymentNameHasBeenSet;
}

string DeploymentResourceInfo::GetStatus() const
{
    return m_status;
}

void DeploymentResourceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeploymentResourceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeploymentResourceInfo::GetWorkerBillingItem() const
{
    return m_workerBillingItem;
}

void DeploymentResourceInfo::SetWorkerBillingItem(const string& _workerBillingItem)
{
    m_workerBillingItem = _workerBillingItem;
    m_workerBillingItemHasBeenSet = true;
}

bool DeploymentResourceInfo::WorkerBillingItemHasBeenSet() const
{
    return m_workerBillingItemHasBeenSet;
}

int64_t DeploymentResourceInfo::GetWorkerSpec() const
{
    return m_workerSpec;
}

void DeploymentResourceInfo::SetWorkerSpec(const int64_t& _workerSpec)
{
    m_workerSpec = _workerSpec;
    m_workerSpecHasBeenSet = true;
}

bool DeploymentResourceInfo::WorkerSpecHasBeenSet() const
{
    return m_workerSpecHasBeenSet;
}

string DeploymentResourceInfo::GetWorkerResourceType() const
{
    return m_workerResourceType;
}

void DeploymentResourceInfo::SetWorkerResourceType(const string& _workerResourceType)
{
    m_workerResourceType = _workerResourceType;
    m_workerResourceTypeHasBeenSet = true;
}

bool DeploymentResourceInfo::WorkerResourceTypeHasBeenSet() const
{
    return m_workerResourceTypeHasBeenSet;
}

string DeploymentResourceInfo::GetHeadBillingItem() const
{
    return m_headBillingItem;
}

void DeploymentResourceInfo::SetHeadBillingItem(const string& _headBillingItem)
{
    m_headBillingItem = _headBillingItem;
    m_headBillingItemHasBeenSet = true;
}

bool DeploymentResourceInfo::HeadBillingItemHasBeenSet() const
{
    return m_headBillingItemHasBeenSet;
}

int64_t DeploymentResourceInfo::GetHeadSpec() const
{
    return m_headSpec;
}

void DeploymentResourceInfo::SetHeadSpec(const int64_t& _headSpec)
{
    m_headSpec = _headSpec;
    m_headSpecHasBeenSet = true;
}

bool DeploymentResourceInfo::HeadSpecHasBeenSet() const
{
    return m_headSpecHasBeenSet;
}

string DeploymentResourceInfo::GetHeadResourceType() const
{
    return m_headResourceType;
}

void DeploymentResourceInfo::SetHeadResourceType(const string& _headResourceType)
{
    m_headResourceType = _headResourceType;
    m_headResourceTypeHasBeenSet = true;
}

bool DeploymentResourceInfo::HeadResourceTypeHasBeenSet() const
{
    return m_headResourceTypeHasBeenSet;
}

string DeploymentResourceInfo::GetGpuType() const
{
    return m_gpuType;
}

void DeploymentResourceInfo::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool DeploymentResourceInfo::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

int64_t DeploymentResourceInfo::GetReplicas() const
{
    return m_replicas;
}

void DeploymentResourceInfo::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool DeploymentResourceInfo::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

