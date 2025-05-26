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

#include <tencentcloud/emr/v20190103/model/ModifyUsersOfGroupSTDRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyUsersOfGroupSTDRequest::ModifyUsersOfGroupSTDRequest() :
    m_instanceIdHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operateActionHasBeenSet(false)
{
}

string ModifyUsersOfGroupSTDRequest::ToJsonString() const
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

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_operateActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateAction.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUsersOfGroupSTDRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyUsersOfGroupSTDRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyUsersOfGroupSTDRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyUsersOfGroupSTDRequest::GetGroup() const
{
    return m_group;
}

void ModifyUsersOfGroupSTDRequest::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool ModifyUsersOfGroupSTDRequest::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

vector<string> ModifyUsersOfGroupSTDRequest::GetUsers() const
{
    return m_users;
}

void ModifyUsersOfGroupSTDRequest::SetUsers(const vector<string>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool ModifyUsersOfGroupSTDRequest::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

string ModifyUsersOfGroupSTDRequest::GetDescription() const
{
    return m_description;
}

void ModifyUsersOfGroupSTDRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyUsersOfGroupSTDRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyUsersOfGroupSTDRequest::GetOperateAction() const
{
    return m_operateAction;
}

void ModifyUsersOfGroupSTDRequest::SetOperateAction(const string& _operateAction)
{
    m_operateAction = _operateAction;
    m_operateActionHasBeenSet = true;
}

bool ModifyUsersOfGroupSTDRequest::OperateActionHasBeenSet() const
{
    return m_operateActionHasBeenSet;
}


