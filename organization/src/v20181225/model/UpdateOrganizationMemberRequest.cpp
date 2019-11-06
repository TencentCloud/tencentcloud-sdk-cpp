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

#include <tencentcloud/organization/v20181225/model/UpdateOrganizationMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20181225::Model;
using namespace rapidjson;
using namespace std;

UpdateOrganizationMemberRequest::UpdateOrganizationMemberRequest() :
    m_memberUinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string UpdateOrganizationMemberRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateOrganizationMemberRequest::GetMemberUin() const
{
    return m_memberUin;
}

void UpdateOrganizationMemberRequest::SetMemberUin(const uint64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string UpdateOrganizationMemberRequest::GetName() const
{
    return m_name;
}

void UpdateOrganizationMemberRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateOrganizationMemberRequest::GetRemark() const
{
    return m_remark;
}

void UpdateOrganizationMemberRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


