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

#include <tencentcloud/waf/v20180125/model/ModifyOwaspRuleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyOwaspRuleStatusRequest::ModifyOwaspRuleStatusRequest() :
    m_domainHasBeenSet(false),
    m_ruleStatusHasBeenSet(false),
    m_selectAllHasBeenSet(false),
    m_ruleIDsHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

string ModifyOwaspRuleStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleStatus, allocator);
    }

    if (m_selectAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selectAll, allocator);
    }

    if (m_ruleIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIDs.begin(); itr != m_ruleIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_typeId, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reason, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyOwaspRuleStatusRequest::GetDomain() const
{
    return m_domain;
}

void ModifyOwaspRuleStatusRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyOwaspRuleStatusRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t ModifyOwaspRuleStatusRequest::GetRuleStatus() const
{
    return m_ruleStatus;
}

void ModifyOwaspRuleStatusRequest::SetRuleStatus(const int64_t& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool ModifyOwaspRuleStatusRequest::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

bool ModifyOwaspRuleStatusRequest::GetSelectAll() const
{
    return m_selectAll;
}

void ModifyOwaspRuleStatusRequest::SetSelectAll(const bool& _selectAll)
{
    m_selectAll = _selectAll;
    m_selectAllHasBeenSet = true;
}

bool ModifyOwaspRuleStatusRequest::SelectAllHasBeenSet() const
{
    return m_selectAllHasBeenSet;
}

vector<string> ModifyOwaspRuleStatusRequest::GetRuleIDs() const
{
    return m_ruleIDs;
}

void ModifyOwaspRuleStatusRequest::SetRuleIDs(const vector<string>& _ruleIDs)
{
    m_ruleIDs = _ruleIDs;
    m_ruleIDsHasBeenSet = true;
}

bool ModifyOwaspRuleStatusRequest::RuleIDsHasBeenSet() const
{
    return m_ruleIDsHasBeenSet;
}

uint64_t ModifyOwaspRuleStatusRequest::GetTypeId() const
{
    return m_typeId;
}

void ModifyOwaspRuleStatusRequest::SetTypeId(const uint64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool ModifyOwaspRuleStatusRequest::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

int64_t ModifyOwaspRuleStatusRequest::GetReason() const
{
    return m_reason;
}

void ModifyOwaspRuleStatusRequest::SetReason(const int64_t& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ModifyOwaspRuleStatusRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}


