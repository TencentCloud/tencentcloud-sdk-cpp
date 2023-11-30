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

#include <tencentcloud/sqlserver/v20180328/model/SSLConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

SSLConfig::SSLConfig() :
    m_encryptionHasBeenSet(false),
    m_sSLValidityPeriodHasBeenSet(false),
    m_sSLValidityHasBeenSet(false)
{
}

CoreInternalOutcome SSLConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Encryption") && !value["Encryption"].IsNull())
    {
        if (!value["Encryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLConfig.Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(value["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
    }

    if (value.HasMember("SSLValidityPeriod") && !value["SSLValidityPeriod"].IsNull())
    {
        if (!value["SSLValidityPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLConfig.SSLValidityPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLValidityPeriod = string(value["SSLValidityPeriod"].GetString());
        m_sSLValidityPeriodHasBeenSet = true;
    }

    if (value.HasMember("SSLValidity") && !value["SSLValidity"].IsNull())
    {
        if (!value["SSLValidity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSLConfig.SSLValidity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sSLValidity = value["SSLValidity"].GetUint64();
        m_sSLValidityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SSLConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryption.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLValidityPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLValidityPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLValidityPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLValidityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLValidity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sSLValidity, allocator);
    }

}


string SSLConfig::GetEncryption() const
{
    return m_encryption;
}

void SSLConfig::SetEncryption(const string& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool SSLConfig::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

string SSLConfig::GetSSLValidityPeriod() const
{
    return m_sSLValidityPeriod;
}

void SSLConfig::SetSSLValidityPeriod(const string& _sSLValidityPeriod)
{
    m_sSLValidityPeriod = _sSLValidityPeriod;
    m_sSLValidityPeriodHasBeenSet = true;
}

bool SSLConfig::SSLValidityPeriodHasBeenSet() const
{
    return m_sSLValidityPeriodHasBeenSet;
}

uint64_t SSLConfig::GetSSLValidity() const
{
    return m_sSLValidity;
}

void SSLConfig::SetSSLValidity(const uint64_t& _sSLValidity)
{
    m_sSLValidity = _sSLValidity;
    m_sSLValidityHasBeenSet = true;
}

bool SSLConfig::SSLValidityHasBeenSet() const
{
    return m_sSLValidityHasBeenSet;
}

