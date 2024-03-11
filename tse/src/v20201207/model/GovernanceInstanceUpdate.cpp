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

#include <tencentcloud/tse/v20201207/model/GovernanceInstanceUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceInstanceUpdate::GovernanceInstanceUpdate() :
    m_serviceHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_isolateHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadatasHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceInstanceUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Healthy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = value["Healthy"].GetBool();
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("Isolate") && !value["Isolate"].IsNull())
    {
        if (!value["Isolate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Isolate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isolate = value["Isolate"].GetBool();
        m_isolateHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.InstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = string(value["InstanceVersion"].GetString());
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("EnableHealthCheck") && !value["EnableHealthCheck"].IsNull())
    {
        if (!value["EnableHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.EnableHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHealthCheck = value["EnableHealthCheck"].GetBool();
        m_enableHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("Ttl") && !value["Ttl"].IsNull())
    {
        if (!value["Ttl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Ttl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ttl = value["Ttl"].GetUint64();
        m_ttlHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Metadatas") && !value["Metadatas"].IsNull())
    {
        if (!value["Metadatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceInstanceUpdate.Metadatas` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadatas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Metadata item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metadatas.push_back(item);
        }
        m_metadatasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovernanceInstanceUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthy, allocator);
    }

    if (m_isolateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isolate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolate, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHealthCheck, allocator);
    }

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ttl, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_metadatasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadatas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadatas.begin(); itr != m_metadatas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GovernanceInstanceUpdate::GetService() const
{
    return m_service;
}

void GovernanceInstanceUpdate::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool GovernanceInstanceUpdate::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string GovernanceInstanceUpdate::GetNamespace() const
{
    return m_namespace;
}

void GovernanceInstanceUpdate::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GovernanceInstanceUpdate::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

uint64_t GovernanceInstanceUpdate::GetWeight() const
{
    return m_weight;
}

void GovernanceInstanceUpdate::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool GovernanceInstanceUpdate::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

bool GovernanceInstanceUpdate::GetHealthy() const
{
    return m_healthy;
}

void GovernanceInstanceUpdate::SetHealthy(const bool& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool GovernanceInstanceUpdate::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

bool GovernanceInstanceUpdate::GetIsolate() const
{
    return m_isolate;
}

void GovernanceInstanceUpdate::SetIsolate(const bool& _isolate)
{
    m_isolate = _isolate;
    m_isolateHasBeenSet = true;
}

bool GovernanceInstanceUpdate::IsolateHasBeenSet() const
{
    return m_isolateHasBeenSet;
}

string GovernanceInstanceUpdate::GetHost() const
{
    return m_host;
}

void GovernanceInstanceUpdate::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool GovernanceInstanceUpdate::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

uint64_t GovernanceInstanceUpdate::GetPort() const
{
    return m_port;
}

void GovernanceInstanceUpdate::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool GovernanceInstanceUpdate::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string GovernanceInstanceUpdate::GetProtocol() const
{
    return m_protocol;
}

void GovernanceInstanceUpdate::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool GovernanceInstanceUpdate::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string GovernanceInstanceUpdate::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void GovernanceInstanceUpdate::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool GovernanceInstanceUpdate::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

bool GovernanceInstanceUpdate::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void GovernanceInstanceUpdate::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool GovernanceInstanceUpdate::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

uint64_t GovernanceInstanceUpdate::GetTtl() const
{
    return m_ttl;
}

void GovernanceInstanceUpdate::SetTtl(const uint64_t& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool GovernanceInstanceUpdate::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}

string GovernanceInstanceUpdate::GetId() const
{
    return m_id;
}

void GovernanceInstanceUpdate::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GovernanceInstanceUpdate::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<Metadata> GovernanceInstanceUpdate::GetMetadatas() const
{
    return m_metadatas;
}

void GovernanceInstanceUpdate::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool GovernanceInstanceUpdate::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

