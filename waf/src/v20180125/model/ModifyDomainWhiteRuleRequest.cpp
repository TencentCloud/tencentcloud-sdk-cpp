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

#include <tencentcloud/waf/v20180125/model/ModifyDomainWhiteRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyDomainWhiteRuleRequest::ModifyDomainWhiteRuleRequest() :
    m_domainHasBeenSet(false),
    m_idHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_functionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyDomainWhiteRuleRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_function.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDomainWhiteRuleRequest::GetDomain() const
{
    return m_domain;
}

void ModifyDomainWhiteRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyDomainWhiteRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifyDomainWhiteRuleRequest::GetId() const
{
    return m_id;
}

void ModifyDomainWhiteRuleRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDomainWhiteRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<uint64_t> ModifyDomainWhiteRuleRequest::GetRules() const
{
    return m_rules;
}

void ModifyDomainWhiteRuleRequest::SetRules(const vector<uint64_t>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ModifyDomainWhiteRuleRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string ModifyDomainWhiteRuleRequest::GetUrl() const
{
    return m_url;
}

void ModifyDomainWhiteRuleRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ModifyDomainWhiteRuleRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ModifyDomainWhiteRuleRequest::GetFunction() const
{
    return m_function;
}

void ModifyDomainWhiteRuleRequest::SetFunction(const string& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool ModifyDomainWhiteRuleRequest::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

uint64_t ModifyDomainWhiteRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyDomainWhiteRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyDomainWhiteRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


