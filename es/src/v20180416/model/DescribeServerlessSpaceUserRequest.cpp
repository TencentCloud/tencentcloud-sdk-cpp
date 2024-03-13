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

#include <tencentcloud/es/v20180416/model/DescribeServerlessSpaceUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeServerlessSpaceUserRequest::DescribeServerlessSpaceUserRequest() :
    m_spaceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_userNamesHasBeenSet(false),
    m_userTypesHasBeenSet(false),
    m_privilegeTypesHasBeenSet(false)
{
}

string DescribeServerlessSpaceUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
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

    if (m_userNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userNames.begin(); itr != m_userNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userTypes.begin(); itr != m_userTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_privilegeTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privilegeTypes.begin(); itr != m_privilegeTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeServerlessSpaceUserRequest::GetSpaceId() const
{
    return m_spaceId;
}

void DescribeServerlessSpaceUserRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool DescribeServerlessSpaceUserRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

int64_t DescribeServerlessSpaceUserRequest::GetOffset() const
{
    return m_offset;
}

void DescribeServerlessSpaceUserRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeServerlessSpaceUserRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeServerlessSpaceUserRequest::GetLimit() const
{
    return m_limit;
}

void DescribeServerlessSpaceUserRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeServerlessSpaceUserRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeServerlessSpaceUserRequest::GetUserNames() const
{
    return m_userNames;
}

void DescribeServerlessSpaceUserRequest::SetUserNames(const vector<string>& _userNames)
{
    m_userNames = _userNames;
    m_userNamesHasBeenSet = true;
}

bool DescribeServerlessSpaceUserRequest::UserNamesHasBeenSet() const
{
    return m_userNamesHasBeenSet;
}

vector<int64_t> DescribeServerlessSpaceUserRequest::GetUserTypes() const
{
    return m_userTypes;
}

void DescribeServerlessSpaceUserRequest::SetUserTypes(const vector<int64_t>& _userTypes)
{
    m_userTypes = _userTypes;
    m_userTypesHasBeenSet = true;
}

bool DescribeServerlessSpaceUserRequest::UserTypesHasBeenSet() const
{
    return m_userTypesHasBeenSet;
}

vector<int64_t> DescribeServerlessSpaceUserRequest::GetPrivilegeTypes() const
{
    return m_privilegeTypes;
}

void DescribeServerlessSpaceUserRequest::SetPrivilegeTypes(const vector<int64_t>& _privilegeTypes)
{
    m_privilegeTypes = _privilegeTypes;
    m_privilegeTypesHasBeenSet = true;
}

bool DescribeServerlessSpaceUserRequest::PrivilegeTypesHasBeenSet() const
{
    return m_privilegeTypesHasBeenSet;
}


