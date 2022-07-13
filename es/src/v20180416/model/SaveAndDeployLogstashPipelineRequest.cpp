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

#include <tencentcloud/es/v20180416/model/SaveAndDeployLogstashPipelineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

SaveAndDeployLogstashPipelineRequest::SaveAndDeployLogstashPipelineRequest() :
    m_instanceIdHasBeenSet(false),
    m_pipelineHasBeenSet(false),
    m_opTypeHasBeenSet(false)
{
}

string SaveAndDeployLogstashPipelineRequest::ToJsonString() const
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

    if (m_pipelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pipeline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pipeline.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_opTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_opType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SaveAndDeployLogstashPipelineRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SaveAndDeployLogstashPipelineRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SaveAndDeployLogstashPipelineRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

LogstashPipeline SaveAndDeployLogstashPipelineRequest::GetPipeline() const
{
    return m_pipeline;
}

void SaveAndDeployLogstashPipelineRequest::SetPipeline(const LogstashPipeline& _pipeline)
{
    m_pipeline = _pipeline;
    m_pipelineHasBeenSet = true;
}

bool SaveAndDeployLogstashPipelineRequest::PipelineHasBeenSet() const
{
    return m_pipelineHasBeenSet;
}

uint64_t SaveAndDeployLogstashPipelineRequest::GetOpType() const
{
    return m_opType;
}

void SaveAndDeployLogstashPipelineRequest::SetOpType(const uint64_t& _opType)
{
    m_opType = _opType;
    m_opTypeHasBeenSet = true;
}

bool SaveAndDeployLogstashPipelineRequest::OpTypeHasBeenSet() const
{
    return m_opTypeHasBeenSet;
}


