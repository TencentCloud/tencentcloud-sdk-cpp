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

#include <tencentcloud/iotvideoindustry/v20201201/model/UpdateDeviceGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

UpdateDeviceGroupRequest::UpdateDeviceGroupRequest() :
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupDescribeHasBeenSet(false),
    m_newParentIdHasBeenSet(false)
{
}

string UpdateDeviceGroupRequest::ToJsonString() const
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupDescribe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_newParentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewParentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newParentId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDeviceGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void UpdateDeviceGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool UpdateDeviceGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string UpdateDeviceGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void UpdateDeviceGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UpdateDeviceGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string UpdateDeviceGroupRequest::GetGroupDescribe() const
{
    return m_groupDescribe;
}

void UpdateDeviceGroupRequest::SetGroupDescribe(const string& _groupDescribe)
{
    m_groupDescribe = _groupDescribe;
    m_groupDescribeHasBeenSet = true;
}

bool UpdateDeviceGroupRequest::GroupDescribeHasBeenSet() const
{
    return m_groupDescribeHasBeenSet;
}

string UpdateDeviceGroupRequest::GetNewParentId() const
{
    return m_newParentId;
}

void UpdateDeviceGroupRequest::SetNewParentId(const string& _newParentId)
{
    m_newParentId = _newParentId;
    m_newParentIdHasBeenSet = true;
}

bool UpdateDeviceGroupRequest::NewParentIdHasBeenSet() const
{
    return m_newParentIdHasBeenSet;
}


