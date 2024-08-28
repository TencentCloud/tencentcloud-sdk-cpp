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

#include <tencentcloud/wedata/v20210820/model/AiopsDLCResourceConfigDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AiopsDLCResourceConfigDto::AiopsDLCResourceConfigDto() :
    m_driverSizeHasBeenSet(false),
    m_executorSizeHasBeenSet(false),
    m_executorNumbersHasBeenSet(false),
    m_isInheritHasBeenSet(false)
{
}

CoreInternalOutcome AiopsDLCResourceConfigDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DriverSize") && !value["DriverSize"].IsNull())
    {
        if (!value["DriverSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsDLCResourceConfigDto.DriverSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverSize = string(value["DriverSize"].GetString());
        m_driverSizeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorSize") && !value["ExecutorSize"].IsNull())
    {
        if (!value["ExecutorSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsDLCResourceConfigDto.ExecutorSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorSize = string(value["ExecutorSize"].GetString());
        m_executorSizeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorNumbers") && !value["ExecutorNumbers"].IsNull())
    {
        if (!value["ExecutorNumbers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsDLCResourceConfigDto.ExecutorNumbers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorNumbers = string(value["ExecutorNumbers"].GetString());
        m_executorNumbersHasBeenSet = true;
    }

    if (value.HasMember("IsInherit") && !value["IsInherit"].IsNull())
    {
        if (!value["IsInherit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsDLCResourceConfigDto.IsInherit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isInherit = string(value["IsInherit"].GetString());
        m_isInheritHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiopsDLCResourceConfigDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_executorNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorNumbers.c_str(), allocator).Move(), allocator);
    }

    if (m_isInheritHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInherit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isInherit.c_str(), allocator).Move(), allocator);
    }

}


string AiopsDLCResourceConfigDto::GetDriverSize() const
{
    return m_driverSize;
}

void AiopsDLCResourceConfigDto::SetDriverSize(const string& _driverSize)
{
    m_driverSize = _driverSize;
    m_driverSizeHasBeenSet = true;
}

bool AiopsDLCResourceConfigDto::DriverSizeHasBeenSet() const
{
    return m_driverSizeHasBeenSet;
}

string AiopsDLCResourceConfigDto::GetExecutorSize() const
{
    return m_executorSize;
}

void AiopsDLCResourceConfigDto::SetExecutorSize(const string& _executorSize)
{
    m_executorSize = _executorSize;
    m_executorSizeHasBeenSet = true;
}

bool AiopsDLCResourceConfigDto::ExecutorSizeHasBeenSet() const
{
    return m_executorSizeHasBeenSet;
}

string AiopsDLCResourceConfigDto::GetExecutorNumbers() const
{
    return m_executorNumbers;
}

void AiopsDLCResourceConfigDto::SetExecutorNumbers(const string& _executorNumbers)
{
    m_executorNumbers = _executorNumbers;
    m_executorNumbersHasBeenSet = true;
}

bool AiopsDLCResourceConfigDto::ExecutorNumbersHasBeenSet() const
{
    return m_executorNumbersHasBeenSet;
}

string AiopsDLCResourceConfigDto::GetIsInherit() const
{
    return m_isInherit;
}

void AiopsDLCResourceConfigDto::SetIsInherit(const string& _isInherit)
{
    m_isInherit = _isInherit;
    m_isInheritHasBeenSet = true;
}

bool AiopsDLCResourceConfigDto::IsInheritHasBeenSet() const
{
    return m_isInheritHasBeenSet;
}

