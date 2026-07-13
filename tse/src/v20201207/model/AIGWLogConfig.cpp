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

#include <tencentcloud/tse/v20201207/model/AIGWLogConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWLogConfig::AIGWLogConfig() :
    m_enableRequestLogPayloadsHasBeenSet(false),
    m_enableResponseLogPayloadsHasBeenSet(false),
    m_requestLogPayloadMaxSizeHasBeenSet(false),
    m_responseLogPayloadMaxSizeHasBeenSet(false),
    m_requestLogPayloadModeHasBeenSet(false),
    m_responseLogPayloadModeHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLogConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableRequestLogPayloads") && !value["EnableRequestLogPayloads"].IsNull())
    {
        if (!value["EnableRequestLogPayloads"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLogConfig.EnableRequestLogPayloads` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRequestLogPayloads = value["EnableRequestLogPayloads"].GetBool();
        m_enableRequestLogPayloadsHasBeenSet = true;
    }

    if (value.HasMember("EnableResponseLogPayloads") && !value["EnableResponseLogPayloads"].IsNull())
    {
        if (!value["EnableResponseLogPayloads"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLogConfig.EnableResponseLogPayloads` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableResponseLogPayloads = value["EnableResponseLogPayloads"].GetBool();
        m_enableResponseLogPayloadsHasBeenSet = true;
    }

    if (value.HasMember("RequestLogPayloadMaxSize") && !value["RequestLogPayloadMaxSize"].IsNull())
    {
        if (!value["RequestLogPayloadMaxSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLogConfig.RequestLogPayloadMaxSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestLogPayloadMaxSize = value["RequestLogPayloadMaxSize"].GetInt64();
        m_requestLogPayloadMaxSizeHasBeenSet = true;
    }

    if (value.HasMember("ResponseLogPayloadMaxSize") && !value["ResponseLogPayloadMaxSize"].IsNull())
    {
        if (!value["ResponseLogPayloadMaxSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLogConfig.ResponseLogPayloadMaxSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_responseLogPayloadMaxSize = value["ResponseLogPayloadMaxSize"].GetInt64();
        m_responseLogPayloadMaxSizeHasBeenSet = true;
    }

    if (value.HasMember("RequestLogPayloadMode") && !value["RequestLogPayloadMode"].IsNull())
    {
        if (!value["RequestLogPayloadMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLogConfig.RequestLogPayloadMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestLogPayloadMode = string(value["RequestLogPayloadMode"].GetString());
        m_requestLogPayloadModeHasBeenSet = true;
    }

    if (value.HasMember("ResponseLogPayloadMode") && !value["ResponseLogPayloadMode"].IsNull())
    {
        if (!value["ResponseLogPayloadMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLogConfig.ResponseLogPayloadMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseLogPayloadMode = string(value["ResponseLogPayloadMode"].GetString());
        m_responseLogPayloadModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLogConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableRequestLogPayloadsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRequestLogPayloads";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRequestLogPayloads, allocator);
    }

    if (m_enableResponseLogPayloadsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableResponseLogPayloads";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableResponseLogPayloads, allocator);
    }

    if (m_requestLogPayloadMaxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestLogPayloadMaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestLogPayloadMaxSize, allocator);
    }

    if (m_responseLogPayloadMaxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseLogPayloadMaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseLogPayloadMaxSize, allocator);
    }

    if (m_requestLogPayloadModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestLogPayloadMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestLogPayloadMode.c_str(), allocator).Move(), allocator);
    }

    if (m_responseLogPayloadModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseLogPayloadMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseLogPayloadMode.c_str(), allocator).Move(), allocator);
    }

}


bool AIGWLogConfig::GetEnableRequestLogPayloads() const
{
    return m_enableRequestLogPayloads;
}

void AIGWLogConfig::SetEnableRequestLogPayloads(const bool& _enableRequestLogPayloads)
{
    m_enableRequestLogPayloads = _enableRequestLogPayloads;
    m_enableRequestLogPayloadsHasBeenSet = true;
}

bool AIGWLogConfig::EnableRequestLogPayloadsHasBeenSet() const
{
    return m_enableRequestLogPayloadsHasBeenSet;
}

bool AIGWLogConfig::GetEnableResponseLogPayloads() const
{
    return m_enableResponseLogPayloads;
}

void AIGWLogConfig::SetEnableResponseLogPayloads(const bool& _enableResponseLogPayloads)
{
    m_enableResponseLogPayloads = _enableResponseLogPayloads;
    m_enableResponseLogPayloadsHasBeenSet = true;
}

bool AIGWLogConfig::EnableResponseLogPayloadsHasBeenSet() const
{
    return m_enableResponseLogPayloadsHasBeenSet;
}

int64_t AIGWLogConfig::GetRequestLogPayloadMaxSize() const
{
    return m_requestLogPayloadMaxSize;
}

void AIGWLogConfig::SetRequestLogPayloadMaxSize(const int64_t& _requestLogPayloadMaxSize)
{
    m_requestLogPayloadMaxSize = _requestLogPayloadMaxSize;
    m_requestLogPayloadMaxSizeHasBeenSet = true;
}

bool AIGWLogConfig::RequestLogPayloadMaxSizeHasBeenSet() const
{
    return m_requestLogPayloadMaxSizeHasBeenSet;
}

int64_t AIGWLogConfig::GetResponseLogPayloadMaxSize() const
{
    return m_responseLogPayloadMaxSize;
}

void AIGWLogConfig::SetResponseLogPayloadMaxSize(const int64_t& _responseLogPayloadMaxSize)
{
    m_responseLogPayloadMaxSize = _responseLogPayloadMaxSize;
    m_responseLogPayloadMaxSizeHasBeenSet = true;
}

bool AIGWLogConfig::ResponseLogPayloadMaxSizeHasBeenSet() const
{
    return m_responseLogPayloadMaxSizeHasBeenSet;
}

string AIGWLogConfig::GetRequestLogPayloadMode() const
{
    return m_requestLogPayloadMode;
}

void AIGWLogConfig::SetRequestLogPayloadMode(const string& _requestLogPayloadMode)
{
    m_requestLogPayloadMode = _requestLogPayloadMode;
    m_requestLogPayloadModeHasBeenSet = true;
}

bool AIGWLogConfig::RequestLogPayloadModeHasBeenSet() const
{
    return m_requestLogPayloadModeHasBeenSet;
}

string AIGWLogConfig::GetResponseLogPayloadMode() const
{
    return m_responseLogPayloadMode;
}

void AIGWLogConfig::SetResponseLogPayloadMode(const string& _responseLogPayloadMode)
{
    m_responseLogPayloadMode = _responseLogPayloadMode;
    m_responseLogPayloadModeHasBeenSet = true;
}

bool AIGWLogConfig::ResponseLogPayloadModeHasBeenSet() const
{
    return m_responseLogPayloadModeHasBeenSet;
}

