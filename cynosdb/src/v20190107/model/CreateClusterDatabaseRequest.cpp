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

#include <tencentcloud/cynosdb/v20190107/model/CreateClusterDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateClusterDatabaseRequest::CreateClusterDatabaseRequest() :
    m_clusterIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_characterSetHasBeenSet(false),
    m_collateRuleHasBeenSet(false),
    m_userHostPrivilegesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateClusterDatabaseRequest::ToJsonString() const
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

    if (m_characterSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharacterSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_characterSet.c_str(), allocator).Move(), allocator);
    }

    if (m_collateRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollateRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collateRule.c_str(), allocator).Move(), allocator);
    }

    if (m_userHostPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserHostPrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userHostPrivileges.begin(); itr != m_userHostPrivileges.end(); ++itr, ++i)
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterDatabaseRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateClusterDatabaseRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateClusterDatabaseRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateClusterDatabaseRequest::GetDbName() const
{
    return m_dbName;
}

void CreateClusterDatabaseRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool CreateClusterDatabaseRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string CreateClusterDatabaseRequest::GetCharacterSet() const
{
    return m_characterSet;
}

void CreateClusterDatabaseRequest::SetCharacterSet(const string& _characterSet)
{
    m_characterSet = _characterSet;
    m_characterSetHasBeenSet = true;
}

bool CreateClusterDatabaseRequest::CharacterSetHasBeenSet() const
{
    return m_characterSetHasBeenSet;
}

string CreateClusterDatabaseRequest::GetCollateRule() const
{
    return m_collateRule;
}

void CreateClusterDatabaseRequest::SetCollateRule(const string& _collateRule)
{
    m_collateRule = _collateRule;
    m_collateRuleHasBeenSet = true;
}

bool CreateClusterDatabaseRequest::CollateRuleHasBeenSet() const
{
    return m_collateRuleHasBeenSet;
}

vector<UserHostPrivilege> CreateClusterDatabaseRequest::GetUserHostPrivileges() const
{
    return m_userHostPrivileges;
}

void CreateClusterDatabaseRequest::SetUserHostPrivileges(const vector<UserHostPrivilege>& _userHostPrivileges)
{
    m_userHostPrivileges = _userHostPrivileges;
    m_userHostPrivilegesHasBeenSet = true;
}

bool CreateClusterDatabaseRequest::UserHostPrivilegesHasBeenSet() const
{
    return m_userHostPrivilegesHasBeenSet;
}

string CreateClusterDatabaseRequest::GetDescription() const
{
    return m_description;
}

void CreateClusterDatabaseRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateClusterDatabaseRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


