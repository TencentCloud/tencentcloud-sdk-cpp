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

#include <tencentcloud/cdn/v20180606/model/ClientCert.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ClientCert::ClientCert() :
    m_certificateHasBeenSet(false),
    m_certNameHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_deployTimeHasBeenSet(false)
{
}

CoreInternalOutcome ClientCert::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientCert.Certificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificate = string(value["Certificate"].GetString());
        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("CertName") && !value["CertName"].IsNull())
    {
        if (!value["CertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientCert.CertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certName = string(value["CertName"].GetString());
        m_certNameHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientCert.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("DeployTime") && !value["DeployTime"].IsNull())
    {
        if (!value["DeployTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientCert.DeployTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployTime = string(value["DeployTime"].GetString());
        m_deployTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientCert::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificate.c_str(), allocator).Move(), allocator);
    }

    if (m_certNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deployTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployTime.c_str(), allocator).Move(), allocator);
    }

}


string ClientCert::GetCertificate() const
{
    return m_certificate;
}

void ClientCert::SetCertificate(const string& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool ClientCert::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string ClientCert::GetCertName() const
{
    return m_certName;
}

void ClientCert::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool ClientCert::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string ClientCert::GetExpireTime() const
{
    return m_expireTime;
}

void ClientCert::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ClientCert::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ClientCert::GetDeployTime() const
{
    return m_deployTime;
}

void ClientCert::SetDeployTime(const string& _deployTime)
{
    m_deployTime = _deployTime;
    m_deployTimeHasBeenSet = true;
}

bool ClientCert::DeployTimeHasBeenSet() const
{
    return m_deployTimeHasBeenSet;
}

