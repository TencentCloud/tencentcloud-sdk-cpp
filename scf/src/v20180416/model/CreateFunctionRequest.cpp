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

#include <tencentcloud/scf/v20180416/model/CreateFunctionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

CreateFunctionRequest::CreateFunctionRequest() :
    m_functionNameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_handlerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_memorySizeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_installDependencyHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_codeSourceHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_publicNetConfigHasBeenSet(false),
    m_cfsConfigHasBeenSet(false),
    m_initTimeoutHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_asyncRunEnableHasBeenSet(false),
    m_traceEnableHasBeenSet(false),
    m_autoDeployClsTopicIndexHasBeenSet(false),
    m_autoCreateClsTopicHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_protocolParamsHasBeenSet(false),
    m_instanceConcurrencyConfigHasBeenSet(false),
    m_dnsCacheHasBeenSet(false),
    m_intranetConfigHasBeenSet(false)
{
}

string CreateFunctionRequest::ToJsonString() const
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

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_code.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_handlerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Handler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_handler.c_str(), allocator).Move(), allocator);
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

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_environment.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_codeSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeSource.c_str(), allocator).Move(), allocator);
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_asyncRunEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRunEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_asyncRunEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_traceEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_traceEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_autoDeployClsTopicIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDeployClsTopicIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoDeployClsTopicIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_autoCreateClsTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateClsTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoCreateClsTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocolType.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFunctionRequest::GetFunctionName() const
{
    return m_functionName;
}

void CreateFunctionRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool CreateFunctionRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

Code CreateFunctionRequest::GetCode() const
{
    return m_code;
}

void CreateFunctionRequest::SetCode(const Code& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CreateFunctionRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string CreateFunctionRequest::GetHandler() const
{
    return m_handler;
}

void CreateFunctionRequest::SetHandler(const string& _handler)
{
    m_handler = _handler;
    m_handlerHasBeenSet = true;
}

bool CreateFunctionRequest::HandlerHasBeenSet() const
{
    return m_handlerHasBeenSet;
}

string CreateFunctionRequest::GetDescription() const
{
    return m_description;
}

void CreateFunctionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateFunctionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateFunctionRequest::GetMemorySize() const
{
    return m_memorySize;
}

void CreateFunctionRequest::SetMemorySize(const int64_t& _memorySize)
{
    m_memorySize = _memorySize;
    m_memorySizeHasBeenSet = true;
}

bool CreateFunctionRequest::MemorySizeHasBeenSet() const
{
    return m_memorySizeHasBeenSet;
}

int64_t CreateFunctionRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateFunctionRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateFunctionRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

Environment CreateFunctionRequest::GetEnvironment() const
{
    return m_environment;
}

void CreateFunctionRequest::SetEnvironment(const Environment& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool CreateFunctionRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string CreateFunctionRequest::GetRuntime() const
{
    return m_runtime;
}

void CreateFunctionRequest::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool CreateFunctionRequest::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

VpcConfig CreateFunctionRequest::GetVpcConfig() const
{
    return m_vpcConfig;
}

void CreateFunctionRequest::SetVpcConfig(const VpcConfig& _vpcConfig)
{
    m_vpcConfig = _vpcConfig;
    m_vpcConfigHasBeenSet = true;
}

bool CreateFunctionRequest::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string CreateFunctionRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateFunctionRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateFunctionRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CreateFunctionRequest::GetRole() const
{
    return m_role;
}

void CreateFunctionRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool CreateFunctionRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string CreateFunctionRequest::GetInstallDependency() const
{
    return m_installDependency;
}

void CreateFunctionRequest::SetInstallDependency(const string& _installDependency)
{
    m_installDependency = _installDependency;
    m_installDependencyHasBeenSet = true;
}

bool CreateFunctionRequest::InstallDependencyHasBeenSet() const
{
    return m_installDependencyHasBeenSet;
}

string CreateFunctionRequest::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void CreateFunctionRequest::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool CreateFunctionRequest::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string CreateFunctionRequest::GetClsTopicId() const
{
    return m_clsTopicId;
}

void CreateFunctionRequest::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool CreateFunctionRequest::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

string CreateFunctionRequest::GetType() const
{
    return m_type;
}

void CreateFunctionRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateFunctionRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateFunctionRequest::GetCodeSource() const
{
    return m_codeSource;
}

void CreateFunctionRequest::SetCodeSource(const string& _codeSource)
{
    m_codeSource = _codeSource;
    m_codeSourceHasBeenSet = true;
}

bool CreateFunctionRequest::CodeSourceHasBeenSet() const
{
    return m_codeSourceHasBeenSet;
}

vector<LayerVersionSimple> CreateFunctionRequest::GetLayers() const
{
    return m_layers;
}

void CreateFunctionRequest::SetLayers(const vector<LayerVersionSimple>& _layers)
{
    m_layers = _layers;
    m_layersHasBeenSet = true;
}

bool CreateFunctionRequest::LayersHasBeenSet() const
{
    return m_layersHasBeenSet;
}

DeadLetterConfig CreateFunctionRequest::GetDeadLetterConfig() const
{
    return m_deadLetterConfig;
}

void CreateFunctionRequest::SetDeadLetterConfig(const DeadLetterConfig& _deadLetterConfig)
{
    m_deadLetterConfig = _deadLetterConfig;
    m_deadLetterConfigHasBeenSet = true;
}

bool CreateFunctionRequest::DeadLetterConfigHasBeenSet() const
{
    return m_deadLetterConfigHasBeenSet;
}

PublicNetConfigIn CreateFunctionRequest::GetPublicNetConfig() const
{
    return m_publicNetConfig;
}

void CreateFunctionRequest::SetPublicNetConfig(const PublicNetConfigIn& _publicNetConfig)
{
    m_publicNetConfig = _publicNetConfig;
    m_publicNetConfigHasBeenSet = true;
}

bool CreateFunctionRequest::PublicNetConfigHasBeenSet() const
{
    return m_publicNetConfigHasBeenSet;
}

CfsConfig CreateFunctionRequest::GetCfsConfig() const
{
    return m_cfsConfig;
}

void CreateFunctionRequest::SetCfsConfig(const CfsConfig& _cfsConfig)
{
    m_cfsConfig = _cfsConfig;
    m_cfsConfigHasBeenSet = true;
}

bool CreateFunctionRequest::CfsConfigHasBeenSet() const
{
    return m_cfsConfigHasBeenSet;
}

int64_t CreateFunctionRequest::GetInitTimeout() const
{
    return m_initTimeout;
}

void CreateFunctionRequest::SetInitTimeout(const int64_t& _initTimeout)
{
    m_initTimeout = _initTimeout;
    m_initTimeoutHasBeenSet = true;
}

bool CreateFunctionRequest::InitTimeoutHasBeenSet() const
{
    return m_initTimeoutHasBeenSet;
}

vector<Tag> CreateFunctionRequest::GetTags() const
{
    return m_tags;
}

void CreateFunctionRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateFunctionRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateFunctionRequest::GetAsyncRunEnable() const
{
    return m_asyncRunEnable;
}

void CreateFunctionRequest::SetAsyncRunEnable(const string& _asyncRunEnable)
{
    m_asyncRunEnable = _asyncRunEnable;
    m_asyncRunEnableHasBeenSet = true;
}

bool CreateFunctionRequest::AsyncRunEnableHasBeenSet() const
{
    return m_asyncRunEnableHasBeenSet;
}

string CreateFunctionRequest::GetTraceEnable() const
{
    return m_traceEnable;
}

void CreateFunctionRequest::SetTraceEnable(const string& _traceEnable)
{
    m_traceEnable = _traceEnable;
    m_traceEnableHasBeenSet = true;
}

bool CreateFunctionRequest::TraceEnableHasBeenSet() const
{
    return m_traceEnableHasBeenSet;
}

string CreateFunctionRequest::GetAutoDeployClsTopicIndex() const
{
    return m_autoDeployClsTopicIndex;
}

void CreateFunctionRequest::SetAutoDeployClsTopicIndex(const string& _autoDeployClsTopicIndex)
{
    m_autoDeployClsTopicIndex = _autoDeployClsTopicIndex;
    m_autoDeployClsTopicIndexHasBeenSet = true;
}

bool CreateFunctionRequest::AutoDeployClsTopicIndexHasBeenSet() const
{
    return m_autoDeployClsTopicIndexHasBeenSet;
}

string CreateFunctionRequest::GetAutoCreateClsTopic() const
{
    return m_autoCreateClsTopic;
}

void CreateFunctionRequest::SetAutoCreateClsTopic(const string& _autoCreateClsTopic)
{
    m_autoCreateClsTopic = _autoCreateClsTopic;
    m_autoCreateClsTopicHasBeenSet = true;
}

bool CreateFunctionRequest::AutoCreateClsTopicHasBeenSet() const
{
    return m_autoCreateClsTopicHasBeenSet;
}

string CreateFunctionRequest::GetProtocolType() const
{
    return m_protocolType;
}

void CreateFunctionRequest::SetProtocolType(const string& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool CreateFunctionRequest::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

ProtocolParams CreateFunctionRequest::GetProtocolParams() const
{
    return m_protocolParams;
}

void CreateFunctionRequest::SetProtocolParams(const ProtocolParams& _protocolParams)
{
    m_protocolParams = _protocolParams;
    m_protocolParamsHasBeenSet = true;
}

bool CreateFunctionRequest::ProtocolParamsHasBeenSet() const
{
    return m_protocolParamsHasBeenSet;
}

InstanceConcurrencyConfig CreateFunctionRequest::GetInstanceConcurrencyConfig() const
{
    return m_instanceConcurrencyConfig;
}

void CreateFunctionRequest::SetInstanceConcurrencyConfig(const InstanceConcurrencyConfig& _instanceConcurrencyConfig)
{
    m_instanceConcurrencyConfig = _instanceConcurrencyConfig;
    m_instanceConcurrencyConfigHasBeenSet = true;
}

bool CreateFunctionRequest::InstanceConcurrencyConfigHasBeenSet() const
{
    return m_instanceConcurrencyConfigHasBeenSet;
}

string CreateFunctionRequest::GetDnsCache() const
{
    return m_dnsCache;
}

void CreateFunctionRequest::SetDnsCache(const string& _dnsCache)
{
    m_dnsCache = _dnsCache;
    m_dnsCacheHasBeenSet = true;
}

bool CreateFunctionRequest::DnsCacheHasBeenSet() const
{
    return m_dnsCacheHasBeenSet;
}

IntranetConfigIn CreateFunctionRequest::GetIntranetConfig() const
{
    return m_intranetConfig;
}

void CreateFunctionRequest::SetIntranetConfig(const IntranetConfigIn& _intranetConfig)
{
    m_intranetConfig = _intranetConfig;
    m_intranetConfigHasBeenSet = true;
}

bool CreateFunctionRequest::IntranetConfigHasBeenSet() const
{
    return m_intranetConfigHasBeenSet;
}


