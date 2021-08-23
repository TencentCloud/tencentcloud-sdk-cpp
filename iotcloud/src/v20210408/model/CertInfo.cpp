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

#include <tencentcloud/iotcloud/v20210408/model/CertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

CertInfo::CertInfo() :
    m_certNameHasBeenSet(false),
    m_certSNHasBeenSet(false),
    m_issuerNameHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_certTextHasBeenSet(false)
{
}

CoreInternalOutcome CertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertName") && !value["CertName"].IsNull())
    {
        if (!value["CertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certName = string(value["CertName"].GetString());
        m_certNameHasBeenSet = true;
    }

    if (value.HasMember("CertSN") && !value["CertSN"].IsNull())
    {
        if (!value["CertSN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertSN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certSN = string(value["CertSN"].GetString());
        m_certSNHasBeenSet = true;
    }

    if (value.HasMember("IssuerName") && !value["IssuerName"].IsNull())
    {
        if (!value["IssuerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.IssuerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuerName = string(value["IssuerName"].GetString());
        m_issuerNameHasBeenSet = true;
    }

    if (value.HasMember("Subject") && !value["Subject"].IsNull())
    {
        if (!value["Subject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.Subject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subject = string(value["Subject"].GetString());
        m_subjectHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveTime") && !value["EffectiveTime"].IsNull())
    {
        if (!value["EffectiveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.EffectiveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveTime = value["EffectiveTime"].GetUint64();
        m_effectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("CertText") && !value["CertText"].IsNull())
    {
        if (!value["CertText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certText = string(value["CertText"].GetString());
        m_certTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_certSNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertSN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certSN.c_str(), allocator).Move(), allocator);
    }

    if (m_issuerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuerName.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_effectiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_certTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certText.c_str(), allocator).Move(), allocator);
    }

}


string CertInfo::GetCertName() const
{
    return m_certName;
}

void CertInfo::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool CertInfo::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string CertInfo::GetCertSN() const
{
    return m_certSN;
}

void CertInfo::SetCertSN(const string& _certSN)
{
    m_certSN = _certSN;
    m_certSNHasBeenSet = true;
}

bool CertInfo::CertSNHasBeenSet() const
{
    return m_certSNHasBeenSet;
}

string CertInfo::GetIssuerName() const
{
    return m_issuerName;
}

void CertInfo::SetIssuerName(const string& _issuerName)
{
    m_issuerName = _issuerName;
    m_issuerNameHasBeenSet = true;
}

bool CertInfo::IssuerNameHasBeenSet() const
{
    return m_issuerNameHasBeenSet;
}

string CertInfo::GetSubject() const
{
    return m_subject;
}

void CertInfo::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool CertInfo::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

uint64_t CertInfo::GetCreateTime() const
{
    return m_createTime;
}

void CertInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CertInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CertInfo::GetEffectiveTime() const
{
    return m_effectiveTime;
}

void CertInfo::SetEffectiveTime(const uint64_t& _effectiveTime)
{
    m_effectiveTime = _effectiveTime;
    m_effectiveTimeHasBeenSet = true;
}

bool CertInfo::EffectiveTimeHasBeenSet() const
{
    return m_effectiveTimeHasBeenSet;
}

uint64_t CertInfo::GetExpireTime() const
{
    return m_expireTime;
}

void CertInfo::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CertInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CertInfo::GetCertText() const
{
    return m_certText;
}

void CertInfo::SetCertText(const string& _certText)
{
    m_certText = _certText;
    m_certTextHasBeenSet = true;
}

bool CertInfo::CertTextHasBeenSet() const
{
    return m_certTextHasBeenSet;
}

