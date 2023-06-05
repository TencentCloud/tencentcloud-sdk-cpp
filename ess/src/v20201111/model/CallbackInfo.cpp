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

#include <tencentcloud/ess/v20201111/model/CallbackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CallbackInfo::CallbackInfo() :
    m_callbackUrlHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_callbackKeyHasBeenSet(false),
    m_callbackTokenHasBeenSet(false)
{
}

CoreInternalOutcome CallbackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackInfo.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("CallbackKey") && !value["CallbackKey"].IsNull())
    {
        if (!value["CallbackKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackInfo.CallbackKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackKey = string(value["CallbackKey"].GetString());
        m_callbackKeyHasBeenSet = true;
    }

    if (value.HasMember("CallbackToken") && !value["CallbackToken"].IsNull())
    {
        if (!value["CallbackToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackInfo.CallbackToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackToken = string(value["CallbackToken"].GetString());
        m_callbackTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallbackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackKey.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackToken.c_str(), allocator).Move(), allocator);
    }

}


string CallbackInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CallbackInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CallbackInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string CallbackInfo::GetToken() const
{
    return m_token;
}

void CallbackInfo::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool CallbackInfo::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string CallbackInfo::GetCallbackKey() const
{
    return m_callbackKey;
}

void CallbackInfo::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool CallbackInfo::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}

string CallbackInfo::GetCallbackToken() const
{
    return m_callbackToken;
}

void CallbackInfo::SetCallbackToken(const string& _callbackToken)
{
    m_callbackToken = _callbackToken;
    m_callbackTokenHasBeenSet = true;
}

bool CallbackInfo::CallbackTokenHasBeenSet() const
{
    return m_callbackTokenHasBeenSet;
}

