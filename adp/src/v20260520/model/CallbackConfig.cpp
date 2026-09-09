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

#include <tencentcloud/adp/v20260520/model/CallbackConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CallbackConfig::CallbackConfig() :
    m_callbackAesKeyHasBeenSet(false),
    m_callbackTokenHasBeenSet(false),
    m_callbackUrlHasBeenSet(false)
{
}

CoreInternalOutcome CallbackConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallbackAesKey") && !value["CallbackAesKey"].IsNull())
    {
        if (!value["CallbackAesKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackConfig.CallbackAesKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackAesKey = string(value["CallbackAesKey"].GetString());
        m_callbackAesKeyHasBeenSet = true;
    }

    if (value.HasMember("CallbackToken") && !value["CallbackToken"].IsNull())
    {
        if (!value["CallbackToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackConfig.CallbackToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackToken = string(value["CallbackToken"].GetString());
        m_callbackTokenHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackConfig.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallbackConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callbackAesKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackAesKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackAesKey.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackToken.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

}


string CallbackConfig::GetCallbackAesKey() const
{
    return m_callbackAesKey;
}

void CallbackConfig::SetCallbackAesKey(const string& _callbackAesKey)
{
    m_callbackAesKey = _callbackAesKey;
    m_callbackAesKeyHasBeenSet = true;
}

bool CallbackConfig::CallbackAesKeyHasBeenSet() const
{
    return m_callbackAesKeyHasBeenSet;
}

string CallbackConfig::GetCallbackToken() const
{
    return m_callbackToken;
}

void CallbackConfig::SetCallbackToken(const string& _callbackToken)
{
    m_callbackToken = _callbackToken;
    m_callbackTokenHasBeenSet = true;
}

bool CallbackConfig::CallbackTokenHasBeenSet() const
{
    return m_callbackTokenHasBeenSet;
}

string CallbackConfig::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CallbackConfig::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CallbackConfig::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

