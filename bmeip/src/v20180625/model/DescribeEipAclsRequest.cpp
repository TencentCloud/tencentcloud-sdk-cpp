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

#include <tencentcloud/bmeip/v20180625/model/DescribeEipAclsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace rapidjson;
using namespace std;

DescribeEipAclsRequest::DescribeEipAclsRequest() :
    m_aclNameHasBeenSet(false),
    m_aclIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeEipAclsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aclNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AclName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_aclName.c_str(), allocator).Move(), allocator);
    }

    if (m_aclIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AclIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_aclIds.begin(); itr != m_aclIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEipAclsRequest::GetAclName() const
{
    return m_aclName;
}

void DescribeEipAclsRequest::SetAclName(const string& _aclName)
{
    m_aclName = _aclName;
    m_aclNameHasBeenSet = true;
}

bool DescribeEipAclsRequest::AclNameHasBeenSet() const
{
    return m_aclNameHasBeenSet;
}

vector<string> DescribeEipAclsRequest::GetAclIds() const
{
    return m_aclIds;
}

void DescribeEipAclsRequest::SetAclIds(const vector<string>& _aclIds)
{
    m_aclIds = _aclIds;
    m_aclIdsHasBeenSet = true;
}

bool DescribeEipAclsRequest::AclIdsHasBeenSet() const
{
    return m_aclIdsHasBeenSet;
}

int64_t DescribeEipAclsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEipAclsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEipAclsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeEipAclsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEipAclsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEipAclsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


