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

#include <tencentcloud/iotexplorer/v20190423/model/TalkWebhookAuth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkWebhookAuth::TalkWebhookAuth() :
    m_typeHasBeenSet(false),
    m_signKeyHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_bearerTokenHasBeenSet(false)
{
}

CoreInternalOutcome TalkWebhookAuth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkWebhookAuth.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SignKey") && !value["SignKey"].IsNull())
    {
        if (!value["SignKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkWebhookAuth.SignKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signKey = string(value["SignKey"].GetString());
        m_signKeyHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkWebhookAuth.Headers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headers = string(value["Headers"].GetString());
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("BearerToken") && !value["BearerToken"].IsNull())
    {
        if (!value["BearerToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkWebhookAuth.BearerToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bearerToken = string(value["BearerToken"].GetString());
        m_bearerTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkWebhookAuth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_signKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signKey.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headers.c_str(), allocator).Move(), allocator);
    }

    if (m_bearerTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BearerToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bearerToken.c_str(), allocator).Move(), allocator);
    }

}


string TalkWebhookAuth::GetType() const
{
    return m_type;
}

void TalkWebhookAuth::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TalkWebhookAuth::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TalkWebhookAuth::GetSignKey() const
{
    return m_signKey;
}

void TalkWebhookAuth::SetSignKey(const string& _signKey)
{
    m_signKey = _signKey;
    m_signKeyHasBeenSet = true;
}

bool TalkWebhookAuth::SignKeyHasBeenSet() const
{
    return m_signKeyHasBeenSet;
}

string TalkWebhookAuth::GetHeaders() const
{
    return m_headers;
}

void TalkWebhookAuth::SetHeaders(const string& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool TalkWebhookAuth::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

string TalkWebhookAuth::GetBearerToken() const
{
    return m_bearerToken;
}

void TalkWebhookAuth::SetBearerToken(const string& _bearerToken)
{
    m_bearerToken = _bearerToken;
    m_bearerTokenHasBeenSet = true;
}

bool TalkWebhookAuth::BearerTokenHasBeenSet() const
{
    return m_bearerTokenHasBeenSet;
}

