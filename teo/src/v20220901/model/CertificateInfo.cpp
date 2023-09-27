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

#include <tencentcloud/teo/v20220901/model/CertificateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CertificateInfo::CertificateInfo() :
    m_certIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_deployTimeHasBeenSet(false),
    m_signAlgoHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CertificateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("DeployTime") && !value["DeployTime"].IsNull())
    {
        if (!value["DeployTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.DeployTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployTime = string(value["DeployTime"].GetString());
        m_deployTimeHasBeenSet = true;
    }

    if (value.HasMember("SignAlgo") && !value["SignAlgo"].IsNull())
    {
        if (!value["SignAlgo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.SignAlgo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signAlgo = string(value["SignAlgo"].GetString());
        m_signAlgoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertificateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_signAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignAlgo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signAlgo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string CertificateInfo::GetCertId() const
{
    return m_certId;
}

void CertificateInfo::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertificateInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CertificateInfo::GetAlias() const
{
    return m_alias;
}

void CertificateInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CertificateInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CertificateInfo::GetType() const
{
    return m_type;
}

void CertificateInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CertificateInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CertificateInfo::GetExpireTime() const
{
    return m_expireTime;
}

void CertificateInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CertificateInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CertificateInfo::GetDeployTime() const
{
    return m_deployTime;
}

void CertificateInfo::SetDeployTime(const string& _deployTime)
{
    m_deployTime = _deployTime;
    m_deployTimeHasBeenSet = true;
}

bool CertificateInfo::DeployTimeHasBeenSet() const
{
    return m_deployTimeHasBeenSet;
}

string CertificateInfo::GetSignAlgo() const
{
    return m_signAlgo;
}

void CertificateInfo::SetSignAlgo(const string& _signAlgo)
{
    m_signAlgo = _signAlgo;
    m_signAlgoHasBeenSet = true;
}

bool CertificateInfo::SignAlgoHasBeenSet() const
{
    return m_signAlgoHasBeenSet;
}

string CertificateInfo::GetStatus() const
{
    return m_status;
}

void CertificateInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CertificateInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

