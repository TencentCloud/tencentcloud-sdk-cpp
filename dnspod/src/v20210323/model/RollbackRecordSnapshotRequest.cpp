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

#include <tencentcloud/dnspod/v20210323/model/RollbackRecordSnapshotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

RollbackRecordSnapshotRequest::RollbackRecordSnapshotRequest() :
    m_domainHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_recordListHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string RollbackRecordSnapshotRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordList.begin(); itr != m_recordList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackRecordSnapshotRequest::GetDomain() const
{
    return m_domain;
}

void RollbackRecordSnapshotRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool RollbackRecordSnapshotRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string RollbackRecordSnapshotRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void RollbackRecordSnapshotRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool RollbackRecordSnapshotRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

vector<SnapshotRecord> RollbackRecordSnapshotRequest::GetRecordList() const
{
    return m_recordList;
}

void RollbackRecordSnapshotRequest::SetRecordList(const vector<SnapshotRecord>& _recordList)
{
    m_recordList = _recordList;
    m_recordListHasBeenSet = true;
}

bool RollbackRecordSnapshotRequest::RecordListHasBeenSet() const
{
    return m_recordListHasBeenSet;
}

uint64_t RollbackRecordSnapshotRequest::GetTaskId() const
{
    return m_taskId;
}

void RollbackRecordSnapshotRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RollbackRecordSnapshotRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t RollbackRecordSnapshotRequest::GetDomainId() const
{
    return m_domainId;
}

void RollbackRecordSnapshotRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool RollbackRecordSnapshotRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


