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

#include <tencentcloud/ssl/v20191205/model/RootCertificates.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

RootCertificates::RootCertificates() :
    m_signHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_standardHasBeenSet(false)
{
}

CoreInternalOutcome RootCertificates::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sign") && !value["Sign"].IsNull())
    {
        if (!value["Sign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RootCertificates.Sign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sign = string(value["Sign"].GetString());
        m_signHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RootCertificates.Encrypt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = string(value["Encrypt"].GetString());
        m_encryptHasBeenSet = true;
    }

    if (value.HasMember("Standard") && !value["Standard"].IsNull())
    {
        if (!value["Standard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RootCertificates.Standard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standard = string(value["Standard"].GetString());
        m_standardHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RootCertificates::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_signHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sign.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encrypt.c_str(), allocator).Move(), allocator);
    }

    if (m_standardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Standard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standard.c_str(), allocator).Move(), allocator);
    }

}


string RootCertificates::GetSign() const
{
    return m_sign;
}

void RootCertificates::SetSign(const string& _sign)
{
    m_sign = _sign;
    m_signHasBeenSet = true;
}

bool RootCertificates::SignHasBeenSet() const
{
    return m_signHasBeenSet;
}

string RootCertificates::GetEncrypt() const
{
    return m_encrypt;
}

void RootCertificates::SetEncrypt(const string& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool RootCertificates::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

string RootCertificates::GetStandard() const
{
    return m_standard;
}

void RootCertificates::SetStandard(const string& _standard)
{
    m_standard = _standard;
    m_standardHasBeenSet = true;
}

bool RootCertificates::StandardHasBeenSet() const
{
    return m_standardHasBeenSet;
}

