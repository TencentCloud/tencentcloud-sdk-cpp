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

#include <tencentcloud/csip/v20221121/model/ModifyRiskScanCronConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyRiskScanCronConfigRequest::ModifyRiskScanCronConfigRequest() :
    m_memberIdHasBeenSet(false),
    m_cronStatusHasBeenSet(false),
    m_cronPlanContentHasBeenSet(false),
    m_ruleAutoEnableHasBeenSet(false),
    m_scanPlanTimezoneHasBeenSet(false),
    m_incrementAssetScanRiskHasBeenSet(false)
{
}

string ModifyRiskScanCronConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cronStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cronStatus, allocator);
    }

    if (m_cronPlanContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronPlanContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronPlanContent.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleAutoEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAutoEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleAutoEnable, allocator);
    }

    if (m_scanPlanTimezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPlanTimezone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanPlanTimezone.c_str(), allocator).Move(), allocator);
    }

    if (m_incrementAssetScanRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementAssetScanRisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_incrementAssetScanRisk, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyRiskScanCronConfigRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyRiskScanCronConfigRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyRiskScanCronConfigRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t ModifyRiskScanCronConfigRequest::GetCronStatus() const
{
    return m_cronStatus;
}

void ModifyRiskScanCronConfigRequest::SetCronStatus(const uint64_t& _cronStatus)
{
    m_cronStatus = _cronStatus;
    m_cronStatusHasBeenSet = true;
}

bool ModifyRiskScanCronConfigRequest::CronStatusHasBeenSet() const
{
    return m_cronStatusHasBeenSet;
}

string ModifyRiskScanCronConfigRequest::GetCronPlanContent() const
{
    return m_cronPlanContent;
}

void ModifyRiskScanCronConfigRequest::SetCronPlanContent(const string& _cronPlanContent)
{
    m_cronPlanContent = _cronPlanContent;
    m_cronPlanContentHasBeenSet = true;
}

bool ModifyRiskScanCronConfigRequest::CronPlanContentHasBeenSet() const
{
    return m_cronPlanContentHasBeenSet;
}

bool ModifyRiskScanCronConfigRequest::GetRuleAutoEnable() const
{
    return m_ruleAutoEnable;
}

void ModifyRiskScanCronConfigRequest::SetRuleAutoEnable(const bool& _ruleAutoEnable)
{
    m_ruleAutoEnable = _ruleAutoEnable;
    m_ruleAutoEnableHasBeenSet = true;
}

bool ModifyRiskScanCronConfigRequest::RuleAutoEnableHasBeenSet() const
{
    return m_ruleAutoEnableHasBeenSet;
}

string ModifyRiskScanCronConfigRequest::GetScanPlanTimezone() const
{
    return m_scanPlanTimezone;
}

void ModifyRiskScanCronConfigRequest::SetScanPlanTimezone(const string& _scanPlanTimezone)
{
    m_scanPlanTimezone = _scanPlanTimezone;
    m_scanPlanTimezoneHasBeenSet = true;
}

bool ModifyRiskScanCronConfigRequest::ScanPlanTimezoneHasBeenSet() const
{
    return m_scanPlanTimezoneHasBeenSet;
}

bool ModifyRiskScanCronConfigRequest::GetIncrementAssetScanRisk() const
{
    return m_incrementAssetScanRisk;
}

void ModifyRiskScanCronConfigRequest::SetIncrementAssetScanRisk(const bool& _incrementAssetScanRisk)
{
    m_incrementAssetScanRisk = _incrementAssetScanRisk;
    m_incrementAssetScanRiskHasBeenSet = true;
}

bool ModifyRiskScanCronConfigRequest::IncrementAssetScanRiskHasBeenSet() const
{
    return m_incrementAssetScanRiskHasBeenSet;
}


