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

#include <tencentcloud/gme/v20180711/model/ModifyRecordInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

ModifyRecordInfoRequest::ModifyRecordInfoRequest() :
    m_taskIdHasBeenSet(false),
    m_recordModeHasBeenSet(false),
    m_bizIdHasBeenSet(false),
    m_subscribeRecordUserIdsHasBeenSet(false)
{
}

string ModifyRecordInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_recordModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordMode, allocator);
    }

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
    }

    if (m_subscribeRecordUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeRecordUserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscribeRecordUserIds.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyRecordInfoRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyRecordInfoRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyRecordInfoRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t ModifyRecordInfoRequest::GetRecordMode() const
{
    return m_recordMode;
}

void ModifyRecordInfoRequest::SetRecordMode(const uint64_t& _recordMode)
{
    m_recordMode = _recordMode;
    m_recordModeHasBeenSet = true;
}

bool ModifyRecordInfoRequest::RecordModeHasBeenSet() const
{
    return m_recordModeHasBeenSet;
}

uint64_t ModifyRecordInfoRequest::GetBizId() const
{
    return m_bizId;
}

void ModifyRecordInfoRequest::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool ModifyRecordInfoRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

SubscribeRecordUserIds ModifyRecordInfoRequest::GetSubscribeRecordUserIds() const
{
    return m_subscribeRecordUserIds;
}

void ModifyRecordInfoRequest::SetSubscribeRecordUserIds(const SubscribeRecordUserIds& _subscribeRecordUserIds)
{
    m_subscribeRecordUserIds = _subscribeRecordUserIds;
    m_subscribeRecordUserIdsHasBeenSet = true;
}

bool ModifyRecordInfoRequest::SubscribeRecordUserIdsHasBeenSet() const
{
    return m_subscribeRecordUserIdsHasBeenSet;
}


