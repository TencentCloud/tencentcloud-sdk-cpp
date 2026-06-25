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

#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CloudNativeAPIGatewayLLMModelService::CloudNativeAPIGatewayLLMModelService() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_modelProviderHasBeenSet(false),
    m_modelProtocolHasBeenSet(false),
    m_upstreamURLHasBeenSet(false),
    m_modelSelectorHasBeenSet(false),
    m_defaultModelHasBeenSet(false),
    m_enableModelFallbackHasBeenSet(false),
    m_modelFallbackRuleHasBeenSet(false),
    m_enableModelParamCheckHasBeenSet(false),
    m_modelParamCheckRuleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_writeTimeoutHasBeenSet(false),
    m_readTimeoutHasBeenSet(false),
    m_retriesHasBeenSet(false),
    m_upstreamUrlModeHasBeenSet(false),
    m_sNIHasBeenSet(false),
    m_quotaLimitHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_secretKeyIdsHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayLLMModelService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelProvider") && !value["ModelProvider"].IsNull())
    {
        if (!value["ModelProvider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.ModelProvider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelProvider = string(value["ModelProvider"].GetString());
        m_modelProviderHasBeenSet = true;
    }

    if (value.HasMember("ModelProtocol") && !value["ModelProtocol"].IsNull())
    {
        if (!value["ModelProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.ModelProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelProtocol = string(value["ModelProtocol"].GetString());
        m_modelProtocolHasBeenSet = true;
    }

    if (value.HasMember("UpstreamURL") && !value["UpstreamURL"].IsNull())
    {
        if (!value["UpstreamURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.UpstreamURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamURL = string(value["UpstreamURL"].GetString());
        m_upstreamURLHasBeenSet = true;
    }

    if (value.HasMember("ModelSelector") && !value["ModelSelector"].IsNull())
    {
        if (!value["ModelSelector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.ModelSelector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelSelector = string(value["ModelSelector"].GetString());
        m_modelSelectorHasBeenSet = true;
    }

    if (value.HasMember("DefaultModel") && !value["DefaultModel"].IsNull())
    {
        if (!value["DefaultModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.DefaultModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultModel = string(value["DefaultModel"].GetString());
        m_defaultModelHasBeenSet = true;
    }

    if (value.HasMember("EnableModelFallback") && !value["EnableModelFallback"].IsNull())
    {
        if (!value["EnableModelFallback"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.EnableModelFallback` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableModelFallback = value["EnableModelFallback"].GetBool();
        m_enableModelFallbackHasBeenSet = true;
    }

    if (value.HasMember("ModelFallbackRule") && !value["ModelFallbackRule"].IsNull())
    {
        if (!value["ModelFallbackRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.ModelFallbackRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelFallbackRule.Deserialize(value["ModelFallbackRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelFallbackRuleHasBeenSet = true;
    }

    if (value.HasMember("EnableModelParamCheck") && !value["EnableModelParamCheck"].IsNull())
    {
        if (!value["EnableModelParamCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.EnableModelParamCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableModelParamCheck = value["EnableModelParamCheck"].GetBool();
        m_enableModelParamCheckHasBeenSet = true;
    }

    if (value.HasMember("ModelParamCheckRule") && !value["ModelParamCheckRule"].IsNull())
    {
        if (!value["ModelParamCheckRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.ModelParamCheckRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelParamCheckRule.Deserialize(value["ModelParamCheckRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelParamCheckRuleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.ConnectTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetInt64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("WriteTimeout") && !value["WriteTimeout"].IsNull())
    {
        if (!value["WriteTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.WriteTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_writeTimeout = value["WriteTimeout"].GetInt64();
        m_writeTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ReadTimeout") && !value["ReadTimeout"].IsNull())
    {
        if (!value["ReadTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.ReadTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readTimeout = value["ReadTimeout"].GetInt64();
        m_readTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Retries") && !value["Retries"].IsNull())
    {
        if (!value["Retries"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.Retries` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retries = value["Retries"].GetInt64();
        m_retriesHasBeenSet = true;
    }

    if (value.HasMember("UpstreamUrlMode") && !value["UpstreamUrlMode"].IsNull())
    {
        if (!value["UpstreamUrlMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.UpstreamUrlMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamUrlMode = string(value["UpstreamUrlMode"].GetString());
        m_upstreamUrlModeHasBeenSet = true;
    }

    if (value.HasMember("SNI") && !value["SNI"].IsNull())
    {
        if (!value["SNI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.SNI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sNI = string(value["SNI"].GetString());
        m_sNIHasBeenSet = true;
    }

    if (value.HasMember("QuotaLimit") && !value["QuotaLimit"].IsNull())
    {
        if (!value["QuotaLimit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.QuotaLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quotaLimit.Deserialize(value["QuotaLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quotaLimitHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("SecretKeyIds") && !value["SecretKeyIds"].IsNull())
    {
        if (!value["SecretKeyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelService.SecretKeyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecretKeyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_secretKeyIds.push_back((*itr).GetString());
        }
        m_secretKeyIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayLLMModelService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProvider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamURL.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelSelector.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultModel.c_str(), allocator).Move(), allocator);
    }

    if (m_enableModelFallbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableModelFallback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableModelFallback, allocator);
    }

    if (m_modelFallbackRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelFallbackRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelFallbackRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableModelParamCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableModelParamCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableModelParamCheck, allocator);
    }

    if (m_modelParamCheckRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelParamCheckRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelParamCheckRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_writeTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeTimeout, allocator);
    }

    if (m_readTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readTimeout, allocator);
    }

    if (m_retriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retries, allocator);
    }

    if (m_upstreamUrlModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamUrlMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamUrlMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sNIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SNI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sNI.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quotaLimit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_secretKeyIds.begin(); itr != m_secretKeyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CloudNativeAPIGatewayLLMModelService::GetId() const
{
    return m_id;
}

void CloudNativeAPIGatewayLLMModelService::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetName() const
{
    return m_name;
}

void CloudNativeAPIGatewayLLMModelService::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetCreateTime() const
{
    return m_createTime;
}

void CloudNativeAPIGatewayLLMModelService::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetModifyTime() const
{
    return m_modifyTime;
}

void CloudNativeAPIGatewayLLMModelService::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetServiceType() const
{
    return m_serviceType;
}

void CloudNativeAPIGatewayLLMModelService::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetModelProvider() const
{
    return m_modelProvider;
}

void CloudNativeAPIGatewayLLMModelService::SetModelProvider(const string& _modelProvider)
{
    m_modelProvider = _modelProvider;
    m_modelProviderHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::ModelProviderHasBeenSet() const
{
    return m_modelProviderHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetModelProtocol() const
{
    return m_modelProtocol;
}

void CloudNativeAPIGatewayLLMModelService::SetModelProtocol(const string& _modelProtocol)
{
    m_modelProtocol = _modelProtocol;
    m_modelProtocolHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::ModelProtocolHasBeenSet() const
{
    return m_modelProtocolHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetUpstreamURL() const
{
    return m_upstreamURL;
}

void CloudNativeAPIGatewayLLMModelService::SetUpstreamURL(const string& _upstreamURL)
{
    m_upstreamURL = _upstreamURL;
    m_upstreamURLHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::UpstreamURLHasBeenSet() const
{
    return m_upstreamURLHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetModelSelector() const
{
    return m_modelSelector;
}

void CloudNativeAPIGatewayLLMModelService::SetModelSelector(const string& _modelSelector)
{
    m_modelSelector = _modelSelector;
    m_modelSelectorHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::ModelSelectorHasBeenSet() const
{
    return m_modelSelectorHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetDefaultModel() const
{
    return m_defaultModel;
}

void CloudNativeAPIGatewayLLMModelService::SetDefaultModel(const string& _defaultModel)
{
    m_defaultModel = _defaultModel;
    m_defaultModelHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::DefaultModelHasBeenSet() const
{
    return m_defaultModelHasBeenSet;
}

bool CloudNativeAPIGatewayLLMModelService::GetEnableModelFallback() const
{
    return m_enableModelFallback;
}

void CloudNativeAPIGatewayLLMModelService::SetEnableModelFallback(const bool& _enableModelFallback)
{
    m_enableModelFallback = _enableModelFallback;
    m_enableModelFallbackHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::EnableModelFallbackHasBeenSet() const
{
    return m_enableModelFallbackHasBeenSet;
}

CloudNativeAPIGatewayLLMModelFallbackRule CloudNativeAPIGatewayLLMModelService::GetModelFallbackRule() const
{
    return m_modelFallbackRule;
}

void CloudNativeAPIGatewayLLMModelService::SetModelFallbackRule(const CloudNativeAPIGatewayLLMModelFallbackRule& _modelFallbackRule)
{
    m_modelFallbackRule = _modelFallbackRule;
    m_modelFallbackRuleHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::ModelFallbackRuleHasBeenSet() const
{
    return m_modelFallbackRuleHasBeenSet;
}

bool CloudNativeAPIGatewayLLMModelService::GetEnableModelParamCheck() const
{
    return m_enableModelParamCheck;
}

void CloudNativeAPIGatewayLLMModelService::SetEnableModelParamCheck(const bool& _enableModelParamCheck)
{
    m_enableModelParamCheck = _enableModelParamCheck;
    m_enableModelParamCheckHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::EnableModelParamCheckHasBeenSet() const
{
    return m_enableModelParamCheckHasBeenSet;
}

CloudNativeAPIGatewayLLMModelParamCheckInfo CloudNativeAPIGatewayLLMModelService::GetModelParamCheckRule() const
{
    return m_modelParamCheckRule;
}

void CloudNativeAPIGatewayLLMModelService::SetModelParamCheckRule(const CloudNativeAPIGatewayLLMModelParamCheckInfo& _modelParamCheckRule)
{
    m_modelParamCheckRule = _modelParamCheckRule;
    m_modelParamCheckRuleHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::ModelParamCheckRuleHasBeenSet() const
{
    return m_modelParamCheckRuleHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetDescription() const
{
    return m_description;
}

void CloudNativeAPIGatewayLLMModelService::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CloudNativeAPIGatewayLLMModelService::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void CloudNativeAPIGatewayLLMModelService::SetConnectTimeout(const int64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

int64_t CloudNativeAPIGatewayLLMModelService::GetWriteTimeout() const
{
    return m_writeTimeout;
}

void CloudNativeAPIGatewayLLMModelService::SetWriteTimeout(const int64_t& _writeTimeout)
{
    m_writeTimeout = _writeTimeout;
    m_writeTimeoutHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::WriteTimeoutHasBeenSet() const
{
    return m_writeTimeoutHasBeenSet;
}

int64_t CloudNativeAPIGatewayLLMModelService::GetReadTimeout() const
{
    return m_readTimeout;
}

void CloudNativeAPIGatewayLLMModelService::SetReadTimeout(const int64_t& _readTimeout)
{
    m_readTimeout = _readTimeout;
    m_readTimeoutHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::ReadTimeoutHasBeenSet() const
{
    return m_readTimeoutHasBeenSet;
}

int64_t CloudNativeAPIGatewayLLMModelService::GetRetries() const
{
    return m_retries;
}

void CloudNativeAPIGatewayLLMModelService::SetRetries(const int64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetUpstreamUrlMode() const
{
    return m_upstreamUrlMode;
}

void CloudNativeAPIGatewayLLMModelService::SetUpstreamUrlMode(const string& _upstreamUrlMode)
{
    m_upstreamUrlMode = _upstreamUrlMode;
    m_upstreamUrlModeHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::UpstreamUrlModeHasBeenSet() const
{
    return m_upstreamUrlModeHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetSNI() const
{
    return m_sNI;
}

void CloudNativeAPIGatewayLLMModelService::SetSNI(const string& _sNI)
{
    m_sNI = _sNI;
    m_sNIHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::SNIHasBeenSet() const
{
    return m_sNIHasBeenSet;
}

AIGWLLMQuotaLimit CloudNativeAPIGatewayLLMModelService::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void CloudNativeAPIGatewayLLMModelService::SetQuotaLimit(const AIGWLLMQuotaLimit& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelService::GetTags() const
{
    return m_tags;
}

void CloudNativeAPIGatewayLLMModelService::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> CloudNativeAPIGatewayLLMModelService::GetSecretKeyIds() const
{
    return m_secretKeyIds;
}

void CloudNativeAPIGatewayLLMModelService::SetSecretKeyIds(const vector<string>& _secretKeyIds)
{
    m_secretKeyIds = _secretKeyIds;
    m_secretKeyIdsHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelService::SecretKeyIdsHasBeenSet() const
{
    return m_secretKeyIdsHasBeenSet;
}

