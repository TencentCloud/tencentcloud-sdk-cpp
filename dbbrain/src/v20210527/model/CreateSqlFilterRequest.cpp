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

#include <tencentcloud/dbbrain/v20210527/model/CreateSqlFilterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CreateSqlFilterRequest::CreateSqlFilterRequest() :
    m_instanceIdHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_filterKeyHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_sessionTokenHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string CreateSqlFilterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_filterKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterKey.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_sessionTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionToken.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSqlFilterRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateSqlFilterRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateSqlFilterRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateSqlFilterRequest::GetSqlType() const
{
    return m_sqlType;
}

void CreateSqlFilterRequest::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool CreateSqlFilterRequest::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

string CreateSqlFilterRequest::GetFilterKey() const
{
    return m_filterKey;
}

void CreateSqlFilterRequest::SetFilterKey(const string& _filterKey)
{
    m_filterKey = _filterKey;
    m_filterKeyHasBeenSet = true;
}

bool CreateSqlFilterRequest::FilterKeyHasBeenSet() const
{
    return m_filterKeyHasBeenSet;
}

int64_t CreateSqlFilterRequest::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void CreateSqlFilterRequest::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool CreateSqlFilterRequest::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

int64_t CreateSqlFilterRequest::GetDuration() const
{
    return m_duration;
}

void CreateSqlFilterRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateSqlFilterRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string CreateSqlFilterRequest::GetSessionToken() const
{
    return m_sessionToken;
}

void CreateSqlFilterRequest::SetSessionToken(const string& _sessionToken)
{
    m_sessionToken = _sessionToken;
    m_sessionTokenHasBeenSet = true;
}

bool CreateSqlFilterRequest::SessionTokenHasBeenSet() const
{
    return m_sessionTokenHasBeenSet;
}

string CreateSqlFilterRequest::GetProduct() const
{
    return m_product;
}

void CreateSqlFilterRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateSqlFilterRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


