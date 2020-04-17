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

#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupWithPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateSecurityGroupWithPoliciesRequest::CreateSecurityGroupWithPoliciesRequest() :
    m_groupNameHasBeenSet(false),
    m_groupDescriptionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_securityGroupPolicySetHasBeenSet(false)
{
}

string CreateSecurityGroupWithPoliciesRequest::ToJsonString() const
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

    if (m_securityGroupPolicySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupPolicySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_securityGroupPolicySet.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSecurityGroupWithPoliciesRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateSecurityGroupWithPoliciesRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateSecurityGroupWithPoliciesRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CreateSecurityGroupWithPoliciesRequest::GetGroupDescription() const
{
    return m_groupDescription;
}

void CreateSecurityGroupWithPoliciesRequest::SetGroupDescription(const string& _groupDescription)
{
    m_groupDescription = _groupDescription;
    m_groupDescriptionHasBeenSet = true;
}

bool CreateSecurityGroupWithPoliciesRequest::GroupDescriptionHasBeenSet() const
{
    return m_groupDescriptionHasBeenSet;
}

string CreateSecurityGroupWithPoliciesRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateSecurityGroupWithPoliciesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateSecurityGroupWithPoliciesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

SecurityGroupPolicySet CreateSecurityGroupWithPoliciesRequest::GetSecurityGroupPolicySet() const
{
    return m_securityGroupPolicySet;
}

void CreateSecurityGroupWithPoliciesRequest::SetSecurityGroupPolicySet(const SecurityGroupPolicySet& _securityGroupPolicySet)
{
    m_securityGroupPolicySet = _securityGroupPolicySet;
    m_securityGroupPolicySetHasBeenSet = true;
}

bool CreateSecurityGroupWithPoliciesRequest::SecurityGroupPolicySetHasBeenSet() const
{
    return m_securityGroupPolicySetHasBeenSet;
}


