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

#include <tencentcloud/adp/v20260520/model/SaveWorkflowToolNodeOutputRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SaveWorkflowToolNodeOutputRequest::SaveWorkflowToolNodeOutputRequest() :
    m_callbackTokenHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

string SaveWorkflowToolNodeOutputRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callbackTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackToken.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SaveWorkflowToolNodeOutputRequest::GetCallbackToken() const
{
    return m_callbackToken;
}

void SaveWorkflowToolNodeOutputRequest::SetCallbackToken(const string& _callbackToken)
{
    m_callbackToken = _callbackToken;
    m_callbackTokenHasBeenSet = true;
}

bool SaveWorkflowToolNodeOutputRequest::CallbackTokenHasBeenSet() const
{
    return m_callbackTokenHasBeenSet;
}

string SaveWorkflowToolNodeOutputRequest::GetResult() const
{
    return m_result;
}

void SaveWorkflowToolNodeOutputRequest::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool SaveWorkflowToolNodeOutputRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}


