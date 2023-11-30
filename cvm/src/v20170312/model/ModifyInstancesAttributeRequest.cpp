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

#include <tencentcloud/cvm/v20170312/model/ModifyInstancesAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ModifyInstancesAttributeRequest::ModifyInstancesAttributeRequest() :
    m_instanceIdsHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_camRoleNameHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_disableApiTerminationHasBeenSet(false),
    m_camRoleTypeHasBeenSet(false),
    m_autoRebootHasBeenSet(false)
{
}

string ModifyInstancesAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_camRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_camRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_disableApiTerminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableApiTermination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableApiTermination, allocator);
    }

    if (m_camRoleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamRoleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_camRoleType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoReboot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoReboot, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyInstancesAttributeRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyInstancesAttributeRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyInstancesAttributeRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string ModifyInstancesAttributeRequest::GetInstanceName() const
{
    return m_instanceName;
}

void ModifyInstancesAttributeRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ModifyInstancesAttributeRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ModifyInstancesAttributeRequest::GetUserData() const
{
    return m_userData;
}

void ModifyInstancesAttributeRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool ModifyInstancesAttributeRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<string> ModifyInstancesAttributeRequest::GetSecurityGroups() const
{
    return m_securityGroups;
}

void ModifyInstancesAttributeRequest::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool ModifyInstancesAttributeRequest::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}

string ModifyInstancesAttributeRequest::GetCamRoleName() const
{
    return m_camRoleName;
}

void ModifyInstancesAttributeRequest::SetCamRoleName(const string& _camRoleName)
{
    m_camRoleName = _camRoleName;
    m_camRoleNameHasBeenSet = true;
}

bool ModifyInstancesAttributeRequest::CamRoleNameHasBeenSet() const
{
    return m_camRoleNameHasBeenSet;
}

string ModifyInstancesAttributeRequest::GetHostName() const
{
    return m_hostName;
}

void ModifyInstancesAttributeRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ModifyInstancesAttributeRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

bool ModifyInstancesAttributeRequest::GetDisableApiTermination() const
{
    return m_disableApiTermination;
}

void ModifyInstancesAttributeRequest::SetDisableApiTermination(const bool& _disableApiTermination)
{
    m_disableApiTermination = _disableApiTermination;
    m_disableApiTerminationHasBeenSet = true;
}

bool ModifyInstancesAttributeRequest::DisableApiTerminationHasBeenSet() const
{
    return m_disableApiTerminationHasBeenSet;
}

string ModifyInstancesAttributeRequest::GetCamRoleType() const
{
    return m_camRoleType;
}

void ModifyInstancesAttributeRequest::SetCamRoleType(const string& _camRoleType)
{
    m_camRoleType = _camRoleType;
    m_camRoleTypeHasBeenSet = true;
}

bool ModifyInstancesAttributeRequest::CamRoleTypeHasBeenSet() const
{
    return m_camRoleTypeHasBeenSet;
}

bool ModifyInstancesAttributeRequest::GetAutoReboot() const
{
    return m_autoReboot;
}

void ModifyInstancesAttributeRequest::SetAutoReboot(const bool& _autoReboot)
{
    m_autoReboot = _autoReboot;
    m_autoRebootHasBeenSet = true;
}

bool ModifyInstancesAttributeRequest::AutoRebootHasBeenSet() const
{
    return m_autoRebootHasBeenSet;
}


