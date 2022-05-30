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

#include <tencentcloud/kms/v20190118/model/ListKeyDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

ListKeyDetailRequest::ListKeyDetailRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_keyStateHasBeenSet(false),
    m_searchKeyAliasHasBeenSet(false),
    m_originHasBeenSet(false),
    m_keyUsageHasBeenSet(false),
    m_tagFiltersHasBeenSet(false),
    m_hsmClusterIdHasBeenSet(false)
{
}

string ListKeyDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_role, allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_keyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keyState, allocator);
    }

    if (m_searchKeyAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKeyAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKeyAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_keyUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyUsage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListKeyDetailRequest::GetOffset() const
{
    return m_offset;
}

void ListKeyDetailRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListKeyDetailRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListKeyDetailRequest::GetLimit() const
{
    return m_limit;
}

void ListKeyDetailRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListKeyDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t ListKeyDetailRequest::GetRole() const
{
    return m_role;
}

void ListKeyDetailRequest::SetRole(const uint64_t& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ListKeyDetailRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

uint64_t ListKeyDetailRequest::GetOrderType() const
{
    return m_orderType;
}

void ListKeyDetailRequest::SetOrderType(const uint64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool ListKeyDetailRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

uint64_t ListKeyDetailRequest::GetKeyState() const
{
    return m_keyState;
}

void ListKeyDetailRequest::SetKeyState(const uint64_t& _keyState)
{
    m_keyState = _keyState;
    m_keyStateHasBeenSet = true;
}

bool ListKeyDetailRequest::KeyStateHasBeenSet() const
{
    return m_keyStateHasBeenSet;
}

string ListKeyDetailRequest::GetSearchKeyAlias() const
{
    return m_searchKeyAlias;
}

void ListKeyDetailRequest::SetSearchKeyAlias(const string& _searchKeyAlias)
{
    m_searchKeyAlias = _searchKeyAlias;
    m_searchKeyAliasHasBeenSet = true;
}

bool ListKeyDetailRequest::SearchKeyAliasHasBeenSet() const
{
    return m_searchKeyAliasHasBeenSet;
}

string ListKeyDetailRequest::GetOrigin() const
{
    return m_origin;
}

void ListKeyDetailRequest::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool ListKeyDetailRequest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string ListKeyDetailRequest::GetKeyUsage() const
{
    return m_keyUsage;
}

void ListKeyDetailRequest::SetKeyUsage(const string& _keyUsage)
{
    m_keyUsage = _keyUsage;
    m_keyUsageHasBeenSet = true;
}

bool ListKeyDetailRequest::KeyUsageHasBeenSet() const
{
    return m_keyUsageHasBeenSet;
}

vector<TagFilter> ListKeyDetailRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void ListKeyDetailRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool ListKeyDetailRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}

string ListKeyDetailRequest::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void ListKeyDetailRequest::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool ListKeyDetailRequest::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}


