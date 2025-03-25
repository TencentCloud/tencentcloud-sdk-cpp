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

#include <tencentcloud/cdwdoris/v20211228/model/ActionAlterUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ActionAlterUserRequest::ActionAlterUserRequest() :
    m_userInfoHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_userPrivilegeHasBeenSet(false),
    m_computeGroupsHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string ActionAlterUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_userPrivilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPrivilege";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userPrivilege, allocator);
    }

    if (m_computeGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_computeGroups.begin(); itr != m_computeGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo ActionAlterUserRequest::GetUserInfo() const
{
    return m_userInfo;
}

void ActionAlterUserRequest::SetUserInfo(const UserInfo& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool ActionAlterUserRequest::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

string ActionAlterUserRequest::GetApiType() const
{
    return m_apiType;
}

void ActionAlterUserRequest::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool ActionAlterUserRequest::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

int64_t ActionAlterUserRequest::GetUserPrivilege() const
{
    return m_userPrivilege;
}

void ActionAlterUserRequest::SetUserPrivilege(const int64_t& _userPrivilege)
{
    m_userPrivilege = _userPrivilege;
    m_userPrivilegeHasBeenSet = true;
}

bool ActionAlterUserRequest::UserPrivilegeHasBeenSet() const
{
    return m_userPrivilegeHasBeenSet;
}

vector<string> ActionAlterUserRequest::GetComputeGroups() const
{
    return m_computeGroups;
}

void ActionAlterUserRequest::SetComputeGroups(const vector<string>& _computeGroups)
{
    m_computeGroups = _computeGroups;
    m_computeGroupsHasBeenSet = true;
}

bool ActionAlterUserRequest::ComputeGroupsHasBeenSet() const
{
    return m_computeGroupsHasBeenSet;
}

string ActionAlterUserRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ActionAlterUserRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ActionAlterUserRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


