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

#include <tencentcloud/live/v20180801/model/TranscodeTaskNum.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TranscodeTaskNum::TranscodeTaskNum() :
    m_timeHasBeenSet(false),
    m_codeRateHasBeenSet(false),
    m_numHasBeenSet(false)
{
}

CoreInternalOutcome TranscodeTaskNum::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskNum.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("CodeRate") && !value["CodeRate"].IsNull())
    {
        if (!value["CodeRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskNum.CodeRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_codeRate = value["CodeRate"].GetUint64();
        m_codeRateHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskNum.Num` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetUint64();
        m_numHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscodeTaskNum::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_codeRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codeRate, allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

}


string TranscodeTaskNum::GetTime() const
{
    return m_time;
}

void TranscodeTaskNum::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TranscodeTaskNum::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t TranscodeTaskNum::GetCodeRate() const
{
    return m_codeRate;
}

void TranscodeTaskNum::SetCodeRate(const uint64_t& _codeRate)
{
    m_codeRate = _codeRate;
    m_codeRateHasBeenSet = true;
}

bool TranscodeTaskNum::CodeRateHasBeenSet() const
{
    return m_codeRateHasBeenSet;
}

uint64_t TranscodeTaskNum::GetNum() const
{
    return m_num;
}

void TranscodeTaskNum::SetNum(const uint64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool TranscodeTaskNum::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

