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

#include <tencentcloud/iotvideo/v20191126/model/RenewCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

RenewCertificate::RenewCertificate() :
    m_tempCertificateHasBeenSet(false)
{
}

CoreInternalOutcome RenewCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TempCertificate") && !value["TempCertificate"].IsNull())
    {
        if (!value["TempCertificate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RenewCertificate.TempCertificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tempCertificate.Deserialize(value["TempCertificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tempCertificateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RenewCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tempCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tempCertificate.ToJsonObject(value[key.c_str()], allocator);
    }

}


CertificateInfo RenewCertificate::GetTempCertificate() const
{
    return m_tempCertificate;
}

void RenewCertificate::SetTempCertificate(const CertificateInfo& _tempCertificate)
{
    m_tempCertificate = _tempCertificate;
    m_tempCertificateHasBeenSet = true;
}

bool RenewCertificate::TempCertificateHasBeenSet() const
{
    return m_tempCertificateHasBeenSet;
}

