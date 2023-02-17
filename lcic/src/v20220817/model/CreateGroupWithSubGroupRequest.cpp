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

#include <tencentcloud/lcic/v20220817/model/CreateGroupWithSubGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

CreateGroupWithSubGroupRequest::CreateGroupWithSubGroupRequest() :
    m_groupNameHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_subGroupIdsHasBeenSet(false),
    m_teacherIdHasBeenSet(false)
{
}

string CreateGroupWithSubGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_subGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subGroupIds.begin(); itr != m_subGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateGroupWithSubGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateGroupWithSubGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateGroupWithSubGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

uint64_t CreateGroupWithSubGroupRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateGroupWithSubGroupRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateGroupWithSubGroupRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<string> CreateGroupWithSubGroupRequest::GetSubGroupIds() const
{
    return m_subGroupIds;
}

void CreateGroupWithSubGroupRequest::SetSubGroupIds(const vector<string>& _subGroupIds)
{
    m_subGroupIds = _subGroupIds;
    m_subGroupIdsHasBeenSet = true;
}

bool CreateGroupWithSubGroupRequest::SubGroupIdsHasBeenSet() const
{
    return m_subGroupIdsHasBeenSet;
}

string CreateGroupWithSubGroupRequest::GetTeacherId() const
{
    return m_teacherId;
}

void CreateGroupWithSubGroupRequest::SetTeacherId(const string& _teacherId)
{
    m_teacherId = _teacherId;
    m_teacherIdHasBeenSet = true;
}

bool CreateGroupWithSubGroupRequest::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}


