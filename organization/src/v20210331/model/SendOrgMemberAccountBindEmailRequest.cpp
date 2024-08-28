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

#include <tencentcloud/organization/v20210331/model/SendOrgMemberAccountBindEmailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

SendOrgMemberAccountBindEmailRequest::SendOrgMemberAccountBindEmailRequest() :
    m_memberUinHasBeenSet(false),
    m_bindIdHasBeenSet(false)
{
}

string SendOrgMemberAccountBindEmailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_bindIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t SendOrgMemberAccountBindEmailRequest::GetMemberUin() const
{
    return m_memberUin;
}

void SendOrgMemberAccountBindEmailRequest::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool SendOrgMemberAccountBindEmailRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

int64_t SendOrgMemberAccountBindEmailRequest::GetBindId() const
{
    return m_bindId;
}

void SendOrgMemberAccountBindEmailRequest::SetBindId(const int64_t& _bindId)
{
    m_bindId = _bindId;
    m_bindIdHasBeenSet = true;
}

bool SendOrgMemberAccountBindEmailRequest::BindIdHasBeenSet() const
{
    return m_bindIdHasBeenSet;
}


