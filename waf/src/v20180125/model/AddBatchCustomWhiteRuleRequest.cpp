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

#include <tencentcloud/waf/v20180125/model/AddBatchCustomWhiteRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AddBatchCustomWhiteRuleRequest::AddBatchCustomWhiteRuleRequest() :
    m_nameHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_logicalOpHasBeenSet(false)
{
}

string AddBatchCustomWhiteRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sortId, allocator);
    }

    if (m_strategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strategies.begin(); itr != m_strategies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bypass.begin(); itr != m_bypass.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_jobDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobDateTime.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_logicalOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalOp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logicalOp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddBatchCustomWhiteRuleRequest::GetName() const
{
    return m_name;
}

void AddBatchCustomWhiteRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddBatchCustomWhiteRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AddBatchCustomWhiteRuleRequest::GetSortId() const
{
    return m_sortId;
}

void AddBatchCustomWhiteRuleRequest::SetSortId(const int64_t& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool AddBatchCustomWhiteRuleRequest::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

vector<Strategy> AddBatchCustomWhiteRuleRequest::GetStrategies() const
{
    return m_strategies;
}

void AddBatchCustomWhiteRuleRequest::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool AddBatchCustomWhiteRuleRequest::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

vector<string> AddBatchCustomWhiteRuleRequest::GetBypass() const
{
    return m_bypass;
}

void AddBatchCustomWhiteRuleRequest::SetBypass(const vector<string>& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool AddBatchCustomWhiteRuleRequest::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

string AddBatchCustomWhiteRuleRequest::GetJobType() const
{
    return m_jobType;
}

void AddBatchCustomWhiteRuleRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool AddBatchCustomWhiteRuleRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime AddBatchCustomWhiteRuleRequest::GetJobDateTime() const
{
    return m_jobDateTime;
}

void AddBatchCustomWhiteRuleRequest::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool AddBatchCustomWhiteRuleRequest::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

vector<string> AddBatchCustomWhiteRuleRequest::GetDomains() const
{
    return m_domains;
}

void AddBatchCustomWhiteRuleRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool AddBatchCustomWhiteRuleRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<uint64_t> AddBatchCustomWhiteRuleRequest::GetGroupIds() const
{
    return m_groupIds;
}

void AddBatchCustomWhiteRuleRequest::SetGroupIds(const vector<uint64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool AddBatchCustomWhiteRuleRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string AddBatchCustomWhiteRuleRequest::GetLogicalOp() const
{
    return m_logicalOp;
}

void AddBatchCustomWhiteRuleRequest::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool AddBatchCustomWhiteRuleRequest::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}


