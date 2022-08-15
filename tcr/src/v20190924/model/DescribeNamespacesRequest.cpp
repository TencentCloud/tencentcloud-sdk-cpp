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

#include <tencentcloud/tcr/v20190924/model/DescribeNamespacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DescribeNamespacesRequest::DescribeNamespacesRequest() :
    m_registryIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_allHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_kmsSignPolicyHasBeenSet(false)
{
}

string DescribeNamespacesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
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

    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_all, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_kmsSignPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsSignPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kmsSignPolicy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNamespacesRequest::GetRegistryId() const
{
    return m_registryId;
}

void DescribeNamespacesRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DescribeNamespacesRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string DescribeNamespacesRequest::GetNamespaceName() const
{
    return m_namespaceName;
}

void DescribeNamespacesRequest::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool DescribeNamespacesRequest::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

int64_t DescribeNamespacesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNamespacesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNamespacesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeNamespacesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNamespacesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNamespacesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

bool DescribeNamespacesRequest::GetAll() const
{
    return m_all;
}

void DescribeNamespacesRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool DescribeNamespacesRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<Filter> DescribeNamespacesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeNamespacesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeNamespacesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeNamespacesRequest::GetKmsSignPolicy() const
{
    return m_kmsSignPolicy;
}

void DescribeNamespacesRequest::SetKmsSignPolicy(const bool& _kmsSignPolicy)
{
    m_kmsSignPolicy = _kmsSignPolicy;
    m_kmsSignPolicyHasBeenSet = true;
}

bool DescribeNamespacesRequest::KmsSignPolicyHasBeenSet() const
{
    return m_kmsSignPolicyHasBeenSet;
}


