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

#include <tencentcloud/emr/v20190103/model/StrategyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

StrategyConfig::StrategyConfig() :
    m_rollingRestartSwitchHasBeenSet(false),
    m_batchSizeHasBeenSet(false),
    m_timeWaitHasBeenSet(false),
    m_dealOnFailHasBeenSet(false),
    m_argsHasBeenSet(false)
{
}

CoreInternalOutcome StrategyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RollingRestartSwitch") && !value["RollingRestartSwitch"].IsNull())
    {
        if (!value["RollingRestartSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyConfig.RollingRestartSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rollingRestartSwitch = value["RollingRestartSwitch"].GetInt64();
        m_rollingRestartSwitchHasBeenSet = true;
    }

    if (value.HasMember("BatchSize") && !value["BatchSize"].IsNull())
    {
        if (!value["BatchSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyConfig.BatchSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchSize = value["BatchSize"].GetInt64();
        m_batchSizeHasBeenSet = true;
    }

    if (value.HasMember("TimeWait") && !value["TimeWait"].IsNull())
    {
        if (!value["TimeWait"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyConfig.TimeWait` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeWait = value["TimeWait"].GetInt64();
        m_timeWaitHasBeenSet = true;
    }

    if (value.HasMember("DealOnFail") && !value["DealOnFail"].IsNull())
    {
        if (!value["DealOnFail"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyConfig.DealOnFail` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dealOnFail = value["DealOnFail"].GetInt64();
        m_dealOnFailHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StrategyConfig.Args` is not array type"));

        const rapidjson::Value &tmpValue = value["Args"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Arg item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_args.push_back(item);
        }
        m_argsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StrategyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rollingRestartSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollingRestartSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rollingRestartSwitch, allocator);
    }

    if (m_batchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchSize, allocator);
    }

    if (m_timeWaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeWait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeWait, allocator);
    }

    if (m_dealOnFailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealOnFail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dealOnFail, allocator);
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t StrategyConfig::GetRollingRestartSwitch() const
{
    return m_rollingRestartSwitch;
}

void StrategyConfig::SetRollingRestartSwitch(const int64_t& _rollingRestartSwitch)
{
    m_rollingRestartSwitch = _rollingRestartSwitch;
    m_rollingRestartSwitchHasBeenSet = true;
}

bool StrategyConfig::RollingRestartSwitchHasBeenSet() const
{
    return m_rollingRestartSwitchHasBeenSet;
}

int64_t StrategyConfig::GetBatchSize() const
{
    return m_batchSize;
}

void StrategyConfig::SetBatchSize(const int64_t& _batchSize)
{
    m_batchSize = _batchSize;
    m_batchSizeHasBeenSet = true;
}

bool StrategyConfig::BatchSizeHasBeenSet() const
{
    return m_batchSizeHasBeenSet;
}

int64_t StrategyConfig::GetTimeWait() const
{
    return m_timeWait;
}

void StrategyConfig::SetTimeWait(const int64_t& _timeWait)
{
    m_timeWait = _timeWait;
    m_timeWaitHasBeenSet = true;
}

bool StrategyConfig::TimeWaitHasBeenSet() const
{
    return m_timeWaitHasBeenSet;
}

int64_t StrategyConfig::GetDealOnFail() const
{
    return m_dealOnFail;
}

void StrategyConfig::SetDealOnFail(const int64_t& _dealOnFail)
{
    m_dealOnFail = _dealOnFail;
    m_dealOnFailHasBeenSet = true;
}

bool StrategyConfig::DealOnFailHasBeenSet() const
{
    return m_dealOnFailHasBeenSet;
}

vector<Arg> StrategyConfig::GetArgs() const
{
    return m_args;
}

void StrategyConfig::SetArgs(const vector<Arg>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool StrategyConfig::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

