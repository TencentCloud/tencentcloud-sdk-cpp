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

#include <tencentcloud/cynosdb/v20190107/model/CreateProxyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateProxyResponse::CreateProxyResponse() :
    m_flowIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateProxyResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("FlowId") && !rsp["FlowId"].IsNull())
    {
        if (!rsp["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = rsp["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = rsp["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProxyGroupId") && !rsp["ProxyGroupId"].IsNull())
    {
        if (!rsp["ProxyGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyGroupId = string(rsp["ProxyGroupId"].GetString());
        m_proxyGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateProxyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t CreateProxyResponse::GetFlowId() const
{
    return m_flowId;
}

bool CreateProxyResponse::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

int64_t CreateProxyResponse::GetTaskId() const
{
    return m_taskId;
}

bool CreateProxyResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateProxyResponse::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

bool CreateProxyResponse::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}


