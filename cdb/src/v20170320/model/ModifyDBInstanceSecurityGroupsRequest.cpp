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

#include <tencentcloud/cdb/v20170320/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyDBInstanceSecurityGroupsRequest::ModifyDBInstanceSecurityGroupsRequest() :
    m_instanceIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_forReadonlyInstanceHasBeenSet(false),
    m_opResourceIdHasBeenSet(false)
{
}

string ModifyDBInstanceSecurityGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
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

    if (m_opResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_opResourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceSecurityGroupsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBInstanceSecurityGroupsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBInstanceSecurityGroupsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ModifyDBInstanceSecurityGroupsRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ModifyDBInstanceSecurityGroupsRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ModifyDBInstanceSecurityGroupsRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

bool ModifyDBInstanceSecurityGroupsRequest::GetForReadonlyInstance() const
{
    return m_forReadonlyInstance;
}

void ModifyDBInstanceSecurityGroupsRequest::SetForReadonlyInstance(const bool& _forReadonlyInstance)
{
    m_forReadonlyInstance = _forReadonlyInstance;
    m_forReadonlyInstanceHasBeenSet = true;
}

bool ModifyDBInstanceSecurityGroupsRequest::ForReadonlyInstanceHasBeenSet() const
{
    return m_forReadonlyInstanceHasBeenSet;
}

string ModifyDBInstanceSecurityGroupsRequest::GetOpResourceId() const
{
    return m_opResourceId;
}

void ModifyDBInstanceSecurityGroupsRequest::SetOpResourceId(const string& _opResourceId)
{
    m_opResourceId = _opResourceId;
    m_opResourceIdHasBeenSet = true;
}

bool ModifyDBInstanceSecurityGroupsRequest::OpResourceIdHasBeenSet() const
{
    return m_opResourceIdHasBeenSet;
}


