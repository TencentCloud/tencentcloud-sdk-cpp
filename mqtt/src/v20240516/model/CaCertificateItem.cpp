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

#include <tencentcloud/mqtt/v20240516/model/CaCertificateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

CaCertificateItem::CaCertificateItem() :
    m_caCnHasBeenSet(false),
    m_caCertificateHasBeenSet(false),
    m_caSnHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_verificationCertificateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastActivationTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_lastInactivationTimeHasBeenSet(false),
    m_caIssuerCnHasBeenSet(false),
    m_notBeforeTimeHasBeenSet(false),
    m_notAfterTimeHasBeenSet(false)
{
}

CoreInternalOutcome CaCertificateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaCn") && !value["CaCn"].IsNull())
    {
        if (!value["CaCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.CaCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caCn = string(value["CaCn"].GetString());
        m_caCnHasBeenSet = true;
    }

    if (value.HasMember("CaCertificate") && !value["CaCertificate"].IsNull())
    {
        if (!value["CaCertificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.CaCertificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caCertificate = string(value["CaCertificate"].GetString());
        m_caCertificateHasBeenSet = true;
    }

    if (value.HasMember("CaSn") && !value["CaSn"].IsNull())
    {
        if (!value["CaSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.CaSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caSn = string(value["CaSn"].GetString());
        m_caSnHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("VerificationCertificate") && !value["VerificationCertificate"].IsNull())
    {
        if (!value["VerificationCertificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.VerificationCertificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationCertificate = string(value["VerificationCertificate"].GetString());
        m_verificationCertificateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastActivationTime") && !value["LastActivationTime"].IsNull())
    {
        if (!value["LastActivationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.LastActivationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastActivationTime = value["LastActivationTime"].GetInt64();
        m_lastActivationTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = value["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastInactivationTime") && !value["LastInactivationTime"].IsNull())
    {
        if (!value["LastInactivationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.LastInactivationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastInactivationTime = value["LastInactivationTime"].GetInt64();
        m_lastInactivationTimeHasBeenSet = true;
    }

    if (value.HasMember("CaIssuerCn") && !value["CaIssuerCn"].IsNull())
    {
        if (!value["CaIssuerCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.CaIssuerCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caIssuerCn = string(value["CaIssuerCn"].GetString());
        m_caIssuerCnHasBeenSet = true;
    }

    if (value.HasMember("NotBeforeTime") && !value["NotBeforeTime"].IsNull())
    {
        if (!value["NotBeforeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.NotBeforeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notBeforeTime = value["NotBeforeTime"].GetInt64();
        m_notBeforeTimeHasBeenSet = true;
    }

    if (value.HasMember("NotAfterTime") && !value["NotAfterTime"].IsNull())
    {
        if (!value["NotAfterTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaCertificateItem.NotAfterTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notAfterTime = value["NotAfterTime"].GetInt64();
        m_notAfterTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaCertificateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_caCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caCn.c_str(), allocator).Move(), allocator);
    }

    if (m_caCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caCertificate.c_str(), allocator).Move(), allocator);
    }

    if (m_caSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caSn.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationCertificate.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lastActivationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastActivationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastActivationTime, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_lastInactivationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastInactivationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastInactivationTime, allocator);
    }

    if (m_caIssuerCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaIssuerCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caIssuerCn.c_str(), allocator).Move(), allocator);
    }

    if (m_notBeforeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBeforeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notBeforeTime, allocator);
    }

    if (m_notAfterTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAfterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notAfterTime, allocator);
    }

}


string CaCertificateItem::GetCaCn() const
{
    return m_caCn;
}

void CaCertificateItem::SetCaCn(const string& _caCn)
{
    m_caCn = _caCn;
    m_caCnHasBeenSet = true;
}

bool CaCertificateItem::CaCnHasBeenSet() const
{
    return m_caCnHasBeenSet;
}

string CaCertificateItem::GetCaCertificate() const
{
    return m_caCertificate;
}

void CaCertificateItem::SetCaCertificate(const string& _caCertificate)
{
    m_caCertificate = _caCertificate;
    m_caCertificateHasBeenSet = true;
}

bool CaCertificateItem::CaCertificateHasBeenSet() const
{
    return m_caCertificateHasBeenSet;
}

string CaCertificateItem::GetCaSn() const
{
    return m_caSn;
}

void CaCertificateItem::SetCaSn(const string& _caSn)
{
    m_caSn = _caSn;
    m_caSnHasBeenSet = true;
}

bool CaCertificateItem::CaSnHasBeenSet() const
{
    return m_caSnHasBeenSet;
}

string CaCertificateItem::GetFormat() const
{
    return m_format;
}

void CaCertificateItem::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool CaCertificateItem::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string CaCertificateItem::GetVerificationCertificate() const
{
    return m_verificationCertificate;
}

void CaCertificateItem::SetVerificationCertificate(const string& _verificationCertificate)
{
    m_verificationCertificate = _verificationCertificate;
    m_verificationCertificateHasBeenSet = true;
}

bool CaCertificateItem::VerificationCertificateHasBeenSet() const
{
    return m_verificationCertificateHasBeenSet;
}

string CaCertificateItem::GetStatus() const
{
    return m_status;
}

void CaCertificateItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CaCertificateItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CaCertificateItem::GetLastActivationTime() const
{
    return m_lastActivationTime;
}

void CaCertificateItem::SetLastActivationTime(const int64_t& _lastActivationTime)
{
    m_lastActivationTime = _lastActivationTime;
    m_lastActivationTimeHasBeenSet = true;
}

bool CaCertificateItem::LastActivationTimeHasBeenSet() const
{
    return m_lastActivationTimeHasBeenSet;
}

int64_t CaCertificateItem::GetCreatedTime() const
{
    return m_createdTime;
}

void CaCertificateItem::SetCreatedTime(const int64_t& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CaCertificateItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t CaCertificateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void CaCertificateItem::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CaCertificateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t CaCertificateItem::GetLastInactivationTime() const
{
    return m_lastInactivationTime;
}

void CaCertificateItem::SetLastInactivationTime(const int64_t& _lastInactivationTime)
{
    m_lastInactivationTime = _lastInactivationTime;
    m_lastInactivationTimeHasBeenSet = true;
}

bool CaCertificateItem::LastInactivationTimeHasBeenSet() const
{
    return m_lastInactivationTimeHasBeenSet;
}

string CaCertificateItem::GetCaIssuerCn() const
{
    return m_caIssuerCn;
}

void CaCertificateItem::SetCaIssuerCn(const string& _caIssuerCn)
{
    m_caIssuerCn = _caIssuerCn;
    m_caIssuerCnHasBeenSet = true;
}

bool CaCertificateItem::CaIssuerCnHasBeenSet() const
{
    return m_caIssuerCnHasBeenSet;
}

int64_t CaCertificateItem::GetNotBeforeTime() const
{
    return m_notBeforeTime;
}

void CaCertificateItem::SetNotBeforeTime(const int64_t& _notBeforeTime)
{
    m_notBeforeTime = _notBeforeTime;
    m_notBeforeTimeHasBeenSet = true;
}

bool CaCertificateItem::NotBeforeTimeHasBeenSet() const
{
    return m_notBeforeTimeHasBeenSet;
}

int64_t CaCertificateItem::GetNotAfterTime() const
{
    return m_notAfterTime;
}

void CaCertificateItem::SetNotAfterTime(const int64_t& _notAfterTime)
{
    m_notAfterTime = _notAfterTime;
    m_notAfterTimeHasBeenSet = true;
}

bool CaCertificateItem::NotAfterTimeHasBeenSet() const
{
    return m_notAfterTimeHasBeenSet;
}

