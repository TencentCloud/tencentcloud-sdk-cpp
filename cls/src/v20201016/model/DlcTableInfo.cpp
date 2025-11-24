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

#include <tencentcloud/cls/v20201016/model/DlcTableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DlcTableInfo::DlcTableInfo() :
    m_dataDirectoryHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

CoreInternalOutcome DlcTableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataDirectory") && !value["DataDirectory"].IsNull())
    {
        if (!value["DataDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcTableInfo.DataDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataDirectory = string(value["DataDirectory"].GetString());
        m_dataDirectoryHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcTableInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcTableInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcTableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataDirectory.c_str(), allocator).Move(), allocator);
    }

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

}


string DlcTableInfo::GetDataDirectory() const
{
    return m_dataDirectory;
}

void DlcTableInfo::SetDataDirectory(const string& _dataDirectory)
{
    m_dataDirectory = _dataDirectory;
    m_dataDirectoryHasBeenSet = true;
}

bool DlcTableInfo::DataDirectoryHasBeenSet() const
{
    return m_dataDirectoryHasBeenSet;
}

string DlcTableInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void DlcTableInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DlcTableInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DlcTableInfo::GetTableName() const
{
    return m_tableName;
}

void DlcTableInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DlcTableInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

