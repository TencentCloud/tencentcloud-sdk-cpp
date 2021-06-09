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

#include <tencentcloud/live/v20180801/model/ModifyLiveDomainRefererRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveDomainRefererRequest::ModifyLiveDomainRefererRequest() :
    m_domainNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_allowEmptyHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

string ModifyLiveDomainRefererRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_allowEmptyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowEmpty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowEmpty, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rules.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLiveDomainRefererRequest::GetDomainName() const
{
    return m_domainName;
}

void ModifyLiveDomainRefererRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ModifyLiveDomainRefererRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t ModifyLiveDomainRefererRequest::GetEnable() const
{
    return m_enable;
}

void ModifyLiveDomainRefererRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyLiveDomainRefererRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t ModifyLiveDomainRefererRequest::GetType() const
{
    return m_type;
}

void ModifyLiveDomainRefererRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyLiveDomainRefererRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ModifyLiveDomainRefererRequest::GetAllowEmpty() const
{
    return m_allowEmpty;
}

void ModifyLiveDomainRefererRequest::SetAllowEmpty(const int64_t& _allowEmpty)
{
    m_allowEmpty = _allowEmpty;
    m_allowEmptyHasBeenSet = true;
}

bool ModifyLiveDomainRefererRequest::AllowEmptyHasBeenSet() const
{
    return m_allowEmptyHasBeenSet;
}

string ModifyLiveDomainRefererRequest::GetRules() const
{
    return m_rules;
}

void ModifyLiveDomainRefererRequest::SetRules(const string& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ModifyLiveDomainRefererRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}


