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

#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyClusterDatabaseRequest::ModifyClusterDatabaseRequest() :
    m_clusterIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_newUserHostPrivilegesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_oldUserHostPrivilegesHasBeenSet(false)
{
}

string ModifyClusterDatabaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_newUserHostPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewUserHostPrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newUserHostPrivileges.begin(); itr != m_newUserHostPrivileges.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_oldUserHostPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldUserHostPrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oldUserHostPrivileges.begin(); itr != m_oldUserHostPrivileges.end(); ++itr, ++i)
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


string ModifyClusterDatabaseRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterDatabaseRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterDatabaseRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyClusterDatabaseRequest::GetDbName() const
{
    return m_dbName;
}

void ModifyClusterDatabaseRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool ModifyClusterDatabaseRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

vector<UserHostPrivilege> ModifyClusterDatabaseRequest::GetNewUserHostPrivileges() const
{
    return m_newUserHostPrivileges;
}

void ModifyClusterDatabaseRequest::SetNewUserHostPrivileges(const vector<UserHostPrivilege>& _newUserHostPrivileges)
{
    m_newUserHostPrivileges = _newUserHostPrivileges;
    m_newUserHostPrivilegesHasBeenSet = true;
}

bool ModifyClusterDatabaseRequest::NewUserHostPrivilegesHasBeenSet() const
{
    return m_newUserHostPrivilegesHasBeenSet;
}

string ModifyClusterDatabaseRequest::GetDescription() const
{
    return m_description;
}

void ModifyClusterDatabaseRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyClusterDatabaseRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<UserHostPrivilege> ModifyClusterDatabaseRequest::GetOldUserHostPrivileges() const
{
    return m_oldUserHostPrivileges;
}

void ModifyClusterDatabaseRequest::SetOldUserHostPrivileges(const vector<UserHostPrivilege>& _oldUserHostPrivileges)
{
    m_oldUserHostPrivileges = _oldUserHostPrivileges;
    m_oldUserHostPrivilegesHasBeenSet = true;
}

bool ModifyClusterDatabaseRequest::OldUserHostPrivilegesHasBeenSet() const
{
    return m_oldUserHostPrivilegesHasBeenSet;
}


