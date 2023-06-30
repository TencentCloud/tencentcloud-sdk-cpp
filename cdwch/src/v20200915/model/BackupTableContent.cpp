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

#include <tencentcloud/cdwch/v20200915/model/BackupTableContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

BackupTableContent::BackupTableContent() :
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_totalBytesHasBeenSet(false),
    m_vClusterHasBeenSet(false),
    m_ipsHasBeenSet(false),
    m_zooPathHasBeenSet(false),
    m_ripHasBeenSet(false)
{
}

CoreInternalOutcome BackupTableContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("TotalBytes") && !value["TotalBytes"].IsNull())
    {
        if (!value["TotalBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.TotalBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBytes = value["TotalBytes"].GetInt64();
        m_totalBytesHasBeenSet = true;
    }

    if (value.HasMember("VCluster") && !value["VCluster"].IsNull())
    {
        if (!value["VCluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.VCluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vCluster = string(value["VCluster"].GetString());
        m_vClusterHasBeenSet = true;
    }

    if (value.HasMember("Ips") && !value["Ips"].IsNull())
    {
        if (!value["Ips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.Ips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ips = string(value["Ips"].GetString());
        m_ipsHasBeenSet = true;
    }

    if (value.HasMember("ZooPath") && !value["ZooPath"].IsNull())
    {
        if (!value["ZooPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.ZooPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zooPath = string(value["ZooPath"].GetString());
        m_zooPathHasBeenSet = true;
    }

    if (value.HasMember("Rip") && !value["Rip"].IsNull())
    {
        if (!value["Rip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTableContent.Rip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rip = string(value["Rip"].GetString());
        m_ripHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupTableContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_totalBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBytes, allocator);
    }

    if (m_vClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vCluster.c_str(), allocator).Move(), allocator);
    }

    if (m_ipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ips.c_str(), allocator).Move(), allocator);
    }

    if (m_zooPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZooPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zooPath.c_str(), allocator).Move(), allocator);
    }

    if (m_ripHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rip.c_str(), allocator).Move(), allocator);
    }

}


string BackupTableContent::GetDatabase() const
{
    return m_database;
}

void BackupTableContent::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool BackupTableContent::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string BackupTableContent::GetTable() const
{
    return m_table;
}

void BackupTableContent::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool BackupTableContent::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

int64_t BackupTableContent::GetTotalBytes() const
{
    return m_totalBytes;
}

void BackupTableContent::SetTotalBytes(const int64_t& _totalBytes)
{
    m_totalBytes = _totalBytes;
    m_totalBytesHasBeenSet = true;
}

bool BackupTableContent::TotalBytesHasBeenSet() const
{
    return m_totalBytesHasBeenSet;
}

string BackupTableContent::GetVCluster() const
{
    return m_vCluster;
}

void BackupTableContent::SetVCluster(const string& _vCluster)
{
    m_vCluster = _vCluster;
    m_vClusterHasBeenSet = true;
}

bool BackupTableContent::VClusterHasBeenSet() const
{
    return m_vClusterHasBeenSet;
}

string BackupTableContent::GetIps() const
{
    return m_ips;
}

void BackupTableContent::SetIps(const string& _ips)
{
    m_ips = _ips;
    m_ipsHasBeenSet = true;
}

bool BackupTableContent::IpsHasBeenSet() const
{
    return m_ipsHasBeenSet;
}

string BackupTableContent::GetZooPath() const
{
    return m_zooPath;
}

void BackupTableContent::SetZooPath(const string& _zooPath)
{
    m_zooPath = _zooPath;
    m_zooPathHasBeenSet = true;
}

bool BackupTableContent::ZooPathHasBeenSet() const
{
    return m_zooPathHasBeenSet;
}

string BackupTableContent::GetRip() const
{
    return m_rip;
}

void BackupTableContent::SetRip(const string& _rip)
{
    m_rip = _rip;
    m_ripHasBeenSet = true;
}

bool BackupTableContent::RipHasBeenSet() const
{
    return m_ripHasBeenSet;
}

