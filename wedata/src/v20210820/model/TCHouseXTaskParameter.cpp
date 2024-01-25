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

#include <tencentcloud/wedata/v20210820/model/TCHouseXTaskParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TCHouseXTaskParameter::TCHouseXTaskParameter() :
    m_driverCoresHasBeenSet(false),
    m_executorCoresHasBeenSet(false),
    m_numExecutorsHasBeenSet(false)
{
}

CoreInternalOutcome TCHouseXTaskParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DriverCores") && !value["DriverCores"].IsNull())
    {
        if (!value["DriverCores"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TCHouseXTaskParameter.DriverCores` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_driverCores = value["DriverCores"].GetInt64();
        m_driverCoresHasBeenSet = true;
    }

    if (value.HasMember("ExecutorCores") && !value["ExecutorCores"].IsNull())
    {
        if (!value["ExecutorCores"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TCHouseXTaskParameter.ExecutorCores` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executorCores = value["ExecutorCores"].GetInt64();
        m_executorCoresHasBeenSet = true;
    }

    if (value.HasMember("NumExecutors") && !value["NumExecutors"].IsNull())
    {
        if (!value["NumExecutors"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TCHouseXTaskParameter.NumExecutors` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numExecutors = value["NumExecutors"].GetInt64();
        m_numExecutorsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TCHouseXTaskParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_driverCoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverCores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_driverCores, allocator);
    }

    if (m_executorCoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorCores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorCores, allocator);
    }

    if (m_numExecutorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumExecutors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numExecutors, allocator);
    }

}


int64_t TCHouseXTaskParameter::GetDriverCores() const
{
    return m_driverCores;
}

void TCHouseXTaskParameter::SetDriverCores(const int64_t& _driverCores)
{
    m_driverCores = _driverCores;
    m_driverCoresHasBeenSet = true;
}

bool TCHouseXTaskParameter::DriverCoresHasBeenSet() const
{
    return m_driverCoresHasBeenSet;
}

int64_t TCHouseXTaskParameter::GetExecutorCores() const
{
    return m_executorCores;
}

void TCHouseXTaskParameter::SetExecutorCores(const int64_t& _executorCores)
{
    m_executorCores = _executorCores;
    m_executorCoresHasBeenSet = true;
}

bool TCHouseXTaskParameter::ExecutorCoresHasBeenSet() const
{
    return m_executorCoresHasBeenSet;
}

int64_t TCHouseXTaskParameter::GetNumExecutors() const
{
    return m_numExecutors;
}

void TCHouseXTaskParameter::SetNumExecutors(const int64_t& _numExecutors)
{
    m_numExecutors = _numExecutors;
    m_numExecutorsHasBeenSet = true;
}

bool TCHouseXTaskParameter::NumExecutorsHasBeenSet() const
{
    return m_numExecutorsHasBeenSet;
}

