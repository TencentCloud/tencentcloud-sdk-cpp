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

#include <tencentcloud/tsf/v20180326/model/DescribeSimpleNamespacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DescribeSimpleNamespacesRequest::DescribeSimpleNamespacesRequest() :
    m_namespaceIdListHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceResourceTypeListHasBeenSet(false)
{
}

string DescribeSimpleNamespacesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_namespaceIdListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_namespaceIdList.begin(); itr != m_namespaceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceResourceTypeListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NamespaceResourceTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_namespaceResourceTypeList.begin(); itr != m_namespaceResourceTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeSimpleNamespacesRequest::GetNamespaceIdList() const
{
    return m_namespaceIdList;
}

void DescribeSimpleNamespacesRequest::SetNamespaceIdList(const vector<string>& _namespaceIdList)
{
    m_namespaceIdList = _namespaceIdList;
    m_namespaceIdListHasBeenSet = true;
}

bool DescribeSimpleNamespacesRequest::NamespaceIdListHasBeenSet() const
{
    return m_namespaceIdListHasBeenSet;
}

string DescribeSimpleNamespacesRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeSimpleNamespacesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeSimpleNamespacesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t DescribeSimpleNamespacesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSimpleNamespacesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSimpleNamespacesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeSimpleNamespacesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSimpleNamespacesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSimpleNamespacesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeSimpleNamespacesRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DescribeSimpleNamespacesRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DescribeSimpleNamespacesRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

vector<string> DescribeSimpleNamespacesRequest::GetNamespaceResourceTypeList() const
{
    return m_namespaceResourceTypeList;
}

void DescribeSimpleNamespacesRequest::SetNamespaceResourceTypeList(const vector<string>& _namespaceResourceTypeList)
{
    m_namespaceResourceTypeList = _namespaceResourceTypeList;
    m_namespaceResourceTypeListHasBeenSet = true;
}

bool DescribeSimpleNamespacesRequest::NamespaceResourceTypeListHasBeenSet() const
{
    return m_namespaceResourceTypeListHasBeenSet;
}


