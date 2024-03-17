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

#include <tencentcloud/tse/v20201207/model/GovernanceInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceInstance::GovernanceInstance() :
    m_idHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_isolateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_metadatasHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("EnableHealthCheck") && !value["EnableHealthCheck"].IsNull())
    {
        if (!value["EnableHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.EnableHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHealthCheck = value["EnableHealthCheck"].GetBool();
        m_enableHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Healthy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = value["Healthy"].GetBool();
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("Isolate") && !value["Isolate"].IsNull())
    {
        if (!value["Isolate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Isolate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isolate = value["Isolate"].GetBool();
        m_isolateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Metadatas") && !value["Metadatas"].IsNull())
    {
        if (!value["Metadatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Metadatas` is not array type"));

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

    if (value.HasMember("Ttl") && !value["Ttl"].IsNull())
    {
        if (!value["Ttl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Ttl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ttl = value["Ttl"].GetUint64();
        m_ttlHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.InstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = string(value["InstanceVersion"].GetString());
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.HealthStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthStatus = string(value["HealthStatus"].GetString());
        m_healthStatusHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceInstance.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovernanceInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

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

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_enableHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHealthCheck, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
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

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ttl, allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

}


string GovernanceInstance::GetId() const
{
    return m_id;
}

void GovernanceInstance::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GovernanceInstance::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string GovernanceInstance::GetService() const
{
    return m_service;
}

void GovernanceInstance::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool GovernanceInstance::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string GovernanceInstance::GetNamespace() const
{
    return m_namespace;
}

void GovernanceInstance::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GovernanceInstance::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GovernanceInstance::GetHost() const
{
    return m_host;
}

void GovernanceInstance::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool GovernanceInstance::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

uint64_t GovernanceInstance::GetPort() const
{
    return m_port;
}

void GovernanceInstance::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool GovernanceInstance::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string GovernanceInstance::GetProtocol() const
{
    return m_protocol;
}

void GovernanceInstance::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool GovernanceInstance::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string GovernanceInstance::GetVersion() const
{
    return m_version;
}

void GovernanceInstance::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool GovernanceInstance::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t GovernanceInstance::GetWeight() const
{
    return m_weight;
}

void GovernanceInstance::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool GovernanceInstance::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

bool GovernanceInstance::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void GovernanceInstance::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool GovernanceInstance::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

bool GovernanceInstance::GetHealthy() const
{
    return m_healthy;
}

void GovernanceInstance::SetHealthy(const bool& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool GovernanceInstance::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

bool GovernanceInstance::GetIsolate() const
{
    return m_isolate;
}

void GovernanceInstance::SetIsolate(const bool& _isolate)
{
    m_isolate = _isolate;
    m_isolateHasBeenSet = true;
}

bool GovernanceInstance::IsolateHasBeenSet() const
{
    return m_isolateHasBeenSet;
}

string GovernanceInstance::GetCreateTime() const
{
    return m_createTime;
}

void GovernanceInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GovernanceInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GovernanceInstance::GetModifyTime() const
{
    return m_modifyTime;
}

void GovernanceInstance::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool GovernanceInstance::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<Metadata> GovernanceInstance::GetMetadatas() const
{
    return m_metadatas;
}

void GovernanceInstance::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool GovernanceInstance::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

uint64_t GovernanceInstance::GetTtl() const
{
    return m_ttl;
}

void GovernanceInstance::SetTtl(const uint64_t& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool GovernanceInstance::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}

string GovernanceInstance::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void GovernanceInstance::SetInstanceVersion(const string& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool GovernanceInstance::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

string GovernanceInstance::GetHealthStatus() const
{
    return m_healthStatus;
}

void GovernanceInstance::SetHealthStatus(const string& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool GovernanceInstance::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

string GovernanceInstance::GetComment() const
{
    return m_comment;
}

void GovernanceInstance::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool GovernanceInstance::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

