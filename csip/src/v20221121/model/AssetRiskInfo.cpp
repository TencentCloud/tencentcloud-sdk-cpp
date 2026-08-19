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

#include <tencentcloud/csip/v20221121/model/AssetRiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetRiskInfo::AssetRiskInfo() :
    m_resultTypeHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_riskCriticalHasBeenSet(false),
    m_riskHighHasBeenSet(false),
    m_riskMediumHasBeenSet(false),
    m_riskLowHasBeenSet(false)
{
}

CoreInternalOutcome AssetRiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultType") && !value["ResultType"].IsNull())
    {
        if (!value["ResultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskInfo.ResultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultType = string(value["ResultType"].GetString());
        m_resultTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskInfo.RiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetUint64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCritical") && !value["RiskCritical"].IsNull())
    {
        if (!value["RiskCritical"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskInfo.RiskCritical` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCritical = value["RiskCritical"].GetUint64();
        m_riskCriticalHasBeenSet = true;
    }

    if (value.HasMember("RiskHigh") && !value["RiskHigh"].IsNull())
    {
        if (!value["RiskHigh"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskInfo.RiskHigh` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskHigh = value["RiskHigh"].GetUint64();
        m_riskHighHasBeenSet = true;
    }

    if (value.HasMember("RiskMedium") && !value["RiskMedium"].IsNull())
    {
        if (!value["RiskMedium"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskInfo.RiskMedium` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskMedium = value["RiskMedium"].GetUint64();
        m_riskMediumHasBeenSet = true;
    }

    if (value.HasMember("RiskLow") && !value["RiskLow"].IsNull())
    {
        if (!value["RiskLow"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskInfo.RiskLow` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLow = value["RiskLow"].GetUint64();
        m_riskLowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetRiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_riskCriticalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCritical";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCritical, allocator);
    }

    if (m_riskHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskHigh, allocator);
    }

    if (m_riskMediumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskMedium";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskMedium, allocator);
    }

    if (m_riskLowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLow, allocator);
    }

}


string AssetRiskInfo::GetResultType() const
{
    return m_resultType;
}

void AssetRiskInfo::SetResultType(const string& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool AssetRiskInfo::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

uint64_t AssetRiskInfo::GetRiskCount() const
{
    return m_riskCount;
}

void AssetRiskInfo::SetRiskCount(const uint64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool AssetRiskInfo::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

uint64_t AssetRiskInfo::GetRiskCritical() const
{
    return m_riskCritical;
}

void AssetRiskInfo::SetRiskCritical(const uint64_t& _riskCritical)
{
    m_riskCritical = _riskCritical;
    m_riskCriticalHasBeenSet = true;
}

bool AssetRiskInfo::RiskCriticalHasBeenSet() const
{
    return m_riskCriticalHasBeenSet;
}

uint64_t AssetRiskInfo::GetRiskHigh() const
{
    return m_riskHigh;
}

void AssetRiskInfo::SetRiskHigh(const uint64_t& _riskHigh)
{
    m_riskHigh = _riskHigh;
    m_riskHighHasBeenSet = true;
}

bool AssetRiskInfo::RiskHighHasBeenSet() const
{
    return m_riskHighHasBeenSet;
}

uint64_t AssetRiskInfo::GetRiskMedium() const
{
    return m_riskMedium;
}

void AssetRiskInfo::SetRiskMedium(const uint64_t& _riskMedium)
{
    m_riskMedium = _riskMedium;
    m_riskMediumHasBeenSet = true;
}

bool AssetRiskInfo::RiskMediumHasBeenSet() const
{
    return m_riskMediumHasBeenSet;
}

uint64_t AssetRiskInfo::GetRiskLow() const
{
    return m_riskLow;
}

void AssetRiskInfo::SetRiskLow(const uint64_t& _riskLow)
{
    m_riskLow = _riskLow;
    m_riskLowHasBeenSet = true;
}

bool AssetRiskInfo::RiskLowHasBeenSet() const
{
    return m_riskLowHasBeenSet;
}

