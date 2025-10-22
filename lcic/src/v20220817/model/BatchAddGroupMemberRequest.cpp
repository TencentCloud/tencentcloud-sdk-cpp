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

#include <tencentcloud/lcic/v20220817/model/BatchAddGroupMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

BatchAddGroupMemberRequest::BatchAddGroupMemberRequest() :
    m_groupIdsHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_memberIdsHasBeenSet(false)
{
}

string BatchAddGroupMemberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_memberIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberIds.begin(); itr != m_memberIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchAddGroupMemberRequest::GetGroupIds() const
{
    return m_groupIds;
}

void BatchAddGroupMemberRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool BatchAddGroupMemberRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

uint64_t BatchAddGroupMemberRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void BatchAddGroupMemberRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool BatchAddGroupMemberRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<string> BatchAddGroupMemberRequest::GetMemberIds() const
{
    return m_memberIds;
}

void BatchAddGroupMemberRequest::SetMemberIds(const vector<string>& _memberIds)
{
    m_memberIds = _memberIds;
    m_memberIdsHasBeenSet = true;
}

bool BatchAddGroupMemberRequest::MemberIdsHasBeenSet() const
{
    return m_memberIdsHasBeenSet;
}


