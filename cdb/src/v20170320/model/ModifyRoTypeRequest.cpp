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

#include <tencentcloud/cdb/v20170320/model/ModifyRoTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyRoTypeRequest::ModifyRoTypeRequest() :
    m_instanceIdHasBeenSet(false),
    m_srcRoInstTypeHasBeenSet(false),
    m_dstRoInstTypeHasBeenSet(false),
    m_replicationDelayHasBeenSet(false)
{
}

string ModifyRoTypeRequest::ToJsonString() const
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

    if (m_srcRoInstTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRoInstType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcRoInstType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstRoInstTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRoInstType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstRoInstType.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicationDelay, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRoTypeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyRoTypeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyRoTypeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyRoTypeRequest::GetSrcRoInstType() const
{
    return m_srcRoInstType;
}

void ModifyRoTypeRequest::SetSrcRoInstType(const string& _srcRoInstType)
{
    m_srcRoInstType = _srcRoInstType;
    m_srcRoInstTypeHasBeenSet = true;
}

bool ModifyRoTypeRequest::SrcRoInstTypeHasBeenSet() const
{
    return m_srcRoInstTypeHasBeenSet;
}

string ModifyRoTypeRequest::GetDstRoInstType() const
{
    return m_dstRoInstType;
}

void ModifyRoTypeRequest::SetDstRoInstType(const string& _dstRoInstType)
{
    m_dstRoInstType = _dstRoInstType;
    m_dstRoInstTypeHasBeenSet = true;
}

bool ModifyRoTypeRequest::DstRoInstTypeHasBeenSet() const
{
    return m_dstRoInstTypeHasBeenSet;
}

int64_t ModifyRoTypeRequest::GetReplicationDelay() const
{
    return m_replicationDelay;
}

void ModifyRoTypeRequest::SetReplicationDelay(const int64_t& _replicationDelay)
{
    m_replicationDelay = _replicationDelay;
    m_replicationDelayHasBeenSet = true;
}

bool ModifyRoTypeRequest::ReplicationDelayHasBeenSet() const
{
    return m_replicationDelayHasBeenSet;
}


