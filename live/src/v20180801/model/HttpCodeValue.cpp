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

#include <tencentcloud/live/v20180801/model/HttpCodeValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

HttpCodeValue::HttpCodeValue() :
    m_timeHasBeenSet(false),
    m_numbersHasBeenSet(false),
    m_percentageHasBeenSet(false)
{
}

CoreInternalOutcome HttpCodeValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCodeValue.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Numbers") && !value["Numbers"].IsNull())
    {
        if (!value["Numbers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCodeValue.Numbers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numbers = value["Numbers"].GetUint64();
        m_numbersHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCodeValue.Percentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetDouble();
        m_percentageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpCodeValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_numbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Numbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numbers, allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

}


string HttpCodeValue::GetTime() const
{
    return m_time;
}

void HttpCodeValue::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool HttpCodeValue::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t HttpCodeValue::GetNumbers() const
{
    return m_numbers;
}

void HttpCodeValue::SetNumbers(const uint64_t& _numbers)
{
    m_numbers = _numbers;
    m_numbersHasBeenSet = true;
}

bool HttpCodeValue::NumbersHasBeenSet() const
{
    return m_numbersHasBeenSet;
}

double HttpCodeValue::GetPercentage() const
{
    return m_percentage;
}

void HttpCodeValue::SetPercentage(const double& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool HttpCodeValue::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

