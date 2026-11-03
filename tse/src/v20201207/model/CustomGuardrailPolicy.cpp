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

#include <tencentcloud/tse/v20201207/model/CustomGuardrailPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CustomGuardrailPolicy::CustomGuardrailPolicy() :
    m_policyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_effectiveEnabledHasBeenSet(false),
    m_serviceConfigHasBeenSet(false),
    m_authConfigHasBeenSet(false),
    m_decisionConfigHasBeenSet(false),
    m_behaviorConfigHasBeenSet(false),
    m_filterConfigHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_bindingsHasBeenSet(false),
    m_syncStatusHasBeenSet(false),
    m_syncErrorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("EffectiveEnabled") && !value["EffectiveEnabled"].IsNull())
    {
        if (!value["EffectiveEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.EffectiveEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveEnabled = value["EffectiveEnabled"].GetBool();
        m_effectiveEnabledHasBeenSet = true;
    }

    if (value.HasMember("ServiceConfig") && !value["ServiceConfig"].IsNull())
    {
        if (!value["ServiceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.ServiceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceConfig.Deserialize(value["ServiceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceConfigHasBeenSet = true;
    }

    if (value.HasMember("AuthConfig") && !value["AuthConfig"].IsNull())
    {
        if (!value["AuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.AuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authConfig.Deserialize(value["AuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authConfigHasBeenSet = true;
    }

    if (value.HasMember("DecisionConfig") && !value["DecisionConfig"].IsNull())
    {
        if (!value["DecisionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.DecisionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_decisionConfig.Deserialize(value["DecisionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_decisionConfigHasBeenSet = true;
    }

    if (value.HasMember("BehaviorConfig") && !value["BehaviorConfig"].IsNull())
    {
        if (!value["BehaviorConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.BehaviorConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_behaviorConfig.Deserialize(value["BehaviorConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_behaviorConfigHasBeenSet = true;
    }

    if (value.HasMember("FilterConfig") && !value["FilterConfig"].IsNull())
    {
        if (!value["FilterConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.FilterConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filterConfig.Deserialize(value["FilterConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filterConfigHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.Scope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scope.Deserialize(value["Scope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Bindings") && !value["Bindings"].IsNull())
    {
        if (!value["Bindings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.Bindings` is not array type"));

        const rapidjson::Value &tmpValue = value["Bindings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomGuardrailPolicyBinding item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindings.push_back(item);
        }
        m_bindingsHasBeenSet = true;
    }

    if (value.HasMember("SyncStatus") && !value["SyncStatus"].IsNull())
    {
        if (!value["SyncStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.SyncStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = string(value["SyncStatus"].GetString());
        m_syncStatusHasBeenSet = true;
    }

    if (value.HasMember("SyncError") && !value["SyncError"].IsNull())
    {
        if (!value["SyncError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.SyncError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncError = string(value["SyncError"].GetString());
        m_syncErrorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModificationTime") && !value["ModificationTime"].IsNull())
    {
        if (!value["ModificationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailPolicy.ModificationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modificationTime = string(value["ModificationTime"].GetString());
        m_modificationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_effectiveEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveEnabled, allocator);
    }

    if (m_serviceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_decisionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecisionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_decisionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_behaviorConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_behaviorConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_filterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filterConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bindingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bindings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindings.begin(); itr != m_bindings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_syncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_syncErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncError.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modificationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModificationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modificationTime.c_str(), allocator).Move(), allocator);
    }

}


string CustomGuardrailPolicy::GetPolicyId() const
{
    return m_policyId;
}

void CustomGuardrailPolicy::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CustomGuardrailPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CustomGuardrailPolicy::GetName() const
{
    return m_name;
}

void CustomGuardrailPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomGuardrailPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CustomGuardrailPolicy::GetDescription() const
{
    return m_description;
}

void CustomGuardrailPolicy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CustomGuardrailPolicy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CustomGuardrailPolicy::GetEnabled() const
{
    return m_enabled;
}

void CustomGuardrailPolicy::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CustomGuardrailPolicy::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

bool CustomGuardrailPolicy::GetEffectiveEnabled() const
{
    return m_effectiveEnabled;
}

void CustomGuardrailPolicy::SetEffectiveEnabled(const bool& _effectiveEnabled)
{
    m_effectiveEnabled = _effectiveEnabled;
    m_effectiveEnabledHasBeenSet = true;
}

bool CustomGuardrailPolicy::EffectiveEnabledHasBeenSet() const
{
    return m_effectiveEnabledHasBeenSet;
}

CustomGuardrailServiceConfig CustomGuardrailPolicy::GetServiceConfig() const
{
    return m_serviceConfig;
}

void CustomGuardrailPolicy::SetServiceConfig(const CustomGuardrailServiceConfig& _serviceConfig)
{
    m_serviceConfig = _serviceConfig;
    m_serviceConfigHasBeenSet = true;
}

bool CustomGuardrailPolicy::ServiceConfigHasBeenSet() const
{
    return m_serviceConfigHasBeenSet;
}

CustomGuardrailAuthConfig CustomGuardrailPolicy::GetAuthConfig() const
{
    return m_authConfig;
}

void CustomGuardrailPolicy::SetAuthConfig(const CustomGuardrailAuthConfig& _authConfig)
{
    m_authConfig = _authConfig;
    m_authConfigHasBeenSet = true;
}

bool CustomGuardrailPolicy::AuthConfigHasBeenSet() const
{
    return m_authConfigHasBeenSet;
}

CustomGuardrailDecisionConfig CustomGuardrailPolicy::GetDecisionConfig() const
{
    return m_decisionConfig;
}

void CustomGuardrailPolicy::SetDecisionConfig(const CustomGuardrailDecisionConfig& _decisionConfig)
{
    m_decisionConfig = _decisionConfig;
    m_decisionConfigHasBeenSet = true;
}

bool CustomGuardrailPolicy::DecisionConfigHasBeenSet() const
{
    return m_decisionConfigHasBeenSet;
}

CustomGuardrailBehaviorConfig CustomGuardrailPolicy::GetBehaviorConfig() const
{
    return m_behaviorConfig;
}

void CustomGuardrailPolicy::SetBehaviorConfig(const CustomGuardrailBehaviorConfig& _behaviorConfig)
{
    m_behaviorConfig = _behaviorConfig;
    m_behaviorConfigHasBeenSet = true;
}

bool CustomGuardrailPolicy::BehaviorConfigHasBeenSet() const
{
    return m_behaviorConfigHasBeenSet;
}

CustomGuardrailFilterConfig CustomGuardrailPolicy::GetFilterConfig() const
{
    return m_filterConfig;
}

void CustomGuardrailPolicy::SetFilterConfig(const CustomGuardrailFilterConfig& _filterConfig)
{
    m_filterConfig = _filterConfig;
    m_filterConfigHasBeenSet = true;
}

bool CustomGuardrailPolicy::FilterConfigHasBeenSet() const
{
    return m_filterConfigHasBeenSet;
}

CustomGuardrailScope CustomGuardrailPolicy::GetScope() const
{
    return m_scope;
}

void CustomGuardrailPolicy::SetScope(const CustomGuardrailScope& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool CustomGuardrailPolicy::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<CustomGuardrailPolicyBinding> CustomGuardrailPolicy::GetBindings() const
{
    return m_bindings;
}

void CustomGuardrailPolicy::SetBindings(const vector<CustomGuardrailPolicyBinding>& _bindings)
{
    m_bindings = _bindings;
    m_bindingsHasBeenSet = true;
}

bool CustomGuardrailPolicy::BindingsHasBeenSet() const
{
    return m_bindingsHasBeenSet;
}

string CustomGuardrailPolicy::GetSyncStatus() const
{
    return m_syncStatus;
}

void CustomGuardrailPolicy::SetSyncStatus(const string& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool CustomGuardrailPolicy::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

string CustomGuardrailPolicy::GetSyncError() const
{
    return m_syncError;
}

void CustomGuardrailPolicy::SetSyncError(const string& _syncError)
{
    m_syncError = _syncError;
    m_syncErrorHasBeenSet = true;
}

bool CustomGuardrailPolicy::SyncErrorHasBeenSet() const
{
    return m_syncErrorHasBeenSet;
}

string CustomGuardrailPolicy::GetCreateTime() const
{
    return m_createTime;
}

void CustomGuardrailPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CustomGuardrailPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CustomGuardrailPolicy::GetModificationTime() const
{
    return m_modificationTime;
}

void CustomGuardrailPolicy::SetModificationTime(const string& _modificationTime)
{
    m_modificationTime = _modificationTime;
    m_modificationTimeHasBeenSet = true;
}

bool CustomGuardrailPolicy::ModificationTimeHasBeenSet() const
{
    return m_modificationTimeHasBeenSet;
}

