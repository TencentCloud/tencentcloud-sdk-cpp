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

#include <tencentcloud/waf/v20180125/model/LogHistogramInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LogHistogramInfo::LogHistogramInfo() :
    m_countHasBeenSet(false),
    m_timeStampHasBeenSet(false)
{
}

CoreInternalOutcome LogHistogramInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogHistogramInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("TimeStamp") && !value["TimeStamp"].IsNull())
    {
        if (!value["TimeStamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogHistogramInfo.TimeStamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeStamp = value["TimeStamp"].GetInt64();
        m_timeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogHistogramInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


int64_t LogHistogramInfo::GetCount() const
{
    return m_count;
}

void LogHistogramInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool LogHistogramInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t LogHistogramInfo::GetTimeStamp() const
{
    return m_timeStamp;
}

void LogHistogramInfo::SetTimeStamp(const int64_t& _timeStamp)
{
    m_timeStamp = _timeStamp;
    m_timeStampHasBeenSet = true;
}

bool LogHistogramInfo::TimeStampHasBeenSet() const
{
    return m_timeStampHasBeenSet;
}

