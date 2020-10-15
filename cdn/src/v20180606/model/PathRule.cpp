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

#include <tencentcloud/cdn/v20180606/model/PathRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

PathRule::PathRule() :
    m_regexHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_originHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_originAreaHasBeenSet(false),
    m_forwardUriHasBeenSet(false),
    m_requestHeadersHasBeenSet(false)
{
}

CoreInternalOutcome PathRule::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsBool())
        {
            return CoreInternalOutcome(Error("response `PathRule.Regex` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_regex = value["Regex"].GetBool();
        m_regexHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Error("response `PathRule.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Error("response `PathRule.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `PathRule.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("OriginArea") && !value["OriginArea"].IsNull())
    {
        if (!value["OriginArea"].IsString())
        {
            return CoreInternalOutcome(Error("response `PathRule.OriginArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originArea = string(value["OriginArea"].GetString());
        m_originAreaHasBeenSet = true;
    }

    if (value.HasMember("ForwardUri") && !value["ForwardUri"].IsNull())
    {
        if (!value["ForwardUri"].IsString())
        {
            return CoreInternalOutcome(Error("response `PathRule.ForwardUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardUri = string(value["ForwardUri"].GetString());
        m_forwardUriHasBeenSet = true;
    }

    if (value.HasMember("RequestHeaders") && !value["RequestHeaders"].IsNull())
    {
        if (!value["RequestHeaders"].IsArray())
            return CoreInternalOutcome(Error("response `PathRule.RequestHeaders` is not array type"));

        const Value &tmpValue = value["RequestHeaders"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HttpHeaderRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestHeaders.push_back(item);
        }
        m_requestHeadersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PathRule::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regexHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regex, allocator);
    }

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_originAreaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_originArea.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardUriHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForwardUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_forwardUri.c_str(), allocator).Move(), allocator);
    }

    if (m_requestHeadersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestHeaders.begin(); itr != m_requestHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool PathRule::GetRegex() const
{
    return m_regex;
}

void PathRule::SetRegex(const bool& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool PathRule::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

string PathRule::GetPath() const
{
    return m_path;
}

void PathRule::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool PathRule::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string PathRule::GetOrigin() const
{
    return m_origin;
}

void PathRule::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool PathRule::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string PathRule::GetServerName() const
{
    return m_serverName;
}

void PathRule::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool PathRule::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string PathRule::GetOriginArea() const
{
    return m_originArea;
}

void PathRule::SetOriginArea(const string& _originArea)
{
    m_originArea = _originArea;
    m_originAreaHasBeenSet = true;
}

bool PathRule::OriginAreaHasBeenSet() const
{
    return m_originAreaHasBeenSet;
}

string PathRule::GetForwardUri() const
{
    return m_forwardUri;
}

void PathRule::SetForwardUri(const string& _forwardUri)
{
    m_forwardUri = _forwardUri;
    m_forwardUriHasBeenSet = true;
}

bool PathRule::ForwardUriHasBeenSet() const
{
    return m_forwardUriHasBeenSet;
}

vector<HttpHeaderRule> PathRule::GetRequestHeaders() const
{
    return m_requestHeaders;
}

void PathRule::SetRequestHeaders(const vector<HttpHeaderRule>& _requestHeaders)
{
    m_requestHeaders = _requestHeaders;
    m_requestHeadersHasBeenSet = true;
}

bool PathRule::RequestHeadersHasBeenSet() const
{
    return m_requestHeadersHasBeenSet;
}

