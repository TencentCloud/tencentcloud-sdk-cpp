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

#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMemberAuthIdentitiesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DescribeOrganizationMemberAuthIdentitiesRequest::DescribeOrganizationMemberAuthIdentitiesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_memberUinHasBeenSet(false),
    m_identityIdHasBeenSet(false)
{
}

string DescribeOrganizationMemberAuthIdentitiesRequest::ToJsonString() const
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

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_identityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_identityId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeOrganizationMemberAuthIdentitiesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeOrganizationMemberAuthIdentitiesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeOrganizationMemberAuthIdentitiesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeOrganizationMemberAuthIdentitiesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeOrganizationMemberAuthIdentitiesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeOrganizationMemberAuthIdentitiesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeOrganizationMemberAuthIdentitiesRequest::GetMemberUin() const
{
    return m_memberUin;
}

void DescribeOrganizationMemberAuthIdentitiesRequest::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool DescribeOrganizationMemberAuthIdentitiesRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

uint64_t DescribeOrganizationMemberAuthIdentitiesRequest::GetIdentityId() const
{
    return m_identityId;
}

void DescribeOrganizationMemberAuthIdentitiesRequest::SetIdentityId(const uint64_t& _identityId)
{
    m_identityId = _identityId;
    m_identityIdHasBeenSet = true;
}

bool DescribeOrganizationMemberAuthIdentitiesRequest::IdentityIdHasBeenSet() const
{
    return m_identityIdHasBeenSet;
}


