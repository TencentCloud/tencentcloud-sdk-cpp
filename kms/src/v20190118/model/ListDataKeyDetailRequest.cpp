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

#include <tencentcloud/kms/v20190118/model/ListDataKeyDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

ListDataKeyDetailRequest::ListDataKeyDetailRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_keyStateHasBeenSet(false),
    m_searchKeyAliasHasBeenSet(false),
    m_originHasBeenSet(false),
    m_hsmClusterIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_dataKeyLenHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

string ListDataKeyDetailRequest::ToJsonString() const
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

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataKeyLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataKeyLen, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListDataKeyDetailRequest::GetOffset() const
{
    return m_offset;
}

void ListDataKeyDetailRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListDataKeyDetailRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListDataKeyDetailRequest::GetLimit() const
{
    return m_limit;
}

void ListDataKeyDetailRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListDataKeyDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t ListDataKeyDetailRequest::GetRole() const
{
    return m_role;
}

void ListDataKeyDetailRequest::SetRole(const uint64_t& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ListDataKeyDetailRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

uint64_t ListDataKeyDetailRequest::GetOrderType() const
{
    return m_orderType;
}

void ListDataKeyDetailRequest::SetOrderType(const uint64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool ListDataKeyDetailRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

uint64_t ListDataKeyDetailRequest::GetKeyState() const
{
    return m_keyState;
}

void ListDataKeyDetailRequest::SetKeyState(const uint64_t& _keyState)
{
    m_keyState = _keyState;
    m_keyStateHasBeenSet = true;
}

bool ListDataKeyDetailRequest::KeyStateHasBeenSet() const
{
    return m_keyStateHasBeenSet;
}

string ListDataKeyDetailRequest::GetSearchKeyAlias() const
{
    return m_searchKeyAlias;
}

void ListDataKeyDetailRequest::SetSearchKeyAlias(const string& _searchKeyAlias)
{
    m_searchKeyAlias = _searchKeyAlias;
    m_searchKeyAliasHasBeenSet = true;
}

bool ListDataKeyDetailRequest::SearchKeyAliasHasBeenSet() const
{
    return m_searchKeyAliasHasBeenSet;
}

string ListDataKeyDetailRequest::GetOrigin() const
{
    return m_origin;
}

void ListDataKeyDetailRequest::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool ListDataKeyDetailRequest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string ListDataKeyDetailRequest::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void ListDataKeyDetailRequest::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool ListDataKeyDetailRequest::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}

string ListDataKeyDetailRequest::GetKeyId() const
{
    return m_keyId;
}

void ListDataKeyDetailRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ListDataKeyDetailRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

uint64_t ListDataKeyDetailRequest::GetDataKeyLen() const
{
    return m_dataKeyLen;
}

void ListDataKeyDetailRequest::SetDataKeyLen(const uint64_t& _dataKeyLen)
{
    m_dataKeyLen = _dataKeyLen;
    m_dataKeyLenHasBeenSet = true;
}

bool ListDataKeyDetailRequest::DataKeyLenHasBeenSet() const
{
    return m_dataKeyLenHasBeenSet;
}

vector<TagFilter> ListDataKeyDetailRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void ListDataKeyDetailRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool ListDataKeyDetailRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}


