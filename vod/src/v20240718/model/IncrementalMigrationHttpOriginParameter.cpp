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

#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

IncrementalMigrationHttpOriginParameter::IncrementalMigrationHttpOriginParameter() :
    m_httpHeaderInfoHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_queryStringFollowModeHasBeenSet(false),
    m_httpRedirectCodeHasBeenSet(false),
    m_originRedirectionFollowModeHasBeenSet(false)
{
}

CoreInternalOutcome IncrementalMigrationHttpOriginParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpHeaderInfo") && !value["HttpHeaderInfo"].IsNull())
    {
        if (!value["HttpHeaderInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginParameter.HttpHeaderInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_httpHeaderInfo.Deserialize(value["HttpHeaderInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpHeaderInfoHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginParameter.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("QueryStringFollowMode") && !value["QueryStringFollowMode"].IsNull())
    {
        if (!value["QueryStringFollowMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginParameter.QueryStringFollowMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryStringFollowMode = string(value["QueryStringFollowMode"].GetString());
        m_queryStringFollowModeHasBeenSet = true;
    }

    if (value.HasMember("HttpRedirectCode") && !value["HttpRedirectCode"].IsNull())
    {
        if (!value["HttpRedirectCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginParameter.HttpRedirectCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpRedirectCode = value["HttpRedirectCode"].GetUint64();
        m_httpRedirectCodeHasBeenSet = true;
    }

    if (value.HasMember("OriginRedirectionFollowMode") && !value["OriginRedirectionFollowMode"].IsNull())
    {
        if (!value["OriginRedirectionFollowMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginParameter.OriginRedirectionFollowMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originRedirectionFollowMode = string(value["OriginRedirectionFollowMode"].GetString());
        m_originRedirectionFollowModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementalMigrationHttpOriginParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpHeaderInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpHeaderInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpHeaderInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStringFollowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStringFollowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryStringFollowMode.c_str(), allocator).Move(), allocator);
    }

    if (m_httpRedirectCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpRedirectCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpRedirectCode, allocator);
    }

    if (m_originRedirectionFollowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginRedirectionFollowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originRedirectionFollowMode.c_str(), allocator).Move(), allocator);
    }

}


IncrementalMigrationHttpHeaderInfo IncrementalMigrationHttpOriginParameter::GetHttpHeaderInfo() const
{
    return m_httpHeaderInfo;
}

void IncrementalMigrationHttpOriginParameter::SetHttpHeaderInfo(const IncrementalMigrationHttpHeaderInfo& _httpHeaderInfo)
{
    m_httpHeaderInfo = _httpHeaderInfo;
    m_httpHeaderInfoHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginParameter::HttpHeaderInfoHasBeenSet() const
{
    return m_httpHeaderInfoHasBeenSet;
}

string IncrementalMigrationHttpOriginParameter::GetProtocol() const
{
    return m_protocol;
}

void IncrementalMigrationHttpOriginParameter::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginParameter::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string IncrementalMigrationHttpOriginParameter::GetQueryStringFollowMode() const
{
    return m_queryStringFollowMode;
}

void IncrementalMigrationHttpOriginParameter::SetQueryStringFollowMode(const string& _queryStringFollowMode)
{
    m_queryStringFollowMode = _queryStringFollowMode;
    m_queryStringFollowModeHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginParameter::QueryStringFollowModeHasBeenSet() const
{
    return m_queryStringFollowModeHasBeenSet;
}

uint64_t IncrementalMigrationHttpOriginParameter::GetHttpRedirectCode() const
{
    return m_httpRedirectCode;
}

void IncrementalMigrationHttpOriginParameter::SetHttpRedirectCode(const uint64_t& _httpRedirectCode)
{
    m_httpRedirectCode = _httpRedirectCode;
    m_httpRedirectCodeHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginParameter::HttpRedirectCodeHasBeenSet() const
{
    return m_httpRedirectCodeHasBeenSet;
}

string IncrementalMigrationHttpOriginParameter::GetOriginRedirectionFollowMode() const
{
    return m_originRedirectionFollowMode;
}

void IncrementalMigrationHttpOriginParameter::SetOriginRedirectionFollowMode(const string& _originRedirectionFollowMode)
{
    m_originRedirectionFollowMode = _originRedirectionFollowMode;
    m_originRedirectionFollowModeHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginParameter::OriginRedirectionFollowModeHasBeenSet() const
{
    return m_originRedirectionFollowModeHasBeenSet;
}

