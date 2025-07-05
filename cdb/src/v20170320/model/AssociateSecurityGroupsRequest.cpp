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

#include <tencentcloud/cdb/v20170320/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AssociateSecurityGroupsRequest::AssociateSecurityGroupsRequest() :
    m_securityGroupIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_forReadonlyInstanceHasBeenSet(false)
{
}

string AssociateSecurityGroupsRequest::ToJsonString() const
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

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_forReadonlyInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForReadonlyInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forReadonlyInstance, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateSecurityGroupsRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void AssociateSecurityGroupsRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool AssociateSecurityGroupsRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

vector<string> AssociateSecurityGroupsRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void AssociateSecurityGroupsRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool AssociateSecurityGroupsRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

bool AssociateSecurityGroupsRequest::GetForReadonlyInstance() const
{
    return m_forReadonlyInstance;
}

void AssociateSecurityGroupsRequest::SetForReadonlyInstance(const bool& _forReadonlyInstance)
{
    m_forReadonlyInstance = _forReadonlyInstance;
    m_forReadonlyInstanceHasBeenSet = true;
}

bool AssociateSecurityGroupsRequest::ForReadonlyInstanceHasBeenSet() const
{
    return m_forReadonlyInstanceHasBeenSet;
}


