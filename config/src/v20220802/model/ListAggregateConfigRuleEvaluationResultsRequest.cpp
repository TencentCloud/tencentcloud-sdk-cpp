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

#include <tencentcloud/config/v20220802/model/ListAggregateConfigRuleEvaluationResultsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ListAggregateConfigRuleEvaluationResultsRequest::ListAggregateConfigRuleEvaluationResultsRequest() :
    m_configRuleIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceOwnerIdsHasBeenSet(false)
{
}

string ListAggregateConfigRuleEvaluationResultsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceType.begin(); itr != m_resourceType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_complianceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_complianceType.begin(); itr != m_complianceType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceOwnerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceOwnerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceOwnerId, allocator);
    }

    if (m_resourceOwnerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceOwnerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceOwnerIds.begin(); itr != m_resourceOwnerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListAggregateConfigRuleEvaluationResultsRequest::GetConfigRuleId() const
{
    return m_configRuleId;
}

void ListAggregateConfigRuleEvaluationResultsRequest::SetConfigRuleId(const string& _configRuleId)
{
    m_configRuleId = _configRuleId;
    m_configRuleIdHasBeenSet = true;
}

bool ListAggregateConfigRuleEvaluationResultsRequest::ConfigRuleIdHasBeenSet() const
{
    return m_configRuleIdHasBeenSet;
}

uint64_t ListAggregateConfigRuleEvaluationResultsRequest::GetLimit() const
{
    return m_limit;
}

void ListAggregateConfigRuleEvaluationResultsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListAggregateConfigRuleEvaluationResultsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t ListAggregateConfigRuleEvaluationResultsRequest::GetOffset() const
{
    return m_offset;
}

void ListAggregateConfigRuleEvaluationResultsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListAggregateConfigRuleEvaluationResultsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string ListAggregateConfigRuleEvaluationResultsRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void ListAggregateConfigRuleEvaluationResultsRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool ListAggregateConfigRuleEvaluationResultsRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

vector<string> ListAggregateConfigRuleEvaluationResultsRequest::GetResourceType() const
{
    return m_resourceType;
}

void ListAggregateConfigRuleEvaluationResultsRequest::SetResourceType(const vector<string>& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ListAggregateConfigRuleEvaluationResultsRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<string> ListAggregateConfigRuleEvaluationResultsRequest::GetComplianceType() const
{
    return m_complianceType;
}

void ListAggregateConfigRuleEvaluationResultsRequest::SetComplianceType(const vector<string>& _complianceType)
{
    m_complianceType = _complianceType;
    m_complianceTypeHasBeenSet = true;
}

bool ListAggregateConfigRuleEvaluationResultsRequest::ComplianceTypeHasBeenSet() const
{
    return m_complianceTypeHasBeenSet;
}

uint64_t ListAggregateConfigRuleEvaluationResultsRequest::GetResourceOwnerId() const
{
    return m_resourceOwnerId;
}

void ListAggregateConfigRuleEvaluationResultsRequest::SetResourceOwnerId(const uint64_t& _resourceOwnerId)
{
    m_resourceOwnerId = _resourceOwnerId;
    m_resourceOwnerIdHasBeenSet = true;
}

bool ListAggregateConfigRuleEvaluationResultsRequest::ResourceOwnerIdHasBeenSet() const
{
    return m_resourceOwnerIdHasBeenSet;
}

vector<uint64_t> ListAggregateConfigRuleEvaluationResultsRequest::GetResourceOwnerIds() const
{
    return m_resourceOwnerIds;
}

void ListAggregateConfigRuleEvaluationResultsRequest::SetResourceOwnerIds(const vector<uint64_t>& _resourceOwnerIds)
{
    m_resourceOwnerIds = _resourceOwnerIds;
    m_resourceOwnerIdsHasBeenSet = true;
}

bool ListAggregateConfigRuleEvaluationResultsRequest::ResourceOwnerIdsHasBeenSet() const
{
    return m_resourceOwnerIdsHasBeenSet;
}


