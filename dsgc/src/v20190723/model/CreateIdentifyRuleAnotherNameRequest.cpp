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

#include <tencentcloud/dsgc/v20190723/model/CreateIdentifyRuleAnotherNameRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateIdentifyRuleAnotherNameRequest::CreateIdentifyRuleAnotherNameRequest() :
    m_dspaIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_anotherNameHasBeenSet(false),
    m_aliasRuleIdHasBeenSet(false),
    m_aliasRuleNameHasBeenSet(false)
{
}

string CreateIdentifyRuleAnotherNameRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_anotherNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnotherName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anotherName.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aliasRuleId, allocator);
    }

    if (m_aliasRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasRuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aliasRuleName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateIdentifyRuleAnotherNameRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateIdentifyRuleAnotherNameRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateIdentifyRuleAnotherNameRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t CreateIdentifyRuleAnotherNameRequest::GetComplianceId() const
{
    return m_complianceId;
}

void CreateIdentifyRuleAnotherNameRequest::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool CreateIdentifyRuleAnotherNameRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

int64_t CreateIdentifyRuleAnotherNameRequest::GetCategoryId() const
{
    return m_categoryId;
}

void CreateIdentifyRuleAnotherNameRequest::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CreateIdentifyRuleAnotherNameRequest::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

int64_t CreateIdentifyRuleAnotherNameRequest::GetRuleId() const
{
    return m_ruleId;
}

void CreateIdentifyRuleAnotherNameRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreateIdentifyRuleAnotherNameRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CreateIdentifyRuleAnotherNameRequest::GetRuleName() const
{
    return m_ruleName;
}

void CreateIdentifyRuleAnotherNameRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CreateIdentifyRuleAnotherNameRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string CreateIdentifyRuleAnotherNameRequest::GetAnotherName() const
{
    return m_anotherName;
}

void CreateIdentifyRuleAnotherNameRequest::SetAnotherName(const string& _anotherName)
{
    m_anotherName = _anotherName;
    m_anotherNameHasBeenSet = true;
}

bool CreateIdentifyRuleAnotherNameRequest::AnotherNameHasBeenSet() const
{
    return m_anotherNameHasBeenSet;
}

int64_t CreateIdentifyRuleAnotherNameRequest::GetAliasRuleId() const
{
    return m_aliasRuleId;
}

void CreateIdentifyRuleAnotherNameRequest::SetAliasRuleId(const int64_t& _aliasRuleId)
{
    m_aliasRuleId = _aliasRuleId;
    m_aliasRuleIdHasBeenSet = true;
}

bool CreateIdentifyRuleAnotherNameRequest::AliasRuleIdHasBeenSet() const
{
    return m_aliasRuleIdHasBeenSet;
}

string CreateIdentifyRuleAnotherNameRequest::GetAliasRuleName() const
{
    return m_aliasRuleName;
}

void CreateIdentifyRuleAnotherNameRequest::SetAliasRuleName(const string& _aliasRuleName)
{
    m_aliasRuleName = _aliasRuleName;
    m_aliasRuleNameHasBeenSet = true;
}

bool CreateIdentifyRuleAnotherNameRequest::AliasRuleNameHasBeenSet() const
{
    return m_aliasRuleNameHasBeenSet;
}


