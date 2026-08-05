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

#include <tencentcloud/dlc/v20210125/model/ServiceMetricsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ServiceMetricsItem::ServiceMetricsItem() :
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelIdentifierHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

CoreInternalOutcome ServiceMetricsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetricsItem.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetricsItem.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetricsItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetricsItem.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetricsItem.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelIdentifier") && !value["ModelIdentifier"].IsNull())
    {
        if (!value["ModelIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetricsItem.ModelIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelIdentifier = string(value["ModelIdentifier"].GetString());
        m_modelIdentifierHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetricsItem.Replicas` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_replicas.Deserialize(value["Replicas"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceMetricsItem.Metrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metrics.Deserialize(value["Metrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceMetricsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_replicas.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metrics.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ServiceMetricsItem::GetServiceId() const
{
    return m_serviceId;
}

void ServiceMetricsItem::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ServiceMetricsItem::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ServiceMetricsItem::GetServiceName() const
{
    return m_serviceName;
}

void ServiceMetricsItem::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServiceMetricsItem::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ServiceMetricsItem::GetStatus() const
{
    return m_status;
}

void ServiceMetricsItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServiceMetricsItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServiceMetricsItem::GetEngine() const
{
    return m_engine;
}

void ServiceMetricsItem::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool ServiceMetricsItem::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string ServiceMetricsItem::GetModelName() const
{
    return m_modelName;
}

void ServiceMetricsItem::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ServiceMetricsItem::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ServiceMetricsItem::GetModelIdentifier() const
{
    return m_modelIdentifier;
}

void ServiceMetricsItem::SetModelIdentifier(const string& _modelIdentifier)
{
    m_modelIdentifier = _modelIdentifier;
    m_modelIdentifierHasBeenSet = true;
}

bool ServiceMetricsItem::ModelIdentifierHasBeenSet() const
{
    return m_modelIdentifierHasBeenSet;
}

ReplicaInfo ServiceMetricsItem::GetReplicas() const
{
    return m_replicas;
}

void ServiceMetricsItem::SetReplicas(const ReplicaInfo& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool ServiceMetricsItem::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

MetricsData ServiceMetricsItem::GetMetrics() const
{
    return m_metrics;
}

void ServiceMetricsItem::SetMetrics(const MetricsData& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool ServiceMetricsItem::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

