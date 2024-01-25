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

#include <tencentcloud/wedata/v20210820/model/CodeSearchCountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CodeSearchCountInfo::CodeSearchCountInfo() :
    m_devCountHasBeenSet(false),
    m_scheduleCountHasBeenSet(false),
    m_recycleCountHasBeenSet(false)
{
}

CoreInternalOutcome CodeSearchCountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DevCount") && !value["DevCount"].IsNull())
    {
        if (!value["DevCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchCountInfo.DevCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_devCount = value["DevCount"].GetUint64();
        m_devCountHasBeenSet = true;
    }

    if (value.HasMember("ScheduleCount") && !value["ScheduleCount"].IsNull())
    {
        if (!value["ScheduleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchCountInfo.ScheduleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleCount = value["ScheduleCount"].GetUint64();
        m_scheduleCountHasBeenSet = true;
    }

    if (value.HasMember("RecycleCount") && !value["RecycleCount"].IsNull())
    {
        if (!value["RecycleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchCountInfo.RecycleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recycleCount = value["RecycleCount"].GetUint64();
        m_recycleCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeSearchCountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_devCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_devCount, allocator);
    }

    if (m_scheduleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleCount, allocator);
    }

    if (m_recycleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecycleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recycleCount, allocator);
    }

}


uint64_t CodeSearchCountInfo::GetDevCount() const
{
    return m_devCount;
}

void CodeSearchCountInfo::SetDevCount(const uint64_t& _devCount)
{
    m_devCount = _devCount;
    m_devCountHasBeenSet = true;
}

bool CodeSearchCountInfo::DevCountHasBeenSet() const
{
    return m_devCountHasBeenSet;
}

uint64_t CodeSearchCountInfo::GetScheduleCount() const
{
    return m_scheduleCount;
}

void CodeSearchCountInfo::SetScheduleCount(const uint64_t& _scheduleCount)
{
    m_scheduleCount = _scheduleCount;
    m_scheduleCountHasBeenSet = true;
}

bool CodeSearchCountInfo::ScheduleCountHasBeenSet() const
{
    return m_scheduleCountHasBeenSet;
}

uint64_t CodeSearchCountInfo::GetRecycleCount() const
{
    return m_recycleCount;
}

void CodeSearchCountInfo::SetRecycleCount(const uint64_t& _recycleCount)
{
    m_recycleCount = _recycleCount;
    m_recycleCountHasBeenSet = true;
}

bool CodeSearchCountInfo::RecycleCountHasBeenSet() const
{
    return m_recycleCountHasBeenSet;
}

