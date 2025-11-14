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

#include <tencentcloud/teo/v20220901/model/OriginCertificateVerify.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginCertificateVerify::OriginCertificateVerify() :
    m_verificationModeHasBeenSet(false),
    m_customCACertsHasBeenSet(false)
{
}

CoreInternalOutcome OriginCertificateVerify::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VerificationMode") && !value["VerificationMode"].IsNull())
    {
        if (!value["VerificationMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginCertificateVerify.VerificationMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationMode = string(value["VerificationMode"].GetString());
        m_verificationModeHasBeenSet = true;
    }

    if (value.HasMember("CustomCACerts") && !value["CustomCACerts"].IsNull())
    {
        if (!value["CustomCACerts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginCertificateVerify.CustomCACerts` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomCACerts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CertificateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customCACerts.push_back(item);
        }
        m_customCACertsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginCertificateVerify::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_verificationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationMode.c_str(), allocator).Move(), allocator);
    }

    if (m_customCACertsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomCACerts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customCACerts.begin(); itr != m_customCACerts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OriginCertificateVerify::GetVerificationMode() const
{
    return m_verificationMode;
}

void OriginCertificateVerify::SetVerificationMode(const string& _verificationMode)
{
    m_verificationMode = _verificationMode;
    m_verificationModeHasBeenSet = true;
}

bool OriginCertificateVerify::VerificationModeHasBeenSet() const
{
    return m_verificationModeHasBeenSet;
}

vector<CertificateInfo> OriginCertificateVerify::GetCustomCACerts() const
{
    return m_customCACerts;
}

void OriginCertificateVerify::SetCustomCACerts(const vector<CertificateInfo>& _customCACerts)
{
    m_customCACerts = _customCACerts;
    m_customCACertsHasBeenSet = true;
}

bool OriginCertificateVerify::CustomCACertsHasBeenSet() const
{
    return m_customCACertsHasBeenSet;
}

