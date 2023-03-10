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

#include <tencentcloud/tcaplusdb/v20190823/model/TableGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

TableGroupInfo::TableGroupInfo() :
    m_tableGroupIdHasBeenSet(false),
    m_tableGroupNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tableCountHasBeenSet(false),
    m_totalSizeHasBeenSet(false),
    m_txhBackupExpireDayHasBeenSet(false),
    m_enableMysqlHasBeenSet(false),
    m_mysqlConnIpHasBeenSet(false),
    m_mysqlConnPortHasBeenSet(false)
{
}

CoreInternalOutcome TableGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableGroupInfo.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableGroupName") && !value["TableGroupName"].IsNull())
    {
        if (!value["TableGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableGroupInfo.TableGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupName = string(value["TableGroupName"].GetString());
        m_tableGroupNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableGroupInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("TableCount") && !value["TableCount"].IsNull())
    {
        if (!value["TableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableGroupInfo.TableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableCount = value["TableCount"].GetUint64();
        m_tableCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableGroupInfo.TotalSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = value["TotalSize"].GetUint64();
        m_totalSizeHasBeenSet = true;
    }

    if (value.HasMember("TxhBackupExpireDay") && !value["TxhBackupExpireDay"].IsNull())
    {
        if (!value["TxhBackupExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableGroupInfo.TxhBackupExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_txhBackupExpireDay = value["TxhBackupExpireDay"].GetUint64();
        m_txhBackupExpireDayHasBeenSet = true;
    }

    if (value.HasMember("EnableMysql") && !value["EnableMysql"].IsNull())
    {
        if (!value["EnableMysql"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableGroupInfo.EnableMysql` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableMysql = value["EnableMysql"].GetUint64();
        m_enableMysqlHasBeenSet = true;
    }

    if (value.HasMember("MysqlConnIp") && !value["MysqlConnIp"].IsNull())
    {
        if (!value["MysqlConnIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableGroupInfo.MysqlConnIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mysqlConnIp = string(value["MysqlConnIp"].GetString());
        m_mysqlConnIpHasBeenSet = true;
    }

    if (value.HasMember("MysqlConnPort") && !value["MysqlConnPort"].IsNull())
    {
        if (!value["MysqlConnPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableGroupInfo.MysqlConnPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mysqlConnPort = value["MysqlConnPort"].GetUint64();
        m_mysqlConnPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableCount, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

    if (m_txhBackupExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxhBackupExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_txhBackupExpireDay, allocator);
    }

    if (m_enableMysqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMysql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMysql, allocator);
    }

    if (m_mysqlConnIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MysqlConnIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mysqlConnIp.c_str(), allocator).Move(), allocator);
    }

    if (m_mysqlConnPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MysqlConnPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mysqlConnPort, allocator);
    }

}


string TableGroupInfo::GetTableGroupId() const
{
    return m_tableGroupId;
}

void TableGroupInfo::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool TableGroupInfo::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string TableGroupInfo::GetTableGroupName() const
{
    return m_tableGroupName;
}

void TableGroupInfo::SetTableGroupName(const string& _tableGroupName)
{
    m_tableGroupName = _tableGroupName;
    m_tableGroupNameHasBeenSet = true;
}

bool TableGroupInfo::TableGroupNameHasBeenSet() const
{
    return m_tableGroupNameHasBeenSet;
}

string TableGroupInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void TableGroupInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool TableGroupInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

uint64_t TableGroupInfo::GetTableCount() const
{
    return m_tableCount;
}

void TableGroupInfo::SetTableCount(const uint64_t& _tableCount)
{
    m_tableCount = _tableCount;
    m_tableCountHasBeenSet = true;
}

bool TableGroupInfo::TableCountHasBeenSet() const
{
    return m_tableCountHasBeenSet;
}

uint64_t TableGroupInfo::GetTotalSize() const
{
    return m_totalSize;
}

void TableGroupInfo::SetTotalSize(const uint64_t& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool TableGroupInfo::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

uint64_t TableGroupInfo::GetTxhBackupExpireDay() const
{
    return m_txhBackupExpireDay;
}

void TableGroupInfo::SetTxhBackupExpireDay(const uint64_t& _txhBackupExpireDay)
{
    m_txhBackupExpireDay = _txhBackupExpireDay;
    m_txhBackupExpireDayHasBeenSet = true;
}

bool TableGroupInfo::TxhBackupExpireDayHasBeenSet() const
{
    return m_txhBackupExpireDayHasBeenSet;
}

uint64_t TableGroupInfo::GetEnableMysql() const
{
    return m_enableMysql;
}

void TableGroupInfo::SetEnableMysql(const uint64_t& _enableMysql)
{
    m_enableMysql = _enableMysql;
    m_enableMysqlHasBeenSet = true;
}

bool TableGroupInfo::EnableMysqlHasBeenSet() const
{
    return m_enableMysqlHasBeenSet;
}

string TableGroupInfo::GetMysqlConnIp() const
{
    return m_mysqlConnIp;
}

void TableGroupInfo::SetMysqlConnIp(const string& _mysqlConnIp)
{
    m_mysqlConnIp = _mysqlConnIp;
    m_mysqlConnIpHasBeenSet = true;
}

bool TableGroupInfo::MysqlConnIpHasBeenSet() const
{
    return m_mysqlConnIpHasBeenSet;
}

uint64_t TableGroupInfo::GetMysqlConnPort() const
{
    return m_mysqlConnPort;
}

void TableGroupInfo::SetMysqlConnPort(const uint64_t& _mysqlConnPort)
{
    m_mysqlConnPort = _mysqlConnPort;
    m_mysqlConnPortHasBeenSet = true;
}

bool TableGroupInfo::MysqlConnPortHasBeenSet() const
{
    return m_mysqlConnPortHasBeenSet;
}

