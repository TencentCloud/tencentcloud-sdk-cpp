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

#include <tencentcloud/cfw/v20190904/model/PolicyRoutePreCheckReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

PolicyRoutePreCheckReport::PolicyRoutePreCheckReport() :
    m_nextHopCountHasBeenSet(false),
    m_nextHopLimitHasBeenSet(false),
    m_matchRuleCountHasBeenSet(false),
    m_matchRuleLimitHasBeenSet(false),
    m_cloudExistingRuleCountHasBeenSet(false),
    m_cloudExistingNextHopCountHasBeenSet(false),
    m_availableRuleQuotaHasBeenSet(false),
    m_availableNextHopQuotaHasBeenSet(false)
{
}

CoreInternalOutcome PolicyRoutePreCheckReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NextHopCount") && !value["NextHopCount"].IsNull())
    {
        if (!value["NextHopCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRoutePreCheckReport.NextHopCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nextHopCount = value["NextHopCount"].GetInt64();
        m_nextHopCountHasBeenSet = true;
    }

    if (value.HasMember("NextHopLimit") && !value["NextHopLimit"].IsNull())
    {
        if (!value["NextHopLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRoutePreCheckReport.NextHopLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nextHopLimit = value["NextHopLimit"].GetInt64();
        m_nextHopLimitHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleCount") && !value["MatchRuleCount"].IsNull())
    {
        if (!value["MatchRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRoutePreCheckReport.MatchRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleCount = value["MatchRuleCount"].GetInt64();
        m_matchRuleCountHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleLimit") && !value["MatchRuleLimit"].IsNull())
    {
        if (!value["MatchRuleLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRoutePreCheckReport.MatchRuleLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleLimit = value["MatchRuleLimit"].GetInt64();
        m_matchRuleLimitHasBeenSet = true;
    }

    if (value.HasMember("CloudExistingRuleCount") && !value["CloudExistingRuleCount"].IsNull())
    {
        if (!value["CloudExistingRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRoutePreCheckReport.CloudExistingRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudExistingRuleCount = value["CloudExistingRuleCount"].GetInt64();
        m_cloudExistingRuleCountHasBeenSet = true;
    }

    if (value.HasMember("CloudExistingNextHopCount") && !value["CloudExistingNextHopCount"].IsNull())
    {
        if (!value["CloudExistingNextHopCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRoutePreCheckReport.CloudExistingNextHopCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudExistingNextHopCount = value["CloudExistingNextHopCount"].GetInt64();
        m_cloudExistingNextHopCountHasBeenSet = true;
    }

    if (value.HasMember("AvailableRuleQuota") && !value["AvailableRuleQuota"].IsNull())
    {
        if (!value["AvailableRuleQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRoutePreCheckReport.AvailableRuleQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableRuleQuota = value["AvailableRuleQuota"].GetInt64();
        m_availableRuleQuotaHasBeenSet = true;
    }

    if (value.HasMember("AvailableNextHopQuota") && !value["AvailableNextHopQuota"].IsNull())
    {
        if (!value["AvailableNextHopQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRoutePreCheckReport.AvailableNextHopQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableNextHopQuota = value["AvailableNextHopQuota"].GetInt64();
        m_availableNextHopQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyRoutePreCheckReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nextHopCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextHopCount, allocator);
    }

    if (m_nextHopLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextHopLimit, allocator);
    }

    if (m_matchRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchRuleCount, allocator);
    }

    if (m_matchRuleLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchRuleLimit, allocator);
    }

    if (m_cloudExistingRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudExistingRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudExistingRuleCount, allocator);
    }

    if (m_cloudExistingNextHopCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudExistingNextHopCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudExistingNextHopCount, allocator);
    }

    if (m_availableRuleQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableRuleQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableRuleQuota, allocator);
    }

    if (m_availableNextHopQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableNextHopQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableNextHopQuota, allocator);
    }

}


int64_t PolicyRoutePreCheckReport::GetNextHopCount() const
{
    return m_nextHopCount;
}

void PolicyRoutePreCheckReport::SetNextHopCount(const int64_t& _nextHopCount)
{
    m_nextHopCount = _nextHopCount;
    m_nextHopCountHasBeenSet = true;
}

bool PolicyRoutePreCheckReport::NextHopCountHasBeenSet() const
{
    return m_nextHopCountHasBeenSet;
}

int64_t PolicyRoutePreCheckReport::GetNextHopLimit() const
{
    return m_nextHopLimit;
}

void PolicyRoutePreCheckReport::SetNextHopLimit(const int64_t& _nextHopLimit)
{
    m_nextHopLimit = _nextHopLimit;
    m_nextHopLimitHasBeenSet = true;
}

bool PolicyRoutePreCheckReport::NextHopLimitHasBeenSet() const
{
    return m_nextHopLimitHasBeenSet;
}

int64_t PolicyRoutePreCheckReport::GetMatchRuleCount() const
{
    return m_matchRuleCount;
}

void PolicyRoutePreCheckReport::SetMatchRuleCount(const int64_t& _matchRuleCount)
{
    m_matchRuleCount = _matchRuleCount;
    m_matchRuleCountHasBeenSet = true;
}

bool PolicyRoutePreCheckReport::MatchRuleCountHasBeenSet() const
{
    return m_matchRuleCountHasBeenSet;
}

int64_t PolicyRoutePreCheckReport::GetMatchRuleLimit() const
{
    return m_matchRuleLimit;
}

void PolicyRoutePreCheckReport::SetMatchRuleLimit(const int64_t& _matchRuleLimit)
{
    m_matchRuleLimit = _matchRuleLimit;
    m_matchRuleLimitHasBeenSet = true;
}

bool PolicyRoutePreCheckReport::MatchRuleLimitHasBeenSet() const
{
    return m_matchRuleLimitHasBeenSet;
}

int64_t PolicyRoutePreCheckReport::GetCloudExistingRuleCount() const
{
    return m_cloudExistingRuleCount;
}

void PolicyRoutePreCheckReport::SetCloudExistingRuleCount(const int64_t& _cloudExistingRuleCount)
{
    m_cloudExistingRuleCount = _cloudExistingRuleCount;
    m_cloudExistingRuleCountHasBeenSet = true;
}

bool PolicyRoutePreCheckReport::CloudExistingRuleCountHasBeenSet() const
{
    return m_cloudExistingRuleCountHasBeenSet;
}

int64_t PolicyRoutePreCheckReport::GetCloudExistingNextHopCount() const
{
    return m_cloudExistingNextHopCount;
}

void PolicyRoutePreCheckReport::SetCloudExistingNextHopCount(const int64_t& _cloudExistingNextHopCount)
{
    m_cloudExistingNextHopCount = _cloudExistingNextHopCount;
    m_cloudExistingNextHopCountHasBeenSet = true;
}

bool PolicyRoutePreCheckReport::CloudExistingNextHopCountHasBeenSet() const
{
    return m_cloudExistingNextHopCountHasBeenSet;
}

int64_t PolicyRoutePreCheckReport::GetAvailableRuleQuota() const
{
    return m_availableRuleQuota;
}

void PolicyRoutePreCheckReport::SetAvailableRuleQuota(const int64_t& _availableRuleQuota)
{
    m_availableRuleQuota = _availableRuleQuota;
    m_availableRuleQuotaHasBeenSet = true;
}

bool PolicyRoutePreCheckReport::AvailableRuleQuotaHasBeenSet() const
{
    return m_availableRuleQuotaHasBeenSet;
}

int64_t PolicyRoutePreCheckReport::GetAvailableNextHopQuota() const
{
    return m_availableNextHopQuota;
}

void PolicyRoutePreCheckReport::SetAvailableNextHopQuota(const int64_t& _availableNextHopQuota)
{
    m_availableNextHopQuota = _availableNextHopQuota;
    m_availableNextHopQuotaHasBeenSet = true;
}

bool PolicyRoutePreCheckReport::AvailableNextHopQuotaHasBeenSet() const
{
    return m_availableNextHopQuotaHasBeenSet;
}

