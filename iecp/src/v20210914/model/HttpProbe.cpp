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

#include <tencentcloud/iecp/v20210914/model/HttpProbe.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

HttpProbe::HttpProbe() :
    m_pathHasBeenSet(false),
    m_portHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

CoreInternalOutcome HttpProbe::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpProbe.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpProbe.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpProbe.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpProbe.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpProbe.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HttpHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpProbe::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string HttpProbe::GetPath() const
{
    return m_path;
}

void HttpProbe::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HttpProbe::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t HttpProbe::GetPort() const
{
    return m_port;
}

void HttpProbe::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool HttpProbe::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string HttpProbe::GetHost() const
{
    return m_host;
}

void HttpProbe::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool HttpProbe::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string HttpProbe::GetScheme() const
{
    return m_scheme;
}

void HttpProbe::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool HttpProbe::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

vector<HttpHeader> HttpProbe::GetHeaders() const
{
    return m_headers;
}

void HttpProbe::SetHeaders(const vector<HttpHeader>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool HttpProbe::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

