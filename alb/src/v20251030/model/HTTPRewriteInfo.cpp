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

#include <tencentcloud/alb/v20251030/model/HTTPRewriteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

HTTPRewriteInfo::HTTPRewriteInfo() :
    m_hostHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

CoreInternalOutcome HTTPRewriteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPRewriteInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPRewriteInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPRewriteInfo.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPRewriteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

}


string HTTPRewriteInfo::GetHost() const
{
    return m_host;
}

void HTTPRewriteInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool HTTPRewriteInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string HTTPRewriteInfo::GetPath() const
{
    return m_path;
}

void HTTPRewriteInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HTTPRewriteInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string HTTPRewriteInfo::GetQuery() const
{
    return m_query;
}

void HTTPRewriteInfo::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool HTTPRewriteInfo::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

