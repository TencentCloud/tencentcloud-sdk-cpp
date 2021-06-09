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

#include <tencentcloud/dcdb/v20180411/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeAccountPrivilegesRequest::DescribeAccountPrivilegesRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_colNameHasBeenSet(false)
{
}

string DescribeAccountPrivilegesRequest::ToJsonString() const
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

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_colNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_colName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAccountPrivilegesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeAccountPrivilegesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
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

string DescribeAccountPrivilegesRequest::GetHost() const
{
    return m_host;
}

void DescribeAccountPrivilegesRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeAccountPrivilegesRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetType() const
{
    return m_type;
}

void DescribeAccountPrivilegesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetObject() const
{
    return m_object;
}

void DescribeAccountPrivilegesRequest::SetObject(const string& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

string DescribeAccountPrivilegesRequest::GetColName() const
{
    return m_colName;
}

void DescribeAccountPrivilegesRequest::SetColName(const string& _colName)
{
    m_colName = _colName;
    m_colNameHasBeenSet = true;
}

bool DescribeAccountPrivilegesRequest::ColNameHasBeenSet() const
{
    return m_colNameHasBeenSet;
}


