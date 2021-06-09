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

#include <tencentcloud/organization/v20181225/model/SendOrganizationInvitationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20181225::Model;
using namespace std;

SendOrganizationInvitationRequest::SendOrganizationInvitationRequest() :
    m_inviteUinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string SendOrganizationInvitationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inviteUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InviteUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inviteUin, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SendOrganizationInvitationRequest::GetInviteUin() const
{
    return m_inviteUin;
}

void SendOrganizationInvitationRequest::SetInviteUin(const uint64_t& _inviteUin)
{
    m_inviteUin = _inviteUin;
    m_inviteUinHasBeenSet = true;
}

bool SendOrganizationInvitationRequest::InviteUinHasBeenSet() const
{
    return m_inviteUinHasBeenSet;
}

string SendOrganizationInvitationRequest::GetName() const
{
    return m_name;
}

void SendOrganizationInvitationRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SendOrganizationInvitationRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SendOrganizationInvitationRequest::GetRemark() const
{
    return m_remark;
}

void SendOrganizationInvitationRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SendOrganizationInvitationRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


