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

#include <tencentcloud/teo/v20220901/model/UpstreamRequestParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

UpstreamRequestParameters::UpstreamRequestParameters() :
    m_queryStringHasBeenSet(false),
    m_cookieHasBeenSet(false)
{
}

CoreInternalOutcome UpstreamRequestParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueryString") && !value["QueryString"].IsNull())
    {
        if (!value["QueryString"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamRequestParameters.QueryString` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_queryString.Deserialize(value["QueryString"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_queryStringHasBeenSet = true;
    }

    if (value.HasMember("Cookie") && !value["Cookie"].IsNull())
    {
        if (!value["Cookie"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamRequestParameters.Cookie` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cookie.Deserialize(value["Cookie"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cookieHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpstreamRequestParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queryStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_queryString.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cookie.ToJsonObject(value[key.c_str()], allocator);
    }

}


UpstreamRequestQueryString UpstreamRequestParameters::GetQueryString() const
{
    return m_queryString;
}

void UpstreamRequestParameters::SetQueryString(const UpstreamRequestQueryString& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool UpstreamRequestParameters::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

UpstreamRequestCookie UpstreamRequestParameters::GetCookie() const
{
    return m_cookie;
}

void UpstreamRequestParameters::SetCookie(const UpstreamRequestCookie& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool UpstreamRequestParameters::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}

