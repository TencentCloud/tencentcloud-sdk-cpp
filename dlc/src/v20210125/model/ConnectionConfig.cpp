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

#include <tencentcloud/dlc/v20210125/model/ConnectionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ConnectionConfig::ConnectionConfig() :
    m_mysqlConnectionHasBeenSet(false),
    m_emrHiveConnectionHasBeenSet(false),
    m_tCHouseDConnectionHasBeenSet(false),
    m_volumeConnectionHasBeenSet(false),
    m_lakeHouseConnectionHasBeenSet(false),
    m_postgreSQLConnectionHasBeenSet(false),
    m_dlcConnectionHasBeenSet(false)
{
}

CoreInternalOutcome ConnectionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MysqlConnection") && !value["MysqlConnection"].IsNull())
    {
        if (!value["MysqlConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionConfig.MysqlConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mysqlConnection.Deserialize(value["MysqlConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mysqlConnectionHasBeenSet = true;
    }

    if (value.HasMember("EmrHiveConnection") && !value["EmrHiveConnection"].IsNull())
    {
        if (!value["EmrHiveConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionConfig.EmrHiveConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emrHiveConnection.Deserialize(value["EmrHiveConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emrHiveConnectionHasBeenSet = true;
    }

    if (value.HasMember("TCHouseDConnection") && !value["TCHouseDConnection"].IsNull())
    {
        if (!value["TCHouseDConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionConfig.TCHouseDConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tCHouseDConnection.Deserialize(value["TCHouseDConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tCHouseDConnectionHasBeenSet = true;
    }

    if (value.HasMember("VolumeConnection") && !value["VolumeConnection"].IsNull())
    {
        if (!value["VolumeConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionConfig.VolumeConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volumeConnection.Deserialize(value["VolumeConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeConnectionHasBeenSet = true;
    }

    if (value.HasMember("LakeHouseConnection") && !value["LakeHouseConnection"].IsNull())
    {
        if (!value["LakeHouseConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionConfig.LakeHouseConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lakeHouseConnection.Deserialize(value["LakeHouseConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lakeHouseConnectionHasBeenSet = true;
    }

    if (value.HasMember("PostgreSQLConnection") && !value["PostgreSQLConnection"].IsNull())
    {
        if (!value["PostgreSQLConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionConfig.PostgreSQLConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postgreSQLConnection.Deserialize(value["PostgreSQLConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postgreSQLConnectionHasBeenSet = true;
    }

    if (value.HasMember("DlcConnection") && !value["DlcConnection"].IsNull())
    {
        if (!value["DlcConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionConfig.DlcConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dlcConnection.Deserialize(value["DlcConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dlcConnectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mysqlConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MysqlConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mysqlConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_emrHiveConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrHiveConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emrHiveConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tCHouseDConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCHouseDConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tCHouseDConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumeConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lakeHouseConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LakeHouseConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lakeHouseConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postgreSQLConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostgreSQLConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postgreSQLConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dlcConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dlcConnection.ToJsonObject(value[key.c_str()], allocator);
    }

}


MysqlConnection ConnectionConfig::GetMysqlConnection() const
{
    return m_mysqlConnection;
}

void ConnectionConfig::SetMysqlConnection(const MysqlConnection& _mysqlConnection)
{
    m_mysqlConnection = _mysqlConnection;
    m_mysqlConnectionHasBeenSet = true;
}

bool ConnectionConfig::MysqlConnectionHasBeenSet() const
{
    return m_mysqlConnectionHasBeenSet;
}

HiveConnection ConnectionConfig::GetEmrHiveConnection() const
{
    return m_emrHiveConnection;
}

void ConnectionConfig::SetEmrHiveConnection(const HiveConnection& _emrHiveConnection)
{
    m_emrHiveConnection = _emrHiveConnection;
    m_emrHiveConnectionHasBeenSet = true;
}

bool ConnectionConfig::EmrHiveConnectionHasBeenSet() const
{
    return m_emrHiveConnectionHasBeenSet;
}

DorisConnection ConnectionConfig::GetTCHouseDConnection() const
{
    return m_tCHouseDConnection;
}

void ConnectionConfig::SetTCHouseDConnection(const DorisConnection& _tCHouseDConnection)
{
    m_tCHouseDConnection = _tCHouseDConnection;
    m_tCHouseDConnectionHasBeenSet = true;
}

bool ConnectionConfig::TCHouseDConnectionHasBeenSet() const
{
    return m_tCHouseDConnectionHasBeenSet;
}

VolumeConnection ConnectionConfig::GetVolumeConnection() const
{
    return m_volumeConnection;
}

void ConnectionConfig::SetVolumeConnection(const VolumeConnection& _volumeConnection)
{
    m_volumeConnection = _volumeConnection;
    m_volumeConnectionHasBeenSet = true;
}

bool ConnectionConfig::VolumeConnectionHasBeenSet() const
{
    return m_volumeConnectionHasBeenSet;
}

LakeHouseConnection ConnectionConfig::GetLakeHouseConnection() const
{
    return m_lakeHouseConnection;
}

void ConnectionConfig::SetLakeHouseConnection(const LakeHouseConnection& _lakeHouseConnection)
{
    m_lakeHouseConnection = _lakeHouseConnection;
    m_lakeHouseConnectionHasBeenSet = true;
}

bool ConnectionConfig::LakeHouseConnectionHasBeenSet() const
{
    return m_lakeHouseConnectionHasBeenSet;
}

PostgreSQLConnection ConnectionConfig::GetPostgreSQLConnection() const
{
    return m_postgreSQLConnection;
}

void ConnectionConfig::SetPostgreSQLConnection(const PostgreSQLConnection& _postgreSQLConnection)
{
    m_postgreSQLConnection = _postgreSQLConnection;
    m_postgreSQLConnectionHasBeenSet = true;
}

bool ConnectionConfig::PostgreSQLConnectionHasBeenSet() const
{
    return m_postgreSQLConnectionHasBeenSet;
}

DlcConnection ConnectionConfig::GetDlcConnection() const
{
    return m_dlcConnection;
}

void ConnectionConfig::SetDlcConnection(const DlcConnection& _dlcConnection)
{
    m_dlcConnection = _dlcConnection;
    m_dlcConnectionHasBeenSet = true;
}

bool ConnectionConfig::DlcConnectionHasBeenSet() const
{
    return m_dlcConnectionHasBeenSet;
}

