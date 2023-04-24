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

#include <tencentcloud/trp/v20210515/model/ModifyTraceDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ModifyTraceDataRequest::ModifyTraceDataRequest() :
    m_traceIdHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_traceItemsHasBeenSet(false),
    m_phaseNameHasBeenSet(false),
    m_phaseDataHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_rankHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_traceTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_chainStatusHasBeenSet(false),
    m_chainTimeHasBeenSet(false),
    m_chainDataHasBeenSet(false),
    m_corpIdHasBeenSet(false)
{
}

string ModifyTraceDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
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

    if (m_phaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_phaseDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhaseData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_phaseData.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_rankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rank";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rank, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_phase, allocator);
    }

    if (m_traceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_traceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_chainStatus, allocator);
    }

    if (m_chainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chainTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chainDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chainData.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTraceDataRequest::GetTraceId() const
{
    return m_traceId;
}

void ModifyTraceDataRequest::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool ModifyTraceDataRequest::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

string ModifyTraceDataRequest::GetBatchId() const
{
    return m_batchId;
}

void ModifyTraceDataRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool ModifyTraceDataRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string ModifyTraceDataRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyTraceDataRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyTraceDataRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<TraceItem> ModifyTraceDataRequest::GetTraceItems() const
{
    return m_traceItems;
}

void ModifyTraceDataRequest::SetTraceItems(const vector<TraceItem>& _traceItems)
{
    m_traceItems = _traceItems;
    m_traceItemsHasBeenSet = true;
}

bool ModifyTraceDataRequest::TraceItemsHasBeenSet() const
{
    return m_traceItemsHasBeenSet;
}

string ModifyTraceDataRequest::GetPhaseName() const
{
    return m_phaseName;
}

void ModifyTraceDataRequest::SetPhaseName(const string& _phaseName)
{
    m_phaseName = _phaseName;
    m_phaseNameHasBeenSet = true;
}

bool ModifyTraceDataRequest::PhaseNameHasBeenSet() const
{
    return m_phaseNameHasBeenSet;
}

PhaseData ModifyTraceDataRequest::GetPhaseData() const
{
    return m_phaseData;
}

void ModifyTraceDataRequest::SetPhaseData(const PhaseData& _phaseData)
{
    m_phaseData = _phaseData;
    m_phaseDataHasBeenSet = true;
}

bool ModifyTraceDataRequest::PhaseDataHasBeenSet() const
{
    return m_phaseDataHasBeenSet;
}

uint64_t ModifyTraceDataRequest::GetStatus() const
{
    return m_status;
}

void ModifyTraceDataRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyTraceDataRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyTraceDataRequest::GetRank() const
{
    return m_rank;
}

void ModifyTraceDataRequest::SetRank(const uint64_t& _rank)
{
    m_rank = _rank;
    m_rankHasBeenSet = true;
}

bool ModifyTraceDataRequest::RankHasBeenSet() const
{
    return m_rankHasBeenSet;
}

uint64_t ModifyTraceDataRequest::GetType() const
{
    return m_type;
}

void ModifyTraceDataRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyTraceDataRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyTraceDataRequest::GetCode() const
{
    return m_code;
}

void ModifyTraceDataRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ModifyTraceDataRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t ModifyTraceDataRequest::GetPhase() const
{
    return m_phase;
}

void ModifyTraceDataRequest::SetPhase(const uint64_t& _phase)
{
    m_phase = _phase;
    m_phaseHasBeenSet = true;
}

bool ModifyTraceDataRequest::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

string ModifyTraceDataRequest::GetTraceTime() const
{
    return m_traceTime;
}

void ModifyTraceDataRequest::SetTraceTime(const string& _traceTime)
{
    m_traceTime = _traceTime;
    m_traceTimeHasBeenSet = true;
}

bool ModifyTraceDataRequest::TraceTimeHasBeenSet() const
{
    return m_traceTimeHasBeenSet;
}

string ModifyTraceDataRequest::GetCreateTime() const
{
    return m_createTime;
}

void ModifyTraceDataRequest::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ModifyTraceDataRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ModifyTraceDataRequest::GetChainStatus() const
{
    return m_chainStatus;
}

void ModifyTraceDataRequest::SetChainStatus(const uint64_t& _chainStatus)
{
    m_chainStatus = _chainStatus;
    m_chainStatusHasBeenSet = true;
}

bool ModifyTraceDataRequest::ChainStatusHasBeenSet() const
{
    return m_chainStatusHasBeenSet;
}

string ModifyTraceDataRequest::GetChainTime() const
{
    return m_chainTime;
}

void ModifyTraceDataRequest::SetChainTime(const string& _chainTime)
{
    m_chainTime = _chainTime;
    m_chainTimeHasBeenSet = true;
}

bool ModifyTraceDataRequest::ChainTimeHasBeenSet() const
{
    return m_chainTimeHasBeenSet;
}

ChainData ModifyTraceDataRequest::GetChainData() const
{
    return m_chainData;
}

void ModifyTraceDataRequest::SetChainData(const ChainData& _chainData)
{
    m_chainData = _chainData;
    m_chainDataHasBeenSet = true;
}

bool ModifyTraceDataRequest::ChainDataHasBeenSet() const
{
    return m_chainDataHasBeenSet;
}

uint64_t ModifyTraceDataRequest::GetCorpId() const
{
    return m_corpId;
}

void ModifyTraceDataRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool ModifyTraceDataRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}


