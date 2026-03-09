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

#include <tencentcloud/cetcd/v20220325/model/EtcdCredential.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

EtcdCredential::EtcdCredential() :
    m_cACertHasBeenSet(false),
    m_certHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

CoreInternalOutcome EtcdCredential::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CACert") && !value["CACert"].IsNull())
    {
        if (!value["CACert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdCredential.CACert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cACert = string(value["CACert"].GetString());
        m_cACertHasBeenSet = true;
    }

    if (value.HasMember("Cert") && !value["Cert"].IsNull())
    {
        if (!value["Cert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdCredential.Cert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cert = string(value["Cert"].GetString());
        m_certHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdCredential.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EtcdCredential::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cACertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CACert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cACert.c_str(), allocator).Move(), allocator);
    }

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cert.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

}


string EtcdCredential::GetCACert() const
{
    return m_cACert;
}

void EtcdCredential::SetCACert(const string& _cACert)
{
    m_cACert = _cACert;
    m_cACertHasBeenSet = true;
}

bool EtcdCredential::CACertHasBeenSet() const
{
    return m_cACertHasBeenSet;
}

string EtcdCredential::GetCert() const
{
    return m_cert;
}

void EtcdCredential::SetCert(const string& _cert)
{
    m_cert = _cert;
    m_certHasBeenSet = true;
}

bool EtcdCredential::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

string EtcdCredential::GetKey() const
{
    return m_key;
}

void EtcdCredential::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool EtcdCredential::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

