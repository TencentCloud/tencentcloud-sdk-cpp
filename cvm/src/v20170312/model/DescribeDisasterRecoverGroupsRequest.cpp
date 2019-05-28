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

#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

DescribeDisasterRecoverGroupsRequest::DescribeDisasterRecoverGroupsRequest() :
    m_disasterRecoverGroupIdsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeDisasterRecoverGroupsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_disasterRecoverGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DisasterRecoverGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_disasterRecoverGroupIds.begin(); itr != m_disasterRecoverGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
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


vector<string> DescribeDisasterRecoverGroupsRequest::GetDisasterRecoverGroupIds() const
{
    return m_disasterRecoverGroupIds;
}

void DescribeDisasterRecoverGroupsRequest::SetDisasterRecoverGroupIds(const vector<string>& _disasterRecoverGroupIds)
{
    m_disasterRecoverGroupIds = _disasterRecoverGroupIds;
    m_disasterRecoverGroupIdsHasBeenSet = true;
}

bool DescribeDisasterRecoverGroupsRequest::DisasterRecoverGroupIdsHasBeenSet() const
{
    return m_disasterRecoverGroupIdsHasBeenSet;
}

string DescribeDisasterRecoverGroupsRequest::GetName() const
{
    return m_name;
}

void DescribeDisasterRecoverGroupsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDisasterRecoverGroupsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeDisasterRecoverGroupsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDisasterRecoverGroupsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDisasterRecoverGroupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDisasterRecoverGroupsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDisasterRecoverGroupsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDisasterRecoverGroupsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


