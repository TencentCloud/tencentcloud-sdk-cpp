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

#include <tencentcloud/tdid/v20210519/model/CredentialProof.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CredentialProof::CredentialProof() :
    m_credentialHasBeenSet(false)
{
}

CoreInternalOutcome CredentialProof::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Credential") && !value["Credential"].IsNull())
    {
        if (!value["Credential"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialProof.Credential` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credential = string(value["Credential"].GetString());
        m_credentialHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CredentialProof::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_credentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credential";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credential.c_str(), allocator).Move(), allocator);
    }

}


string CredentialProof::GetCredential() const
{
    return m_credential;
}

void CredentialProof::SetCredential(const string& _credential)
{
    m_credential = _credential;
    m_credentialHasBeenSet = true;
}

bool CredentialProof::CredentialHasBeenSet() const
{
    return m_credentialHasBeenSet;
}

