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
    m_isIncludeFullScanHasBeenSet(false),
    m_portScanQpsHasBeenSet(false),
    m_singleIPTaskLimitHasBeenSet(false),
    m_highRiskAckHasBeenSet(false),
    m_scanRateAckChecklistHasBeenSet(false),
    m_scanPriorityHasBeenSet(false)
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

    if (m_portScanQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortScanQps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_portScanQps, allocator);
    }

    if (m_singleIPTaskLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleIPTaskLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_singleIPTaskLimit, allocator);
    }

    if (m_highRiskAckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskAck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_highRiskAck, allocator);
    }

    if (m_scanRateAckChecklistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRateAckChecklist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanRateAckChecklist.begin(); itr != m_scanRateAckChecklist.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scanPriority.ToJsonObject(d[key.c_str()], allocator);
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

int64_t CreateJobRecordRequest::GetPortScanQps() const
{
    return m_portScanQps;
}

void CreateJobRecordRequest::SetPortScanQps(const int64_t& _portScanQps)
{
    m_portScanQps = _portScanQps;
    m_portScanQpsHasBeenSet = true;
}

bool CreateJobRecordRequest::PortScanQpsHasBeenSet() const
{
    return m_portScanQpsHasBeenSet;
}

int64_t CreateJobRecordRequest::GetSingleIPTaskLimit() const
{
    return m_singleIPTaskLimit;
}

void CreateJobRecordRequest::SetSingleIPTaskLimit(const int64_t& _singleIPTaskLimit)
{
    m_singleIPTaskLimit = _singleIPTaskLimit;
    m_singleIPTaskLimitHasBeenSet = true;
}

bool CreateJobRecordRequest::SingleIPTaskLimitHasBeenSet() const
{
    return m_singleIPTaskLimitHasBeenSet;
}

bool CreateJobRecordRequest::GetHighRiskAck() const
{
    return m_highRiskAck;
}

void CreateJobRecordRequest::SetHighRiskAck(const bool& _highRiskAck)
{
    m_highRiskAck = _highRiskAck;
    m_highRiskAckHasBeenSet = true;
}

bool CreateJobRecordRequest::HighRiskAckHasBeenSet() const
{
    return m_highRiskAckHasBeenSet;
}

vector<string> CreateJobRecordRequest::GetScanRateAckChecklist() const
{
    return m_scanRateAckChecklist;
}

void CreateJobRecordRequest::SetScanRateAckChecklist(const vector<string>& _scanRateAckChecklist)
{
    m_scanRateAckChecklist = _scanRateAckChecklist;
    m_scanRateAckChecklistHasBeenSet = true;
}

bool CreateJobRecordRequest::ScanRateAckChecklistHasBeenSet() const
{
    return m_scanRateAckChecklistHasBeenSet;
}

ScanPriorityReq CreateJobRecordRequest::GetScanPriority() const
{
    return m_scanPriority;
}

void CreateJobRecordRequest::SetScanPriority(const ScanPriorityReq& _scanPriority)
{
    m_scanPriority = _scanPriority;
    m_scanPriorityHasBeenSet = true;
}

bool CreateJobRecordRequest::ScanPriorityHasBeenSet() const
{
    return m_scanPriorityHasBeenSet;
}


