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

#include <tencentcloud/dbbrain/v20210527/model/KillMySqlThreadsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

KillMySqlThreadsRequest::KillMySqlThreadsRequest() :
    m_instanceIdHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_threadsHasBeenSet(false),
    m_sqlExecIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_recordHistoryHasBeenSet(false)
{
}

string KillMySqlThreadsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_stageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stage.c_str(), allocator).Move(), allocator);
    }

    if (m_threadsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threads";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_threads.begin(); itr != m_threads.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_sqlExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlExecId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlExecId.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordHistory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordHistory, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string KillMySqlThreadsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void KillMySqlThreadsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool KillMySqlThreadsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string KillMySqlThreadsRequest::GetStage() const
{
    return m_stage;
}

void KillMySqlThreadsRequest::SetStage(const string& _stage)
{
    m_stage = _stage;
    m_stageHasBeenSet = true;
}

bool KillMySqlThreadsRequest::StageHasBeenSet() const
{
    return m_stageHasBeenSet;
}

vector<int64_t> KillMySqlThreadsRequest::GetThreads() const
{
    return m_threads;
}

void KillMySqlThreadsRequest::SetThreads(const vector<int64_t>& _threads)
{
    m_threads = _threads;
    m_threadsHasBeenSet = true;
}

bool KillMySqlThreadsRequest::ThreadsHasBeenSet() const
{
    return m_threadsHasBeenSet;
}

string KillMySqlThreadsRequest::GetSqlExecId() const
{
    return m_sqlExecId;
}

void KillMySqlThreadsRequest::SetSqlExecId(const string& _sqlExecId)
{
    m_sqlExecId = _sqlExecId;
    m_sqlExecIdHasBeenSet = true;
}

bool KillMySqlThreadsRequest::SqlExecIdHasBeenSet() const
{
    return m_sqlExecIdHasBeenSet;
}

string KillMySqlThreadsRequest::GetProduct() const
{
    return m_product;
}

void KillMySqlThreadsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool KillMySqlThreadsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

bool KillMySqlThreadsRequest::GetRecordHistory() const
{
    return m_recordHistory;
}

void KillMySqlThreadsRequest::SetRecordHistory(const bool& _recordHistory)
{
    m_recordHistory = _recordHistory;
    m_recordHistoryHasBeenSet = true;
}

bool KillMySqlThreadsRequest::RecordHistoryHasBeenSet() const
{
    return m_recordHistoryHasBeenSet;
}


