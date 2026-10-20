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

#include <tencentcloud/waf/v20180125/model/FieldWriteConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

FieldWriteConfig::FieldWriteConfig() :
    m_enableHeadersHasBeenSet(false),
    m_enableBodyHasBeenSet(false),
    m_enableBotHasBeenSet(false),
    m_enableResponseHasBeenSet(false),
    m_enableResponseHeadersHasBeenSet(false),
    m_enableResponseLengthHasBeenSet(false),
    m_enableResponseStatusLineHasBeenSet(false)
{
}

CoreInternalOutcome FieldWriteConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableHeaders") && !value["EnableHeaders"].IsNull())
    {
        if (!value["EnableHeaders"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableHeaders` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableHeaders = value["EnableHeaders"].GetInt64();
        m_enableHeadersHasBeenSet = true;
    }

    if (value.HasMember("EnableBody") && !value["EnableBody"].IsNull())
    {
        if (!value["EnableBody"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableBody` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableBody = value["EnableBody"].GetInt64();
        m_enableBodyHasBeenSet = true;
    }

    if (value.HasMember("EnableBot") && !value["EnableBot"].IsNull())
    {
        if (!value["EnableBot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableBot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableBot = value["EnableBot"].GetInt64();
        m_enableBotHasBeenSet = true;
    }

    if (value.HasMember("EnableResponse") && !value["EnableResponse"].IsNull())
    {
        if (!value["EnableResponse"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableResponse` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableResponse = value["EnableResponse"].GetInt64();
        m_enableResponseHasBeenSet = true;
    }

    if (value.HasMember("EnableResponseHeaders") && !value["EnableResponseHeaders"].IsNull())
    {
        if (!value["EnableResponseHeaders"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableResponseHeaders` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableResponseHeaders = value["EnableResponseHeaders"].GetInt64();
        m_enableResponseHeadersHasBeenSet = true;
    }

    if (value.HasMember("EnableResponseLength") && !value["EnableResponseLength"].IsNull())
    {
        if (!value["EnableResponseLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableResponseLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableResponseLength = value["EnableResponseLength"].GetInt64();
        m_enableResponseLengthHasBeenSet = true;
    }

    if (value.HasMember("EnableResponseStatusLine") && !value["EnableResponseStatusLine"].IsNull())
    {
        if (!value["EnableResponseStatusLine"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldWriteConfig.EnableResponseStatusLine` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableResponseStatusLine = value["EnableResponseStatusLine"].GetInt64();
        m_enableResponseStatusLineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldWriteConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHeaders, allocator);
    }

    if (m_enableBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBody, allocator);
    }

    if (m_enableBotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBot, allocator);
    }

    if (m_enableResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableResponse, allocator);
    }

    if (m_enableResponseHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableResponseHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableResponseHeaders, allocator);
    }

    if (m_enableResponseLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableResponseLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableResponseLength, allocator);
    }

    if (m_enableResponseStatusLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableResponseStatusLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableResponseStatusLine, allocator);
    }

}


int64_t FieldWriteConfig::GetEnableHeaders() const
{
    return m_enableHeaders;
}

void FieldWriteConfig::SetEnableHeaders(const int64_t& _enableHeaders)
{
    m_enableHeaders = _enableHeaders;
    m_enableHeadersHasBeenSet = true;
}

bool FieldWriteConfig::EnableHeadersHasBeenSet() const
{
    return m_enableHeadersHasBeenSet;
}

int64_t FieldWriteConfig::GetEnableBody() const
{
    return m_enableBody;
}

void FieldWriteConfig::SetEnableBody(const int64_t& _enableBody)
{
    m_enableBody = _enableBody;
    m_enableBodyHasBeenSet = true;
}

bool FieldWriteConfig::EnableBodyHasBeenSet() const
{
    return m_enableBodyHasBeenSet;
}

int64_t FieldWriteConfig::GetEnableBot() const
{
    return m_enableBot;
}

void FieldWriteConfig::SetEnableBot(const int64_t& _enableBot)
{
    m_enableBot = _enableBot;
    m_enableBotHasBeenSet = true;
}

bool FieldWriteConfig::EnableBotHasBeenSet() const
{
    return m_enableBotHasBeenSet;
}

int64_t FieldWriteConfig::GetEnableResponse() const
{
    return m_enableResponse;
}

void FieldWriteConfig::SetEnableResponse(const int64_t& _enableResponse)
{
    m_enableResponse = _enableResponse;
    m_enableResponseHasBeenSet = true;
}

bool FieldWriteConfig::EnableResponseHasBeenSet() const
{
    return m_enableResponseHasBeenSet;
}

int64_t FieldWriteConfig::GetEnableResponseHeaders() const
{
    return m_enableResponseHeaders;
}

void FieldWriteConfig::SetEnableResponseHeaders(const int64_t& _enableResponseHeaders)
{
    m_enableResponseHeaders = _enableResponseHeaders;
    m_enableResponseHeadersHasBeenSet = true;
}

bool FieldWriteConfig::EnableResponseHeadersHasBeenSet() const
{
    return m_enableResponseHeadersHasBeenSet;
}

int64_t FieldWriteConfig::GetEnableResponseLength() const
{
    return m_enableResponseLength;
}

void FieldWriteConfig::SetEnableResponseLength(const int64_t& _enableResponseLength)
{
    m_enableResponseLength = _enableResponseLength;
    m_enableResponseLengthHasBeenSet = true;
}

bool FieldWriteConfig::EnableResponseLengthHasBeenSet() const
{
    return m_enableResponseLengthHasBeenSet;
}

int64_t FieldWriteConfig::GetEnableResponseStatusLine() const
{
    return m_enableResponseStatusLine;
}

void FieldWriteConfig::SetEnableResponseStatusLine(const int64_t& _enableResponseStatusLine)
{
    m_enableResponseStatusLine = _enableResponseStatusLine;
    m_enableResponseStatusLineHasBeenSet = true;
}

bool FieldWriteConfig::EnableResponseStatusLineHasBeenSet() const
{
    return m_enableResponseStatusLineHasBeenSet;
}

