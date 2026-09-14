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

#include <tencentcloud/ccc/v20200210/model/AICallAPICallRequestDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AICallAPICallRequestDetail::AICallAPICallRequestDetail() :
    m_methodHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_truncatedHasBeenSet(false)
{
}

CoreInternalOutcome AICallAPICallRequestDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallRequestDetail.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallRequestDetail.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallRequestDetail.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallRequestDetail.Headers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headers = string(value["Headers"].GetString());
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallRequestDetail.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Truncated") && !value["Truncated"].IsNull())
    {
        if (!value["Truncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallRequestDetail.Truncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_truncated = value["Truncated"].GetBool();
        m_truncatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallAPICallRequestDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headers.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_truncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Truncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_truncated, allocator);
    }

}


string AICallAPICallRequestDetail::GetMethod() const
{
    return m_method;
}

void AICallAPICallRequestDetail::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool AICallAPICallRequestDetail::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string AICallAPICallRequestDetail::GetURL() const
{
    return m_uRL;
}

void AICallAPICallRequestDetail::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool AICallAPICallRequestDetail::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string AICallAPICallRequestDetail::GetParams() const
{
    return m_params;
}

void AICallAPICallRequestDetail::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool AICallAPICallRequestDetail::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string AICallAPICallRequestDetail::GetHeaders() const
{
    return m_headers;
}

void AICallAPICallRequestDetail::SetHeaders(const string& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool AICallAPICallRequestDetail::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

string AICallAPICallRequestDetail::GetBody() const
{
    return m_body;
}

void AICallAPICallRequestDetail::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool AICallAPICallRequestDetail::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

bool AICallAPICallRequestDetail::GetTruncated() const
{
    return m_truncated;
}

void AICallAPICallRequestDetail::SetTruncated(const bool& _truncated)
{
    m_truncated = _truncated;
    m_truncatedHasBeenSet = true;
}

bool AICallAPICallRequestDetail::TruncatedHasBeenSet() const
{
    return m_truncatedHasBeenSet;
}

