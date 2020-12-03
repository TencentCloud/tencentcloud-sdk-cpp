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

#include <tencentcloud/tsf/v20180326/model/UpdateApiGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

UpdateApiGroupRequest::UpdateApiGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_groupContextHasBeenSet(false)
{
}

string UpdateApiGroupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupContextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupContext.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateApiGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void UpdateApiGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UpdateApiGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string UpdateApiGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void UpdateApiGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool UpdateApiGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string UpdateApiGroupRequest::GetDescription() const
{
    return m_description;
}

void UpdateApiGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateApiGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateApiGroupRequest::GetAuthType() const
{
    return m_authType;
}

void UpdateApiGroupRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool UpdateApiGroupRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string UpdateApiGroupRequest::GetGroupContext() const
{
    return m_groupContext;
}

void UpdateApiGroupRequest::SetGroupContext(const string& _groupContext)
{
    m_groupContext = _groupContext;
    m_groupContextHasBeenSet = true;
}

bool UpdateApiGroupRequest::GroupContextHasBeenSet() const
{
    return m_groupContextHasBeenSet;
}


