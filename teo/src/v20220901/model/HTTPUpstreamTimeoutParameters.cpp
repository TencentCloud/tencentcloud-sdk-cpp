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

#include <tencentcloud/teo/v20220901/model/HTTPUpstreamTimeoutParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

HTTPUpstreamTimeoutParameters::HTTPUpstreamTimeoutParameters() :
    m_responseTimeoutHasBeenSet(false),
    m_tCPConnectTimeoutHasBeenSet(false),
    m_keepaliveTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome HTTPUpstreamTimeoutParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResponseTimeout") && !value["ResponseTimeout"].IsNull())
    {
        if (!value["ResponseTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPUpstreamTimeoutParameters.ResponseTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_responseTimeout = value["ResponseTimeout"].GetInt64();
        m_responseTimeoutHasBeenSet = true;
    }

    if (value.HasMember("TCPConnectTimeout") && !value["TCPConnectTimeout"].IsNull())
    {
        if (!value["TCPConnectTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPUpstreamTimeoutParameters.TCPConnectTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tCPConnectTimeout = value["TCPConnectTimeout"].GetInt64();
        m_tCPConnectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("KeepaliveTimeout") && !value["KeepaliveTimeout"].IsNull())
    {
        if (!value["KeepaliveTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPUpstreamTimeoutParameters.KeepaliveTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keepaliveTimeout = value["KeepaliveTimeout"].GetInt64();
        m_keepaliveTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPUpstreamTimeoutParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_responseTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseTimeout, allocator);
    }

    if (m_tCPConnectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCPConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tCPConnectTimeout, allocator);
    }

    if (m_keepaliveTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepaliveTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepaliveTimeout, allocator);
    }

}


int64_t HTTPUpstreamTimeoutParameters::GetResponseTimeout() const
{
    return m_responseTimeout;
}

void HTTPUpstreamTimeoutParameters::SetResponseTimeout(const int64_t& _responseTimeout)
{
    m_responseTimeout = _responseTimeout;
    m_responseTimeoutHasBeenSet = true;
}

bool HTTPUpstreamTimeoutParameters::ResponseTimeoutHasBeenSet() const
{
    return m_responseTimeoutHasBeenSet;
}

int64_t HTTPUpstreamTimeoutParameters::GetTCPConnectTimeout() const
{
    return m_tCPConnectTimeout;
}

void HTTPUpstreamTimeoutParameters::SetTCPConnectTimeout(const int64_t& _tCPConnectTimeout)
{
    m_tCPConnectTimeout = _tCPConnectTimeout;
    m_tCPConnectTimeoutHasBeenSet = true;
}

bool HTTPUpstreamTimeoutParameters::TCPConnectTimeoutHasBeenSet() const
{
    return m_tCPConnectTimeoutHasBeenSet;
}

int64_t HTTPUpstreamTimeoutParameters::GetKeepaliveTimeout() const
{
    return m_keepaliveTimeout;
}

void HTTPUpstreamTimeoutParameters::SetKeepaliveTimeout(const int64_t& _keepaliveTimeout)
{
    m_keepaliveTimeout = _keepaliveTimeout;
    m_keepaliveTimeoutHasBeenSet = true;
}

bool HTTPUpstreamTimeoutParameters::KeepaliveTimeoutHasBeenSet() const
{
    return m_keepaliveTimeoutHasBeenSet;
}

