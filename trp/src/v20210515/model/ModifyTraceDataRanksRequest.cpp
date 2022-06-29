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

#include <tencentcloud/trp/v20210515/model/ModifyTraceDataRanksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ModifyTraceDataRanksRequest::ModifyTraceDataRanksRequest() :
    m_corpIdHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_traceIdsHasBeenSet(false)
{
}

string ModifyTraceDataRanksRequest::ToJsonString() const
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

    if (m_traceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_traceIds.begin(); itr != m_traceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyTraceDataRanksRequest::GetCorpId() const
{
    return m_corpId;
}

void ModifyTraceDataRanksRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool ModifyTraceDataRanksRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string ModifyTraceDataRanksRequest::GetBatchId() const
{
    return m_batchId;
}

void ModifyTraceDataRanksRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool ModifyTraceDataRanksRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string ModifyTraceDataRanksRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyTraceDataRanksRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyTraceDataRanksRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> ModifyTraceDataRanksRequest::GetTraceIds() const
{
    return m_traceIds;
}

void ModifyTraceDataRanksRequest::SetTraceIds(const vector<string>& _traceIds)
{
    m_traceIds = _traceIds;
    m_traceIdsHasBeenSet = true;
}

bool ModifyTraceDataRanksRequest::TraceIdsHasBeenSet() const
{
    return m_traceIdsHasBeenSet;
}


