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

#include <tencentcloud/vpc/v20170312/model/ModifyIp6RuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyIp6RuleRequest::ModifyIp6RuleRequest() :
    m_ip6TranslatorIdHasBeenSet(false),
    m_ip6RuleIdHasBeenSet(false),
    m_ip6RuleNameHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false)
{
}

string ModifyIp6RuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ip6TranslatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6TranslatorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip6TranslatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_ip6RuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip6RuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ip6RuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip6RuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vport, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyIp6RuleRequest::GetIp6TranslatorId() const
{
    return m_ip6TranslatorId;
}

void ModifyIp6RuleRequest::SetIp6TranslatorId(const string& _ip6TranslatorId)
{
    m_ip6TranslatorId = _ip6TranslatorId;
    m_ip6TranslatorIdHasBeenSet = true;
}

bool ModifyIp6RuleRequest::Ip6TranslatorIdHasBeenSet() const
{
    return m_ip6TranslatorIdHasBeenSet;
}

string ModifyIp6RuleRequest::GetIp6RuleId() const
{
    return m_ip6RuleId;
}

void ModifyIp6RuleRequest::SetIp6RuleId(const string& _ip6RuleId)
{
    m_ip6RuleId = _ip6RuleId;
    m_ip6RuleIdHasBeenSet = true;
}

bool ModifyIp6RuleRequest::Ip6RuleIdHasBeenSet() const
{
    return m_ip6RuleIdHasBeenSet;
}

string ModifyIp6RuleRequest::GetIp6RuleName() const
{
    return m_ip6RuleName;
}

void ModifyIp6RuleRequest::SetIp6RuleName(const string& _ip6RuleName)
{
    m_ip6RuleName = _ip6RuleName;
    m_ip6RuleNameHasBeenSet = true;
}

bool ModifyIp6RuleRequest::Ip6RuleNameHasBeenSet() const
{
    return m_ip6RuleNameHasBeenSet;
}

string ModifyIp6RuleRequest::GetVip() const
{
    return m_vip;
}

void ModifyIp6RuleRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ModifyIp6RuleRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t ModifyIp6RuleRequest::GetVport() const
{
    return m_vport;
}

void ModifyIp6RuleRequest::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool ModifyIp6RuleRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}


