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

#include <tencentcloud/csip/v20221121/model/CosOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosOverview::CosOverview() :
    m_assetCountHasBeenSet(false),
    m_alarmAssetCountHasBeenSet(false),
    m_riskAssetCountHasBeenSet(false),
    m_alarmCountHasBeenSet(false),
    m_incrementAlarmCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_incrementRiskCountHasBeenSet(false),
    m_riskTopHasBeenSet(false),
    m_alarmTopHasBeenSet(false)
{
}

CoreInternalOutcome CosOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosOverview.AssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetInt64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmAssetCount") && !value["AlarmAssetCount"].IsNull())
    {
        if (!value["AlarmAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosOverview.AlarmAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmAssetCount = value["AlarmAssetCount"].GetInt64();
        m_alarmAssetCountHasBeenSet = true;
    }

    if (value.HasMember("RiskAssetCount") && !value["RiskAssetCount"].IsNull())
    {
        if (!value["RiskAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosOverview.RiskAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskAssetCount = value["RiskAssetCount"].GetInt64();
        m_riskAssetCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosOverview.AlarmCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetInt64();
        m_alarmCountHasBeenSet = true;
    }

    if (value.HasMember("IncrementAlarmCount") && !value["IncrementAlarmCount"].IsNull())
    {
        if (!value["IncrementAlarmCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosOverview.IncrementAlarmCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_incrementAlarmCount = value["IncrementAlarmCount"].GetInt64();
        m_incrementAlarmCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosOverview.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("IncrementRiskCount") && !value["IncrementRiskCount"].IsNull())
    {
        if (!value["IncrementRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosOverview.IncrementRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_incrementRiskCount = value["IncrementRiskCount"].GetInt64();
        m_incrementRiskCountHasBeenSet = true;
    }

    if (value.HasMember("RiskTop") && !value["RiskTop"].IsNull())
    {
        if (!value["RiskTop"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosOverview.RiskTop` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskTop"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosRiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskTop.push_back(item);
        }
        m_riskTopHasBeenSet = true;
    }

    if (value.HasMember("AlarmTop") && !value["AlarmTop"].IsNull())
    {
        if (!value["AlarmTop"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosOverview.AlarmTop` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmTop"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosRiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmTop.push_back(item);
        }
        m_alarmTopHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_alarmAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmAssetCount, allocator);
    }

    if (m_riskAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskAssetCount, allocator);
    }

    if (m_alarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCount, allocator);
    }

    if (m_incrementAlarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementAlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_incrementAlarmCount, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_incrementRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_incrementRiskCount, allocator);
    }

    if (m_riskTopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskTop.begin(); itr != m_riskTop.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmTopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmTop.begin(); itr != m_alarmTop.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t CosOverview::GetAssetCount() const
{
    return m_assetCount;
}

void CosOverview::SetAssetCount(const int64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool CosOverview::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

int64_t CosOverview::GetAlarmAssetCount() const
{
    return m_alarmAssetCount;
}

void CosOverview::SetAlarmAssetCount(const int64_t& _alarmAssetCount)
{
    m_alarmAssetCount = _alarmAssetCount;
    m_alarmAssetCountHasBeenSet = true;
}

bool CosOverview::AlarmAssetCountHasBeenSet() const
{
    return m_alarmAssetCountHasBeenSet;
}

int64_t CosOverview::GetRiskAssetCount() const
{
    return m_riskAssetCount;
}

void CosOverview::SetRiskAssetCount(const int64_t& _riskAssetCount)
{
    m_riskAssetCount = _riskAssetCount;
    m_riskAssetCountHasBeenSet = true;
}

bool CosOverview::RiskAssetCountHasBeenSet() const
{
    return m_riskAssetCountHasBeenSet;
}

int64_t CosOverview::GetAlarmCount() const
{
    return m_alarmCount;
}

void CosOverview::SetAlarmCount(const int64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool CosOverview::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

int64_t CosOverview::GetIncrementAlarmCount() const
{
    return m_incrementAlarmCount;
}

void CosOverview::SetIncrementAlarmCount(const int64_t& _incrementAlarmCount)
{
    m_incrementAlarmCount = _incrementAlarmCount;
    m_incrementAlarmCountHasBeenSet = true;
}

bool CosOverview::IncrementAlarmCountHasBeenSet() const
{
    return m_incrementAlarmCountHasBeenSet;
}

int64_t CosOverview::GetRiskCount() const
{
    return m_riskCount;
}

void CosOverview::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool CosOverview::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

int64_t CosOverview::GetIncrementRiskCount() const
{
    return m_incrementRiskCount;
}

void CosOverview::SetIncrementRiskCount(const int64_t& _incrementRiskCount)
{
    m_incrementRiskCount = _incrementRiskCount;
    m_incrementRiskCountHasBeenSet = true;
}

bool CosOverview::IncrementRiskCountHasBeenSet() const
{
    return m_incrementRiskCountHasBeenSet;
}

vector<CosRiskInfo> CosOverview::GetRiskTop() const
{
    return m_riskTop;
}

void CosOverview::SetRiskTop(const vector<CosRiskInfo>& _riskTop)
{
    m_riskTop = _riskTop;
    m_riskTopHasBeenSet = true;
}

bool CosOverview::RiskTopHasBeenSet() const
{
    return m_riskTopHasBeenSet;
}

vector<CosRiskInfo> CosOverview::GetAlarmTop() const
{
    return m_alarmTop;
}

void CosOverview::SetAlarmTop(const vector<CosRiskInfo>& _alarmTop)
{
    m_alarmTop = _alarmTop;
    m_alarmTopHasBeenSet = true;
}

bool CosOverview::AlarmTopHasBeenSet() const
{
    return m_alarmTopHasBeenSet;
}

