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

#include <tencentcloud/clb/v20180317/model/CertificateInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

CertificateInput::CertificateInput() :
    m_sSLModeHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_certCaIdHasBeenSet(false),
    m_certNameHasBeenSet(false),
    m_certKeyHasBeenSet(false),
    m_certContentHasBeenSet(false),
    m_certCaNameHasBeenSet(false),
    m_certCaContentHasBeenSet(false)
{
}

CoreInternalOutcome CertificateInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SSLMode") && !value["SSLMode"].IsNull())
    {
        if (!value["SSLMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateInput.SSLMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLMode = string(value["SSLMode"].GetString());
        m_sSLModeHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateInput.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CertCaId") && !value["CertCaId"].IsNull())
    {
        if (!value["CertCaId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateInput.CertCaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaId = string(value["CertCaId"].GetString());
        m_certCaIdHasBeenSet = true;
    }

    if (value.HasMember("CertName") && !value["CertName"].IsNull())
    {
        if (!value["CertName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateInput.CertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certName = string(value["CertName"].GetString());
        m_certNameHasBeenSet = true;
    }

    if (value.HasMember("CertKey") && !value["CertKey"].IsNull())
    {
        if (!value["CertKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateInput.CertKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certKey = string(value["CertKey"].GetString());
        m_certKeyHasBeenSet = true;
    }

    if (value.HasMember("CertContent") && !value["CertContent"].IsNull())
    {
        if (!value["CertContent"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateInput.CertContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certContent = string(value["CertContent"].GetString());
        m_certContentHasBeenSet = true;
    }

    if (value.HasMember("CertCaName") && !value["CertCaName"].IsNull())
    {
        if (!value["CertCaName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateInput.CertCaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaName = string(value["CertCaName"].GetString());
        m_certCaNameHasBeenSet = true;
    }

    if (value.HasMember("CertCaContent") && !value["CertCaContent"].IsNull())
    {
        if (!value["CertCaContent"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateInput.CertCaContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaContent = string(value["CertCaContent"].GetString());
        m_certCaContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertificateInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_sSLModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SSLMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sSLMode.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertCaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certCaId.c_str(), allocator).Move(), allocator);
    }

    if (m_certNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_certKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certContent.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertCaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certCaName.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertCaContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_certCaContent.c_str(), allocator).Move(), allocator);
    }

}


string CertificateInput::GetSSLMode() const
{
    return m_sSLMode;
}

void CertificateInput::SetSSLMode(const string& _sSLMode)
{
    m_sSLMode = _sSLMode;
    m_sSLModeHasBeenSet = true;
}

bool CertificateInput::SSLModeHasBeenSet() const
{
    return m_sSLModeHasBeenSet;
}

string CertificateInput::GetCertId() const
{
    return m_certId;
}

void CertificateInput::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertificateInput::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CertificateInput::GetCertCaId() const
{
    return m_certCaId;
}

void CertificateInput::SetCertCaId(const string& _certCaId)
{
    m_certCaId = _certCaId;
    m_certCaIdHasBeenSet = true;
}

bool CertificateInput::CertCaIdHasBeenSet() const
{
    return m_certCaIdHasBeenSet;
}

string CertificateInput::GetCertName() const
{
    return m_certName;
}

void CertificateInput::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool CertificateInput::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string CertificateInput::GetCertKey() const
{
    return m_certKey;
}

void CertificateInput::SetCertKey(const string& _certKey)
{
    m_certKey = _certKey;
    m_certKeyHasBeenSet = true;
}

bool CertificateInput::CertKeyHasBeenSet() const
{
    return m_certKeyHasBeenSet;
}

string CertificateInput::GetCertContent() const
{
    return m_certContent;
}

void CertificateInput::SetCertContent(const string& _certContent)
{
    m_certContent = _certContent;
    m_certContentHasBeenSet = true;
}

bool CertificateInput::CertContentHasBeenSet() const
{
    return m_certContentHasBeenSet;
}

string CertificateInput::GetCertCaName() const
{
    return m_certCaName;
}

void CertificateInput::SetCertCaName(const string& _certCaName)
{
    m_certCaName = _certCaName;
    m_certCaNameHasBeenSet = true;
}

bool CertificateInput::CertCaNameHasBeenSet() const
{
    return m_certCaNameHasBeenSet;
}

string CertificateInput::GetCertCaContent() const
{
    return m_certCaContent;
}

void CertificateInput::SetCertCaContent(const string& _certCaContent)
{
    m_certCaContent = _certCaContent;
    m_certCaContentHasBeenSet = true;
}

bool CertificateInput::CertCaContentHasBeenSet() const
{
    return m_certCaContentHasBeenSet;
}

