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

#include <tencentcloud/teo/v20220901/model/SecurityHeadersToOrigin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecurityHeadersToOrigin::SecurityHeadersToOrigin() :
    m_botIdentificationHeadersHasBeenSet(false),
    m_botManagementHeadersHasBeenSet(false),
    m_clientFingerprintHeadersHasBeenSet(false)
{
}

CoreInternalOutcome SecurityHeadersToOrigin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BotIdentificationHeaders") && !value["BotIdentificationHeaders"].IsNull())
    {
        if (!value["BotIdentificationHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityHeadersToOrigin.BotIdentificationHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["BotIdentificationHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_botIdentificationHeaders.push_back((*itr).GetString());
        }
        m_botIdentificationHeadersHasBeenSet = true;
    }

    if (value.HasMember("BotManagementHeaders") && !value["BotManagementHeaders"].IsNull())
    {
        if (!value["BotManagementHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityHeadersToOrigin.BotManagementHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["BotManagementHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_botManagementHeaders.push_back((*itr).GetString());
        }
        m_botManagementHeadersHasBeenSet = true;
    }

    if (value.HasMember("ClientFingerprintHeaders") && !value["ClientFingerprintHeaders"].IsNull())
    {
        if (!value["ClientFingerprintHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityHeadersToOrigin.ClientFingerprintHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["ClientFingerprintHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clientFingerprintHeaders.push_back((*itr).GetString());
        }
        m_clientFingerprintHeadersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityHeadersToOrigin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_botIdentificationHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdentificationHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_botIdentificationHeaders.begin(); itr != m_botIdentificationHeaders.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_botManagementHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotManagementHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_botManagementHeaders.begin(); itr != m_botManagementHeaders.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clientFingerprintHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientFingerprintHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientFingerprintHeaders.begin(); itr != m_clientFingerprintHeaders.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SecurityHeadersToOrigin::GetBotIdentificationHeaders() const
{
    return m_botIdentificationHeaders;
}

void SecurityHeadersToOrigin::SetBotIdentificationHeaders(const vector<string>& _botIdentificationHeaders)
{
    m_botIdentificationHeaders = _botIdentificationHeaders;
    m_botIdentificationHeadersHasBeenSet = true;
}

bool SecurityHeadersToOrigin::BotIdentificationHeadersHasBeenSet() const
{
    return m_botIdentificationHeadersHasBeenSet;
}

vector<string> SecurityHeadersToOrigin::GetBotManagementHeaders() const
{
    return m_botManagementHeaders;
}

void SecurityHeadersToOrigin::SetBotManagementHeaders(const vector<string>& _botManagementHeaders)
{
    m_botManagementHeaders = _botManagementHeaders;
    m_botManagementHeadersHasBeenSet = true;
}

bool SecurityHeadersToOrigin::BotManagementHeadersHasBeenSet() const
{
    return m_botManagementHeadersHasBeenSet;
}

vector<string> SecurityHeadersToOrigin::GetClientFingerprintHeaders() const
{
    return m_clientFingerprintHeaders;
}

void SecurityHeadersToOrigin::SetClientFingerprintHeaders(const vector<string>& _clientFingerprintHeaders)
{
    m_clientFingerprintHeaders = _clientFingerprintHeaders;
    m_clientFingerprintHeadersHasBeenSet = true;
}

bool SecurityHeadersToOrigin::ClientFingerprintHeadersHasBeenSet() const
{
    return m_clientFingerprintHeadersHasBeenSet;
}

