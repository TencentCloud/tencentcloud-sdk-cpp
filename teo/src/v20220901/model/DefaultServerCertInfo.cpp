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

#include <tencentcloud/teo/v20220901/model/DefaultServerCertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DefaultServerCertInfo::DefaultServerCertInfo() :
    m_certIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_subjectAltNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_signAlgoHasBeenSet(false)
{
}

CoreInternalOutcome DefaultServerCertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveTime") && !value["EffectiveTime"].IsNull())
    {
        if (!value["EffectiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.EffectiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveTime = string(value["EffectiveTime"].GetString());
        m_effectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("CommonName") && !value["CommonName"].IsNull())
    {
        if (!value["CommonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.CommonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commonName = string(value["CommonName"].GetString());
        m_commonNameHasBeenSet = true;
    }

    if (value.HasMember("SubjectAltName") && !value["SubjectAltName"].IsNull())
    {
        if (!value["SubjectAltName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.SubjectAltName` is not array type"));

        const rapidjson::Value &tmpValue = value["SubjectAltName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectAltName.push_back((*itr).GetString());
        }
        m_subjectAltNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("SignAlgo") && !value["SignAlgo"].IsNull())
    {
        if (!value["SignAlgo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultServerCertInfo.SignAlgo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signAlgo = string(value["SignAlgo"].GetString());
        m_signAlgoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DefaultServerCertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_effectiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commonName.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectAltNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectAltName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectAltName.begin(); itr != m_subjectAltName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_signAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignAlgo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signAlgo.c_str(), allocator).Move(), allocator);
    }

}


string DefaultServerCertInfo::GetCertId() const
{
    return m_certId;
}

void DefaultServerCertInfo::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool DefaultServerCertInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string DefaultServerCertInfo::GetAlias() const
{
    return m_alias;
}

void DefaultServerCertInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool DefaultServerCertInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string DefaultServerCertInfo::GetType() const
{
    return m_type;
}

void DefaultServerCertInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DefaultServerCertInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DefaultServerCertInfo::GetExpireTime() const
{
    return m_expireTime;
}

void DefaultServerCertInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DefaultServerCertInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DefaultServerCertInfo::GetEffectiveTime() const
{
    return m_effectiveTime;
}

void DefaultServerCertInfo::SetEffectiveTime(const string& _effectiveTime)
{
    m_effectiveTime = _effectiveTime;
    m_effectiveTimeHasBeenSet = true;
}

bool DefaultServerCertInfo::EffectiveTimeHasBeenSet() const
{
    return m_effectiveTimeHasBeenSet;
}

string DefaultServerCertInfo::GetCommonName() const
{
    return m_commonName;
}

void DefaultServerCertInfo::SetCommonName(const string& _commonName)
{
    m_commonName = _commonName;
    m_commonNameHasBeenSet = true;
}

bool DefaultServerCertInfo::CommonNameHasBeenSet() const
{
    return m_commonNameHasBeenSet;
}

vector<string> DefaultServerCertInfo::GetSubjectAltName() const
{
    return m_subjectAltName;
}

void DefaultServerCertInfo::SetSubjectAltName(const vector<string>& _subjectAltName)
{
    m_subjectAltName = _subjectAltName;
    m_subjectAltNameHasBeenSet = true;
}

bool DefaultServerCertInfo::SubjectAltNameHasBeenSet() const
{
    return m_subjectAltNameHasBeenSet;
}

string DefaultServerCertInfo::GetStatus() const
{
    return m_status;
}

void DefaultServerCertInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DefaultServerCertInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DefaultServerCertInfo::GetMessage() const
{
    return m_message;
}

void DefaultServerCertInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool DefaultServerCertInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string DefaultServerCertInfo::GetSignAlgo() const
{
    return m_signAlgo;
}

void DefaultServerCertInfo::SetSignAlgo(const string& _signAlgo)
{
    m_signAlgo = _signAlgo;
    m_signAlgoHasBeenSet = true;
}

bool DefaultServerCertInfo::SignAlgoHasBeenSet() const
{
    return m_signAlgoHasBeenSet;
}

