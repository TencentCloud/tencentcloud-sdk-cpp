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

#include <tencentcloud/clb/v20180317/model/TestConnectionRequestInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

TestConnectionRequestInfo::TestConnectionRequestInfo() :
    m_requestUrlHasBeenSet(false),
    m_requestBodyHasBeenSet(false),
    m_requestHeadersHasBeenSet(false)
{
}

CoreInternalOutcome TestConnectionRequestInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestUrl") && !value["RequestUrl"].IsNull())
    {
        if (!value["RequestUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestConnectionRequestInfo.RequestUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestUrl = string(value["RequestUrl"].GetString());
        m_requestUrlHasBeenSet = true;
    }

    if (value.HasMember("RequestBody") && !value["RequestBody"].IsNull())
    {
        if (!value["RequestBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestConnectionRequestInfo.RequestBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestBody = string(value["RequestBody"].GetString());
        m_requestBodyHasBeenSet = true;
    }

    if (value.HasMember("RequestHeaders") && !value["RequestHeaders"].IsNull())
    {
        if (!value["RequestHeaders"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestConnectionRequestInfo.RequestHeaders` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestHeaders = string(value["RequestHeaders"].GetString());
        m_requestHeadersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TestConnectionRequestInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_requestBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestBody.c_str(), allocator).Move(), allocator);
    }

    if (m_requestHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestHeaders.c_str(), allocator).Move(), allocator);
    }

}


string TestConnectionRequestInfo::GetRequestUrl() const
{
    return m_requestUrl;
}

void TestConnectionRequestInfo::SetRequestUrl(const string& _requestUrl)
{
    m_requestUrl = _requestUrl;
    m_requestUrlHasBeenSet = true;
}

bool TestConnectionRequestInfo::RequestUrlHasBeenSet() const
{
    return m_requestUrlHasBeenSet;
}

string TestConnectionRequestInfo::GetRequestBody() const
{
    return m_requestBody;
}

void TestConnectionRequestInfo::SetRequestBody(const string& _requestBody)
{
    m_requestBody = _requestBody;
    m_requestBodyHasBeenSet = true;
}

bool TestConnectionRequestInfo::RequestBodyHasBeenSet() const
{
    return m_requestBodyHasBeenSet;
}

string TestConnectionRequestInfo::GetRequestHeaders() const
{
    return m_requestHeaders;
}

void TestConnectionRequestInfo::SetRequestHeaders(const string& _requestHeaders)
{
    m_requestHeaders = _requestHeaders;
    m_requestHeadersHasBeenSet = true;
}

bool TestConnectionRequestInfo::RequestHeadersHasBeenSet() const
{
    return m_requestHeadersHasBeenSet;
}

