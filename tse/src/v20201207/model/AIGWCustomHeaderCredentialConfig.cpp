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

#include <tencentcloud/tse/v20201207/model/AIGWCustomHeaderCredentialConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWCustomHeaderCredentialConfig::AIGWCustomHeaderCredentialConfig() :
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
}

CoreInternalOutcome AIGWCustomHeaderCredentialConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeaderName") && !value["HeaderName"].IsNull())
    {
        if (!value["HeaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWCustomHeaderCredentialConfig.HeaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerName = string(value["HeaderName"].GetString());
        m_headerNameHasBeenSet = true;
    }

    if (value.HasMember("HeaderValue") && !value["HeaderValue"].IsNull())
    {
        if (!value["HeaderValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWCustomHeaderCredentialConfig.HeaderValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerValue = string(value["HeaderValue"].GetString());
        m_headerValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWCustomHeaderCredentialConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headerName.c_str(), allocator).Move(), allocator);
    }

    if (m_headerValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headerValue.c_str(), allocator).Move(), allocator);
    }

}


string AIGWCustomHeaderCredentialConfig::GetHeaderName() const
{
    return m_headerName;
}

void AIGWCustomHeaderCredentialConfig::SetHeaderName(const string& _headerName)
{
    m_headerName = _headerName;
    m_headerNameHasBeenSet = true;
}

bool AIGWCustomHeaderCredentialConfig::HeaderNameHasBeenSet() const
{
    return m_headerNameHasBeenSet;
}

string AIGWCustomHeaderCredentialConfig::GetHeaderValue() const
{
    return m_headerValue;
}

void AIGWCustomHeaderCredentialConfig::SetHeaderValue(const string& _headerValue)
{
    m_headerValue = _headerValue;
    m_headerValueHasBeenSet = true;
}

bool AIGWCustomHeaderCredentialConfig::HeaderValueHasBeenSet() const
{
    return m_headerValueHasBeenSet;
}

