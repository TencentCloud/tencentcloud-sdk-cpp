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

#include <tencentcloud/wedata/v20210820/model/CodeSearchResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CodeSearchResult::CodeSearchResult() :
    m_codeSearchInfoListHasBeenSet(false),
    m_devCountHasBeenSet(false),
    m_scheduleCountHasBeenSet(false),
    m_recycleCountHasBeenSet(false)
{
}

CoreInternalOutcome CodeSearchResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CodeSearchInfoList") && !value["CodeSearchInfoList"].IsNull())
    {
        if (!value["CodeSearchInfoList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchResult.CodeSearchInfoList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codeSearchInfoList.Deserialize(value["CodeSearchInfoList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeSearchInfoListHasBeenSet = true;
    }

    if (value.HasMember("DevCount") && !value["DevCount"].IsNull())
    {
        if (!value["DevCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchResult.DevCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_devCount = value["DevCount"].GetUint64();
        m_devCountHasBeenSet = true;
    }

    if (value.HasMember("ScheduleCount") && !value["ScheduleCount"].IsNull())
    {
        if (!value["ScheduleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchResult.ScheduleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleCount = value["ScheduleCount"].GetUint64();
        m_scheduleCountHasBeenSet = true;
    }

    if (value.HasMember("RecycleCount") && !value["RecycleCount"].IsNull())
    {
        if (!value["RecycleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSearchResult.RecycleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recycleCount = value["RecycleCount"].GetUint64();
        m_recycleCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeSearchResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeSearchInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSearchInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeSearchInfoList.ToJsonObject(value[key.c_str()], allocator);
    }

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


CodeSearchInfoPage CodeSearchResult::GetCodeSearchInfoList() const
{
    return m_codeSearchInfoList;
}

void CodeSearchResult::SetCodeSearchInfoList(const CodeSearchInfoPage& _codeSearchInfoList)
{
    m_codeSearchInfoList = _codeSearchInfoList;
    m_codeSearchInfoListHasBeenSet = true;
}

bool CodeSearchResult::CodeSearchInfoListHasBeenSet() const
{
    return m_codeSearchInfoListHasBeenSet;
}

uint64_t CodeSearchResult::GetDevCount() const
{
    return m_devCount;
}

void CodeSearchResult::SetDevCount(const uint64_t& _devCount)
{
    m_devCount = _devCount;
    m_devCountHasBeenSet = true;
}

bool CodeSearchResult::DevCountHasBeenSet() const
{
    return m_devCountHasBeenSet;
}

uint64_t CodeSearchResult::GetScheduleCount() const
{
    return m_scheduleCount;
}

void CodeSearchResult::SetScheduleCount(const uint64_t& _scheduleCount)
{
    m_scheduleCount = _scheduleCount;
    m_scheduleCountHasBeenSet = true;
}

bool CodeSearchResult::ScheduleCountHasBeenSet() const
{
    return m_scheduleCountHasBeenSet;
}

uint64_t CodeSearchResult::GetRecycleCount() const
{
    return m_recycleCount;
}

void CodeSearchResult::SetRecycleCount(const uint64_t& _recycleCount)
{
    m_recycleCount = _recycleCount;
    m_recycleCountHasBeenSet = true;
}

bool CodeSearchResult::RecycleCountHasBeenSet() const
{
    return m_recycleCountHasBeenSet;
}

