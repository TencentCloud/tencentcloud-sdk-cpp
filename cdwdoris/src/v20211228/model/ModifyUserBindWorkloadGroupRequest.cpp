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

#include <tencentcloud/cdwdoris/v20211228/model/ModifyUserBindWorkloadGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ModifyUserBindWorkloadGroupRequest::ModifyUserBindWorkloadGroupRequest() :
    m_instanceIdHasBeenSet(false),
    m_bindUsersHasBeenSet(false),
    m_oldWorkloadGroupNameHasBeenSet(false),
    m_newWorkloadGroupNameHasBeenSet(false)
{
}

string ModifyUserBindWorkloadGroupRequest::ToJsonString() const
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

    if (m_bindUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindUsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindUsers.begin(); itr != m_bindUsers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_oldWorkloadGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldWorkloadGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldWorkloadGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_newWorkloadGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewWorkloadGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newWorkloadGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserBindWorkloadGroupRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyUserBindWorkloadGroupRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyUserBindWorkloadGroupRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<BindUser> ModifyUserBindWorkloadGroupRequest::GetBindUsers() const
{
    return m_bindUsers;
}

void ModifyUserBindWorkloadGroupRequest::SetBindUsers(const vector<BindUser>& _bindUsers)
{
    m_bindUsers = _bindUsers;
    m_bindUsersHasBeenSet = true;
}

bool ModifyUserBindWorkloadGroupRequest::BindUsersHasBeenSet() const
{
    return m_bindUsersHasBeenSet;
}

string ModifyUserBindWorkloadGroupRequest::GetOldWorkloadGroupName() const
{
    return m_oldWorkloadGroupName;
}

void ModifyUserBindWorkloadGroupRequest::SetOldWorkloadGroupName(const string& _oldWorkloadGroupName)
{
    m_oldWorkloadGroupName = _oldWorkloadGroupName;
    m_oldWorkloadGroupNameHasBeenSet = true;
}

bool ModifyUserBindWorkloadGroupRequest::OldWorkloadGroupNameHasBeenSet() const
{
    return m_oldWorkloadGroupNameHasBeenSet;
}

string ModifyUserBindWorkloadGroupRequest::GetNewWorkloadGroupName() const
{
    return m_newWorkloadGroupName;
}

void ModifyUserBindWorkloadGroupRequest::SetNewWorkloadGroupName(const string& _newWorkloadGroupName)
{
    m_newWorkloadGroupName = _newWorkloadGroupName;
    m_newWorkloadGroupNameHasBeenSet = true;
}

bool ModifyUserBindWorkloadGroupRequest::NewWorkloadGroupNameHasBeenSet() const
{
    return m_newWorkloadGroupNameHasBeenSet;
}


