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

#include <tencentcloud/mrs/v20200910/model/TimelineInformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TimelineInformation::TimelineInformation() :
    m_timelineHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome TimelineInformation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timeline") && !value["Timeline"].IsNull())
    {
        if (!value["Timeline"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimelineInformation.Timeline` is not array type"));

        const rapidjson::Value &tmpValue = value["Timeline"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimelineEvent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeline.push_back(item);
        }
        m_timelineHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimelineInformation.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimelineInformation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeline.begin(); itr != m_timeline.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


vector<TimelineEvent> TimelineInformation::GetTimeline() const
{
    return m_timeline;
}

void TimelineInformation::SetTimeline(const vector<TimelineEvent>& _timeline)
{
    m_timeline = _timeline;
    m_timelineHasBeenSet = true;
}

bool TimelineInformation::TimelineHasBeenSet() const
{
    return m_timelineHasBeenSet;
}

int64_t TimelineInformation::GetPage() const
{
    return m_page;
}

void TimelineInformation::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool TimelineInformation::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

