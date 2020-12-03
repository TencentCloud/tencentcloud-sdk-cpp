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

#include <tencentcloud/cdb/v20170320/model/StartDelayReplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

StartDelayReplicationRequest::StartDelayReplicationRequest() :
    m_instanceIdHasBeenSet(false),
    m_delayReplicationTypeHasBeenSet(false),
    m_dueTimeHasBeenSet(false),
    m_gtidHasBeenSet(false)
{
}

string StartDelayReplicationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_delayReplicationTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DelayReplicationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_delayReplicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_dueTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DueTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dueTime, allocator);
    }

    if (m_gtidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Gtid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_gtid.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartDelayReplicationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void StartDelayReplicationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool StartDelayReplicationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string StartDelayReplicationRequest::GetDelayReplicationType() const
{
    return m_delayReplicationType;
}

void StartDelayReplicationRequest::SetDelayReplicationType(const string& _delayReplicationType)
{
    m_delayReplicationType = _delayReplicationType;
    m_delayReplicationTypeHasBeenSet = true;
}

bool StartDelayReplicationRequest::DelayReplicationTypeHasBeenSet() const
{
    return m_delayReplicationTypeHasBeenSet;
}

int64_t StartDelayReplicationRequest::GetDueTime() const
{
    return m_dueTime;
}

void StartDelayReplicationRequest::SetDueTime(const int64_t& _dueTime)
{
    m_dueTime = _dueTime;
    m_dueTimeHasBeenSet = true;
}

bool StartDelayReplicationRequest::DueTimeHasBeenSet() const
{
    return m_dueTimeHasBeenSet;
}

string StartDelayReplicationRequest::GetGtid() const
{
    return m_gtid;
}

void StartDelayReplicationRequest::SetGtid(const string& _gtid)
{
    m_gtid = _gtid;
    m_gtidHasBeenSet = true;
}

bool StartDelayReplicationRequest::GtidHasBeenSet() const
{
    return m_gtidHasBeenSet;
}


