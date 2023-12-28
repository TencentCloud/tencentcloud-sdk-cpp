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

#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

UpdateFunctionConfigurationRequest::UpdateFunctionConfigurationRequest() :
    m_functionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_memorySizeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_installDependencyHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_publishHasBeenSet(false),
    m_l5EnableHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_publicNetConfigHasBeenSet(false),
    m_cfsConfigHasBeenSet(false),
    m_initTimeoutHasBeenSet(false),
    m_protocolParamsHasBeenSet(false),
    m_instanceConcurrencyConfigHasBeenSet(false),
    m_dnsCacheHasBeenSet(false),
    m_intranetConfigHasBeenSet(false),
    m_ignoreSysLogHasBeenSet(false)
{
}

string UpdateFunctionConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_memorySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memorySize, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_environment.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_installDependencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallDependency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_installDependency.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_publishHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Publish";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publish.c_str(), allocator).Move(), allocator);
    }

    if (m_l5EnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L5Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_l5Enable.c_str(), allocator).Move(), allocator);
    }

    if (m_layersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_layers.begin(); itr != m_layers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deadLetterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deadLetterConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_publicNetConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publicNetConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cfsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfsConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cfsConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_initTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_initTimeout, allocator);
    }

    if (m_protocolParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_protocolParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceConcurrencyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceConcurrencyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceConcurrencyConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dnsCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsCache.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intranetConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ignoreSysLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreSysLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreSysLog, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateFunctionConfigurationRequest::GetFunctionName() const
{
    return m_functionName;
}

void UpdateFunctionConfigurationRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetDescription() const
{
    return m_description;
}

void UpdateFunctionConfigurationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t UpdateFunctionConfigurationRequest::GetMemorySize() const
{
    return m_memorySize;
}

void UpdateFunctionConfigurationRequest::SetMemorySize(const int64_t& _memorySize)
{
    m_memorySize = _memorySize;
    m_memorySizeHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::MemorySizeHasBeenSet() const
{
    return m_memorySizeHasBeenSet;
}

int64_t UpdateFunctionConfigurationRequest::GetTimeout() const
{
    return m_timeout;
}

void UpdateFunctionConfigurationRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetRuntime() const
{
    return m_runtime;
}

void UpdateFunctionConfigurationRequest::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

Environment UpdateFunctionConfigurationRequest::GetEnvironment() const
{
    return m_environment;
}

void UpdateFunctionConfigurationRequest::SetEnvironment(const Environment& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetNamespace() const
{
    return m_namespace;
}

void UpdateFunctionConfigurationRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

VpcConfig UpdateFunctionConfigurationRequest::GetVpcConfig() const
{
    return m_vpcConfig;
}

void UpdateFunctionConfigurationRequest::SetVpcConfig(const VpcConfig& _vpcConfig)
{
    m_vpcConfig = _vpcConfig;
    m_vpcConfigHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetRole() const
{
    return m_role;
}

void UpdateFunctionConfigurationRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetInstallDependency() const
{
    return m_installDependency;
}

void UpdateFunctionConfigurationRequest::SetInstallDependency(const string& _installDependency)
{
    m_installDependency = _installDependency;
    m_installDependencyHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::InstallDependencyHasBeenSet() const
{
    return m_installDependencyHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void UpdateFunctionConfigurationRequest::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetClsTopicId() const
{
    return m_clsTopicId;
}

void UpdateFunctionConfigurationRequest::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetPublish() const
{
    return m_publish;
}

void UpdateFunctionConfigurationRequest::SetPublish(const string& _publish)
{
    m_publish = _publish;
    m_publishHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::PublishHasBeenSet() const
{
    return m_publishHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetL5Enable() const
{
    return m_l5Enable;
}

void UpdateFunctionConfigurationRequest::SetL5Enable(const string& _l5Enable)
{
    m_l5Enable = _l5Enable;
    m_l5EnableHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::L5EnableHasBeenSet() const
{
    return m_l5EnableHasBeenSet;
}

vector<LayerVersionSimple> UpdateFunctionConfigurationRequest::GetLayers() const
{
    return m_layers;
}

void UpdateFunctionConfigurationRequest::SetLayers(const vector<LayerVersionSimple>& _layers)
{
    m_layers = _layers;
    m_layersHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::LayersHasBeenSet() const
{
    return m_layersHasBeenSet;
}

DeadLetterConfig UpdateFunctionConfigurationRequest::GetDeadLetterConfig() const
{
    return m_deadLetterConfig;
}

void UpdateFunctionConfigurationRequest::SetDeadLetterConfig(const DeadLetterConfig& _deadLetterConfig)
{
    m_deadLetterConfig = _deadLetterConfig;
    m_deadLetterConfigHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::DeadLetterConfigHasBeenSet() const
{
    return m_deadLetterConfigHasBeenSet;
}

PublicNetConfigIn UpdateFunctionConfigurationRequest::GetPublicNetConfig() const
{
    return m_publicNetConfig;
}

void UpdateFunctionConfigurationRequest::SetPublicNetConfig(const PublicNetConfigIn& _publicNetConfig)
{
    m_publicNetConfig = _publicNetConfig;
    m_publicNetConfigHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::PublicNetConfigHasBeenSet() const
{
    return m_publicNetConfigHasBeenSet;
}

CfsConfig UpdateFunctionConfigurationRequest::GetCfsConfig() const
{
    return m_cfsConfig;
}

void UpdateFunctionConfigurationRequest::SetCfsConfig(const CfsConfig& _cfsConfig)
{
    m_cfsConfig = _cfsConfig;
    m_cfsConfigHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::CfsConfigHasBeenSet() const
{
    return m_cfsConfigHasBeenSet;
}

int64_t UpdateFunctionConfigurationRequest::GetInitTimeout() const
{
    return m_initTimeout;
}

void UpdateFunctionConfigurationRequest::SetInitTimeout(const int64_t& _initTimeout)
{
    m_initTimeout = _initTimeout;
    m_initTimeoutHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::InitTimeoutHasBeenSet() const
{
    return m_initTimeoutHasBeenSet;
}

ProtocolParams UpdateFunctionConfigurationRequest::GetProtocolParams() const
{
    return m_protocolParams;
}

void UpdateFunctionConfigurationRequest::SetProtocolParams(const ProtocolParams& _protocolParams)
{
    m_protocolParams = _protocolParams;
    m_protocolParamsHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::ProtocolParamsHasBeenSet() const
{
    return m_protocolParamsHasBeenSet;
}

InstanceConcurrencyConfig UpdateFunctionConfigurationRequest::GetInstanceConcurrencyConfig() const
{
    return m_instanceConcurrencyConfig;
}

void UpdateFunctionConfigurationRequest::SetInstanceConcurrencyConfig(const InstanceConcurrencyConfig& _instanceConcurrencyConfig)
{
    m_instanceConcurrencyConfig = _instanceConcurrencyConfig;
    m_instanceConcurrencyConfigHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::InstanceConcurrencyConfigHasBeenSet() const
{
    return m_instanceConcurrencyConfigHasBeenSet;
}

string UpdateFunctionConfigurationRequest::GetDnsCache() const
{
    return m_dnsCache;
}

void UpdateFunctionConfigurationRequest::SetDnsCache(const string& _dnsCache)
{
    m_dnsCache = _dnsCache;
    m_dnsCacheHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::DnsCacheHasBeenSet() const
{
    return m_dnsCacheHasBeenSet;
}

IntranetConfigIn UpdateFunctionConfigurationRequest::GetIntranetConfig() const
{
    return m_intranetConfig;
}

void UpdateFunctionConfigurationRequest::SetIntranetConfig(const IntranetConfigIn& _intranetConfig)
{
    m_intranetConfig = _intranetConfig;
    m_intranetConfigHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::IntranetConfigHasBeenSet() const
{
    return m_intranetConfigHasBeenSet;
}

bool UpdateFunctionConfigurationRequest::GetIgnoreSysLog() const
{
    return m_ignoreSysLog;
}

void UpdateFunctionConfigurationRequest::SetIgnoreSysLog(const bool& _ignoreSysLog)
{
    m_ignoreSysLog = _ignoreSysLog;
    m_ignoreSysLogHasBeenSet = true;
}

bool UpdateFunctionConfigurationRequest::IgnoreSysLogHasBeenSet() const
{
    return m_ignoreSysLogHasBeenSet;
}


