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

#include <tencentcloud/emr/v20190103/model/DeleteUserManagerUserListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DeleteUserManagerUserListRequest::DeleteUserManagerUserListRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameListHasBeenSet(false),
    m_tkeClusterIdHasBeenSet(false),
    m_displayStrategyHasBeenSet(false),
    m_userGroupListHasBeenSet(false),
    m_deleteHomeDirHasBeenSet(false)
{
}

string DeleteUserManagerUserListRequest::ToJsonString() const
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

    if (m_userNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userNameList.begin(); itr != m_userNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tkeClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tkeClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userGroupList.begin(); itr != m_userGroupList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteHomeDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteHomeDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteHomeDir, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteUserManagerUserListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteUserManagerUserListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteUserManagerUserListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DeleteUserManagerUserListRequest::GetUserNameList() const
{
    return m_userNameList;
}

void DeleteUserManagerUserListRequest::SetUserNameList(const vector<string>& _userNameList)
{
    m_userNameList = _userNameList;
    m_userNameListHasBeenSet = true;
}

bool DeleteUserManagerUserListRequest::UserNameListHasBeenSet() const
{
    return m_userNameListHasBeenSet;
}

string DeleteUserManagerUserListRequest::GetTkeClusterId() const
{
    return m_tkeClusterId;
}

void DeleteUserManagerUserListRequest::SetTkeClusterId(const string& _tkeClusterId)
{
    m_tkeClusterId = _tkeClusterId;
    m_tkeClusterIdHasBeenSet = true;
}

bool DeleteUserManagerUserListRequest::TkeClusterIdHasBeenSet() const
{
    return m_tkeClusterIdHasBeenSet;
}

string DeleteUserManagerUserListRequest::GetDisplayStrategy() const
{
    return m_displayStrategy;
}

void DeleteUserManagerUserListRequest::SetDisplayStrategy(const string& _displayStrategy)
{
    m_displayStrategy = _displayStrategy;
    m_displayStrategyHasBeenSet = true;
}

bool DeleteUserManagerUserListRequest::DisplayStrategyHasBeenSet() const
{
    return m_displayStrategyHasBeenSet;
}

vector<UserAndGroup> DeleteUserManagerUserListRequest::GetUserGroupList() const
{
    return m_userGroupList;
}

void DeleteUserManagerUserListRequest::SetUserGroupList(const vector<UserAndGroup>& _userGroupList)
{
    m_userGroupList = _userGroupList;
    m_userGroupListHasBeenSet = true;
}

bool DeleteUserManagerUserListRequest::UserGroupListHasBeenSet() const
{
    return m_userGroupListHasBeenSet;
}

bool DeleteUserManagerUserListRequest::GetDeleteHomeDir() const
{
    return m_deleteHomeDir;
}

void DeleteUserManagerUserListRequest::SetDeleteHomeDir(const bool& _deleteHomeDir)
{
    m_deleteHomeDir = _deleteHomeDir;
    m_deleteHomeDirHasBeenSet = true;
}

bool DeleteUserManagerUserListRequest::DeleteHomeDirHasBeenSet() const
{
    return m_deleteHomeDirHasBeenSet;
}


