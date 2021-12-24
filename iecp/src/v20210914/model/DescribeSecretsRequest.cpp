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

#include <tencentcloud/iecp/v20210914/model/DescribeSecretsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeSecretsRequest::DescribeSecretsRequest() :
    m_edgeUnitIDHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_secretNamespaceHasBeenSet(false),
    m_namePatternHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_secretTypeHasBeenSet(false)
{
}

string DescribeSecretsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitID, allocator);
    }

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

    if (m_secretNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_namePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_secretTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeSecretsRequest::GetEdgeUnitID() const
{
    return m_edgeUnitID;
}

void DescribeSecretsRequest::SetEdgeUnitID(const uint64_t& _edgeUnitID)
{
    m_edgeUnitID = _edgeUnitID;
    m_edgeUnitIDHasBeenSet = true;
}

bool DescribeSecretsRequest::EdgeUnitIDHasBeenSet() const
{
    return m_edgeUnitIDHasBeenSet;
}

uint64_t DescribeSecretsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSecretsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSecretsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeSecretsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSecretsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSecretsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSecretsRequest::GetSecretNamespace() const
{
    return m_secretNamespace;
}

void DescribeSecretsRequest::SetSecretNamespace(const string& _secretNamespace)
{
    m_secretNamespace = _secretNamespace;
    m_secretNamespaceHasBeenSet = true;
}

bool DescribeSecretsRequest::SecretNamespaceHasBeenSet() const
{
    return m_secretNamespaceHasBeenSet;
}

string DescribeSecretsRequest::GetNamePattern() const
{
    return m_namePattern;
}

void DescribeSecretsRequest::SetNamePattern(const string& _namePattern)
{
    m_namePattern = _namePattern;
    m_namePatternHasBeenSet = true;
}

bool DescribeSecretsRequest::NamePatternHasBeenSet() const
{
    return m_namePatternHasBeenSet;
}

FieldSort DescribeSecretsRequest::GetSort() const
{
    return m_sort;
}

void DescribeSecretsRequest::SetSort(const FieldSort& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeSecretsRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeSecretsRequest::GetSecretType() const
{
    return m_secretType;
}

void DescribeSecretsRequest::SetSecretType(const string& _secretType)
{
    m_secretType = _secretType;
    m_secretTypeHasBeenSet = true;
}

bool DescribeSecretsRequest::SecretTypeHasBeenSet() const
{
    return m_secretTypeHasBeenSet;
}


