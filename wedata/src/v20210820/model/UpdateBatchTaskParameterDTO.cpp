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

#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskParameterDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UpdateBatchTaskParameterDTO::UpdateBatchTaskParameterDTO() :
    m_driverSizeHasBeenSet(false),
    m_executorMaxNumbersHasBeenSet(false),
    m_executorNumbersHasBeenSet(false),
    m_executorSizeHasBeenSet(false),
    m_runConfParamsHasBeenSet(false),
    m_isInheritHasBeenSet(false)
{
}

CoreInternalOutcome UpdateBatchTaskParameterDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DriverSize") && !value["DriverSize"].IsNull())
    {
        if (!value["DriverSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateBatchTaskParameterDTO.DriverSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverSize = string(value["DriverSize"].GetString());
        m_driverSizeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorMaxNumbers") && !value["ExecutorMaxNumbers"].IsNull())
    {
        if (!value["ExecutorMaxNumbers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateBatchTaskParameterDTO.ExecutorMaxNumbers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorMaxNumbers = string(value["ExecutorMaxNumbers"].GetString());
        m_executorMaxNumbersHasBeenSet = true;
    }

    if (value.HasMember("ExecutorNumbers") && !value["ExecutorNumbers"].IsNull())
    {
        if (!value["ExecutorNumbers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateBatchTaskParameterDTO.ExecutorNumbers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorNumbers = string(value["ExecutorNumbers"].GetString());
        m_executorNumbersHasBeenSet = true;
    }

    if (value.HasMember("ExecutorSize") && !value["ExecutorSize"].IsNull())
    {
        if (!value["ExecutorSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateBatchTaskParameterDTO.ExecutorSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorSize = string(value["ExecutorSize"].GetString());
        m_executorSizeHasBeenSet = true;
    }

    if (value.HasMember("RunConfParams") && !value["RunConfParams"].IsNull())
    {
        if (!value["RunConfParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateBatchTaskParameterDTO.RunConfParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runConfParams = string(value["RunConfParams"].GetString());
        m_runConfParamsHasBeenSet = true;
    }

    if (value.HasMember("IsInherit") && !value["IsInherit"].IsNull())
    {
        if (!value["IsInherit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateBatchTaskParameterDTO.IsInherit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isInherit = string(value["IsInherit"].GetString());
        m_isInheritHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateBatchTaskParameterDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_driverSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverSize.c_str(), allocator).Move(), allocator);
    }

    if (m_executorMaxNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorMaxNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorMaxNumbers.c_str(), allocator).Move(), allocator);
    }

    if (m_executorNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorNumbers.c_str(), allocator).Move(), allocator);
    }

    if (m_executorSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorSize.c_str(), allocator).Move(), allocator);
    }

    if (m_runConfParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunConfParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runConfParams.c_str(), allocator).Move(), allocator);
    }

    if (m_isInheritHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInherit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isInherit.c_str(), allocator).Move(), allocator);
    }

}


string UpdateBatchTaskParameterDTO::GetDriverSize() const
{
    return m_driverSize;
}

void UpdateBatchTaskParameterDTO::SetDriverSize(const string& _driverSize)
{
    m_driverSize = _driverSize;
    m_driverSizeHasBeenSet = true;
}

bool UpdateBatchTaskParameterDTO::DriverSizeHasBeenSet() const
{
    return m_driverSizeHasBeenSet;
}

string UpdateBatchTaskParameterDTO::GetExecutorMaxNumbers() const
{
    return m_executorMaxNumbers;
}

void UpdateBatchTaskParameterDTO::SetExecutorMaxNumbers(const string& _executorMaxNumbers)
{
    m_executorMaxNumbers = _executorMaxNumbers;
    m_executorMaxNumbersHasBeenSet = true;
}

bool UpdateBatchTaskParameterDTO::ExecutorMaxNumbersHasBeenSet() const
{
    return m_executorMaxNumbersHasBeenSet;
}

string UpdateBatchTaskParameterDTO::GetExecutorNumbers() const
{
    return m_executorNumbers;
}

void UpdateBatchTaskParameterDTO::SetExecutorNumbers(const string& _executorNumbers)
{
    m_executorNumbers = _executorNumbers;
    m_executorNumbersHasBeenSet = true;
}

bool UpdateBatchTaskParameterDTO::ExecutorNumbersHasBeenSet() const
{
    return m_executorNumbersHasBeenSet;
}

string UpdateBatchTaskParameterDTO::GetExecutorSize() const
{
    return m_executorSize;
}

void UpdateBatchTaskParameterDTO::SetExecutorSize(const string& _executorSize)
{
    m_executorSize = _executorSize;
    m_executorSizeHasBeenSet = true;
}

bool UpdateBatchTaskParameterDTO::ExecutorSizeHasBeenSet() const
{
    return m_executorSizeHasBeenSet;
}

string UpdateBatchTaskParameterDTO::GetRunConfParams() const
{
    return m_runConfParams;
}

void UpdateBatchTaskParameterDTO::SetRunConfParams(const string& _runConfParams)
{
    m_runConfParams = _runConfParams;
    m_runConfParamsHasBeenSet = true;
}

bool UpdateBatchTaskParameterDTO::RunConfParamsHasBeenSet() const
{
    return m_runConfParamsHasBeenSet;
}

string UpdateBatchTaskParameterDTO::GetIsInherit() const
{
    return m_isInherit;
}

void UpdateBatchTaskParameterDTO::SetIsInherit(const string& _isInherit)
{
    m_isInherit = _isInherit;
    m_isInheritHasBeenSet = true;
}

bool UpdateBatchTaskParameterDTO::IsInheritHasBeenSet() const
{
    return m_isInheritHasBeenSet;
}

