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

#include <tencentcloud/ckafka/v20190819/model/DescModifyType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescModifyType::DescModifyType() :
    m_modifyTypeHasBeenSet(false),
    m_migrateFlagHasBeenSet(false),
    m_migrateCostTimeHasBeenSet(false),
    m_upgradeStrategyHasBeenSet(false),
    m_migrateCostTimeHighSpeedHasBeenSet(false)
{
}

CoreInternalOutcome DescModifyType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModifyType") && !value["ModifyType"].IsNull())
    {
        if (!value["ModifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescModifyType.ModifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyType = value["ModifyType"].GetInt64();
        m_modifyTypeHasBeenSet = true;
    }

    if (value.HasMember("MigrateFlag") && !value["MigrateFlag"].IsNull())
    {
        if (!value["MigrateFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescModifyType.MigrateFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_migrateFlag = value["MigrateFlag"].GetBool();
        m_migrateFlagHasBeenSet = true;
    }

    if (value.HasMember("MigrateCostTime") && !value["MigrateCostTime"].IsNull())
    {
        if (!value["MigrateCostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescModifyType.MigrateCostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_migrateCostTime = value["MigrateCostTime"].GetInt64();
        m_migrateCostTimeHasBeenSet = true;
    }

    if (value.HasMember("UpgradeStrategy") && !value["UpgradeStrategy"].IsNull())
    {
        if (!value["UpgradeStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescModifyType.UpgradeStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeStrategy = value["UpgradeStrategy"].GetInt64();
        m_upgradeStrategyHasBeenSet = true;
    }

    if (value.HasMember("MigrateCostTimeHighSpeed") && !value["MigrateCostTimeHighSpeed"].IsNull())
    {
        if (!value["MigrateCostTimeHighSpeed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescModifyType.MigrateCostTimeHighSpeed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_migrateCostTimeHighSpeed = value["MigrateCostTimeHighSpeed"].GetInt64();
        m_migrateCostTimeHighSpeedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescModifyType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyType, allocator);
    }

    if (m_migrateFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrateFlag, allocator);
    }

    if (m_migrateCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrateCostTime, allocator);
    }

    if (m_upgradeStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upgradeStrategy, allocator);
    }

    if (m_migrateCostTimeHighSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateCostTimeHighSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrateCostTimeHighSpeed, allocator);
    }

}


int64_t DescModifyType::GetModifyType() const
{
    return m_modifyType;
}

void DescModifyType::SetModifyType(const int64_t& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool DescModifyType::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}

bool DescModifyType::GetMigrateFlag() const
{
    return m_migrateFlag;
}

void DescModifyType::SetMigrateFlag(const bool& _migrateFlag)
{
    m_migrateFlag = _migrateFlag;
    m_migrateFlagHasBeenSet = true;
}

bool DescModifyType::MigrateFlagHasBeenSet() const
{
    return m_migrateFlagHasBeenSet;
}

int64_t DescModifyType::GetMigrateCostTime() const
{
    return m_migrateCostTime;
}

void DescModifyType::SetMigrateCostTime(const int64_t& _migrateCostTime)
{
    m_migrateCostTime = _migrateCostTime;
    m_migrateCostTimeHasBeenSet = true;
}

bool DescModifyType::MigrateCostTimeHasBeenSet() const
{
    return m_migrateCostTimeHasBeenSet;
}

int64_t DescModifyType::GetUpgradeStrategy() const
{
    return m_upgradeStrategy;
}

void DescModifyType::SetUpgradeStrategy(const int64_t& _upgradeStrategy)
{
    m_upgradeStrategy = _upgradeStrategy;
    m_upgradeStrategyHasBeenSet = true;
}

bool DescModifyType::UpgradeStrategyHasBeenSet() const
{
    return m_upgradeStrategyHasBeenSet;
}

int64_t DescModifyType::GetMigrateCostTimeHighSpeed() const
{
    return m_migrateCostTimeHighSpeed;
}

void DescModifyType::SetMigrateCostTimeHighSpeed(const int64_t& _migrateCostTimeHighSpeed)
{
    m_migrateCostTimeHighSpeed = _migrateCostTimeHighSpeed;
    m_migrateCostTimeHighSpeedHasBeenSet = true;
}

bool DescModifyType::MigrateCostTimeHighSpeedHasBeenSet() const
{
    return m_migrateCostTimeHighSpeedHasBeenSet;
}

