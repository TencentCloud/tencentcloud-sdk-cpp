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

#include <tencentcloud/organization/v20210331/model/UpdateGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UpdateGroupRequest::UpdateGroupRequest() :
    m_zoneIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_newGroupNameHasBeenSet(false),
    m_newDescriptionHasBeenSet(false)
{
}

string UpdateGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_newGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_newDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateGroupRequest::GetZoneId() const
{
    return m_zoneId;
}

void UpdateGroupRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool UpdateGroupRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string UpdateGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void UpdateGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UpdateGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string UpdateGroupRequest::GetNewGroupName() const
{
    return m_newGroupName;
}

void UpdateGroupRequest::SetNewGroupName(const string& _newGroupName)
{
    m_newGroupName = _newGroupName;
    m_newGroupNameHasBeenSet = true;
}

bool UpdateGroupRequest::NewGroupNameHasBeenSet() const
{
    return m_newGroupNameHasBeenSet;
}

string UpdateGroupRequest::GetNewDescription() const
{
    return m_newDescription;
}

void UpdateGroupRequest::SetNewDescription(const string& _newDescription)
{
    m_newDescription = _newDescription;
    m_newDescriptionHasBeenSet = true;
}

bool UpdateGroupRequest::NewDescriptionHasBeenSet() const
{
    return m_newDescriptionHasBeenSet;
}


