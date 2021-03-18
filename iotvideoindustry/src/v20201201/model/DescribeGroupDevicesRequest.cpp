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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeGroupDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace rapidjson;
using namespace std;

DescribeGroupDevicesRequest::DescribeGroupDevicesRequest() :
    m_groupIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nickNameHasBeenSet(false)
{
}

string DescribeGroupDevicesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
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

    if (m_nickNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_nickName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGroupDevicesRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeGroupDevicesRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeGroupDevicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGroupDevicesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeGroupDevicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGroupDevicesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGroupDevicesRequest::GetNickName() const
{
    return m_nickName;
}

void DescribeGroupDevicesRequest::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DescribeGroupDevicesRequest::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}


