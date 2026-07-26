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

#include <tencentcloud/adp/v20260520/model/WeeklySchedule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WeeklySchedule::WeeklySchedule() :
    m_timesHasBeenSet(false)
{
}

CoreInternalOutcome WeeklySchedule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Times") && !value["Times"].IsNull())
    {
        if (!value["Times"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WeeklySchedule.Times` is not array type"));

        const rapidjson::Value &tmpValue = value["Times"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WeeklyTime item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_times.push_back(item);
        }
        m_timesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeeklySchedule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Times";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_times.begin(); itr != m_times.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<WeeklyTime> WeeklySchedule::GetTimes() const
{
    return m_times;
}

void WeeklySchedule::SetTimes(const vector<WeeklyTime>& _times)
{
    m_times = _times;
    m_timesHasBeenSet = true;
}

bool WeeklySchedule::TimesHasBeenSet() const
{
    return m_timesHasBeenSet;
}

