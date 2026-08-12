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

#include <tencentcloud/rce/v20260130/model/Browser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Browser::Browser() :
    m_userAgentHasBeenSet(false),
    m_acceptLanguageHasBeenSet(false),
    m_contentLanguageHasBeenSet(false)
{
}

CoreInternalOutcome Browser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Browser.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("AcceptLanguage") && !value["AcceptLanguage"].IsNull())
    {
        if (!value["AcceptLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Browser.AcceptLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acceptLanguage = string(value["AcceptLanguage"].GetString());
        m_acceptLanguageHasBeenSet = true;
    }

    if (value.HasMember("ContentLanguage") && !value["ContentLanguage"].IsNull())
    {
        if (!value["ContentLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Browser.ContentLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentLanguage = string(value["ContentLanguage"].GetString());
        m_contentLanguageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Browser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_acceptLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acceptLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_contentLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentLanguage.c_str(), allocator).Move(), allocator);
    }

}


string Browser::GetUserAgent() const
{
    return m_userAgent;
}

void Browser::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool Browser::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string Browser::GetAcceptLanguage() const
{
    return m_acceptLanguage;
}

void Browser::SetAcceptLanguage(const string& _acceptLanguage)
{
    m_acceptLanguage = _acceptLanguage;
    m_acceptLanguageHasBeenSet = true;
}

bool Browser::AcceptLanguageHasBeenSet() const
{
    return m_acceptLanguageHasBeenSet;
}

string Browser::GetContentLanguage() const
{
    return m_contentLanguage;
}

void Browser::SetContentLanguage(const string& _contentLanguage)
{
    m_contentLanguage = _contentLanguage;
    m_contentLanguageHasBeenSet = true;
}

bool Browser::ContentLanguageHasBeenSet() const
{
    return m_contentLanguageHasBeenSet;
}

