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

#include <tencentcloud/ssm/v20190923/model/ListSecretsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

ListSecretsRequest::ListSecretsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_searchSecretNameHasBeenSet(false),
    m_tagFiltersHasBeenSet(false),
    m_secretTypeHasBeenSet(false),
    m_productNameHasBeenSet(false)
{
}

string ListSecretsRequest::ToJsonString() const
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

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_state, allocator);
    }

    if (m_searchSecretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchSecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchSecretName.c_str(), allocator).Move(), allocator);
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

    if (m_secretTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_secretType, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListSecretsRequest::GetOffset() const
{
    return m_offset;
}

void ListSecretsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListSecretsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListSecretsRequest::GetLimit() const
{
    return m_limit;
}

void ListSecretsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListSecretsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t ListSecretsRequest::GetOrderType() const
{
    return m_orderType;
}

void ListSecretsRequest::SetOrderType(const uint64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool ListSecretsRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

uint64_t ListSecretsRequest::GetState() const
{
    return m_state;
}

void ListSecretsRequest::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ListSecretsRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string ListSecretsRequest::GetSearchSecretName() const
{
    return m_searchSecretName;
}

void ListSecretsRequest::SetSearchSecretName(const string& _searchSecretName)
{
    m_searchSecretName = _searchSecretName;
    m_searchSecretNameHasBeenSet = true;
}

bool ListSecretsRequest::SearchSecretNameHasBeenSet() const
{
    return m_searchSecretNameHasBeenSet;
}

vector<TagFilter> ListSecretsRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void ListSecretsRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool ListSecretsRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}

uint64_t ListSecretsRequest::GetSecretType() const
{
    return m_secretType;
}

void ListSecretsRequest::SetSecretType(const uint64_t& _secretType)
{
    m_secretType = _secretType;
    m_secretTypeHasBeenSet = true;
}

bool ListSecretsRequest::SecretTypeHasBeenSet() const
{
    return m_secretTypeHasBeenSet;
}

string ListSecretsRequest::GetProductName() const
{
    return m_productName;
}

void ListSecretsRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ListSecretsRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}


