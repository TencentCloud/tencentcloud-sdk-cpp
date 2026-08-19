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

#include <tencentcloud/csip/v20221121/model/RiskCronConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RiskCronConfig::RiskCronConfig() :
    m_createAppIDHasBeenSet(false),
    m_planContentHasBeenSet(false),
    m_cronStatusHasBeenSet(false),
    m_addRuleEnableStatusHasBeenSet(false),
    m_scanPlanTimezoneHasBeenSet(false),
    m_incrementAssetScanRiskHasBeenSet(false)
{
}

CoreInternalOutcome RiskCronConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateAppID") && !value["CreateAppID"].IsNull())
    {
        if (!value["CreateAppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCronConfig.CreateAppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createAppID = value["CreateAppID"].GetUint64();
        m_createAppIDHasBeenSet = true;
    }

    if (value.HasMember("PlanContent") && !value["PlanContent"].IsNull())
    {
        if (!value["PlanContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCronConfig.PlanContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planContent = string(value["PlanContent"].GetString());
        m_planContentHasBeenSet = true;
    }

    if (value.HasMember("CronStatus") && !value["CronStatus"].IsNull())
    {
        if (!value["CronStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCronConfig.CronStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cronStatus = value["CronStatus"].GetUint64();
        m_cronStatusHasBeenSet = true;
    }

    if (value.HasMember("AddRuleEnableStatus") && !value["AddRuleEnableStatus"].IsNull())
    {
        if (!value["AddRuleEnableStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCronConfig.AddRuleEnableStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_addRuleEnableStatus = value["AddRuleEnableStatus"].GetBool();
        m_addRuleEnableStatusHasBeenSet = true;
    }

    if (value.HasMember("ScanPlanTimezone") && !value["ScanPlanTimezone"].IsNull())
    {
        if (!value["ScanPlanTimezone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCronConfig.ScanPlanTimezone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanPlanTimezone = string(value["ScanPlanTimezone"].GetString());
        m_scanPlanTimezoneHasBeenSet = true;
    }

    if (value.HasMember("IncrementAssetScanRisk") && !value["IncrementAssetScanRisk"].IsNull())
    {
        if (!value["IncrementAssetScanRisk"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCronConfig.IncrementAssetScanRisk` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_incrementAssetScanRisk = value["IncrementAssetScanRisk"].GetBool();
        m_incrementAssetScanRiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskCronConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createAppID, allocator);
    }

    if (m_planContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planContent.c_str(), allocator).Move(), allocator);
    }

    if (m_cronStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cronStatus, allocator);
    }

    if (m_addRuleEnableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddRuleEnableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addRuleEnableStatus, allocator);
    }

    if (m_scanPlanTimezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPlanTimezone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanPlanTimezone.c_str(), allocator).Move(), allocator);
    }

    if (m_incrementAssetScanRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementAssetScanRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_incrementAssetScanRisk, allocator);
    }

}


uint64_t RiskCronConfig::GetCreateAppID() const
{
    return m_createAppID;
}

void RiskCronConfig::SetCreateAppID(const uint64_t& _createAppID)
{
    m_createAppID = _createAppID;
    m_createAppIDHasBeenSet = true;
}

bool RiskCronConfig::CreateAppIDHasBeenSet() const
{
    return m_createAppIDHasBeenSet;
}

string RiskCronConfig::GetPlanContent() const
{
    return m_planContent;
}

void RiskCronConfig::SetPlanContent(const string& _planContent)
{
    m_planContent = _planContent;
    m_planContentHasBeenSet = true;
}

bool RiskCronConfig::PlanContentHasBeenSet() const
{
    return m_planContentHasBeenSet;
}

uint64_t RiskCronConfig::GetCronStatus() const
{
    return m_cronStatus;
}

void RiskCronConfig::SetCronStatus(const uint64_t& _cronStatus)
{
    m_cronStatus = _cronStatus;
    m_cronStatusHasBeenSet = true;
}

bool RiskCronConfig::CronStatusHasBeenSet() const
{
    return m_cronStatusHasBeenSet;
}

bool RiskCronConfig::GetAddRuleEnableStatus() const
{
    return m_addRuleEnableStatus;
}

void RiskCronConfig::SetAddRuleEnableStatus(const bool& _addRuleEnableStatus)
{
    m_addRuleEnableStatus = _addRuleEnableStatus;
    m_addRuleEnableStatusHasBeenSet = true;
}

bool RiskCronConfig::AddRuleEnableStatusHasBeenSet() const
{
    return m_addRuleEnableStatusHasBeenSet;
}

string RiskCronConfig::GetScanPlanTimezone() const
{
    return m_scanPlanTimezone;
}

void RiskCronConfig::SetScanPlanTimezone(const string& _scanPlanTimezone)
{
    m_scanPlanTimezone = _scanPlanTimezone;
    m_scanPlanTimezoneHasBeenSet = true;
}

bool RiskCronConfig::ScanPlanTimezoneHasBeenSet() const
{
    return m_scanPlanTimezoneHasBeenSet;
}

bool RiskCronConfig::GetIncrementAssetScanRisk() const
{
    return m_incrementAssetScanRisk;
}

void RiskCronConfig::SetIncrementAssetScanRisk(const bool& _incrementAssetScanRisk)
{
    m_incrementAssetScanRisk = _incrementAssetScanRisk;
    m_incrementAssetScanRiskHasBeenSet = true;
}

bool RiskCronConfig::IncrementAssetScanRiskHasBeenSet() const
{
    return m_incrementAssetScanRiskHasBeenSet;
}

