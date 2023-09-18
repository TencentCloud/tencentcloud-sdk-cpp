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

#include <tencentcloud/tse/v20201207/model/KongCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongCertificate::KongCertificate() :
    m_certHasBeenSet(false)
{
}

CoreInternalOutcome KongCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cert") && !value["Cert"].IsNull())
    {
        if (!value["Cert"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificate.Cert` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cert.Deserialize(value["Cert"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cert.ToJsonObject(value[key.c_str()], allocator);
    }

}


KongCertificatesPreview KongCertificate::GetCert() const
{
    return m_cert;
}

void KongCertificate::SetCert(const KongCertificatesPreview& _cert)
{
    m_cert = _cert;
    m_certHasBeenSet = true;
}

bool KongCertificate::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

