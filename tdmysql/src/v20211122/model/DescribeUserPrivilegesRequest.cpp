/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tdmysql/v20211122/model/DescribeUserPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeUserPrivilegesRequest::DescribeUserPrivilegesRequest() :
    m_instanceIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_colNameHasBeenSet(false)
{
}

string DescribeUserPrivilegesRequest::ToJsonString() const
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

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
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


string DescribeUserPrivilegesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeUserPrivilegesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeUserPrivilegesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeUserPrivilegesRequest::GetHost() const
{
    return m_host;
}

void DescribeUserPrivilegesRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeUserPrivilegesRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeUserPrivilegesRequest::GetUserName() const
{
    return m_userName;
}

void DescribeUserPrivilegesRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeUserPrivilegesRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeUserPrivilegesRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeUserPrivilegesRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeUserPrivilegesRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DescribeUserPrivilegesRequest::GetObject() const
{
    return m_object;
}

void DescribeUserPrivilegesRequest::SetObject(const string& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool DescribeUserPrivilegesRequest::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

string DescribeUserPrivilegesRequest::GetObjectType() const
{
    return m_objectType;
}

void DescribeUserPrivilegesRequest::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool DescribeUserPrivilegesRequest::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

string DescribeUserPrivilegesRequest::GetColName() const
{
    return m_colName;
}

void DescribeUserPrivilegesRequest::SetColName(const string& _colName)
{
    m_colName = _colName;
    m_colNameHasBeenSet = true;
}

bool DescribeUserPrivilegesRequest::ColNameHasBeenSet() const
{
    return m_colNameHasBeenSet;
}


