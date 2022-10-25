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

#include <tencentcloud/teo/v20220901/model/ServerCertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ServerCertInfo::ServerCertInfo() :
    m_certIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_deployTimeHasBeenSet(false),
    m_signAlgoHasBeenSet(false),
    m_commonNameHasBeenSet(false)
{
}

CoreInternalOutcome ServerCertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerCertInfo.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerCertInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerCertInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerCertInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("DeployTime") && !value["DeployTime"].IsNull())
    {
        if (!value["DeployTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerCertInfo.DeployTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployTime = string(value["DeployTime"].GetString());
        m_deployTimeHasBeenSet = true;
    }

    if (value.HasMember("SignAlgo") && !value["SignAlgo"].IsNull())
    {
        if (!value["SignAlgo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerCertInfo.SignAlgo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signAlgo = string(value["SignAlgo"].GetString());
        m_signAlgoHasBeenSet = true;
    }

    if (value.HasMember("CommonName") && !value["CommonName"].IsNull())
    {
        if (!value["CommonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerCertInfo.CommonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commonName = string(value["CommonName"].GetString());
        m_commonNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerCertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_commonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commonName.c_str(), allocator).Move(), allocator);
    }

}


string ServerCertInfo::GetCertId() const
{
    return m_certId;
}

void ServerCertInfo::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool ServerCertInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string ServerCertInfo::GetAlias() const
{
    return m_alias;
}

void ServerCertInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ServerCertInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string ServerCertInfo::GetType() const
{
    return m_type;
}

void ServerCertInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ServerCertInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ServerCertInfo::GetExpireTime() const
{
    return m_expireTime;
}

void ServerCertInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ServerCertInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ServerCertInfo::GetDeployTime() const
{
    return m_deployTime;
}

void ServerCertInfo::SetDeployTime(const string& _deployTime)
{
    m_deployTime = _deployTime;
    m_deployTimeHasBeenSet = true;
}

bool ServerCertInfo::DeployTimeHasBeenSet() const
{
    return m_deployTimeHasBeenSet;
}

string ServerCertInfo::GetSignAlgo() const
{
    return m_signAlgo;
}

void ServerCertInfo::SetSignAlgo(const string& _signAlgo)
{
    m_signAlgo = _signAlgo;
    m_signAlgoHasBeenSet = true;
}

bool ServerCertInfo::SignAlgoHasBeenSet() const
{
    return m_signAlgoHasBeenSet;
}

string ServerCertInfo::GetCommonName() const
{
    return m_commonName;
}

void ServerCertInfo::SetCommonName(const string& _commonName)
{
    m_commonName = _commonName;
    m_commonNameHasBeenSet = true;
}

bool ServerCertInfo::CommonNameHasBeenSet() const
{
    return m_commonNameHasBeenSet;
}

