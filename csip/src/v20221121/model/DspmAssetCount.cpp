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

#include <tencentcloud/csip/v20221121/model/DspmAssetCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetCount::DspmAssetCount() :
    m_assetCountHasBeenSet(false),
    m_dangerRiskCountHasBeenSet(false),
    m_lowRiskCountHasBeenSet(false),
    m_riskAssetCountHasBeenSet(false),
    m_alarmAssetCountHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetCount.AssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetInt64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("DangerRiskCount") && !value["DangerRiskCount"].IsNull())
    {
        if (!value["DangerRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetCount.DangerRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dangerRiskCount = value["DangerRiskCount"].GetInt64();
        m_dangerRiskCountHasBeenSet = true;
    }

    if (value.HasMember("LowRiskCount") && !value["LowRiskCount"].IsNull())
    {
        if (!value["LowRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetCount.LowRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lowRiskCount = value["LowRiskCount"].GetInt64();
        m_lowRiskCountHasBeenSet = true;
    }

    if (value.HasMember("RiskAssetCount") && !value["RiskAssetCount"].IsNull())
    {
        if (!value["RiskAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetCount.RiskAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskAssetCount = value["RiskAssetCount"].GetInt64();
        m_riskAssetCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmAssetCount") && !value["AlarmAssetCount"].IsNull())
    {
        if (!value["AlarmAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetCount.AlarmAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmAssetCount = value["AlarmAssetCount"].GetInt64();
        m_alarmAssetCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_dangerRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DangerRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dangerRiskCount, allocator);
    }

    if (m_lowRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowRiskCount, allocator);
    }

    if (m_riskAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskAssetCount, allocator);
    }

    if (m_alarmAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmAssetCount, allocator);
    }

}


int64_t DspmAssetCount::GetAssetCount() const
{
    return m_assetCount;
}

void DspmAssetCount::SetAssetCount(const int64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool DspmAssetCount::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

int64_t DspmAssetCount::GetDangerRiskCount() const
{
    return m_dangerRiskCount;
}

void DspmAssetCount::SetDangerRiskCount(const int64_t& _dangerRiskCount)
{
    m_dangerRiskCount = _dangerRiskCount;
    m_dangerRiskCountHasBeenSet = true;
}

bool DspmAssetCount::DangerRiskCountHasBeenSet() const
{
    return m_dangerRiskCountHasBeenSet;
}

int64_t DspmAssetCount::GetLowRiskCount() const
{
    return m_lowRiskCount;
}

void DspmAssetCount::SetLowRiskCount(const int64_t& _lowRiskCount)
{
    m_lowRiskCount = _lowRiskCount;
    m_lowRiskCountHasBeenSet = true;
}

bool DspmAssetCount::LowRiskCountHasBeenSet() const
{
    return m_lowRiskCountHasBeenSet;
}

int64_t DspmAssetCount::GetRiskAssetCount() const
{
    return m_riskAssetCount;
}

void DspmAssetCount::SetRiskAssetCount(const int64_t& _riskAssetCount)
{
    m_riskAssetCount = _riskAssetCount;
    m_riskAssetCountHasBeenSet = true;
}

bool DspmAssetCount::RiskAssetCountHasBeenSet() const
{
    return m_riskAssetCountHasBeenSet;
}

int64_t DspmAssetCount::GetAlarmAssetCount() const
{
    return m_alarmAssetCount;
}

void DspmAssetCount::SetAlarmAssetCount(const int64_t& _alarmAssetCount)
{
    m_alarmAssetCount = _alarmAssetCount;
    m_alarmAssetCountHasBeenSet = true;
}

bool DspmAssetCount::AlarmAssetCountHasBeenSet() const
{
    return m_alarmAssetCountHasBeenSet;
}

