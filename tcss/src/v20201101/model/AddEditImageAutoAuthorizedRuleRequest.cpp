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

#include <tencentcloud/tcss/v20201101/model/AddEditImageAutoAuthorizedRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AddEditImageAutoAuthorizedRuleRequest::AddEditImageAutoAuthorizedRuleRequest() :
    m_rangeTypeHasBeenSet(false),
    m_maxDailyCountHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_hostIdSetHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_hostIdFiltersHasBeenSet(false),
    m_excludeHostIdSetHasBeenSet(false),
    m_autoScanEnabledHasBeenSet(false),
    m_scanTypeHasBeenSet(false)
{
}

string AddEditImageAutoAuthorizedRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_rangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDailyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDailyCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDailyCount, allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_hostIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIdSet.begin(); itr != m_hostIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_hostIdFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIdFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostIdFilters.begin(); itr != m_hostIdFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeHostIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeHostIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeHostIdSet.begin(); itr != m_excludeHostIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoScanEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScanEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoScanEnabled, allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanType.begin(); itr != m_scanType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddEditImageAutoAuthorizedRuleRequest::GetRangeType() const
{
    return m_rangeType;
}

void AddEditImageAutoAuthorizedRuleRequest::SetRangeType(const string& _rangeType)
{
    m_rangeType = _rangeType;
    m_rangeTypeHasBeenSet = true;
}

bool AddEditImageAutoAuthorizedRuleRequest::RangeTypeHasBeenSet() const
{
    return m_rangeTypeHasBeenSet;
}

int64_t AddEditImageAutoAuthorizedRuleRequest::GetMaxDailyCount() const
{
    return m_maxDailyCount;
}

void AddEditImageAutoAuthorizedRuleRequest::SetMaxDailyCount(const int64_t& _maxDailyCount)
{
    m_maxDailyCount = _maxDailyCount;
    m_maxDailyCountHasBeenSet = true;
}

bool AddEditImageAutoAuthorizedRuleRequest::MaxDailyCountHasBeenSet() const
{
    return m_maxDailyCountHasBeenSet;
}

int64_t AddEditImageAutoAuthorizedRuleRequest::GetIsEnabled() const
{
    return m_isEnabled;
}

void AddEditImageAutoAuthorizedRuleRequest::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool AddEditImageAutoAuthorizedRuleRequest::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

vector<string> AddEditImageAutoAuthorizedRuleRequest::GetHostIdSet() const
{
    return m_hostIdSet;
}

void AddEditImageAutoAuthorizedRuleRequest::SetHostIdSet(const vector<string>& _hostIdSet)
{
    m_hostIdSet = _hostIdSet;
    m_hostIdSetHasBeenSet = true;
}

bool AddEditImageAutoAuthorizedRuleRequest::HostIdSetHasBeenSet() const
{
    return m_hostIdSetHasBeenSet;
}

int64_t AddEditImageAutoAuthorizedRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void AddEditImageAutoAuthorizedRuleRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AddEditImageAutoAuthorizedRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<AssetFilters> AddEditImageAutoAuthorizedRuleRequest::GetHostIdFilters() const
{
    return m_hostIdFilters;
}

void AddEditImageAutoAuthorizedRuleRequest::SetHostIdFilters(const vector<AssetFilters>& _hostIdFilters)
{
    m_hostIdFilters = _hostIdFilters;
    m_hostIdFiltersHasBeenSet = true;
}

bool AddEditImageAutoAuthorizedRuleRequest::HostIdFiltersHasBeenSet() const
{
    return m_hostIdFiltersHasBeenSet;
}

vector<string> AddEditImageAutoAuthorizedRuleRequest::GetExcludeHostIdSet() const
{
    return m_excludeHostIdSet;
}

void AddEditImageAutoAuthorizedRuleRequest::SetExcludeHostIdSet(const vector<string>& _excludeHostIdSet)
{
    m_excludeHostIdSet = _excludeHostIdSet;
    m_excludeHostIdSetHasBeenSet = true;
}

bool AddEditImageAutoAuthorizedRuleRequest::ExcludeHostIdSetHasBeenSet() const
{
    return m_excludeHostIdSetHasBeenSet;
}

int64_t AddEditImageAutoAuthorizedRuleRequest::GetAutoScanEnabled() const
{
    return m_autoScanEnabled;
}

void AddEditImageAutoAuthorizedRuleRequest::SetAutoScanEnabled(const int64_t& _autoScanEnabled)
{
    m_autoScanEnabled = _autoScanEnabled;
    m_autoScanEnabledHasBeenSet = true;
}

bool AddEditImageAutoAuthorizedRuleRequest::AutoScanEnabledHasBeenSet() const
{
    return m_autoScanEnabledHasBeenSet;
}

vector<string> AddEditImageAutoAuthorizedRuleRequest::GetScanType() const
{
    return m_scanType;
}

void AddEditImageAutoAuthorizedRuleRequest::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool AddEditImageAutoAuthorizedRuleRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}


