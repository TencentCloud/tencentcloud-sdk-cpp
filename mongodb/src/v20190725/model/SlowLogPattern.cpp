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

#include <tencentcloud/mongodb/v20190725/model/SlowLogPattern.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

SlowLogPattern::SlowLogPattern() :
    m_patternHasBeenSet(false),
    m_maxTimeHasBeenSet(false),
    m_averageTimeHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogPattern::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pattern") && !value["Pattern"].IsNull())
    {
        if (!value["Pattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogPattern.Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(value["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }

    if (value.HasMember("MaxTime") && !value["MaxTime"].IsNull())
    {
        if (!value["MaxTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogPattern.MaxTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTime = value["MaxTime"].GetUint64();
        m_maxTimeHasBeenSet = true;
    }

    if (value.HasMember("AverageTime") && !value["AverageTime"].IsNull())
    {
        if (!value["AverageTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogPattern.AverageTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_averageTime = value["AverageTime"].GetUint64();
        m_averageTimeHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogPattern.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogPattern::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_maxTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTime, allocator);
    }

    if (m_averageTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageTime, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


string SlowLogPattern::GetPattern() const
{
    return m_pattern;
}

void SlowLogPattern::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool SlowLogPattern::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

uint64_t SlowLogPattern::GetMaxTime() const
{
    return m_maxTime;
}

void SlowLogPattern::SetMaxTime(const uint64_t& _maxTime)
{
    m_maxTime = _maxTime;
    m_maxTimeHasBeenSet = true;
}

bool SlowLogPattern::MaxTimeHasBeenSet() const
{
    return m_maxTimeHasBeenSet;
}

uint64_t SlowLogPattern::GetAverageTime() const
{
    return m_averageTime;
}

void SlowLogPattern::SetAverageTime(const uint64_t& _averageTime)
{
    m_averageTime = _averageTime;
    m_averageTimeHasBeenSet = true;
}

bool SlowLogPattern::AverageTimeHasBeenSet() const
{
    return m_averageTimeHasBeenSet;
}

uint64_t SlowLogPattern::GetTotal() const
{
    return m_total;
}

void SlowLogPattern::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool SlowLogPattern::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

