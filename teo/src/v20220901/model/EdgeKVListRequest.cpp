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

#include <tencentcloud/teo/v20220901/model/EdgeKVListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

EdgeKVListRequest::EdgeKVListRequest() :
    m_zoneIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string EdgeKVListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EdgeKVListRequest::GetZoneId() const
{
    return m_zoneId;
}

void EdgeKVListRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool EdgeKVListRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string EdgeKVListRequest::GetNamespace() const
{
    return m_namespace;
}

void EdgeKVListRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool EdgeKVListRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string EdgeKVListRequest::GetPrefix() const
{
    return m_prefix;
}

void EdgeKVListRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool EdgeKVListRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string EdgeKVListRequest::GetCursor() const
{
    return m_cursor;
}

void EdgeKVListRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool EdgeKVListRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

int64_t EdgeKVListRequest::GetLimit() const
{
    return m_limit;
}

void EdgeKVListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool EdgeKVListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


