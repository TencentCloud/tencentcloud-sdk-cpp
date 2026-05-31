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

#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayLLMModelServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateCloudNativeAPIGatewayLLMModelServiceRequest::CreateCloudNativeAPIGatewayLLMModelServiceRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_modelProviderHasBeenSet(false),
    m_modelProtocolHasBeenSet(false),
    m_modelSelectorHasBeenSet(false),
    m_secretKeyIdsHasBeenSet(false),
    m_defaultModelHasBeenSet(false),
    m_enableModelFallbackHasBeenSet(false),
    m_modelFallbackRuleHasBeenSet(false),
    m_enableModelParamCheckHasBeenSet(false),
    m_modelParamCheckRuleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_upstreamURLHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_writeTimeoutHasBeenSet(false),
    m_readTimeoutHasBeenSet(false),
    m_retriesHasBeenSet(false),
    m_upstreamUrlModeHasBeenSet(false),
    m_sNIHasBeenSet(false),
    m_quotaLimitHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProvider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSelector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelSelector.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_secretKeyIds.begin(); itr != m_secretKeyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_defaultModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultModel.c_str(), allocator).Move(), allocator);
    }

    if (m_enableModelFallbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableModelFallback";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableModelFallback, allocator);
    }

    if (m_modelFallbackRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelFallbackRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelFallbackRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableModelParamCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableModelParamCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableModelParamCheck, allocator);
    }

    if (m_modelParamCheckRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelParamCheckRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelParamCheckRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamURL.c_str(), allocator).Move(), allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_writeTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_writeTimeout, allocator);
    }

    if (m_readTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readTimeout, allocator);
    }

    if (m_retriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retries, allocator);
    }

    if (m_upstreamUrlModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamUrlMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamUrlMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sNIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SNI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sNI.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quotaLimit.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetModelProvider() const
{
    return m_modelProvider;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetModelProvider(const string& _modelProvider)
{
    m_modelProvider = _modelProvider;
    m_modelProviderHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::ModelProviderHasBeenSet() const
{
    return m_modelProviderHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetModelProtocol() const
{
    return m_modelProtocol;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetModelProtocol(const string& _modelProtocol)
{
    m_modelProtocol = _modelProtocol;
    m_modelProtocolHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::ModelProtocolHasBeenSet() const
{
    return m_modelProtocolHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetModelSelector() const
{
    return m_modelSelector;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetModelSelector(const string& _modelSelector)
{
    m_modelSelector = _modelSelector;
    m_modelSelectorHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::ModelSelectorHasBeenSet() const
{
    return m_modelSelectorHasBeenSet;
}

vector<string> CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetSecretKeyIds() const
{
    return m_secretKeyIds;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetSecretKeyIds(const vector<string>& _secretKeyIds)
{
    m_secretKeyIds = _secretKeyIds;
    m_secretKeyIdsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::SecretKeyIdsHasBeenSet() const
{
    return m_secretKeyIdsHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetDefaultModel() const
{
    return m_defaultModel;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetDefaultModel(const string& _defaultModel)
{
    m_defaultModel = _defaultModel;
    m_defaultModelHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::DefaultModelHasBeenSet() const
{
    return m_defaultModelHasBeenSet;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetEnableModelFallback() const
{
    return m_enableModelFallback;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetEnableModelFallback(const bool& _enableModelFallback)
{
    m_enableModelFallback = _enableModelFallback;
    m_enableModelFallbackHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::EnableModelFallbackHasBeenSet() const
{
    return m_enableModelFallbackHasBeenSet;
}

CloudNativeAPIGatewayLLMModelFallbackRule CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetModelFallbackRule() const
{
    return m_modelFallbackRule;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetModelFallbackRule(const CloudNativeAPIGatewayLLMModelFallbackRule& _modelFallbackRule)
{
    m_modelFallbackRule = _modelFallbackRule;
    m_modelFallbackRuleHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::ModelFallbackRuleHasBeenSet() const
{
    return m_modelFallbackRuleHasBeenSet;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetEnableModelParamCheck() const
{
    return m_enableModelParamCheck;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetEnableModelParamCheck(const bool& _enableModelParamCheck)
{
    m_enableModelParamCheck = _enableModelParamCheck;
    m_enableModelParamCheckHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::EnableModelParamCheckHasBeenSet() const
{
    return m_enableModelParamCheckHasBeenSet;
}

CloudNativeAPIGatewayLLMModelParamCheckInfo CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetModelParamCheckRule() const
{
    return m_modelParamCheckRule;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetModelParamCheckRule(const CloudNativeAPIGatewayLLMModelParamCheckInfo& _modelParamCheckRule)
{
    m_modelParamCheckRule = _modelParamCheckRule;
    m_modelParamCheckRuleHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::ModelParamCheckRuleHasBeenSet() const
{
    return m_modelParamCheckRuleHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetDescription() const
{
    return m_description;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetUpstreamURL() const
{
    return m_upstreamURL;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetUpstreamURL(const string& _upstreamURL)
{
    m_upstreamURL = _upstreamURL;
    m_upstreamURLHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::UpstreamURLHasBeenSet() const
{
    return m_upstreamURLHasBeenSet;
}

int64_t CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetConnectTimeout(const int64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

int64_t CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetWriteTimeout() const
{
    return m_writeTimeout;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetWriteTimeout(const int64_t& _writeTimeout)
{
    m_writeTimeout = _writeTimeout;
    m_writeTimeoutHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::WriteTimeoutHasBeenSet() const
{
    return m_writeTimeoutHasBeenSet;
}

int64_t CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetReadTimeout() const
{
    return m_readTimeout;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetReadTimeout(const int64_t& _readTimeout)
{
    m_readTimeout = _readTimeout;
    m_readTimeoutHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::ReadTimeoutHasBeenSet() const
{
    return m_readTimeoutHasBeenSet;
}

int64_t CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetRetries() const
{
    return m_retries;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetRetries(const int64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetUpstreamUrlMode() const
{
    return m_upstreamUrlMode;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetUpstreamUrlMode(const string& _upstreamUrlMode)
{
    m_upstreamUrlMode = _upstreamUrlMode;
    m_upstreamUrlModeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::UpstreamUrlModeHasBeenSet() const
{
    return m_upstreamUrlModeHasBeenSet;
}

string CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetSNI() const
{
    return m_sNI;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetSNI(const string& _sNI)
{
    m_sNI = _sNI;
    m_sNIHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::SNIHasBeenSet() const
{
    return m_sNIHasBeenSet;
}

AIGWLLMQuotaLimit CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetQuotaLimit(const AIGWLLMQuotaLimit& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

vector<string> CreateCloudNativeAPIGatewayLLMModelServiceRequest::GetTags() const
{
    return m_tags;
}

void CreateCloudNativeAPIGatewayLLMModelServiceRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayLLMModelServiceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


