/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/tem/v20201221/model/EsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace std;

EsInfo::EsInfo() :
    m_minAliveInstancesHasBeenSet(false),
    m_maxAliveInstancesHasBeenSet(false),
    m_esStrategyHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

CoreInternalOutcome EsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinAliveInstances") && !value["MinAliveInstances"].IsNull())
    {
        if (!value["MinAliveInstances"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.MinAliveInstances` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minAliveInstances = value["MinAliveInstances"].GetInt64();
        m_minAliveInstancesHasBeenSet = true;
    }

    if (value.HasMember("MaxAliveInstances") && !value["MaxAliveInstances"].IsNull())
    {
        if (!value["MaxAliveInstances"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.MaxAliveInstances` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAliveInstances = value["MaxAliveInstances"].GetInt64();
        m_maxAliveInstancesHasBeenSet = true;
    }

    if (value.HasMember("EsStrategy") && !value["EsStrategy"].IsNull())
    {
        if (!value["EsStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.EsStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_esStrategy = value["EsStrategy"].GetInt64();
        m_esStrategyHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.Threshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetUint64();
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsInfo.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minAliveInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinAliveInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minAliveInstances, allocator);
    }

    if (m_maxAliveInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAliveInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAliveInstances, allocator);
    }

    if (m_esStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_esStrategy, allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

}


int64_t EsInfo::GetMinAliveInstances() const
{
    return m_minAliveInstances;
}

void EsInfo::SetMinAliveInstances(const int64_t& _minAliveInstances)
{
    m_minAliveInstances = _minAliveInstances;
    m_minAliveInstancesHasBeenSet = true;
}

bool EsInfo::MinAliveInstancesHasBeenSet() const
{
    return m_minAliveInstancesHasBeenSet;
}

int64_t EsInfo::GetMaxAliveInstances() const
{
    return m_maxAliveInstances;
}

void EsInfo::SetMaxAliveInstances(const int64_t& _maxAliveInstances)
{
    m_maxAliveInstances = _maxAliveInstances;
    m_maxAliveInstancesHasBeenSet = true;
}

bool EsInfo::MaxAliveInstancesHasBeenSet() const
{
    return m_maxAliveInstancesHasBeenSet;
}

int64_t EsInfo::GetEsStrategy() const
{
    return m_esStrategy;
}

void EsInfo::SetEsStrategy(const int64_t& _esStrategy)
{
    m_esStrategy = _esStrategy;
    m_esStrategyHasBeenSet = true;
}

bool EsInfo::EsStrategyHasBeenSet() const
{
    return m_esStrategyHasBeenSet;
}

uint64_t EsInfo::GetThreshold() const
{
    return m_threshold;
}

void EsInfo::SetThreshold(const uint64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool EsInfo::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

string EsInfo::GetVersionId() const
{
    return m_versionId;
}

void EsInfo::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool EsInfo::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

