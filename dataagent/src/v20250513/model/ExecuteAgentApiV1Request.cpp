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

#include <tencentcloud/dataagent/v20250513/model/ExecuteAgentApiV1Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

ExecuteAgentApiV1Request::ExecuteAgentApiV1Request() :
    m_requestPathHasBeenSet(false),
    m_requestTypeHasBeenSet(false)
{
}

string ExecuteAgentApiV1Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_requestPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestPath.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExecuteAgentApiV1Request::GetRequestPath() const
{
    return m_requestPath;
}

void ExecuteAgentApiV1Request::SetRequestPath(const string& _requestPath)
{
    m_requestPath = _requestPath;
    m_requestPathHasBeenSet = true;
}

bool ExecuteAgentApiV1Request::RequestPathHasBeenSet() const
{
    return m_requestPathHasBeenSet;
}

string ExecuteAgentApiV1Request::GetRequestType() const
{
    return m_requestType;
}

void ExecuteAgentApiV1Request::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool ExecuteAgentApiV1Request::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}


