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

#include <tencentcloud/vdb/v20230616/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vdb::V20230616::Model;
using namespace std;

ScaleOutInstanceRequest::ScaleOutInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_replicaNumHasBeenSet(false),
    m_runNowHasBeenSet(false)
{
}

string ScaleOutInstanceRequest::ToJsonString() const
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

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicaNum, allocator);
    }

    if (m_runNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runNow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOutInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleOutInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleOutInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetReplicaNum() const
{
    return m_replicaNum;
}

void ScaleOutInstanceRequest::SetReplicaNum(const uint64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool ScaleOutInstanceRequest::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

bool ScaleOutInstanceRequest::GetRunNow() const
{
    return m_runNow;
}

void ScaleOutInstanceRequest::SetRunNow(const bool& _runNow)
{
    m_runNow = _runNow;
    m_runNowHasBeenSet = true;
}

bool ScaleOutInstanceRequest::RunNowHasBeenSet() const
{
    return m_runNowHasBeenSet;
}


