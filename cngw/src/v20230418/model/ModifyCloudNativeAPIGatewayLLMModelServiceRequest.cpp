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

#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyCloudNativeAPIGatewayLLMModelServiceRequest::ModifyCloudNativeAPIGatewayLLMModelServiceRequest() :
    m_gatewayIdHasBeenSet(false),
    m_modelServiceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_defaultModelHasBeenSet(false),
    m_modelSelectorHasBeenSet(false),
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

string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::ToJsonString() const
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

    if (m_modelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultModel.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSelector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelSelector.c_str(), allocator).Move(), allocator);
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


string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetModelServiceId() const
{
    return m_modelServiceId;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetModelServiceId(const string& _modelServiceId)
{
    m_modelServiceId = _modelServiceId;
    m_modelServiceIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::ModelServiceIdHasBeenSet() const
{
    return m_modelServiceIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetName() const
{
    return m_name;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetDefaultModel() const
{
    return m_defaultModel;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetDefaultModel(const string& _defaultModel)
{
    m_defaultModel = _defaultModel;
    m_defaultModelHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::DefaultModelHasBeenSet() const
{
    return m_defaultModelHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetModelSelector() const
{
    return m_modelSelector;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetModelSelector(const string& _modelSelector)
{
    m_modelSelector = _modelSelector;
    m_modelSelectorHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::ModelSelectorHasBeenSet() const
{
    return m_modelSelectorHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetEnableModelFallback() const
{
    return m_enableModelFallback;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetEnableModelFallback(const bool& _enableModelFallback)
{
    m_enableModelFallback = _enableModelFallback;
    m_enableModelFallbackHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::EnableModelFallbackHasBeenSet() const
{
    return m_enableModelFallbackHasBeenSet;
}

CloudNativeAPIGatewayLLMModelFallbackRule ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetModelFallbackRule() const
{
    return m_modelFallbackRule;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetModelFallbackRule(const CloudNativeAPIGatewayLLMModelFallbackRule& _modelFallbackRule)
{
    m_modelFallbackRule = _modelFallbackRule;
    m_modelFallbackRuleHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::ModelFallbackRuleHasBeenSet() const
{
    return m_modelFallbackRuleHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetEnableModelParamCheck() const
{
    return m_enableModelParamCheck;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetEnableModelParamCheck(const bool& _enableModelParamCheck)
{
    m_enableModelParamCheck = _enableModelParamCheck;
    m_enableModelParamCheckHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::EnableModelParamCheckHasBeenSet() const
{
    return m_enableModelParamCheckHasBeenSet;
}

CloudNativeAPIGatewayLLMModelParamCheckInfo ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetModelParamCheckRule() const
{
    return m_modelParamCheckRule;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetModelParamCheckRule(const CloudNativeAPIGatewayLLMModelParamCheckInfo& _modelParamCheckRule)
{
    m_modelParamCheckRule = _modelParamCheckRule;
    m_modelParamCheckRuleHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::ModelParamCheckRuleHasBeenSet() const
{
    return m_modelParamCheckRuleHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetDescription() const
{
    return m_description;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetUpstreamURL() const
{
    return m_upstreamURL;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetUpstreamURL(const string& _upstreamURL)
{
    m_upstreamURL = _upstreamURL;
    m_upstreamURLHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::UpstreamURLHasBeenSet() const
{
    return m_upstreamURLHasBeenSet;
}

int64_t ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetConnectTimeout(const int64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

int64_t ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetWriteTimeout() const
{
    return m_writeTimeout;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetWriteTimeout(const int64_t& _writeTimeout)
{
    m_writeTimeout = _writeTimeout;
    m_writeTimeoutHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::WriteTimeoutHasBeenSet() const
{
    return m_writeTimeoutHasBeenSet;
}

int64_t ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetReadTimeout() const
{
    return m_readTimeout;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetReadTimeout(const int64_t& _readTimeout)
{
    m_readTimeout = _readTimeout;
    m_readTimeoutHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::ReadTimeoutHasBeenSet() const
{
    return m_readTimeoutHasBeenSet;
}

int64_t ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetRetries() const
{
    return m_retries;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetRetries(const int64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetUpstreamUrlMode() const
{
    return m_upstreamUrlMode;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetUpstreamUrlMode(const string& _upstreamUrlMode)
{
    m_upstreamUrlMode = _upstreamUrlMode;
    m_upstreamUrlModeHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::UpstreamUrlModeHasBeenSet() const
{
    return m_upstreamUrlModeHasBeenSet;
}

string ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetSNI() const
{
    return m_sNI;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetSNI(const string& _sNI)
{
    m_sNI = _sNI;
    m_sNIHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SNIHasBeenSet() const
{
    return m_sNIHasBeenSet;
}

AIGWLLMQuotaLimit ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetQuotaLimit(const AIGWLLMQuotaLimit& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayLLMModelServiceRequest::GetTags() const
{
    return m_tags;
}

void ModifyCloudNativeAPIGatewayLLMModelServiceRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayLLMModelServiceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


