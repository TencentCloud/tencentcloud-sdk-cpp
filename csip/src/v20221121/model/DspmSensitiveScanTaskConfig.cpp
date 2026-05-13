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

#include <tencentcloud/csip/v20221121/model/DspmSensitiveScanTaskConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmSensitiveScanTaskConfig::DspmSensitiveScanTaskConfig() :
    m_isScheduledHasBeenSet(false),
    m_scheduleConfigHasBeenSet(false),
    m_isRunAtOnceHasBeenSet(false)
{
}

CoreInternalOutcome DspmSensitiveScanTaskConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsScheduled") && !value["IsScheduled"].IsNull())
    {
        if (!value["IsScheduled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSensitiveScanTaskConfig.IsScheduled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isScheduled = value["IsScheduled"].GetBool();
        m_isScheduledHasBeenSet = true;
    }

    if (value.HasMember("ScheduleConfig") && !value["ScheduleConfig"].IsNull())
    {
        if (!value["ScheduleConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSensitiveScanTaskConfig.ScheduleConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scheduleConfig.Deserialize(value["ScheduleConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduleConfigHasBeenSet = true;
    }

    if (value.HasMember("IsRunAtOnce") && !value["IsRunAtOnce"].IsNull())
    {
        if (!value["IsRunAtOnce"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSensitiveScanTaskConfig.IsRunAtOnce` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRunAtOnce = value["IsRunAtOnce"].GetBool();
        m_isRunAtOnceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmSensitiveScanTaskConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isScheduledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScheduled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isScheduled, allocator);
    }

    if (m_scheduleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduleConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isRunAtOnceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRunAtOnce";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRunAtOnce, allocator);
    }

}


bool DspmSensitiveScanTaskConfig::GetIsScheduled() const
{
    return m_isScheduled;
}

void DspmSensitiveScanTaskConfig::SetIsScheduled(const bool& _isScheduled)
{
    m_isScheduled = _isScheduled;
    m_isScheduledHasBeenSet = true;
}

bool DspmSensitiveScanTaskConfig::IsScheduledHasBeenSet() const
{
    return m_isScheduledHasBeenSet;
}

DspmScheduleConfig DspmSensitiveScanTaskConfig::GetScheduleConfig() const
{
    return m_scheduleConfig;
}

void DspmSensitiveScanTaskConfig::SetScheduleConfig(const DspmScheduleConfig& _scheduleConfig)
{
    m_scheduleConfig = _scheduleConfig;
    m_scheduleConfigHasBeenSet = true;
}

bool DspmSensitiveScanTaskConfig::ScheduleConfigHasBeenSet() const
{
    return m_scheduleConfigHasBeenSet;
}

bool DspmSensitiveScanTaskConfig::GetIsRunAtOnce() const
{
    return m_isRunAtOnce;
}

void DspmSensitiveScanTaskConfig::SetIsRunAtOnce(const bool& _isRunAtOnce)
{
    m_isRunAtOnce = _isRunAtOnce;
    m_isRunAtOnceHasBeenSet = true;
}

bool DspmSensitiveScanTaskConfig::IsRunAtOnceHasBeenSet() const
{
    return m_isRunAtOnceHasBeenSet;
}

