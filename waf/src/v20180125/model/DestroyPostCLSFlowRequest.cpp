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

#include <tencentcloud/waf/v20180125/model/DestroyPostCLSFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DestroyPostCLSFlowRequest::DestroyPostCLSFlowRequest() :
    m_flowIdHasBeenSet(false),
    m_logTypeHasBeenSet(false)
{
}

string DestroyPostCLSFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowId, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DestroyPostCLSFlowRequest::GetFlowId() const
{
    return m_flowId;
}

void DestroyPostCLSFlowRequest::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool DestroyPostCLSFlowRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

int64_t DestroyPostCLSFlowRequest::GetLogType() const
{
    return m_logType;
}

void DestroyPostCLSFlowRequest::SetLogType(const int64_t& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool DestroyPostCLSFlowRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}


