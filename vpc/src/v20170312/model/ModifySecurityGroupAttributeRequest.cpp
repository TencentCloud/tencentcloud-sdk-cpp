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

#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifySecurityGroupAttributeRequest::ModifySecurityGroupAttributeRequest() :
    m_securityGroupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupDescriptionHasBeenSet(false)
{
}

string ModifySecurityGroupAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecurityGroupAttributeRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void ModifySecurityGroupAttributeRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool ModifySecurityGroupAttributeRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

string ModifySecurityGroupAttributeRequest::GetGroupName() const
{
    return m_groupName;
}

void ModifySecurityGroupAttributeRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ModifySecurityGroupAttributeRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ModifySecurityGroupAttributeRequest::GetGroupDescription() const
{
    return m_groupDescription;
}

void ModifySecurityGroupAttributeRequest::SetGroupDescription(const string& _groupDescription)
{
    m_groupDescription = _groupDescription;
    m_groupDescriptionHasBeenSet = true;
}

bool ModifySecurityGroupAttributeRequest::GroupDescriptionHasBeenSet() const
{
    return m_groupDescriptionHasBeenSet;
}


