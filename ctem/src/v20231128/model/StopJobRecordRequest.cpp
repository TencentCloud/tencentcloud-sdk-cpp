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

#include <tencentcloud/ctem/v20231128/model/StopJobRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

StopJobRecordRequest::StopJobRecordRequest() :
    m_customerIdHasBeenSet(false),
    m_jobRecordIdHasBeenSet(false)
{
}

string StopJobRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
    }

    if (m_jobRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobRecordId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t StopJobRecordRequest::GetCustomerId() const
{
    return m_customerId;
}

void StopJobRecordRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool StopJobRecordRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

int64_t StopJobRecordRequest::GetJobRecordId() const
{
    return m_jobRecordId;
}

void StopJobRecordRequest::SetJobRecordId(const int64_t& _jobRecordId)
{
    m_jobRecordId = _jobRecordId;
    m_jobRecordIdHasBeenSet = true;
}

bool StopJobRecordRequest::JobRecordIdHasBeenSet() const
{
    return m_jobRecordIdHasBeenSet;
}


