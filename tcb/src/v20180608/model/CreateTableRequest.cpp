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

#include <tencentcloud/tcb/v20180608/model/CreateTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateTableRequest::CreateTableRequest() :
    m_tableNameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_permissionInfoHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_mongoConnectorHasBeenSet(false)
{
}

string CreateTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_permissionInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_mongoConnectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoConnector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mongoConnector.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTableRequest::GetTableName() const
{
    return m_tableName;
}

void CreateTableRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool CreateTableRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string CreateTableRequest::GetTag() const
{
    return m_tag;
}

void CreateTableRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool CreateTableRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

PermissionInfo CreateTableRequest::GetPermissionInfo() const
{
    return m_permissionInfo;
}

void CreateTableRequest::SetPermissionInfo(const PermissionInfo& _permissionInfo)
{
    m_permissionInfo = _permissionInfo;
    m_permissionInfoHasBeenSet = true;
}

bool CreateTableRequest::PermissionInfoHasBeenSet() const
{
    return m_permissionInfoHasBeenSet;
}

string CreateTableRequest::GetEnvId() const
{
    return m_envId;
}

void CreateTableRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateTableRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

MongoConnector CreateTableRequest::GetMongoConnector() const
{
    return m_mongoConnector;
}

void CreateTableRequest::SetMongoConnector(const MongoConnector& _mongoConnector)
{
    m_mongoConnector = _mongoConnector;
    m_mongoConnectorHasBeenSet = true;
}

bool CreateTableRequest::MongoConnectorHasBeenSet() const
{
    return m_mongoConnectorHasBeenSet;
}


