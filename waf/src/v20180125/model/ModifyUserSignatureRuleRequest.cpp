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

#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyUserSignatureRuleRequest::ModifyUserSignatureRuleRequest() :
    m_domainHasBeenSet(false),
    m_mainClassIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleIDHasBeenSet(false)
{
}

string ModifyUserSignatureRuleRequest::ToJsonString() const
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

    if (m_mainClassIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClassID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainClassID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleID.begin(); itr != m_ruleID.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserSignatureRuleRequest::GetDomain() const
{
    return m_domain;
}

void ModifyUserSignatureRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyUserSignatureRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyUserSignatureRuleRequest::GetMainClassID() const
{
    return m_mainClassID;
}

void ModifyUserSignatureRuleRequest::SetMainClassID(const string& _mainClassID)
{
    m_mainClassID = _mainClassID;
    m_mainClassIDHasBeenSet = true;
}

bool ModifyUserSignatureRuleRequest::MainClassIDHasBeenSet() const
{
    return m_mainClassIDHasBeenSet;
}

int64_t ModifyUserSignatureRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyUserSignatureRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyUserSignatureRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<ReqUserRule> ModifyUserSignatureRuleRequest::GetRuleID() const
{
    return m_ruleID;
}

void ModifyUserSignatureRuleRequest::SetRuleID(const vector<ReqUserRule>& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool ModifyUserSignatureRuleRequest::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}


