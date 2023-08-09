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

#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberAuthIdentityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CreateOrganizationMemberAuthIdentityRequest::CreateOrganizationMemberAuthIdentityRequest() :
    m_memberUinsHasBeenSet(false),
    m_identityIdsHasBeenSet(false)
{
}

string CreateOrganizationMemberAuthIdentityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberUins.begin(); itr != m_memberUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_identityIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_identityIds.begin(); itr != m_identityIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> CreateOrganizationMemberAuthIdentityRequest::GetMemberUins() const
{
    return m_memberUins;
}

void CreateOrganizationMemberAuthIdentityRequest::SetMemberUins(const vector<uint64_t>& _memberUins)
{
    m_memberUins = _memberUins;
    m_memberUinsHasBeenSet = true;
}

bool CreateOrganizationMemberAuthIdentityRequest::MemberUinsHasBeenSet() const
{
    return m_memberUinsHasBeenSet;
}

vector<uint64_t> CreateOrganizationMemberAuthIdentityRequest::GetIdentityIds() const
{
    return m_identityIds;
}

void CreateOrganizationMemberAuthIdentityRequest::SetIdentityIds(const vector<uint64_t>& _identityIds)
{
    m_identityIds = _identityIds;
    m_identityIdsHasBeenSet = true;
}

bool CreateOrganizationMemberAuthIdentityRequest::IdentityIdsHasBeenSet() const
{
    return m_identityIdsHasBeenSet;
}


