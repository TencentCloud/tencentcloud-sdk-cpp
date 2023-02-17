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

#include <tencentcloud/lcic/v20220817/model/BatchCreateGroupWithMembersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

BatchCreateGroupWithMembersRequest::BatchCreateGroupWithMembersRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_groupBaseInfosHasBeenSet(false),
    m_memberIdsHasBeenSet(false)
{
}

string BatchCreateGroupWithMembersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_groupBaseInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBaseInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupBaseInfos.begin(); itr != m_groupBaseInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


uint64_t BatchCreateGroupWithMembersRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void BatchCreateGroupWithMembersRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool BatchCreateGroupWithMembersRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<GroupBaseInfo> BatchCreateGroupWithMembersRequest::GetGroupBaseInfos() const
{
    return m_groupBaseInfos;
}

void BatchCreateGroupWithMembersRequest::SetGroupBaseInfos(const vector<GroupBaseInfo>& _groupBaseInfos)
{
    m_groupBaseInfos = _groupBaseInfos;
    m_groupBaseInfosHasBeenSet = true;
}

bool BatchCreateGroupWithMembersRequest::GroupBaseInfosHasBeenSet() const
{
    return m_groupBaseInfosHasBeenSet;
}

vector<string> BatchCreateGroupWithMembersRequest::GetMemberIds() const
{
    return m_memberIds;
}

void BatchCreateGroupWithMembersRequest::SetMemberIds(const vector<string>& _memberIds)
{
    m_memberIds = _memberIds;
    m_memberIdsHasBeenSet = true;
}

bool BatchCreateGroupWithMembersRequest::MemberIdsHasBeenSet() const
{
    return m_memberIdsHasBeenSet;
}


