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

#include <tencentcloud/cynosdb/v20190107/model/TableMappingObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

TableMappingObject::TableMappingObject() :
    m_srcInstanceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_mapDatabaseNameHasBeenSet(false),
    m_mapTableNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_processHasBeenSet(false),
    m_lagHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_isPrimaryHasBeenSet(false),
    m_virtualColValueHasBeenSet(false)
{
}

CoreInternalOutcome TableMappingObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcInstanceId") && !value["SrcInstanceId"].IsNull())
    {
        if (!value["SrcInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.SrcInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcInstanceId = string(value["SrcInstanceId"].GetString());
        m_srcInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("MapDatabaseName") && !value["MapDatabaseName"].IsNull())
    {
        if (!value["MapDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.MapDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mapDatabaseName = string(value["MapDatabaseName"].GetString());
        m_mapDatabaseNameHasBeenSet = true;
    }

    if (value.HasMember("MapTableName") && !value["MapTableName"].IsNull())
    {
        if (!value["MapTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.MapTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mapTableName = string(value["MapTableName"].GetString());
        m_mapTableNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.Process` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_process = value["Process"].GetDouble();
        m_processHasBeenSet = true;
    }

    if (value.HasMember("Lag") && !value["Lag"].IsNull())
    {
        if (!value["Lag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.Lag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lag = value["Lag"].GetInt64();
        m_lagHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("IsPrimary") && !value["IsPrimary"].IsNull())
    {
        if (!value["IsPrimary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.IsPrimary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPrimary = value["IsPrimary"].GetBool();
        m_isPrimaryHasBeenSet = true;
    }

    if (value.HasMember("VirtualColValue") && !value["VirtualColValue"].IsNull())
    {
        if (!value["VirtualColValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMappingObject.VirtualColValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualColValue = string(value["VirtualColValue"].GetString());
        m_virtualColValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableMappingObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_mapDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mapDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_mapTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mapTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_process, allocator);
    }

    if (m_lagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lag, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_isPrimaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPrimary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPrimary, allocator);
    }

    if (m_virtualColValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualColValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualColValue.c_str(), allocator).Move(), allocator);
    }

}


string TableMappingObject::GetSrcInstanceId() const
{
    return m_srcInstanceId;
}

void TableMappingObject::SetSrcInstanceId(const string& _srcInstanceId)
{
    m_srcInstanceId = _srcInstanceId;
    m_srcInstanceIdHasBeenSet = true;
}

bool TableMappingObject::SrcInstanceIdHasBeenSet() const
{
    return m_srcInstanceIdHasBeenSet;
}

string TableMappingObject::GetDatabaseName() const
{
    return m_databaseName;
}

void TableMappingObject::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TableMappingObject::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TableMappingObject::GetTableName() const
{
    return m_tableName;
}

void TableMappingObject::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableMappingObject::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableMappingObject::GetMapDatabaseName() const
{
    return m_mapDatabaseName;
}

void TableMappingObject::SetMapDatabaseName(const string& _mapDatabaseName)
{
    m_mapDatabaseName = _mapDatabaseName;
    m_mapDatabaseNameHasBeenSet = true;
}

bool TableMappingObject::MapDatabaseNameHasBeenSet() const
{
    return m_mapDatabaseNameHasBeenSet;
}

string TableMappingObject::GetMapTableName() const
{
    return m_mapTableName;
}

void TableMappingObject::SetMapTableName(const string& _mapTableName)
{
    m_mapTableName = _mapTableName;
    m_mapTableNameHasBeenSet = true;
}

bool TableMappingObject::MapTableNameHasBeenSet() const
{
    return m_mapTableNameHasBeenSet;
}

string TableMappingObject::GetStatus() const
{
    return m_status;
}

void TableMappingObject::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TableMappingObject::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double TableMappingObject::GetProcess() const
{
    return m_process;
}

void TableMappingObject::SetProcess(const double& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool TableMappingObject::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

int64_t TableMappingObject::GetLag() const
{
    return m_lag;
}

void TableMappingObject::SetLag(const int64_t& _lag)
{
    m_lag = _lag;
    m_lagHasBeenSet = true;
}

bool TableMappingObject::LagHasBeenSet() const
{
    return m_lagHasBeenSet;
}

string TableMappingObject::GetMessage() const
{
    return m_message;
}

void TableMappingObject::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool TableMappingObject::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

bool TableMappingObject::GetIsPrimary() const
{
    return m_isPrimary;
}

void TableMappingObject::SetIsPrimary(const bool& _isPrimary)
{
    m_isPrimary = _isPrimary;
    m_isPrimaryHasBeenSet = true;
}

bool TableMappingObject::IsPrimaryHasBeenSet() const
{
    return m_isPrimaryHasBeenSet;
}

string TableMappingObject::GetVirtualColValue() const
{
    return m_virtualColValue;
}

void TableMappingObject::SetVirtualColValue(const string& _virtualColValue)
{
    m_virtualColValue = _virtualColValue;
    m_virtualColValueHasBeenSet = true;
}

bool TableMappingObject::VirtualColValueHasBeenSet() const
{
    return m_virtualColValueHasBeenSet;
}

