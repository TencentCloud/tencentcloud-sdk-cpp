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

#include <tencentcloud/adp/v20260520/model/ToolExample.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ToolExample::ToolExample() :
    m_requestHasBeenSet(false),
    m_responseHasBeenSet(false)
{
}

CoreInternalOutcome ToolExample::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToolExample.Request` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_request = string(value["Request"].GetString());
        m_requestHasBeenSet = true;
    }

    if (value.HasMember("Response") && !value["Response"].IsNull())
    {
        if (!value["Response"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToolExample.Response` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_response = string(value["Response"].GetString());
        m_responseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ToolExample::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_request.c_str(), allocator).Move(), allocator);
    }

    if (m_responseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Response";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_response.c_str(), allocator).Move(), allocator);
    }

}


string ToolExample::GetRequest() const
{
    return m_request;
}

void ToolExample::SetRequest(const string& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool ToolExample::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

string ToolExample::GetResponse() const
{
    return m_response;
}

void ToolExample::SetResponse(const string& _response)
{
    m_response = _response;
    m_responseHasBeenSet = true;
}

bool ToolExample::ResponseHasBeenSet() const
{
    return m_responseHasBeenSet;
}

