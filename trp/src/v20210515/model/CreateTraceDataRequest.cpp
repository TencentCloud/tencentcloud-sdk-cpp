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

#include <tencentcloud/trp/v20210515/model/CreateTraceDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CreateTraceDataRequest::CreateTraceDataRequest() :
    m_corpIdHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_phaseNameHasBeenSet(false),
    m_chainStatusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_traceItemsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_phaseDataHasBeenSet(false)
{
}

string CreateTraceDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_phase, allocator);
    }

    if (m_phaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_chainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_chainStatus, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_traceItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_traceItems.begin(); itr != m_traceItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_phaseDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhaseData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_phaseData.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateTraceDataRequest::GetCorpId() const
{
    return m_corpId;
}

void CreateTraceDataRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CreateTraceDataRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string CreateTraceDataRequest::GetBatchId() const
{
    return m_batchId;
}

void CreateTraceDataRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool CreateTraceDataRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string CreateTraceDataRequest::GetTaskId() const
{
    return m_taskId;
}

void CreateTraceDataRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateTraceDataRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t CreateTraceDataRequest::GetPhase() const
{
    return m_phase;
}

void CreateTraceDataRequest::SetPhase(const uint64_t& _phase)
{
    m_phase = _phase;
    m_phaseHasBeenSet = true;
}

bool CreateTraceDataRequest::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

string CreateTraceDataRequest::GetPhaseName() const
{
    return m_phaseName;
}

void CreateTraceDataRequest::SetPhaseName(const string& _phaseName)
{
    m_phaseName = _phaseName;
    m_phaseNameHasBeenSet = true;
}

bool CreateTraceDataRequest::PhaseNameHasBeenSet() const
{
    return m_phaseNameHasBeenSet;
}

uint64_t CreateTraceDataRequest::GetChainStatus() const
{
    return m_chainStatus;
}

void CreateTraceDataRequest::SetChainStatus(const uint64_t& _chainStatus)
{
    m_chainStatus = _chainStatus;
    m_chainStatusHasBeenSet = true;
}

bool CreateTraceDataRequest::ChainStatusHasBeenSet() const
{
    return m_chainStatusHasBeenSet;
}

uint64_t CreateTraceDataRequest::GetType() const
{
    return m_type;
}

void CreateTraceDataRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateTraceDataRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateTraceDataRequest::GetTraceId() const
{
    return m_traceId;
}

void CreateTraceDataRequest::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool CreateTraceDataRequest::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

vector<TraceItem> CreateTraceDataRequest::GetTraceItems() const
{
    return m_traceItems;
}

void CreateTraceDataRequest::SetTraceItems(const vector<TraceItem>& _traceItems)
{
    m_traceItems = _traceItems;
    m_traceItemsHasBeenSet = true;
}

bool CreateTraceDataRequest::TraceItemsHasBeenSet() const
{
    return m_traceItemsHasBeenSet;
}

uint64_t CreateTraceDataRequest::GetStatus() const
{
    return m_status;
}

void CreateTraceDataRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateTraceDataRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

PhaseData CreateTraceDataRequest::GetPhaseData() const
{
    return m_phaseData;
}

void CreateTraceDataRequest::SetPhaseData(const PhaseData& _phaseData)
{
    m_phaseData = _phaseData;
    m_phaseDataHasBeenSet = true;
}

bool CreateTraceDataRequest::PhaseDataHasBeenSet() const
{
    return m_phaseDataHasBeenSet;
}


