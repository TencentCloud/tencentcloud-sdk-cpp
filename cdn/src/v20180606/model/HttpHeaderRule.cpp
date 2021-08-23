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

#include <tencentcloud/cdn/v20180606/model/HttpHeaderRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

HttpHeaderRule::HttpHeaderRule() :
    m_headerModeHasBeenSet(false),
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
}

CoreInternalOutcome HttpHeaderRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeaderMode") && !value["HeaderMode"].IsNull())
    {
        if (!value["HeaderMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHeaderRule.HeaderMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerMode = string(value["HeaderMode"].GetString());
        m_headerModeHasBeenSet = true;
    }

    if (value.HasMember("HeaderName") && !value["HeaderName"].IsNull())
    {
        if (!value["HeaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHeaderRule.HeaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerName = string(value["HeaderName"].GetString());
        m_headerNameHasBeenSet = true;
    }

    if (value.HasMember("HeaderValue") && !value["HeaderValue"].IsNull())
    {
        if (!value["HeaderValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHeaderRule.HeaderValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerValue = string(value["HeaderValue"].GetString());
        m_headerValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpHeaderRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headerMode.c_str(), allocator).Move(), allocator);
    }

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


string HttpHeaderRule::GetHeaderMode() const
{
    return m_headerMode;
}

void HttpHeaderRule::SetHeaderMode(const string& _headerMode)
{
    m_headerMode = _headerMode;
    m_headerModeHasBeenSet = true;
}

bool HttpHeaderRule::HeaderModeHasBeenSet() const
{
    return m_headerModeHasBeenSet;
}

string HttpHeaderRule::GetHeaderName() const
{
    return m_headerName;
}

void HttpHeaderRule::SetHeaderName(const string& _headerName)
{
    m_headerName = _headerName;
    m_headerNameHasBeenSet = true;
}

bool HttpHeaderRule::HeaderNameHasBeenSet() const
{
    return m_headerNameHasBeenSet;
}

string HttpHeaderRule::GetHeaderValue() const
{
    return m_headerValue;
}

void HttpHeaderRule::SetHeaderValue(const string& _headerValue)
{
    m_headerValue = _headerValue;
    m_headerValueHasBeenSet = true;
}

bool HttpHeaderRule::HeaderValueHasBeenSet() const
{
    return m_headerValueHasBeenSet;
}

