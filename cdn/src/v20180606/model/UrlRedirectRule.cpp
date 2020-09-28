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

#include <tencentcloud/cdn/v20180606/model/UrlRedirectRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

UrlRedirectRule::UrlRedirectRule() :
    m_redirectStatusCodeHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_redirectUrlHasBeenSet(false)
{
}

CoreInternalOutcome UrlRedirectRule::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RedirectStatusCode") && !value["RedirectStatusCode"].IsNull())
    {
        if (!value["RedirectStatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `UrlRedirectRule.RedirectStatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redirectStatusCode = value["RedirectStatusCode"].GetInt64();
        m_redirectStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("Pattern") && !value["Pattern"].IsNull())
    {
        if (!value["Pattern"].IsString())
        {
            return CoreInternalOutcome(Error("response `UrlRedirectRule.Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(value["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }

    if (value.HasMember("RedirectUrl") && !value["RedirectUrl"].IsNull())
    {
        if (!value["RedirectUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `UrlRedirectRule.RedirectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUrl = string(value["RedirectUrl"].GetString());
        m_redirectUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UrlRedirectRule::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_redirectStatusCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RedirectStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redirectStatusCode, allocator);
    }

    if (m_patternHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t UrlRedirectRule::GetRedirectStatusCode() const
{
    return m_redirectStatusCode;
}

void UrlRedirectRule::SetRedirectStatusCode(const int64_t& _redirectStatusCode)
{
    m_redirectStatusCode = _redirectStatusCode;
    m_redirectStatusCodeHasBeenSet = true;
}

bool UrlRedirectRule::RedirectStatusCodeHasBeenSet() const
{
    return m_redirectStatusCodeHasBeenSet;
}

string UrlRedirectRule::GetPattern() const
{
    return m_pattern;
}

void UrlRedirectRule::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool UrlRedirectRule::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

string UrlRedirectRule::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void UrlRedirectRule::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool UrlRedirectRule::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}
