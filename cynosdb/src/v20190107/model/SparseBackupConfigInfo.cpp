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

#include <tencentcloud/cynosdb/v20190107/model/SparseBackupConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SparseBackupConfigInfo::SparseBackupConfigInfo() :
    m_opTypeHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_sparsePeriodConfigHasBeenSet(false),
    m_sparsePeriodTimeHasBeenSet(false),
    m_sparseBackupSaveDaysHasBeenSet(false)
{
}

CoreInternalOutcome SparseBackupConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpType") && !value["OpType"].IsNull())
    {
        if (!value["OpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparseBackupConfigInfo.OpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opType = string(value["OpType"].GetString());
        m_opTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparseBackupConfigInfo.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("SparsePeriodConfig") && !value["SparsePeriodConfig"].IsNull())
    {
        if (!value["SparsePeriodConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparseBackupConfigInfo.SparsePeriodConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparsePeriodConfig = string(value["SparsePeriodConfig"].GetString());
        m_sparsePeriodConfigHasBeenSet = true;
    }

    if (value.HasMember("SparsePeriodTime") && !value["SparsePeriodTime"].IsNull())
    {
        if (!value["SparsePeriodTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SparseBackupConfigInfo.SparsePeriodTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sparsePeriodTime.Deserialize(value["SparsePeriodTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sparsePeriodTimeHasBeenSet = true;
    }

    if (value.HasMember("SparseBackupSaveDays") && !value["SparseBackupSaveDays"].IsNull())
    {
        if (!value["SparseBackupSaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparseBackupConfigInfo.SparseBackupSaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sparseBackupSaveDays = value["SparseBackupSaveDays"].GetInt64();
        m_sparseBackupSaveDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparseBackupConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_opTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_opType.c_str(), allocator).Move(), allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_sparsePeriodConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparsePeriodConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparsePeriodConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_sparsePeriodTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparsePeriodTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sparsePeriodTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sparseBackupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparseBackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sparseBackupSaveDays, allocator);
    }

}


string SparseBackupConfigInfo::GetOpType() const
{
    return m_opType;
}

void SparseBackupConfigInfo::SetOpType(const string& _opType)
{
    m_opType = _opType;
    m_opTypeHasBeenSet = true;
}

bool SparseBackupConfigInfo::OpTypeHasBeenSet() const
{
    return m_opTypeHasBeenSet;
}

string SparseBackupConfigInfo::GetConfigId() const
{
    return m_configId;
}

void SparseBackupConfigInfo::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool SparseBackupConfigInfo::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string SparseBackupConfigInfo::GetSparsePeriodConfig() const
{
    return m_sparsePeriodConfig;
}

void SparseBackupConfigInfo::SetSparsePeriodConfig(const string& _sparsePeriodConfig)
{
    m_sparsePeriodConfig = _sparsePeriodConfig;
    m_sparsePeriodConfigHasBeenSet = true;
}

bool SparseBackupConfigInfo::SparsePeriodConfigHasBeenSet() const
{
    return m_sparsePeriodConfigHasBeenSet;
}

SparsePeriodTime SparseBackupConfigInfo::GetSparsePeriodTime() const
{
    return m_sparsePeriodTime;
}

void SparseBackupConfigInfo::SetSparsePeriodTime(const SparsePeriodTime& _sparsePeriodTime)
{
    m_sparsePeriodTime = _sparsePeriodTime;
    m_sparsePeriodTimeHasBeenSet = true;
}

bool SparseBackupConfigInfo::SparsePeriodTimeHasBeenSet() const
{
    return m_sparsePeriodTimeHasBeenSet;
}

int64_t SparseBackupConfigInfo::GetSparseBackupSaveDays() const
{
    return m_sparseBackupSaveDays;
}

void SparseBackupConfigInfo::SetSparseBackupSaveDays(const int64_t& _sparseBackupSaveDays)
{
    m_sparseBackupSaveDays = _sparseBackupSaveDays;
    m_sparseBackupSaveDaysHasBeenSet = true;
}

bool SparseBackupConfigInfo::SparseBackupSaveDaysHasBeenSet() const
{
    return m_sparseBackupSaveDaysHasBeenSet;
}

