/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dasb/v20191018/model/DeleteUserGroupMembersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

DeleteUserGroupMembersRequest::DeleteUserGroupMembersRequest() :
    m_idHasBeenSet(false),
    m_memberIdSetHasBeenSet(false)
{
}

string DeleteUserGroupMembersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_memberIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberIdSet.begin(); itr != m_memberIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteUserGroupMembersRequest::GetId() const
{
    return m_id;
}

void DeleteUserGroupMembersRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeleteUserGroupMembersRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<uint64_t> DeleteUserGroupMembersRequest::GetMemberIdSet() const
{
    return m_memberIdSet;
}

void DeleteUserGroupMembersRequest::SetMemberIdSet(const vector<uint64_t>& _memberIdSet)
{
    m_memberIdSet = _memberIdSet;
    m_memberIdSetHasBeenSet = true;
}

bool DeleteUserGroupMembersRequest::MemberIdSetHasBeenSet() const
{
    return m_memberIdSetHasBeenSet;
}


