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

#include <tencentcloud/teo/v20220106/model/DescribeBotManagedRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeBotManagedRulesRequest::DescribeBotManagedRulesRequest() :
    m_zoneIdHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_perPageHasBeenSet(false),
    m_ruleTypeHasBeenSet(false)
{
}

string DescribeBotManagedRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entity.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_perPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_perPage, allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBotManagedRulesRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeBotManagedRulesRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeBotManagedRulesRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeBotManagedRulesRequest::GetEntity() const
{
    return m_entity;
}

void DescribeBotManagedRulesRequest::SetEntity(const string& _entity)
{
    m_entity = _entity;
    m_entityHasBeenSet = true;
}

bool DescribeBotManagedRulesRequest::EntityHasBeenSet() const
{
    return m_entityHasBeenSet;
}

int64_t DescribeBotManagedRulesRequest::GetPage() const
{
    return m_page;
}

void DescribeBotManagedRulesRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeBotManagedRulesRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeBotManagedRulesRequest::GetPerPage() const
{
    return m_perPage;
}

void DescribeBotManagedRulesRequest::SetPerPage(const int64_t& _perPage)
{
    m_perPage = _perPage;
    m_perPageHasBeenSet = true;
}

bool DescribeBotManagedRulesRequest::PerPageHasBeenSet() const
{
    return m_perPageHasBeenSet;
}

string DescribeBotManagedRulesRequest::GetRuleType() const
{
    return m_ruleType;
}

void DescribeBotManagedRulesRequest::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DescribeBotManagedRulesRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}


