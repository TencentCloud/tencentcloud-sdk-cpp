/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dataagent/v20250513/model/ExecuteAgentApiResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

ExecuteAgentApiResponse::ExecuteAgentApiResponse() :
    m_requestPathHasBeenSet(false),
    m_agentDataHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome ExecuteAgentApiResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RequestPath") && !rsp["RequestPath"].IsNull())
    {
        if (!rsp["RequestPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestPath = string(rsp["RequestPath"].GetString());
        m_requestPathHasBeenSet = true;
    }

    if (rsp.HasMember("AgentData") && !rsp["AgentData"].IsNull())
    {
        if (!rsp["AgentData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentData = string(rsp["AgentData"].GetString());
        m_agentDataHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ExecuteAgentApiResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_requestPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestPath.c_str(), allocator).Move(), allocator);
    }

    if (m_agentDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentData.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
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


string ExecuteAgentApiResponse::GetRequestPath() const
{
    return m_requestPath;
}

bool ExecuteAgentApiResponse::RequestPathHasBeenSet() const
{
    return m_requestPathHasBeenSet;
}

string ExecuteAgentApiResponse::GetAgentData() const
{
    return m_agentData;
}

bool ExecuteAgentApiResponse::AgentDataHasBeenSet() const
{
    return m_agentDataHasBeenSet;
}

string ExecuteAgentApiResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool ExecuteAgentApiResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}


