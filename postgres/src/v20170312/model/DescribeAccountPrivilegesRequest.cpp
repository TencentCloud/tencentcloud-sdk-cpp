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

#include <tencentcloud/postgres/v20170312/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeAccountPrivilegesRequest::DescribeAccountPrivilegesRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_databaseObjectSetHasBeenSet(false)
{
}

string DescribeAccountPrivilegesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseObjectSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseObjectSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databaseObjectSet.begin(); itr != m_databaseObjectSet.end(); ++itr, ++i)
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


string DescribeAccountPrivilegesRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void DescribeAccountPrivilegesRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetUserName() const
{
    return m_userName;
}

void DescribeAccountPrivilegesRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

vector<DatabaseObject> DescribeAccountPrivilegesRequest::GetDatabaseObjectSet() const
{
    return m_databaseObjectSet;
}

void DescribeAccountPrivilegesRequest::SetDatabaseObjectSet(const vector<DatabaseObject>& _databaseObjectSet)
{
    m_databaseObjectSet = _databaseObjectSet;
    m_databaseObjectSetHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::DatabaseObjectSetHasBeenSet() const
{
    return m_databaseObjectSetHasBeenSet;
}


