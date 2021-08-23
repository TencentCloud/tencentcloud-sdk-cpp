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

#include <tencentcloud/postgres/v20170312/model/DurationAnalysis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DurationAnalysis::DurationAnalysis() :
    m_timeSegmentHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome DurationAnalysis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeSegment") && !value["TimeSegment"].IsNull())
    {
        if (!value["TimeSegment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DurationAnalysis.TimeSegment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeSegment = string(value["TimeSegment"].GetString());
        m_timeSegmentHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationAnalysis.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DurationAnalysis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeSegmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSegment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeSegment.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string DurationAnalysis::GetTimeSegment() const
{
    return m_timeSegment;
}

void DurationAnalysis::SetTimeSegment(const string& _timeSegment)
{
    m_timeSegment = _timeSegment;
    m_timeSegmentHasBeenSet = true;
}

bool DurationAnalysis::TimeSegmentHasBeenSet() const
{
    return m_timeSegmentHasBeenSet;
}

int64_t DurationAnalysis::GetCount() const
{
    return m_count;
}

void DurationAnalysis::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DurationAnalysis::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

