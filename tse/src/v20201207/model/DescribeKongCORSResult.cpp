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

#include <tencentcloud/tse/v20201207/model/DescribeKongCORSResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeKongCORSResult::DescribeKongCORSResult() :
    m_sourceTypeHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_originsHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_exposedHeadersHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_preFlightContinueHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKongCORSResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Origins") && !value["Origins"].IsNull())
    {
        if (!value["Origins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.Origins` is not array type"));

        const rapidjson::Value &tmpValue = value["Origins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_origins.push_back((*itr).GetString());
        }
        m_originsHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headers.push_back((*itr).GetString());
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("Methods") && !value["Methods"].IsNull())
    {
        if (!value["Methods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.Methods` is not array type"));

        const rapidjson::Value &tmpValue = value["Methods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_methods.push_back((*itr).GetString());
        }
        m_methodsHasBeenSet = true;
    }

    if (value.HasMember("ExposedHeaders") && !value["ExposedHeaders"].IsNull())
    {
        if (!value["ExposedHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.ExposedHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["ExposedHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_exposedHeaders.push_back((*itr).GetString());
        }
        m_exposedHeadersHasBeenSet = true;
    }

    if (value.HasMember("MaxAge") && !value["MaxAge"].IsNull())
    {
        if (!value["MaxAge"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.MaxAge` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAge = value["MaxAge"].GetInt64();
        m_maxAgeHasBeenSet = true;
    }

    if (value.HasMember("Credentials") && !value["Credentials"].IsNull())
    {
        if (!value["Credentials"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.Credentials` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_credentials = value["Credentials"].GetBool();
        m_credentialsHasBeenSet = true;
    }

    if (value.HasMember("PreFlightContinue") && !value["PreFlightContinue"].IsNull())
    {
        if (!value["PreFlightContinue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeKongCORSResult.PreFlightContinue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_preFlightContinue = value["PreFlightContinue"].GetBool();
        m_preFlightContinueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeKongCORSResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_originsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_origins.begin(); itr != m_origins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_methodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Methods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_methods.begin(); itr != m_methods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exposedHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposedHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exposedHeaders.begin(); itr != m_exposedHeaders.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAge, allocator);
    }

    if (m_credentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credentials";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_credentials, allocator);
    }

    if (m_preFlightContinueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreFlightContinue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preFlightContinue, allocator);
    }

}


string DescribeKongCORSResult::GetSourceType() const
{
    return m_sourceType;
}

void DescribeKongCORSResult::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DescribeKongCORSResult::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DescribeKongCORSResult::GetSourceId() const
{
    return m_sourceId;
}

void DescribeKongCORSResult::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool DescribeKongCORSResult::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

bool DescribeKongCORSResult::GetEnabled() const
{
    return m_enabled;
}

void DescribeKongCORSResult::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool DescribeKongCORSResult::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> DescribeKongCORSResult::GetOrigins() const
{
    return m_origins;
}

void DescribeKongCORSResult::SetOrigins(const vector<string>& _origins)
{
    m_origins = _origins;
    m_originsHasBeenSet = true;
}

bool DescribeKongCORSResult::OriginsHasBeenSet() const
{
    return m_originsHasBeenSet;
}

vector<string> DescribeKongCORSResult::GetHeaders() const
{
    return m_headers;
}

void DescribeKongCORSResult::SetHeaders(const vector<string>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool DescribeKongCORSResult::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

vector<string> DescribeKongCORSResult::GetMethods() const
{
    return m_methods;
}

void DescribeKongCORSResult::SetMethods(const vector<string>& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool DescribeKongCORSResult::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

vector<string> DescribeKongCORSResult::GetExposedHeaders() const
{
    return m_exposedHeaders;
}

void DescribeKongCORSResult::SetExposedHeaders(const vector<string>& _exposedHeaders)
{
    m_exposedHeaders = _exposedHeaders;
    m_exposedHeadersHasBeenSet = true;
}

bool DescribeKongCORSResult::ExposedHeadersHasBeenSet() const
{
    return m_exposedHeadersHasBeenSet;
}

int64_t DescribeKongCORSResult::GetMaxAge() const
{
    return m_maxAge;
}

void DescribeKongCORSResult::SetMaxAge(const int64_t& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool DescribeKongCORSResult::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

bool DescribeKongCORSResult::GetCredentials() const
{
    return m_credentials;
}

void DescribeKongCORSResult::SetCredentials(const bool& _credentials)
{
    m_credentials = _credentials;
    m_credentialsHasBeenSet = true;
}

bool DescribeKongCORSResult::CredentialsHasBeenSet() const
{
    return m_credentialsHasBeenSet;
}

bool DescribeKongCORSResult::GetPreFlightContinue() const
{
    return m_preFlightContinue;
}

void DescribeKongCORSResult::SetPreFlightContinue(const bool& _preFlightContinue)
{
    m_preFlightContinue = _preFlightContinue;
    m_preFlightContinueHasBeenSet = true;
}

bool DescribeKongCORSResult::PreFlightContinueHasBeenSet() const
{
    return m_preFlightContinueHasBeenSet;
}

