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

#include <tencentcloud/vod/v20180717/model/TaskStatDataItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

TaskStatDataItem::TaskStatDataItem() :
    m_timeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

CoreInternalOutcome TaskStatDataItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatDataItem.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatDataItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatDataItem.Usage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetInt64();
        m_usageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskStatDataItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

}


string TaskStatDataItem::GetTime() const
{
    return m_time;
}

void TaskStatDataItem::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TaskStatDataItem::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t TaskStatDataItem::GetCount() const
{
    return m_count;
}

void TaskStatDataItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool TaskStatDataItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t TaskStatDataItem::GetUsage() const
{
    return m_usage;
}

void TaskStatDataItem::SetUsage(const int64_t& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool TaskStatDataItem::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

