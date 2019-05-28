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

#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateSecurityGroupRequest::CreateSecurityGroupRequest() :
    m_groupNameHasBeenSet(false),
    m_groupDescriptionHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string CreateSecurityGroupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSecurityGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateSecurityGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateSecurityGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CreateSecurityGroupRequest::GetGroupDescription() const
{
    return m_groupDescription;
}

void CreateSecurityGroupRequest::SetGroupDescription(const string& _groupDescription)
{
    m_groupDescription = _groupDescription;
    m_groupDescriptionHasBeenSet = true;
}

bool CreateSecurityGroupRequest::GroupDescriptionHasBeenSet() const
{
    return m_groupDescriptionHasBeenSet;
}

string CreateSecurityGroupRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateSecurityGroupRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateSecurityGroupRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


