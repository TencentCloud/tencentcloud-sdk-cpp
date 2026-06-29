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

#include <tencentcloud/adp/v20260520/model/ApiKeyAuthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ApiKeyAuthConfig::ApiKeyAuthConfig() :
    m_keyLocationHasBeenSet(false),
    m_keyParamNameHasBeenSet(false),
    m_keyParamValueHasBeenSet(false)
{
}

CoreInternalOutcome ApiKeyAuthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyLocation") && !value["KeyLocation"].IsNull())
    {
        if (!value["KeyLocation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthConfig.KeyLocation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyLocation = value["KeyLocation"].GetInt64();
        m_keyLocationHasBeenSet = true;
    }

    if (value.HasMember("KeyParamName") && !value["KeyParamName"].IsNull())
    {
        if (!value["KeyParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthConfig.KeyParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyParamName = string(value["KeyParamName"].GetString());
        m_keyParamNameHasBeenSet = true;
    }

    if (value.HasMember("KeyParamValue") && !value["KeyParamValue"].IsNull())
    {
        if (!value["KeyParamValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthConfig.KeyParamValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyParamValue = string(value["KeyParamValue"].GetString());
        m_keyParamValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiKeyAuthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyLocation, allocator);
    }

    if (m_keyParamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyParamName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyParamValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyParamValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyParamValue.c_str(), allocator).Move(), allocator);
    }

}


int64_t ApiKeyAuthConfig::GetKeyLocation() const
{
    return m_keyLocation;
}

void ApiKeyAuthConfig::SetKeyLocation(const int64_t& _keyLocation)
{
    m_keyLocation = _keyLocation;
    m_keyLocationHasBeenSet = true;
}

bool ApiKeyAuthConfig::KeyLocationHasBeenSet() const
{
    return m_keyLocationHasBeenSet;
}

string ApiKeyAuthConfig::GetKeyParamName() const
{
    return m_keyParamName;
}

void ApiKeyAuthConfig::SetKeyParamName(const string& _keyParamName)
{
    m_keyParamName = _keyParamName;
    m_keyParamNameHasBeenSet = true;
}

bool ApiKeyAuthConfig::KeyParamNameHasBeenSet() const
{
    return m_keyParamNameHasBeenSet;
}

string ApiKeyAuthConfig::GetKeyParamValue() const
{
    return m_keyParamValue;
}

void ApiKeyAuthConfig::SetKeyParamValue(const string& _keyParamValue)
{
    m_keyParamValue = _keyParamValue;
    m_keyParamValueHasBeenSet = true;
}

bool ApiKeyAuthConfig::KeyParamValueHasBeenSet() const
{
    return m_keyParamValueHasBeenSet;
}

