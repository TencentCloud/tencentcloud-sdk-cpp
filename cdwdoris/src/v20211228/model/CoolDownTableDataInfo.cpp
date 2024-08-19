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

#include <tencentcloud/cdwdoris/v20211228/model/CoolDownTableDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

CoolDownTableDataInfo::CoolDownTableDataInfo() :
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_remoteSizeHasBeenSet(false)
{
}

CoreInternalOutcome CoolDownTableDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownTableDataInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownTableDataInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownTableDataInfo.Size` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_size = string(value["Size"].GetString());
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("RemoteSize") && !value["RemoteSize"].IsNull())
    {
        if (!value["RemoteSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoolDownTableDataInfo.RemoteSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteSize = string(value["RemoteSize"].GetString());
        m_remoteSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoolDownTableDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteSize.c_str(), allocator).Move(), allocator);
    }

}


string CoolDownTableDataInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void CoolDownTableDataInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CoolDownTableDataInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string CoolDownTableDataInfo::GetTableName() const
{
    return m_tableName;
}

void CoolDownTableDataInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool CoolDownTableDataInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string CoolDownTableDataInfo::GetSize() const
{
    return m_size;
}

void CoolDownTableDataInfo::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool CoolDownTableDataInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string CoolDownTableDataInfo::GetRemoteSize() const
{
    return m_remoteSize;
}

void CoolDownTableDataInfo::SetRemoteSize(const string& _remoteSize)
{
    m_remoteSize = _remoteSize;
    m_remoteSizeHasBeenSet = true;
}

bool CoolDownTableDataInfo::RemoteSizeHasBeenSet() const
{
    return m_remoteSizeHasBeenSet;
}

