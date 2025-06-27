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

#include <tencentcloud/ctem/v20231128/model/CreateJobRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreateJobRecordRequest::CreateJobRecordRequest() :
    m_customerIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_isIncludeFullScanHasBeenSet(false)
{
}

string CreateJobRecordRequest::ToJsonString() const
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

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanType.c_str(), allocator).Move(), allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qps, allocator);
    }

    if (m_isIncludeFullScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIncludeFullScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isIncludeFullScan, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateJobRecordRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateJobRecordRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateJobRecordRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateJobRecordRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateJobRecordRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateJobRecordRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CreateJobRecordRequest::GetScanType() const
{
    return m_scanType;
}

void CreateJobRecordRequest::SetScanType(const string& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool CreateJobRecordRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

int64_t CreateJobRecordRequest::GetQps() const
{
    return m_qps;
}

void CreateJobRecordRequest::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool CreateJobRecordRequest::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

bool CreateJobRecordRequest::GetIsIncludeFullScan() const
{
    return m_isIncludeFullScan;
}

void CreateJobRecordRequest::SetIsIncludeFullScan(const bool& _isIncludeFullScan)
{
    m_isIncludeFullScan = _isIncludeFullScan;
    m_isIncludeFullScanHasBeenSet = true;
}

bool CreateJobRecordRequest::IsIncludeFullScanHasBeenSet() const
{
    return m_isIncludeFullScanHasBeenSet;
}


