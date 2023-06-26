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

#include <tencentcloud/sqlserver/v20180328/model/TDEConfigAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

TDEConfigAttribute::TDEConfigAttribute() :
    m_encryptionHasBeenSet(false),
    m_certificateAttributionHasBeenSet(false),
    m_quoteUinHasBeenSet(false)
{
}

CoreInternalOutcome TDEConfigAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Encryption") && !value["Encryption"].IsNull())
    {
        if (!value["Encryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDEConfigAttribute.Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(value["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
    }

    if (value.HasMember("CertificateAttribution") && !value["CertificateAttribution"].IsNull())
    {
        if (!value["CertificateAttribution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDEConfigAttribute.CertificateAttribution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateAttribution = string(value["CertificateAttribution"].GetString());
        m_certificateAttributionHasBeenSet = true;
    }

    if (value.HasMember("QuoteUin") && !value["QuoteUin"].IsNull())
    {
        if (!value["QuoteUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TDEConfigAttribute.QuoteUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quoteUin = string(value["QuoteUin"].GetString());
        m_quoteUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TDEConfigAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryption.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateAttributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateAttribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateAttribution.c_str(), allocator).Move(), allocator);
    }

    if (m_quoteUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuoteUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quoteUin.c_str(), allocator).Move(), allocator);
    }

}


string TDEConfigAttribute::GetEncryption() const
{
    return m_encryption;
}

void TDEConfigAttribute::SetEncryption(const string& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool TDEConfigAttribute::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

string TDEConfigAttribute::GetCertificateAttribution() const
{
    return m_certificateAttribution;
}

void TDEConfigAttribute::SetCertificateAttribution(const string& _certificateAttribution)
{
    m_certificateAttribution = _certificateAttribution;
    m_certificateAttributionHasBeenSet = true;
}

bool TDEConfigAttribute::CertificateAttributionHasBeenSet() const
{
    return m_certificateAttributionHasBeenSet;
}

string TDEConfigAttribute::GetQuoteUin() const
{
    return m_quoteUin;
}

void TDEConfigAttribute::SetQuoteUin(const string& _quoteUin)
{
    m_quoteUin = _quoteUin;
    m_quoteUinHasBeenSet = true;
}

bool TDEConfigAttribute::QuoteUinHasBeenSet() const
{
    return m_quoteUinHasBeenSet;
}

