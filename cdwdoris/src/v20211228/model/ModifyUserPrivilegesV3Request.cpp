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

#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserPrivilegesV3Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ModifyUserPrivilegesV3Request::ModifyUserPrivilegesV3Request() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userPrivilegesHasBeenSet(false),
    m_whiteHostHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_updateComputeGroupsHasBeenSet(false)
{
}

string ModifyUserPrivilegesV3Request::ToJsonString() const
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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userPrivileges.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_whiteHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_whiteHost.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateType, allocator);
    }

    if (m_updateComputeGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateComputeGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_updateComputeGroups.begin(); itr != m_updateComputeGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserPrivilegesV3Request::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyUserPrivilegesV3Request::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyUserPrivilegesV3Request::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyUserPrivilegesV3Request::GetUserName() const
{
    return m_userName;
}

void ModifyUserPrivilegesV3Request::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyUserPrivilegesV3Request::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

UpdateUserPrivileges ModifyUserPrivilegesV3Request::GetUserPrivileges() const
{
    return m_userPrivileges;
}

void ModifyUserPrivilegesV3Request::SetUserPrivileges(const UpdateUserPrivileges& _userPrivileges)
{
    m_userPrivileges = _userPrivileges;
    m_userPrivilegesHasBeenSet = true;
}

bool ModifyUserPrivilegesV3Request::UserPrivilegesHasBeenSet() const
{
    return m_userPrivilegesHasBeenSet;
}

string ModifyUserPrivilegesV3Request::GetWhiteHost() const
{
    return m_whiteHost;
}

void ModifyUserPrivilegesV3Request::SetWhiteHost(const string& _whiteHost)
{
    m_whiteHost = _whiteHost;
    m_whiteHostHasBeenSet = true;
}

bool ModifyUserPrivilegesV3Request::WhiteHostHasBeenSet() const
{
    return m_whiteHostHasBeenSet;
}

int64_t ModifyUserPrivilegesV3Request::GetUpdateType() const
{
    return m_updateType;
}

void ModifyUserPrivilegesV3Request::SetUpdateType(const int64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool ModifyUserPrivilegesV3Request::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

vector<string> ModifyUserPrivilegesV3Request::GetUpdateComputeGroups() const
{
    return m_updateComputeGroups;
}

void ModifyUserPrivilegesV3Request::SetUpdateComputeGroups(const vector<string>& _updateComputeGroups)
{
    m_updateComputeGroups = _updateComputeGroups;
    m_updateComputeGroupsHasBeenSet = true;
}

bool ModifyUserPrivilegesV3Request::UpdateComputeGroupsHasBeenSet() const
{
    return m_updateComputeGroupsHasBeenSet;
}


