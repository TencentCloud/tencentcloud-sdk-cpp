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

#include <tencentcloud/waf/v20180125/model/DescribeApiDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeApiDetailRequest::DescribeApiDetailRequest() :
    m_domainHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_isSensitiveHasBeenSet(false),
    m_isPanHasBeenSet(false)
{
}

string DescribeApiDetailRequest::ToJsonString() const
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

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_isSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSensitive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSensitive, allocator);
    }

    if (m_isPanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPan, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApiDetailRequest::GetDomain() const
{
    return m_domain;
}

void DescribeApiDetailRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeApiDetailRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeApiDetailRequest::GetApiName() const
{
    return m_apiName;
}

void DescribeApiDetailRequest::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool DescribeApiDetailRequest::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string DescribeApiDetailRequest::GetMethod() const
{
    return m_method;
}

void DescribeApiDetailRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool DescribeApiDetailRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

int64_t DescribeApiDetailRequest::GetIsSensitive() const
{
    return m_isSensitive;
}

void DescribeApiDetailRequest::SetIsSensitive(const int64_t& _isSensitive)
{
    m_isSensitive = _isSensitive;
    m_isSensitiveHasBeenSet = true;
}

bool DescribeApiDetailRequest::IsSensitiveHasBeenSet() const
{
    return m_isSensitiveHasBeenSet;
}

int64_t DescribeApiDetailRequest::GetIsPan() const
{
    return m_isPan;
}

void DescribeApiDetailRequest::SetIsPan(const int64_t& _isPan)
{
    m_isPan = _isPan;
    m_isPanHasBeenSet = true;
}

bool DescribeApiDetailRequest::IsPanHasBeenSet() const
{
    return m_isPanHasBeenSet;
}


