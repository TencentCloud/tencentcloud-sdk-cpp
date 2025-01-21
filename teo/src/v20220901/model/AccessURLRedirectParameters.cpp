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

#include <tencentcloud/teo/v20220901/model/AccessURLRedirectParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AccessURLRedirectParameters::AccessURLRedirectParameters() :
    m_statusCodeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_uRLPathHasBeenSet(false),
    m_queryStringHasBeenSet(false)
{
}

CoreInternalOutcome AccessURLRedirectParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessURLRedirectParameters.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessURLRedirectParameters.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessURLRedirectParameters.HostName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostName.Deserialize(value["HostName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("URLPath") && !value["URLPath"].IsNull())
    {
        if (!value["URLPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessURLRedirectParameters.URLPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_uRLPath.Deserialize(value["URLPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_uRLPathHasBeenSet = true;
    }

    if (value.HasMember("QueryString") && !value["QueryString"].IsNull())
    {
        if (!value["QueryString"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessURLRedirectParameters.QueryString` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_queryString.Deserialize(value["QueryString"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_queryStringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessURLRedirectParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uRLPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_uRLPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_queryStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_queryString.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AccessURLRedirectParameters::GetStatusCode() const
{
    return m_statusCode;
}

void AccessURLRedirectParameters::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool AccessURLRedirectParameters::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string AccessURLRedirectParameters::GetProtocol() const
{
    return m_protocol;
}

void AccessURLRedirectParameters::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AccessURLRedirectParameters::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

HostName AccessURLRedirectParameters::GetHostName() const
{
    return m_hostName;
}

void AccessURLRedirectParameters::SetHostName(const HostName& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool AccessURLRedirectParameters::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

URLPath AccessURLRedirectParameters::GetURLPath() const
{
    return m_uRLPath;
}

void AccessURLRedirectParameters::SetURLPath(const URLPath& _uRLPath)
{
    m_uRLPath = _uRLPath;
    m_uRLPathHasBeenSet = true;
}

bool AccessURLRedirectParameters::URLPathHasBeenSet() const
{
    return m_uRLPathHasBeenSet;
}

AccessURLRedirectQueryString AccessURLRedirectParameters::GetQueryString() const
{
    return m_queryString;
}

void AccessURLRedirectParameters::SetQueryString(const AccessURLRedirectQueryString& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool AccessURLRedirectParameters::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

