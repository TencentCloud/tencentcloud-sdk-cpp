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

#include <tencentcloud/kms/v20190118/model/ScheduleDataKeyDeletionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

ScheduleDataKeyDeletionRequest::ScheduleDataKeyDeletionRequest() :
    m_dataKeyIdHasBeenSet(false),
    m_pendingWindowInDaysHasBeenSet(false)
{
}

string ScheduleDataKeyDeletionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_pendingWindowInDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingWindowInDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pendingWindowInDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScheduleDataKeyDeletionRequest::GetDataKeyId() const
{
    return m_dataKeyId;
}

void ScheduleDataKeyDeletionRequest::SetDataKeyId(const string& _dataKeyId)
{
    m_dataKeyId = _dataKeyId;
    m_dataKeyIdHasBeenSet = true;
}

bool ScheduleDataKeyDeletionRequest::DataKeyIdHasBeenSet() const
{
    return m_dataKeyIdHasBeenSet;
}

uint64_t ScheduleDataKeyDeletionRequest::GetPendingWindowInDays() const
{
    return m_pendingWindowInDays;
}

void ScheduleDataKeyDeletionRequest::SetPendingWindowInDays(const uint64_t& _pendingWindowInDays)
{
    m_pendingWindowInDays = _pendingWindowInDays;
    m_pendingWindowInDaysHasBeenSet = true;
}

bool ScheduleDataKeyDeletionRequest::PendingWindowInDaysHasBeenSet() const
{
    return m_pendingWindowInDaysHasBeenSet;
}


