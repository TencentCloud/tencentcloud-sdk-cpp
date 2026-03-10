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

#include <tencentcloud/hai/v20230812/model/ServiceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ServiceDetail::ServiceDetail() :
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceStateHasBeenSet(false),
    m_runningReplicasHasBeenSet(false),
    m_totalReplicasHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_computeSetHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_deploymentConfigsHasBeenSet(false),
    m_hyperParamHasBeenSet(false)
{
}

CoreInternalOutcome ServiceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceState") && !value["ServiceState"].IsNull())
    {
        if (!value["ServiceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.ServiceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceState = string(value["ServiceState"].GetString());
        m_serviceStateHasBeenSet = true;
    }

    if (value.HasMember("RunningReplicas") && !value["RunningReplicas"].IsNull())
    {
        if (!value["RunningReplicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.RunningReplicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runningReplicas = value["RunningReplicas"].GetUint64();
        m_runningReplicasHasBeenSet = true;
    }

    if (value.HasMember("TotalReplicas") && !value["TotalReplicas"].IsNull())
    {
        if (!value["TotalReplicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.TotalReplicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalReplicas = value["TotalReplicas"].GetUint64();
        m_totalReplicasHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ComputeSet") && !value["ComputeSet"].IsNull())
    {
        if (!value["ComputeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.ComputeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ComputeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComputeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_computeSet.push_back(item);
        }
        m_computeSetHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("DeploymentConfigs") && !value["DeploymentConfigs"].IsNull())
    {
        if (!value["DeploymentConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.DeploymentConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["DeploymentConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeploymentConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deploymentConfigs.push_back(item);
        }
        m_deploymentConfigsHasBeenSet = true;
    }

    if (value.HasMember("HyperParam") && !value["HyperParam"].IsNull())
    {
        if (!value["HyperParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.HyperParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hyperParam.Deserialize(value["HyperParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hyperParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceState.c_str(), allocator).Move(), allocator);
    }

    if (m_runningReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningReplicas, allocator);
    }

    if (m_totalReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalReplicas, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_computeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_computeSet.begin(); itr != m_computeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deploymentConfigs.begin(); itr != m_deploymentConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hyperParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HyperParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hyperParam.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ServiceDetail::GetServiceId() const
{
    return m_serviceId;
}

void ServiceDetail::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ServiceDetail::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ServiceDetail::GetServiceName() const
{
    return m_serviceName;
}

void ServiceDetail::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServiceDetail::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ServiceDetail::GetServiceState() const
{
    return m_serviceState;
}

void ServiceDetail::SetServiceState(const string& _serviceState)
{
    m_serviceState = _serviceState;
    m_serviceStateHasBeenSet = true;
}

bool ServiceDetail::ServiceStateHasBeenSet() const
{
    return m_serviceStateHasBeenSet;
}

uint64_t ServiceDetail::GetRunningReplicas() const
{
    return m_runningReplicas;
}

void ServiceDetail::SetRunningReplicas(const uint64_t& _runningReplicas)
{
    m_runningReplicas = _runningReplicas;
    m_runningReplicasHasBeenSet = true;
}

bool ServiceDetail::RunningReplicasHasBeenSet() const
{
    return m_runningReplicasHasBeenSet;
}

uint64_t ServiceDetail::GetTotalReplicas() const
{
    return m_totalReplicas;
}

void ServiceDetail::SetTotalReplicas(const uint64_t& _totalReplicas)
{
    m_totalReplicas = _totalReplicas;
    m_totalReplicasHasBeenSet = true;
}

bool ServiceDetail::TotalReplicasHasBeenSet() const
{
    return m_totalReplicasHasBeenSet;
}

string ServiceDetail::GetCreateTime() const
{
    return m_createTime;
}

void ServiceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServiceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<ComputeDetail> ServiceDetail::GetComputeSet() const
{
    return m_computeSet;
}

void ServiceDetail::SetComputeSet(const vector<ComputeDetail>& _computeSet)
{
    m_computeSet = _computeSet;
    m_computeSetHasBeenSet = true;
}

bool ServiceDetail::ComputeSetHasBeenSet() const
{
    return m_computeSetHasBeenSet;
}

string ServiceDetail::GetModelName() const
{
    return m_modelName;
}

void ServiceDetail::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ServiceDetail::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

vector<DeploymentConfig> ServiceDetail::GetDeploymentConfigs() const
{
    return m_deploymentConfigs;
}

void ServiceDetail::SetDeploymentConfigs(const vector<DeploymentConfig>& _deploymentConfigs)
{
    m_deploymentConfigs = _deploymentConfigs;
    m_deploymentConfigsHasBeenSet = true;
}

bool ServiceDetail::DeploymentConfigsHasBeenSet() const
{
    return m_deploymentConfigsHasBeenSet;
}

HyperParam ServiceDetail::GetHyperParam() const
{
    return m_hyperParam;
}

void ServiceDetail::SetHyperParam(const HyperParam& _hyperParam)
{
    m_hyperParam = _hyperParam;
    m_hyperParamHasBeenSet = true;
}

bool ServiceDetail::HyperParamHasBeenSet() const
{
    return m_hyperParamHasBeenSet;
}

