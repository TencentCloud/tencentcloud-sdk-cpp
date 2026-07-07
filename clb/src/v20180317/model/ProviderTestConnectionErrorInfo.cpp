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

#include <tencentcloud/clb/v20180317/model/ProviderTestConnectionErrorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ProviderTestConnectionErrorInfo::ProviderTestConnectionErrorInfo() :
    m_httpCodeHasBeenSet(false),
    m_errorStatusHasBeenSet(false),
    m_originalMessageHasBeenSet(false)
{
}

CoreInternalOutcome ProviderTestConnectionErrorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpCode") && !value["HttpCode"].IsNull())
    {
        if (!value["HttpCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderTestConnectionErrorInfo.HttpCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpCode = value["HttpCode"].GetUint64();
        m_httpCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorStatus") && !value["ErrorStatus"].IsNull())
    {
        if (!value["ErrorStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderTestConnectionErrorInfo.ErrorStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorStatus = string(value["ErrorStatus"].GetString());
        m_errorStatusHasBeenSet = true;
    }

    if (value.HasMember("OriginalMessage") && !value["OriginalMessage"].IsNull())
    {
        if (!value["OriginalMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderTestConnectionErrorInfo.OriginalMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalMessage = string(value["OriginalMessage"].GetString());
        m_originalMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProviderTestConnectionErrorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpCode, allocator);
    }

    if (m_errorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_originalMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalMessage.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ProviderTestConnectionErrorInfo::GetHttpCode() const
{
    return m_httpCode;
}

void ProviderTestConnectionErrorInfo::SetHttpCode(const uint64_t& _httpCode)
{
    m_httpCode = _httpCode;
    m_httpCodeHasBeenSet = true;
}

bool ProviderTestConnectionErrorInfo::HttpCodeHasBeenSet() const
{
    return m_httpCodeHasBeenSet;
}

string ProviderTestConnectionErrorInfo::GetErrorStatus() const
{
    return m_errorStatus;
}

void ProviderTestConnectionErrorInfo::SetErrorStatus(const string& _errorStatus)
{
    m_errorStatus = _errorStatus;
    m_errorStatusHasBeenSet = true;
}

bool ProviderTestConnectionErrorInfo::ErrorStatusHasBeenSet() const
{
    return m_errorStatusHasBeenSet;
}

string ProviderTestConnectionErrorInfo::GetOriginalMessage() const
{
    return m_originalMessage;
}

void ProviderTestConnectionErrorInfo::SetOriginalMessage(const string& _originalMessage)
{
    m_originalMessage = _originalMessage;
    m_originalMessageHasBeenSet = true;
}

bool ProviderTestConnectionErrorInfo::OriginalMessageHasBeenSet() const
{
    return m_originalMessageHasBeenSet;
}

