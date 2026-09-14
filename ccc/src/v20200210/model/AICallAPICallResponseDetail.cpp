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

#include <tencentcloud/ccc/v20200210/model/AICallAPICallResponseDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AICallAPICallResponseDetail::AICallAPICallResponseDetail() :
    m_statusCodeHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_truncatedHasBeenSet(false)
{
}

CoreInternalOutcome AICallAPICallResponseDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallResponseDetail.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallResponseDetail.Headers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headers = string(value["Headers"].GetString());
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallResponseDetail.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Truncated") && !value["Truncated"].IsNull())
    {
        if (!value["Truncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AICallAPICallResponseDetail.Truncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_truncated = value["Truncated"].GetBool();
        m_truncatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallAPICallResponseDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
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


int64_t AICallAPICallResponseDetail::GetStatusCode() const
{
    return m_statusCode;
}

void AICallAPICallResponseDetail::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool AICallAPICallResponseDetail::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string AICallAPICallResponseDetail::GetHeaders() const
{
    return m_headers;
}

void AICallAPICallResponseDetail::SetHeaders(const string& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool AICallAPICallResponseDetail::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

string AICallAPICallResponseDetail::GetBody() const
{
    return m_body;
}

void AICallAPICallResponseDetail::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool AICallAPICallResponseDetail::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

bool AICallAPICallResponseDetail::GetTruncated() const
{
    return m_truncated;
}

void AICallAPICallResponseDetail::SetTruncated(const bool& _truncated)
{
    m_truncated = _truncated;
    m_truncatedHasBeenSet = true;
}

bool AICallAPICallResponseDetail::TruncatedHasBeenSet() const
{
    return m_truncatedHasBeenSet;
}

