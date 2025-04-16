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

#include <tencentcloud/dlc/v20210125/model/SessionResourceTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SessionResourceTemplate::SessionResourceTemplate() :
    m_driverSizeHasBeenSet(false),
    m_executorSizeHasBeenSet(false),
    m_executorNumsHasBeenSet(false),
    m_executorMaxNumbersHasBeenSet(false),
    m_runningTimeParametersHasBeenSet(false)
{
}

CoreInternalOutcome SessionResourceTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DriverSize") && !value["DriverSize"].IsNull())
    {
        if (!value["DriverSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResourceTemplate.DriverSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverSize = string(value["DriverSize"].GetString());
        m_driverSizeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorSize") && !value["ExecutorSize"].IsNull())
    {
        if (!value["ExecutorSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResourceTemplate.ExecutorSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorSize = string(value["ExecutorSize"].GetString());
        m_executorSizeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorNums") && !value["ExecutorNums"].IsNull())
    {
        if (!value["ExecutorNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResourceTemplate.ExecutorNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executorNums = value["ExecutorNums"].GetUint64();
        m_executorNumsHasBeenSet = true;
    }

    if (value.HasMember("ExecutorMaxNumbers") && !value["ExecutorMaxNumbers"].IsNull())
    {
        if (!value["ExecutorMaxNumbers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionResourceTemplate.ExecutorMaxNumbers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executorMaxNumbers = value["ExecutorMaxNumbers"].GetUint64();
        m_executorMaxNumbersHasBeenSet = true;
    }

    if (value.HasMember("RunningTimeParameters") && !value["RunningTimeParameters"].IsNull())
    {
        if (!value["RunningTimeParameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionResourceTemplate.RunningTimeParameters` is not array type"));

        const rapidjson::Value &tmpValue = value["RunningTimeParameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataEngineConfigPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_runningTimeParameters.push_back(item);
        }
        m_runningTimeParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionResourceTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_driverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorNums, allocator);
    }

    if (m_executorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorMaxNumbers, allocator);
    }

    if (m_runningTimeParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTimeParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_runningTimeParameters.begin(); itr != m_runningTimeParameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SessionResourceTemplate::GetDriverSize() const
{
    return m_driverSize;
}

void SessionResourceTemplate::SetDriverSize(const string& _driverSize)
{
    m_driverSize = _driverSize;
    m_driverSizeHasBeenSet = true;
}

bool SessionResourceTemplate::DriverSizeHasBeenSet() const
{
    return m_driverSizeHasBeenSet;
}

string SessionResourceTemplate::GetExecutorSize() const
{
    return m_executorSize;
}

void SessionResourceTemplate::SetExecutorSize(const string& _executorSize)
{
    m_executorSize = _executorSize;
    m_executorSizeHasBeenSet = true;
}

bool SessionResourceTemplate::ExecutorSizeHasBeenSet() const
{
    return m_executorSizeHasBeenSet;
}

uint64_t SessionResourceTemplate::GetExecutorNums() const
{
    return m_executorNums;
}

void SessionResourceTemplate::SetExecutorNums(const uint64_t& _executorNums)
{
    m_executorNums = _executorNums;
    m_executorNumsHasBeenSet = true;
}

bool SessionResourceTemplate::ExecutorNumsHasBeenSet() const
{
    return m_executorNumsHasBeenSet;
}

uint64_t SessionResourceTemplate::GetExecutorMaxNumbers() const
{
    return m_executorMaxNumbers;
}

void SessionResourceTemplate::SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers)
{
    m_executorMaxNumbers = _executorMaxNumbers;
    m_executorMaxNumbersHasBeenSet = true;
}

bool SessionResourceTemplate::ExecutorMaxNumbersHasBeenSet() const
{
    return m_executorMaxNumbersHasBeenSet;
}

vector<DataEngineConfigPair> SessionResourceTemplate::GetRunningTimeParameters() const
{
    return m_runningTimeParameters;
}

void SessionResourceTemplate::SetRunningTimeParameters(const vector<DataEngineConfigPair>& _runningTimeParameters)
{
    m_runningTimeParameters = _runningTimeParameters;
    m_runningTimeParametersHasBeenSet = true;
}

bool SessionResourceTemplate::RunningTimeParametersHasBeenSet() const
{
    return m_runningTimeParametersHasBeenSet;
}

