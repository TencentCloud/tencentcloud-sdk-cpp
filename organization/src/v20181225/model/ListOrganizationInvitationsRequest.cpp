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

#include <tencentcloud/organization/v20181225/model/ListOrganizationInvitationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20181225::Model;
using namespace std;

ListOrganizationInvitationsRequest::ListOrganizationInvitationsRequest() :
    m_invitedHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string ListOrganizationInvitationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invitedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invited";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invited, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListOrganizationInvitationsRequest::GetInvited() const
{
    return m_invited;
}

void ListOrganizationInvitationsRequest::SetInvited(const uint64_t& _invited)
{
    m_invited = _invited;
    m_invitedHasBeenSet = true;
}

bool ListOrganizationInvitationsRequest::InvitedHasBeenSet() const
{
    return m_invitedHasBeenSet;
}

uint64_t ListOrganizationInvitationsRequest::GetOffset() const
{
    return m_offset;
}

void ListOrganizationInvitationsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListOrganizationInvitationsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListOrganizationInvitationsRequest::GetLimit() const
{
    return m_limit;
}

void ListOrganizationInvitationsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListOrganizationInvitationsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


