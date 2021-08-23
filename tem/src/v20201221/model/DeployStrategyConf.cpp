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

#include <tencentcloud/tem/v20201221/model/DeployStrategyConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace std;

DeployStrategyConf::DeployStrategyConf() :
    m_totalBatchCountHasBeenSet(false),
    m_betaBatchNumHasBeenSet(false),
    m_deployStrategyTypeHasBeenSet(false),
    m_batchIntervalHasBeenSet(false)
{
}

CoreInternalOutcome DeployStrategyConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalBatchCount") && !value["TotalBatchCount"].IsNull())
    {
        if (!value["TotalBatchCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployStrategyConf.TotalBatchCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBatchCount = value["TotalBatchCount"].GetInt64();
        m_totalBatchCountHasBeenSet = true;
    }

    if (value.HasMember("BetaBatchNum") && !value["BetaBatchNum"].IsNull())
    {
        if (!value["BetaBatchNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployStrategyConf.BetaBatchNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_betaBatchNum = value["BetaBatchNum"].GetInt64();
        m_betaBatchNumHasBeenSet = true;
    }

    if (value.HasMember("DeployStrategyType") && !value["DeployStrategyType"].IsNull())
    {
        if (!value["DeployStrategyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployStrategyConf.DeployStrategyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deployStrategyType = value["DeployStrategyType"].GetInt64();
        m_deployStrategyTypeHasBeenSet = true;
    }

    if (value.HasMember("BatchInterval") && !value["BatchInterval"].IsNull())
    {
        if (!value["BatchInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployStrategyConf.BatchInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchInterval = value["BatchInterval"].GetInt64();
        m_batchIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeployStrategyConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalBatchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBatchCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBatchCount, allocator);
    }

    if (m_betaBatchNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BetaBatchNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_betaBatchNum, allocator);
    }

    if (m_deployStrategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployStrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployStrategyType, allocator);
    }

    if (m_batchIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchInterval, allocator);
    }

}


int64_t DeployStrategyConf::GetTotalBatchCount() const
{
    return m_totalBatchCount;
}

void DeployStrategyConf::SetTotalBatchCount(const int64_t& _totalBatchCount)
{
    m_totalBatchCount = _totalBatchCount;
    m_totalBatchCountHasBeenSet = true;
}

bool DeployStrategyConf::TotalBatchCountHasBeenSet() const
{
    return m_totalBatchCountHasBeenSet;
}

int64_t DeployStrategyConf::GetBetaBatchNum() const
{
    return m_betaBatchNum;
}

void DeployStrategyConf::SetBetaBatchNum(const int64_t& _betaBatchNum)
{
    m_betaBatchNum = _betaBatchNum;
    m_betaBatchNumHasBeenSet = true;
}

bool DeployStrategyConf::BetaBatchNumHasBeenSet() const
{
    return m_betaBatchNumHasBeenSet;
}

int64_t DeployStrategyConf::GetDeployStrategyType() const
{
    return m_deployStrategyType;
}

void DeployStrategyConf::SetDeployStrategyType(const int64_t& _deployStrategyType)
{
    m_deployStrategyType = _deployStrategyType;
    m_deployStrategyTypeHasBeenSet = true;
}

bool DeployStrategyConf::DeployStrategyTypeHasBeenSet() const
{
    return m_deployStrategyTypeHasBeenSet;
}

int64_t DeployStrategyConf::GetBatchInterval() const
{
    return m_batchInterval;
}

void DeployStrategyConf::SetBatchInterval(const int64_t& _batchInterval)
{
    m_batchInterval = _batchInterval;
    m_batchIntervalHasBeenSet = true;
}

bool DeployStrategyConf::BatchIntervalHasBeenSet() const
{
    return m_batchIntervalHasBeenSet;
}

