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

#include <tencentcloud/cdb/v20170320/model/ZoneConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ZoneConf::ZoneConf() :
    m_deployModeHasBeenSet(false),
    m_masterZoneHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_backupZoneHasBeenSet(false)
{
}

CoreInternalOutcome ZoneConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneConf.DeployMode` is not array type"));

        const rapidjson::Value &tmpValue = value["DeployMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deployMode.push_back((*itr).GetInt64());
        }
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("MasterZone") && !value["MasterZone"].IsNull())
    {
        if (!value["MasterZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneConf.MasterZone` is not array type"));

        const rapidjson::Value &tmpValue = value["MasterZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_masterZone.push_back((*itr).GetString());
        }
        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("SlaveZone") && !value["SlaveZone"].IsNull())
    {
        if (!value["SlaveZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneConf.SlaveZone` is not array type"));

        const rapidjson::Value &tmpValue = value["SlaveZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_slaveZone.push_back((*itr).GetString());
        }
        m_slaveZoneHasBeenSet = true;
    }

    if (value.HasMember("BackupZone") && !value["BackupZone"].IsNull())
    {
        if (!value["BackupZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneConf.BackupZone` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupZone.push_back((*itr).GetString());
        }
        m_backupZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deployMode.begin(); itr != m_deployMode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_masterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_masterZone.begin(); itr != m_masterZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_slaveZone.begin(); itr != m_slaveZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupZone.begin(); itr != m_backupZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<int64_t> ZoneConf::GetDeployMode() const
{
    return m_deployMode;
}

void ZoneConf::SetDeployMode(const vector<int64_t>& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool ZoneConf::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

vector<string> ZoneConf::GetMasterZone() const
{
    return m_masterZone;
}

void ZoneConf::SetMasterZone(const vector<string>& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool ZoneConf::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

vector<string> ZoneConf::GetSlaveZone() const
{
    return m_slaveZone;
}

void ZoneConf::SetSlaveZone(const vector<string>& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool ZoneConf::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

vector<string> ZoneConf::GetBackupZone() const
{
    return m_backupZone;
}

void ZoneConf::SetBackupZone(const vector<string>& _backupZone)
{
    m_backupZone = _backupZone;
    m_backupZoneHasBeenSet = true;
}

bool ZoneConf::BackupZoneHasBeenSet() const
{
    return m_backupZoneHasBeenSet;
}

