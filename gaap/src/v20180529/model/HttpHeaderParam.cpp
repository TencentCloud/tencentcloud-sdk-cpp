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

#include <tencentcloud/gaap/v20180529/model/HttpHeaderParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

HttpHeaderParam::HttpHeaderParam() :
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
}

CoreInternalOutcome HttpHeaderParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeaderName") && !value["HeaderName"].IsNull())
    {
        if (!value["HeaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHeaderParam.HeaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerName = string(value["HeaderName"].GetString());
        m_headerNameHasBeenSet = true;
    }

    if (value.HasMember("HeaderValue") && !value["HeaderValue"].IsNull())
    {
        if (!value["HeaderValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHeaderParam.HeaderValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerValue = string(value["HeaderValue"].GetString());
        m_headerValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpHeaderParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string HttpHeaderParam::GetHeaderName() const
{
    return m_headerName;
}

void HttpHeaderParam::SetHeaderName(const string& _headerName)
{
    m_headerName = _headerName;
    m_headerNameHasBeenSet = true;
}

bool HttpHeaderParam::HeaderNameHasBeenSet() const
{
    return m_headerNameHasBeenSet;
}

string HttpHeaderParam::GetHeaderValue() const
{
    return m_headerValue;
}

void HttpHeaderParam::SetHeaderValue(const string& _headerValue)
{
    m_headerValue = _headerValue;
    m_headerValueHasBeenSet = true;
}

bool HttpHeaderParam::HeaderValueHasBeenSet() const
{
    return m_headerValueHasBeenSet;
}

