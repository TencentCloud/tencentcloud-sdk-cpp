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

#include <tencentcloud/adp/v20260520/model/DocModifyFields.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocModifyFields::DocModifyFields() :
    m_categoryIdHasBeenSet(false),
    m_effectiveDomainHasBeenSet(false),
    m_expirationPolicyHasBeenSet(false),
    m_externalLinkHasBeenSet(false),
    m_labelRefListHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parseConfigHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_updatePeriodHasBeenSet(false),
    m_userAccessConfigHasBeenSet(false)
{
}

CoreInternalOutcome DocModifyFields::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("EffectiveDomain") && !value["EffectiveDomain"].IsNull())
    {
        if (!value["EffectiveDomain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.EffectiveDomain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveDomain = value["EffectiveDomain"].GetInt64();
        m_effectiveDomainHasBeenSet = true;
    }

    if (value.HasMember("ExpirationPolicy") && !value["ExpirationPolicy"].IsNull())
    {
        if (!value["ExpirationPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.ExpirationPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expirationPolicy.Deserialize(value["ExpirationPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expirationPolicyHasBeenSet = true;
    }

    if (value.HasMember("ExternalLink") && !value["ExternalLink"].IsNull())
    {
        if (!value["ExternalLink"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.ExternalLink` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externalLink.Deserialize(value["ExternalLink"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalLinkHasBeenSet = true;
    }

    if (value.HasMember("LabelRefList") && !value["LabelRefList"].IsNull())
    {
        if (!value["LabelRefList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.LabelRefList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelRefList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelRefIdentity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelRefList.push_back(item);
        }
        m_labelRefListHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParseConfig") && !value["ParseConfig"].IsNull())
    {
        if (!value["ParseConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.ParseConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parseConfig.Deserialize(value["ParseConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parseConfigHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.Switch` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_switch.Deserialize(value["Switch"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_switchHasBeenSet = true;
    }

    if (value.HasMember("UpdatePeriod") && !value["UpdatePeriod"].IsNull())
    {
        if (!value["UpdatePeriod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.UpdatePeriod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_updatePeriod.Deserialize(value["UpdatePeriod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_updatePeriodHasBeenSet = true;
    }

    if (value.HasMember("UserAccessConfig") && !value["UserAccessConfig"].IsNull())
    {
        if (!value["UserAccessConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocModifyFields.UserAccessConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userAccessConfig.Deserialize(value["UserAccessConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userAccessConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocModifyFields::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveDomain, allocator);
    }

    if (m_expirationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expirationPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalLink.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_labelRefListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelRefList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelRefList.begin(); itr != m_labelRefList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parseConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParseConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parseConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_switch.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updatePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updatePeriod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userAccessConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccessConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userAccessConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DocModifyFields::GetCategoryId() const
{
    return m_categoryId;
}

void DocModifyFields::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DocModifyFields::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t DocModifyFields::GetEffectiveDomain() const
{
    return m_effectiveDomain;
}

void DocModifyFields::SetEffectiveDomain(const int64_t& _effectiveDomain)
{
    m_effectiveDomain = _effectiveDomain;
    m_effectiveDomainHasBeenSet = true;
}

bool DocModifyFields::EffectiveDomainHasBeenSet() const
{
    return m_effectiveDomainHasBeenSet;
}

ExpirationPolicy DocModifyFields::GetExpirationPolicy() const
{
    return m_expirationPolicy;
}

void DocModifyFields::SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy)
{
    m_expirationPolicy = _expirationPolicy;
    m_expirationPolicyHasBeenSet = true;
}

bool DocModifyFields::ExpirationPolicyHasBeenSet() const
{
    return m_expirationPolicyHasBeenSet;
}

DocExternalLink DocModifyFields::GetExternalLink() const
{
    return m_externalLink;
}

void DocModifyFields::SetExternalLink(const DocExternalLink& _externalLink)
{
    m_externalLink = _externalLink;
    m_externalLinkHasBeenSet = true;
}

bool DocModifyFields::ExternalLinkHasBeenSet() const
{
    return m_externalLinkHasBeenSet;
}

vector<LabelRefIdentity> DocModifyFields::GetLabelRefList() const
{
    return m_labelRefList;
}

void DocModifyFields::SetLabelRefList(const vector<LabelRefIdentity>& _labelRefList)
{
    m_labelRefList = _labelRefList;
    m_labelRefListHasBeenSet = true;
}

bool DocModifyFields::LabelRefListHasBeenSet() const
{
    return m_labelRefListHasBeenSet;
}

string DocModifyFields::GetName() const
{
    return m_name;
}

void DocModifyFields::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DocModifyFields::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

DocParseConfig DocModifyFields::GetParseConfig() const
{
    return m_parseConfig;
}

void DocModifyFields::SetParseConfig(const DocParseConfig& _parseConfig)
{
    m_parseConfig = _parseConfig;
    m_parseConfigHasBeenSet = true;
}

bool DocModifyFields::ParseConfigHasBeenSet() const
{
    return m_parseConfigHasBeenSet;
}

DocSwitch DocModifyFields::GetSwitch() const
{
    return m_switch;
}

void DocModifyFields::SetSwitch(const DocSwitch& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DocModifyFields::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

DocUpdatePeriod DocModifyFields::GetUpdatePeriod() const
{
    return m_updatePeriod;
}

void DocModifyFields::SetUpdatePeriod(const DocUpdatePeriod& _updatePeriod)
{
    m_updatePeriod = _updatePeriod;
    m_updatePeriodHasBeenSet = true;
}

bool DocModifyFields::UpdatePeriodHasBeenSet() const
{
    return m_updatePeriodHasBeenSet;
}

UserAccessConfig DocModifyFields::GetUserAccessConfig() const
{
    return m_userAccessConfig;
}

void DocModifyFields::SetUserAccessConfig(const UserAccessConfig& _userAccessConfig)
{
    m_userAccessConfig = _userAccessConfig;
    m_userAccessConfigHasBeenSet = true;
}

bool DocModifyFields::UserAccessConfigHasBeenSet() const
{
    return m_userAccessConfigHasBeenSet;
}

