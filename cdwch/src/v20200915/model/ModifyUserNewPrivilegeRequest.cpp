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

#include <tencentcloud/cdwch/v20200915/model/ModifyUserNewPrivilegeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

ModifyUserNewPrivilegeRequest::ModifyUserNewPrivilegeRequest() :
    m_instanceIdHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_allDatabaseHasBeenSet(false),
    m_globalPrivilegesHasBeenSet(false),
    m_databasePrivilegeListHasBeenSet(false)
{
}

string ModifyUserNewPrivilegeRequest::ToJsonString() const
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

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_allDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllDatabase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allDatabase, allocator);
    }

    if (m_globalPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalPrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_globalPrivileges.begin(); itr != m_globalPrivileges.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_databasePrivilegeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabasePrivilegeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databasePrivilegeList.begin(); itr != m_databasePrivilegeList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserNewPrivilegeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyUserNewPrivilegeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyUserNewPrivilegeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyUserNewPrivilegeRequest::GetCluster() const
{
    return m_cluster;
}

void ModifyUserNewPrivilegeRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool ModifyUserNewPrivilegeRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string ModifyUserNewPrivilegeRequest::GetUserName() const
{
    return m_userName;
}

void ModifyUserNewPrivilegeRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyUserNewPrivilegeRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

bool ModifyUserNewPrivilegeRequest::GetAllDatabase() const
{
    return m_allDatabase;
}

void ModifyUserNewPrivilegeRequest::SetAllDatabase(const bool& _allDatabase)
{
    m_allDatabase = _allDatabase;
    m_allDatabaseHasBeenSet = true;
}

bool ModifyUserNewPrivilegeRequest::AllDatabaseHasBeenSet() const
{
    return m_allDatabaseHasBeenSet;
}

vector<string> ModifyUserNewPrivilegeRequest::GetGlobalPrivileges() const
{
    return m_globalPrivileges;
}

void ModifyUserNewPrivilegeRequest::SetGlobalPrivileges(const vector<string>& _globalPrivileges)
{
    m_globalPrivileges = _globalPrivileges;
    m_globalPrivilegesHasBeenSet = true;
}

bool ModifyUserNewPrivilegeRequest::GlobalPrivilegesHasBeenSet() const
{
    return m_globalPrivilegesHasBeenSet;
}

vector<DatabasePrivilegeInfo> ModifyUserNewPrivilegeRequest::GetDatabasePrivilegeList() const
{
    return m_databasePrivilegeList;
}

void ModifyUserNewPrivilegeRequest::SetDatabasePrivilegeList(const vector<DatabasePrivilegeInfo>& _databasePrivilegeList)
{
    m_databasePrivilegeList = _databasePrivilegeList;
    m_databasePrivilegeListHasBeenSet = true;
}

bool ModifyUserNewPrivilegeRequest::DatabasePrivilegeListHasBeenSet() const
{
    return m_databasePrivilegeListHasBeenSet;
}


