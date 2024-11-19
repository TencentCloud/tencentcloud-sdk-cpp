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

#include <tencentcloud/waf/v20180125/model/BatchOperateUserSignatureRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BatchOperateUserSignatureRulesRequest::BatchOperateUserSignatureRulesRequest() :
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleIdsHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_selectedAllHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string BatchOperateUserSignatureRulesRequest::ToJsonString() const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIds.begin(); itr != m_ruleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reason, allocator);
    }

    if (m_selectedAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selectedAll, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
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


string BatchOperateUserSignatureRulesRequest::GetDomain() const
{
    return m_domain;
}

void BatchOperateUserSignatureRulesRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BatchOperateUserSignatureRulesRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string BatchOperateUserSignatureRulesRequest::GetStatus() const
{
    return m_status;
}

void BatchOperateUserSignatureRulesRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchOperateUserSignatureRulesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> BatchOperateUserSignatureRulesRequest::GetRuleIds() const
{
    return m_ruleIds;
}

void BatchOperateUserSignatureRulesRequest::SetRuleIds(const vector<string>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool BatchOperateUserSignatureRulesRequest::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}

int64_t BatchOperateUserSignatureRulesRequest::GetReason() const
{
    return m_reason;
}

void BatchOperateUserSignatureRulesRequest::SetReason(const int64_t& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool BatchOperateUserSignatureRulesRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

bool BatchOperateUserSignatureRulesRequest::GetSelectedAll() const
{
    return m_selectedAll;
}

void BatchOperateUserSignatureRulesRequest::SetSelectedAll(const bool& _selectedAll)
{
    m_selectedAll = _selectedAll;
    m_selectedAllHasBeenSet = true;
}

bool BatchOperateUserSignatureRulesRequest::SelectedAllHasBeenSet() const
{
    return m_selectedAllHasBeenSet;
}

vector<FiltersItemNew> BatchOperateUserSignatureRulesRequest::GetFilters() const
{
    return m_filters;
}

void BatchOperateUserSignatureRulesRequest::SetFilters(const vector<FiltersItemNew>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool BatchOperateUserSignatureRulesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


