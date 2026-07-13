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

#include <tencentcloud/tse/v20201207/model/AIGWJWTCredentialConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWJWTCredentialConfig::AIGWJWTCredentialConfig() :
    m_keyHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_rSAPublicKeyHasBeenSet(false)
{
}

CoreInternalOutcome AIGWJWTCredentialConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWJWTCredentialConfig.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Algorithm") && !value["Algorithm"].IsNull())
    {
        if (!value["Algorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWJWTCredentialConfig.Algorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithm = string(value["Algorithm"].GetString());
        m_algorithmHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWJWTCredentialConfig.Secret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secret = string(value["Secret"].GetString());
        m_secretHasBeenSet = true;
    }

    if (value.HasMember("RSAPublicKey") && !value["RSAPublicKey"].IsNull())
    {
        if (!value["RSAPublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWJWTCredentialConfig.RSAPublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rSAPublicKey = string(value["RSAPublicKey"].GetString());
        m_rSAPublicKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWJWTCredentialConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secret.c_str(), allocator).Move(), allocator);
    }

    if (m_rSAPublicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RSAPublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rSAPublicKey.c_str(), allocator).Move(), allocator);
    }

}


string AIGWJWTCredentialConfig::GetKey() const
{
    return m_key;
}

void AIGWJWTCredentialConfig::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool AIGWJWTCredentialConfig::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string AIGWJWTCredentialConfig::GetAlgorithm() const
{
    return m_algorithm;
}

void AIGWJWTCredentialConfig::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool AIGWJWTCredentialConfig::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string AIGWJWTCredentialConfig::GetSecret() const
{
    return m_secret;
}

void AIGWJWTCredentialConfig::SetSecret(const string& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool AIGWJWTCredentialConfig::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

string AIGWJWTCredentialConfig::GetRSAPublicKey() const
{
    return m_rSAPublicKey;
}

void AIGWJWTCredentialConfig::SetRSAPublicKey(const string& _rSAPublicKey)
{
    m_rSAPublicKey = _rSAPublicKey;
    m_rSAPublicKeyHasBeenSet = true;
}

bool AIGWJWTCredentialConfig::RSAPublicKeyHasBeenSet() const
{
    return m_rSAPublicKeyHasBeenSet;
}

