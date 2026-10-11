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

#include <tencentcloud/dlc/v20210125/model/SparkJobSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SparkJobSpec::SparkJobSpec() :
    m_driverCUHasBeenSet(false),
    m_executorCUHasBeenSet(false),
    m_executorNumHasBeenSet(false),
    m_dynamicAllocationHasBeenSet(false),
    m_minExecutorsHasBeenSet(false),
    m_maxExecutorsHasBeenSet(false)
{
}

CoreInternalOutcome SparkJobSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DriverCU") && !value["DriverCU"].IsNull())
    {
        if (!value["DriverCU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobSpec.DriverCU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_driverCU = value["DriverCU"].GetInt64();
        m_driverCUHasBeenSet = true;
    }

    if (value.HasMember("ExecutorCU") && !value["ExecutorCU"].IsNull())
    {
        if (!value["ExecutorCU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobSpec.ExecutorCU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executorCU = value["ExecutorCU"].GetInt64();
        m_executorCUHasBeenSet = true;
    }

    if (value.HasMember("ExecutorNum") && !value["ExecutorNum"].IsNull())
    {
        if (!value["ExecutorNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobSpec.ExecutorNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executorNum = value["ExecutorNum"].GetInt64();
        m_executorNumHasBeenSet = true;
    }

    if (value.HasMember("DynamicAllocation") && !value["DynamicAllocation"].IsNull())
    {
        if (!value["DynamicAllocation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobSpec.DynamicAllocation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dynamicAllocation = value["DynamicAllocation"].GetBool();
        m_dynamicAllocationHasBeenSet = true;
    }

    if (value.HasMember("MinExecutors") && !value["MinExecutors"].IsNull())
    {
        if (!value["MinExecutors"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobSpec.MinExecutors` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minExecutors = value["MinExecutors"].GetInt64();
        m_minExecutorsHasBeenSet = true;
    }

    if (value.HasMember("MaxExecutors") && !value["MaxExecutors"].IsNull())
    {
        if (!value["MaxExecutors"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkJobSpec.MaxExecutors` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxExecutors = value["MaxExecutors"].GetInt64();
        m_maxExecutorsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparkJobSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_driverCUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverCU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_driverCU, allocator);
    }

    if (m_executorCUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorCU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorCU, allocator);
    }

    if (m_executorNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorNum, allocator);
    }

    if (m_dynamicAllocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicAllocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dynamicAllocation, allocator);
    }

    if (m_minExecutorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinExecutors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minExecutors, allocator);
    }

    if (m_maxExecutorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExecutors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxExecutors, allocator);
    }

}


int64_t SparkJobSpec::GetDriverCU() const
{
    return m_driverCU;
}

void SparkJobSpec::SetDriverCU(const int64_t& _driverCU)
{
    m_driverCU = _driverCU;
    m_driverCUHasBeenSet = true;
}

bool SparkJobSpec::DriverCUHasBeenSet() const
{
    return m_driverCUHasBeenSet;
}

int64_t SparkJobSpec::GetExecutorCU() const
{
    return m_executorCU;
}

void SparkJobSpec::SetExecutorCU(const int64_t& _executorCU)
{
    m_executorCU = _executorCU;
    m_executorCUHasBeenSet = true;
}

bool SparkJobSpec::ExecutorCUHasBeenSet() const
{
    return m_executorCUHasBeenSet;
}

int64_t SparkJobSpec::GetExecutorNum() const
{
    return m_executorNum;
}

void SparkJobSpec::SetExecutorNum(const int64_t& _executorNum)
{
    m_executorNum = _executorNum;
    m_executorNumHasBeenSet = true;
}

bool SparkJobSpec::ExecutorNumHasBeenSet() const
{
    return m_executorNumHasBeenSet;
}

bool SparkJobSpec::GetDynamicAllocation() const
{
    return m_dynamicAllocation;
}

void SparkJobSpec::SetDynamicAllocation(const bool& _dynamicAllocation)
{
    m_dynamicAllocation = _dynamicAllocation;
    m_dynamicAllocationHasBeenSet = true;
}

bool SparkJobSpec::DynamicAllocationHasBeenSet() const
{
    return m_dynamicAllocationHasBeenSet;
}

int64_t SparkJobSpec::GetMinExecutors() const
{
    return m_minExecutors;
}

void SparkJobSpec::SetMinExecutors(const int64_t& _minExecutors)
{
    m_minExecutors = _minExecutors;
    m_minExecutorsHasBeenSet = true;
}

bool SparkJobSpec::MinExecutorsHasBeenSet() const
{
    return m_minExecutorsHasBeenSet;
}

int64_t SparkJobSpec::GetMaxExecutors() const
{
    return m_maxExecutors;
}

void SparkJobSpec::SetMaxExecutors(const int64_t& _maxExecutors)
{
    m_maxExecutors = _maxExecutors;
    m_maxExecutorsHasBeenSet = true;
}

bool SparkJobSpec::MaxExecutorsHasBeenSet() const
{
    return m_maxExecutorsHasBeenSet;
}

