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

#include <tencentcloud/waf/v20180125/model/DeleteRateLimitsV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DeleteRateLimitsV2Request::DeleteRateLimitsV2Request() :
    m_domainHasBeenSet(false),
    m_limitRuleIdsHasBeenSet(false)
{
}

string DeleteRateLimitsV2Request::ToJsonString() const
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

    if (m_limitRuleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitRuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_limitRuleIds.begin(); itr != m_limitRuleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRateLimitsV2Request::GetDomain() const
{
    return m_domain;
}

void DeleteRateLimitsV2Request::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteRateLimitsV2Request::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<int64_t> DeleteRateLimitsV2Request::GetLimitRuleIds() const
{
    return m_limitRuleIds;
}

void DeleteRateLimitsV2Request::SetLimitRuleIds(const vector<int64_t>& _limitRuleIds)
{
    m_limitRuleIds = _limitRuleIds;
    m_limitRuleIdsHasBeenSet = true;
}

bool DeleteRateLimitsV2Request::LimitRuleIdsHasBeenSet() const
{
    return m_limitRuleIdsHasBeenSet;
}


