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

#include <tencentcloud/cynosdb/v20190107/model/IntegrateCreateClusterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

IntegrateCreateClusterConfig::IntegrateCreateClusterConfig() :
    m_binlogSaveDaysHasBeenSet(false),
    m_backupSaveDaysHasBeenSet(false),
    m_semiSyncTimeoutHasBeenSet(false),
    m_proxyEndPointConfigsHasBeenSet(false)
{
}

CoreInternalOutcome IntegrateCreateClusterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BinlogSaveDays") && !value["BinlogSaveDays"].IsNull())
    {
        if (!value["BinlogSaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrateCreateClusterConfig.BinlogSaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogSaveDays = value["BinlogSaveDays"].GetInt64();
        m_binlogSaveDaysHasBeenSet = true;
    }

    if (value.HasMember("BackupSaveDays") && !value["BackupSaveDays"].IsNull())
    {
        if (!value["BackupSaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrateCreateClusterConfig.BackupSaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSaveDays = value["BackupSaveDays"].GetInt64();
        m_backupSaveDaysHasBeenSet = true;
    }

    if (value.HasMember("SemiSyncTimeout") && !value["SemiSyncTimeout"].IsNull())
    {
        if (!value["SemiSyncTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrateCreateClusterConfig.SemiSyncTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_semiSyncTimeout = value["SemiSyncTimeout"].GetInt64();
        m_semiSyncTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ProxyEndPointConfigs") && !value["ProxyEndPointConfigs"].IsNull())
    {
        if (!value["ProxyEndPointConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntegrateCreateClusterConfig.ProxyEndPointConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyEndPointConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyEndPointConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyEndPointConfigs.push_back(item);
        }
        m_proxyEndPointConfigsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrateCreateClusterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_binlogSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogSaveDays, allocator);
    }

    if (m_backupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSaveDays, allocator);
    }

    if (m_semiSyncTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SemiSyncTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_semiSyncTimeout, allocator);
    }

    if (m_proxyEndPointConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyEndPointConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyEndPointConfigs.begin(); itr != m_proxyEndPointConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t IntegrateCreateClusterConfig::GetBinlogSaveDays() const
{
    return m_binlogSaveDays;
}

void IntegrateCreateClusterConfig::SetBinlogSaveDays(const int64_t& _binlogSaveDays)
{
    m_binlogSaveDays = _binlogSaveDays;
    m_binlogSaveDaysHasBeenSet = true;
}

bool IntegrateCreateClusterConfig::BinlogSaveDaysHasBeenSet() const
{
    return m_binlogSaveDaysHasBeenSet;
}

int64_t IntegrateCreateClusterConfig::GetBackupSaveDays() const
{
    return m_backupSaveDays;
}

void IntegrateCreateClusterConfig::SetBackupSaveDays(const int64_t& _backupSaveDays)
{
    m_backupSaveDays = _backupSaveDays;
    m_backupSaveDaysHasBeenSet = true;
}

bool IntegrateCreateClusterConfig::BackupSaveDaysHasBeenSet() const
{
    return m_backupSaveDaysHasBeenSet;
}

int64_t IntegrateCreateClusterConfig::GetSemiSyncTimeout() const
{
    return m_semiSyncTimeout;
}

void IntegrateCreateClusterConfig::SetSemiSyncTimeout(const int64_t& _semiSyncTimeout)
{
    m_semiSyncTimeout = _semiSyncTimeout;
    m_semiSyncTimeoutHasBeenSet = true;
}

bool IntegrateCreateClusterConfig::SemiSyncTimeoutHasBeenSet() const
{
    return m_semiSyncTimeoutHasBeenSet;
}

vector<ProxyEndPointConfigInfo> IntegrateCreateClusterConfig::GetProxyEndPointConfigs() const
{
    return m_proxyEndPointConfigs;
}

void IntegrateCreateClusterConfig::SetProxyEndPointConfigs(const vector<ProxyEndPointConfigInfo>& _proxyEndPointConfigs)
{
    m_proxyEndPointConfigs = _proxyEndPointConfigs;
    m_proxyEndPointConfigsHasBeenSet = true;
}

bool IntegrateCreateClusterConfig::ProxyEndPointConfigsHasBeenSet() const
{
    return m_proxyEndPointConfigsHasBeenSet;
}

