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

#include <tencentcloud/es/v20180416/model/IpTraceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

IpTraceConfig::IpTraceConfig() :
    m_enableRequestHasBeenSet(false),
    m_enableResponseHasBeenSet(false),
    m_enableRequestBodyHasBeenSet(false),
    m_enableResponseBodyHasBeenSet(false),
    m_remoteIpIncludeHasBeenSet(false),
    m_remoteIpExcludeHasBeenSet(false),
    m_uriIncludeHasBeenSet(false),
    m_uriExcludeHasBeenSet(false)
{
}

CoreInternalOutcome IpTraceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableRequest") && !value["EnableRequest"].IsNull())
    {
        if (!value["EnableRequest"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceConfig.EnableRequest` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRequest = value["EnableRequest"].GetBool();
        m_enableRequestHasBeenSet = true;
    }

    if (value.HasMember("EnableResponse") && !value["EnableResponse"].IsNull())
    {
        if (!value["EnableResponse"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceConfig.EnableResponse` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableResponse = value["EnableResponse"].GetBool();
        m_enableResponseHasBeenSet = true;
    }

    if (value.HasMember("EnableRequestBody") && !value["EnableRequestBody"].IsNull())
    {
        if (!value["EnableRequestBody"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceConfig.EnableRequestBody` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRequestBody = value["EnableRequestBody"].GetBool();
        m_enableRequestBodyHasBeenSet = true;
    }

    if (value.HasMember("EnableResponseBody") && !value["EnableResponseBody"].IsNull())
    {
        if (!value["EnableResponseBody"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceConfig.EnableResponseBody` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableResponseBody = value["EnableResponseBody"].GetBool();
        m_enableResponseBodyHasBeenSet = true;
    }

    if (value.HasMember("RemoteIpInclude") && !value["RemoteIpInclude"].IsNull())
    {
        if (!value["RemoteIpInclude"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpTraceConfig.RemoteIpInclude` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoteIpInclude"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_remoteIpInclude.push_back((*itr).GetString());
        }
        m_remoteIpIncludeHasBeenSet = true;
    }

    if (value.HasMember("RemoteIpExclude") && !value["RemoteIpExclude"].IsNull())
    {
        if (!value["RemoteIpExclude"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpTraceConfig.RemoteIpExclude` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoteIpExclude"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_remoteIpExclude.push_back((*itr).GetString());
        }
        m_remoteIpExcludeHasBeenSet = true;
    }

    if (value.HasMember("UriInclude") && !value["UriInclude"].IsNull())
    {
        if (!value["UriInclude"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpTraceConfig.UriInclude` is not array type"));

        const rapidjson::Value &tmpValue = value["UriInclude"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uriInclude.push_back((*itr).GetString());
        }
        m_uriIncludeHasBeenSet = true;
    }

    if (value.HasMember("UriExclude") && !value["UriExclude"].IsNull())
    {
        if (!value["UriExclude"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpTraceConfig.UriExclude` is not array type"));

        const rapidjson::Value &tmpValue = value["UriExclude"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uriExclude.push_back((*itr).GetString());
        }
        m_uriExcludeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpTraceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRequest, allocator);
    }

    if (m_enableResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableResponse, allocator);
    }

    if (m_enableRequestBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRequestBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRequestBody, allocator);
    }

    if (m_enableResponseBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableResponseBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableResponseBody, allocator);
    }

    if (m_remoteIpIncludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteIpInclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteIpInclude.begin(); itr != m_remoteIpInclude.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remoteIpExcludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteIpExclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteIpExclude.begin(); itr != m_remoteIpExclude.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uriIncludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UriInclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uriInclude.begin(); itr != m_uriInclude.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uriExcludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UriExclude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uriExclude.begin(); itr != m_uriExclude.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool IpTraceConfig::GetEnableRequest() const
{
    return m_enableRequest;
}

void IpTraceConfig::SetEnableRequest(const bool& _enableRequest)
{
    m_enableRequest = _enableRequest;
    m_enableRequestHasBeenSet = true;
}

bool IpTraceConfig::EnableRequestHasBeenSet() const
{
    return m_enableRequestHasBeenSet;
}

bool IpTraceConfig::GetEnableResponse() const
{
    return m_enableResponse;
}

void IpTraceConfig::SetEnableResponse(const bool& _enableResponse)
{
    m_enableResponse = _enableResponse;
    m_enableResponseHasBeenSet = true;
}

bool IpTraceConfig::EnableResponseHasBeenSet() const
{
    return m_enableResponseHasBeenSet;
}

bool IpTraceConfig::GetEnableRequestBody() const
{
    return m_enableRequestBody;
}

void IpTraceConfig::SetEnableRequestBody(const bool& _enableRequestBody)
{
    m_enableRequestBody = _enableRequestBody;
    m_enableRequestBodyHasBeenSet = true;
}

bool IpTraceConfig::EnableRequestBodyHasBeenSet() const
{
    return m_enableRequestBodyHasBeenSet;
}

bool IpTraceConfig::GetEnableResponseBody() const
{
    return m_enableResponseBody;
}

void IpTraceConfig::SetEnableResponseBody(const bool& _enableResponseBody)
{
    m_enableResponseBody = _enableResponseBody;
    m_enableResponseBodyHasBeenSet = true;
}

bool IpTraceConfig::EnableResponseBodyHasBeenSet() const
{
    return m_enableResponseBodyHasBeenSet;
}

vector<string> IpTraceConfig::GetRemoteIpInclude() const
{
    return m_remoteIpInclude;
}

void IpTraceConfig::SetRemoteIpInclude(const vector<string>& _remoteIpInclude)
{
    m_remoteIpInclude = _remoteIpInclude;
    m_remoteIpIncludeHasBeenSet = true;
}

bool IpTraceConfig::RemoteIpIncludeHasBeenSet() const
{
    return m_remoteIpIncludeHasBeenSet;
}

vector<string> IpTraceConfig::GetRemoteIpExclude() const
{
    return m_remoteIpExclude;
}

void IpTraceConfig::SetRemoteIpExclude(const vector<string>& _remoteIpExclude)
{
    m_remoteIpExclude = _remoteIpExclude;
    m_remoteIpExcludeHasBeenSet = true;
}

bool IpTraceConfig::RemoteIpExcludeHasBeenSet() const
{
    return m_remoteIpExcludeHasBeenSet;
}

vector<string> IpTraceConfig::GetUriInclude() const
{
    return m_uriInclude;
}

void IpTraceConfig::SetUriInclude(const vector<string>& _uriInclude)
{
    m_uriInclude = _uriInclude;
    m_uriIncludeHasBeenSet = true;
}

bool IpTraceConfig::UriIncludeHasBeenSet() const
{
    return m_uriIncludeHasBeenSet;
}

vector<string> IpTraceConfig::GetUriExclude() const
{
    return m_uriExclude;
}

void IpTraceConfig::SetUriExclude(const vector<string>& _uriExclude)
{
    m_uriExclude = _uriExclude;
    m_uriExcludeHasBeenSet = true;
}

bool IpTraceConfig::UriExcludeHasBeenSet() const
{
    return m_uriExcludeHasBeenSet;
}

