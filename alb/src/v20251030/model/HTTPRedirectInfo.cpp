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

#include <tencentcloud/alb/v20251030/model/HTTPRedirectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

HTTPRedirectInfo::HTTPRedirectInfo() :
    m_httpCodeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

CoreInternalOutcome HTTPRedirectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpCode") && !value["HttpCode"].IsNull())
    {
        if (!value["HttpCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPRedirectInfo.HttpCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_httpCode = value["HttpCode"].GetInt64();
        m_httpCodeHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPRedirectInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPRedirectInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPRedirectInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPRedirectInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPRedirectInfo.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPRedirectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpCode, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

}


int64_t HTTPRedirectInfo::GetHttpCode() const
{
    return m_httpCode;
}

void HTTPRedirectInfo::SetHttpCode(const int64_t& _httpCode)
{
    m_httpCode = _httpCode;
    m_httpCodeHasBeenSet = true;
}

bool HTTPRedirectInfo::HttpCodeHasBeenSet() const
{
    return m_httpCodeHasBeenSet;
}

string HTTPRedirectInfo::GetHost() const
{
    return m_host;
}

void HTTPRedirectInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool HTTPRedirectInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string HTTPRedirectInfo::GetPath() const
{
    return m_path;
}

void HTTPRedirectInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HTTPRedirectInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string HTTPRedirectInfo::GetPort() const
{
    return m_port;
}

void HTTPRedirectInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool HTTPRedirectInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string HTTPRedirectInfo::GetProtocol() const
{
    return m_protocol;
}

void HTTPRedirectInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool HTTPRedirectInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string HTTPRedirectInfo::GetQuery() const
{
    return m_query;
}

void HTTPRedirectInfo::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool HTTPRedirectInfo::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

