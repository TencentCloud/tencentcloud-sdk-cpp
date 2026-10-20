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

#include <tencentcloud/waf/v20180125/model/ModifyLLMContentRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyLLMContentRuleRequest::ModifyLLMContentRuleRequest() :
    m_nameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_ruleItemHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_responseTextHasBeenSet(false),
    m_sessionAppliedHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_contentLogicalOpHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_replyTypeHasBeenSet(false),
    m_customReplyRuleIdHasBeenSet(false),
    m_modalTypeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_appliedModulesHasBeenSet(false),
    m_riskLevelHasBeenSet(false)
{
}

string ModifyLLMContentRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkType, allocator);
    }

    if (m_ruleItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleItem.begin(); itr != m_ruleItem.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_options.begin(); itr != m_options.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_responseTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_responseText.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionAppliedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionApplied";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sessionApplied.begin(); itr != m_sessionApplied.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageId, allocator);
    }

    if (m_contentLogicalOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentLogicalOp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentLogicalOp.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_replyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replyType, allocator);
    }

    if (m_customReplyRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomReplyRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customReplyRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_modalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modalType, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appliedModulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppliedModules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appliedModules.begin(); itr != m_appliedModules.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLLMContentRuleRequest::GetName() const
{
    return m_name;
}

void ModifyLLMContentRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyLLMContentRuleRequest::GetPriority() const
{
    return m_priority;
}

void ModifyLLMContentRuleRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

uint64_t ModifyLLMContentRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyLLMContentRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyLLMContentRuleRequest::GetCheckType() const
{
    return m_checkType;
}

void ModifyLLMContentRuleRequest::SetCheckType(const uint64_t& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

vector<RuleItem> ModifyLLMContentRuleRequest::GetRuleItem() const
{
    return m_ruleItem;
}

void ModifyLLMContentRuleRequest::SetRuleItem(const vector<RuleItem>& _ruleItem)
{
    m_ruleItem = _ruleItem;
    m_ruleItemHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::RuleItemHasBeenSet() const
{
    return m_ruleItemHasBeenSet;
}

vector<LLMOptionsItem> ModifyLLMContentRuleRequest::GetOptions() const
{
    return m_options;
}

void ModifyLLMContentRuleRequest::SetOptions(const vector<LLMOptionsItem>& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

string ModifyLLMContentRuleRequest::GetDomain() const
{
    return m_domain;
}

void ModifyLLMContentRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyLLMContentRuleRequest::GetActionType() const
{
    return m_actionType;
}

void ModifyLLMContentRuleRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string ModifyLLMContentRuleRequest::GetResponseText() const
{
    return m_responseText;
}

void ModifyLLMContentRuleRequest::SetResponseText(const string& _responseText)
{
    m_responseText = _responseText;
    m_responseTextHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::ResponseTextHasBeenSet() const
{
    return m_responseTextHasBeenSet;
}

vector<string> ModifyLLMContentRuleRequest::GetSessionApplied() const
{
    return m_sessionApplied;
}

void ModifyLLMContentRuleRequest::SetSessionApplied(const vector<string>& _sessionApplied)
{
    m_sessionApplied = _sessionApplied;
    m_sessionAppliedHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::SessionAppliedHasBeenSet() const
{
    return m_sessionAppliedHasBeenSet;
}

string ModifyLLMContentRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyLLMContentRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t ModifyLLMContentRuleRequest::GetPageId() const
{
    return m_pageId;
}

void ModifyLLMContentRuleRequest::SetPageId(const uint64_t& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string ModifyLLMContentRuleRequest::GetContentLogicalOp() const
{
    return m_contentLogicalOp;
}

void ModifyLLMContentRuleRequest::SetContentLogicalOp(const string& _contentLogicalOp)
{
    m_contentLogicalOp = _contentLogicalOp;
    m_contentLogicalOpHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::ContentLogicalOpHasBeenSet() const
{
    return m_contentLogicalOpHasBeenSet;
}

string ModifyLLMContentRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyLLMContentRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ModifyLLMContentRuleRequest::GetReplyType() const
{
    return m_replyType;
}

void ModifyLLMContentRuleRequest::SetReplyType(const uint64_t& _replyType)
{
    m_replyType = _replyType;
    m_replyTypeHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::ReplyTypeHasBeenSet() const
{
    return m_replyTypeHasBeenSet;
}

string ModifyLLMContentRuleRequest::GetCustomReplyRuleId() const
{
    return m_customReplyRuleId;
}

void ModifyLLMContentRuleRequest::SetCustomReplyRuleId(const string& _customReplyRuleId)
{
    m_customReplyRuleId = _customReplyRuleId;
    m_customReplyRuleIdHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::CustomReplyRuleIdHasBeenSet() const
{
    return m_customReplyRuleIdHasBeenSet;
}

uint64_t ModifyLLMContentRuleRequest::GetModalType() const
{
    return m_modalType;
}

void ModifyLLMContentRuleRequest::SetModalType(const uint64_t& _modalType)
{
    m_modalType = _modalType;
    m_modalTypeHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::ModalTypeHasBeenSet() const
{
    return m_modalTypeHasBeenSet;
}

string ModifyLLMContentRuleRequest::GetCategory() const
{
    return m_category;
}

void ModifyLLMContentRuleRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

vector<string> ModifyLLMContentRuleRequest::GetDomains() const
{
    return m_domains;
}

void ModifyLLMContentRuleRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<uint64_t> ModifyLLMContentRuleRequest::GetAppliedModules() const
{
    return m_appliedModules;
}

void ModifyLLMContentRuleRequest::SetAppliedModules(const vector<uint64_t>& _appliedModules)
{
    m_appliedModules = _appliedModules;
    m_appliedModulesHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::AppliedModulesHasBeenSet() const
{
    return m_appliedModulesHasBeenSet;
}

string ModifyLLMContentRuleRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void ModifyLLMContentRuleRequest::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ModifyLLMContentRuleRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}


