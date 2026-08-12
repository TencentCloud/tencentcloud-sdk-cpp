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

#include <tencentcloud/config/v20220802/model/UpdateAggregatorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

UpdateAggregatorRequest::UpdateAggregatorRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_aggregatorAccountsHasBeenSet(false)
{
}

string UpdateAggregatorRequest::ToJsonString() const
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_aggregatorAccountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregatorAccounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aggregatorAccounts.begin(); itr != m_aggregatorAccounts.end(); ++itr, ++i)
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


string UpdateAggregatorRequest::GetName() const
{
    return m_name;
}

void UpdateAggregatorRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateAggregatorRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateAggregatorRequest::GetDescription() const
{
    return m_description;
}

void UpdateAggregatorRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateAggregatorRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateAggregatorRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void UpdateAggregatorRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool UpdateAggregatorRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

uint64_t UpdateAggregatorRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void UpdateAggregatorRequest::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool UpdateAggregatorRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

vector<AggregatorAccount> UpdateAggregatorRequest::GetAggregatorAccounts() const
{
    return m_aggregatorAccounts;
}

void UpdateAggregatorRequest::SetAggregatorAccounts(const vector<AggregatorAccount>& _aggregatorAccounts)
{
    m_aggregatorAccounts = _aggregatorAccounts;
    m_aggregatorAccountsHasBeenSet = true;
}

bool UpdateAggregatorRequest::AggregatorAccountsHasBeenSet() const
{
    return m_aggregatorAccountsHasBeenSet;
}


