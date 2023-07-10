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

#include <tencentcloud/tse/v20201207/model/RateLimitResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

RateLimitResponse::RateLimitResponse() :
    m_bodyHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_httpStatusHasBeenSet(false)
{
}

CoreInternalOutcome RateLimitResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitResponse.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RateLimitResponse.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("HttpStatus") && !value["HttpStatus"].IsNull())
    {
        if (!value["HttpStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitResponse.HttpStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_httpStatus = value["HttpStatus"].GetInt64();
        m_httpStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimitResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_httpStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpStatus, allocator);
    }

}


string RateLimitResponse::GetBody() const
{
    return m_body;
}

void RateLimitResponse::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool RateLimitResponse::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

vector<KVMapping> RateLimitResponse::GetHeaders() const
{
    return m_headers;
}

void RateLimitResponse::SetHeaders(const vector<KVMapping>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool RateLimitResponse::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

int64_t RateLimitResponse::GetHttpStatus() const
{
    return m_httpStatus;
}

void RateLimitResponse::SetHttpStatus(const int64_t& _httpStatus)
{
    m_httpStatus = _httpStatus;
    m_httpStatusHasBeenSet = true;
}

bool RateLimitResponse::HttpStatusHasBeenSet() const
{
    return m_httpStatusHasBeenSet;
}

