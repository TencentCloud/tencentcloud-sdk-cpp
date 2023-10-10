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

#include <tencentcloud/cwp/v20180228/model/LogHistogram.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

LogHistogram::LogHistogram() :
    m_countHasBeenSet(false),
    m_timeStampHasBeenSet(false)
{
}

CoreInternalOutcome LogHistogram::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogHistogram.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("TimeStamp") && !value["TimeStamp"].IsNull())
    {
        if (!value["TimeStamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogHistogram.TimeStamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeStamp = value["TimeStamp"].GetInt64();
        m_timeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogHistogram::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_timeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeStamp, allocator);
    }

}


int64_t LogHistogram::GetCount() const
{
    return m_count;
}

void LogHistogram::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool LogHistogram::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t LogHistogram::GetTimeStamp() const
{
    return m_timeStamp;
}

void LogHistogram::SetTimeStamp(const int64_t& _timeStamp)
{
    m_timeStamp = _timeStamp;
    m_timeStampHasBeenSet = true;
}

bool LogHistogram::TimeStampHasBeenSet() const
{
    return m_timeStampHasBeenSet;
}

