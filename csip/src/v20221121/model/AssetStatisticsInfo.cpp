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

#include <tencentcloud/csip/v20221121/model/AssetStatisticsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetStatisticsInfo::AssetStatisticsInfo() :
    m_assetTotalCountHasBeenSet(false),
    m_assetAddCountHasBeenSet(false),
    m_riskAssetCountHasBeenSet(false),
    m_alarmAssetCountHasBeenSet(false),
    m_publicAssetCountHasBeenSet(false),
    m_exposeAssetCountHasBeenSet(false),
    m_cloudHostAssetCountHasBeenSet(false)
{
}

CoreInternalOutcome AssetStatisticsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetTotalCount") && !value["AssetTotalCount"].IsNull())
    {
        if (!value["AssetTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetStatisticsInfo.AssetTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetTotalCount = value["AssetTotalCount"].GetUint64();
        m_assetTotalCountHasBeenSet = true;
    }

    if (value.HasMember("AssetAddCount") && !value["AssetAddCount"].IsNull())
    {
        if (!value["AssetAddCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetStatisticsInfo.AssetAddCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetAddCount = value["AssetAddCount"].GetUint64();
        m_assetAddCountHasBeenSet = true;
    }

    if (value.HasMember("RiskAssetCount") && !value["RiskAssetCount"].IsNull())
    {
        if (!value["RiskAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetStatisticsInfo.RiskAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskAssetCount = value["RiskAssetCount"].GetUint64();
        m_riskAssetCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmAssetCount") && !value["AlarmAssetCount"].IsNull())
    {
        if (!value["AlarmAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetStatisticsInfo.AlarmAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmAssetCount = value["AlarmAssetCount"].GetUint64();
        m_alarmAssetCountHasBeenSet = true;
    }

    if (value.HasMember("PublicAssetCount") && !value["PublicAssetCount"].IsNull())
    {
        if (!value["PublicAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetStatisticsInfo.PublicAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_publicAssetCount = value["PublicAssetCount"].GetUint64();
        m_publicAssetCountHasBeenSet = true;
    }

    if (value.HasMember("ExposeAssetCount") && !value["ExposeAssetCount"].IsNull())
    {
        if (!value["ExposeAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetStatisticsInfo.ExposeAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exposeAssetCount = value["ExposeAssetCount"].GetUint64();
        m_exposeAssetCountHasBeenSet = true;
    }

    if (value.HasMember("CloudHostAssetCount") && !value["CloudHostAssetCount"].IsNull())
    {
        if (!value["CloudHostAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetStatisticsInfo.CloudHostAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudHostAssetCount = value["CloudHostAssetCount"].GetUint64();
        m_cloudHostAssetCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetStatisticsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetTotalCount, allocator);
    }

    if (m_assetAddCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetAddCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetAddCount, allocator);
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

    if (m_publicAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicAssetCount, allocator);
    }

    if (m_exposeAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposeAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exposeAssetCount, allocator);
    }

    if (m_cloudHostAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudHostAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudHostAssetCount, allocator);
    }

}


uint64_t AssetStatisticsInfo::GetAssetTotalCount() const
{
    return m_assetTotalCount;
}

void AssetStatisticsInfo::SetAssetTotalCount(const uint64_t& _assetTotalCount)
{
    m_assetTotalCount = _assetTotalCount;
    m_assetTotalCountHasBeenSet = true;
}

bool AssetStatisticsInfo::AssetTotalCountHasBeenSet() const
{
    return m_assetTotalCountHasBeenSet;
}

uint64_t AssetStatisticsInfo::GetAssetAddCount() const
{
    return m_assetAddCount;
}

void AssetStatisticsInfo::SetAssetAddCount(const uint64_t& _assetAddCount)
{
    m_assetAddCount = _assetAddCount;
    m_assetAddCountHasBeenSet = true;
}

bool AssetStatisticsInfo::AssetAddCountHasBeenSet() const
{
    return m_assetAddCountHasBeenSet;
}

uint64_t AssetStatisticsInfo::GetRiskAssetCount() const
{
    return m_riskAssetCount;
}

void AssetStatisticsInfo::SetRiskAssetCount(const uint64_t& _riskAssetCount)
{
    m_riskAssetCount = _riskAssetCount;
    m_riskAssetCountHasBeenSet = true;
}

bool AssetStatisticsInfo::RiskAssetCountHasBeenSet() const
{
    return m_riskAssetCountHasBeenSet;
}

uint64_t AssetStatisticsInfo::GetAlarmAssetCount() const
{
    return m_alarmAssetCount;
}

void AssetStatisticsInfo::SetAlarmAssetCount(const uint64_t& _alarmAssetCount)
{
    m_alarmAssetCount = _alarmAssetCount;
    m_alarmAssetCountHasBeenSet = true;
}

bool AssetStatisticsInfo::AlarmAssetCountHasBeenSet() const
{
    return m_alarmAssetCountHasBeenSet;
}

uint64_t AssetStatisticsInfo::GetPublicAssetCount() const
{
    return m_publicAssetCount;
}

void AssetStatisticsInfo::SetPublicAssetCount(const uint64_t& _publicAssetCount)
{
    m_publicAssetCount = _publicAssetCount;
    m_publicAssetCountHasBeenSet = true;
}

bool AssetStatisticsInfo::PublicAssetCountHasBeenSet() const
{
    return m_publicAssetCountHasBeenSet;
}

uint64_t AssetStatisticsInfo::GetExposeAssetCount() const
{
    return m_exposeAssetCount;
}

void AssetStatisticsInfo::SetExposeAssetCount(const uint64_t& _exposeAssetCount)
{
    m_exposeAssetCount = _exposeAssetCount;
    m_exposeAssetCountHasBeenSet = true;
}

bool AssetStatisticsInfo::ExposeAssetCountHasBeenSet() const
{
    return m_exposeAssetCountHasBeenSet;
}

uint64_t AssetStatisticsInfo::GetCloudHostAssetCount() const
{
    return m_cloudHostAssetCount;
}

void AssetStatisticsInfo::SetCloudHostAssetCount(const uint64_t& _cloudHostAssetCount)
{
    m_cloudHostAssetCount = _cloudHostAssetCount;
    m_cloudHostAssetCountHasBeenSet = true;
}

bool AssetStatisticsInfo::CloudHostAssetCountHasBeenSet() const
{
    return m_cloudHostAssetCountHasBeenSet;
}

