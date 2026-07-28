/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mqtt/v20240516/model/DeviceCertificateBackupHistoryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DeviceCertificateBackupHistoryItem::DeviceCertificateBackupHistoryItem() :
    m_clientIdHasBeenSet(false),
    m_deviceCertificateHasBeenSet(false),
    m_deviceCertificateSnHasBeenSet(false),
    m_deviceCertificateCnHasBeenSet(false),
    m_caSnHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_organizationalUnitHasBeenSet(false),
    m_lastActivationTimeHasBeenSet(false),
    m_lastInactivationTimeHasBeenSet(false),
    m_certificateSourceHasBeenSet(false),
    m_notAfterTimeHasBeenSet(false),
    m_notBeforeTimeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceCertificateBackupHistoryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceCertificate") && !value["DeviceCertificate"].IsNull())
    {
        if (!value["DeviceCertificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.DeviceCertificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCertificate = string(value["DeviceCertificate"].GetString());
        m_deviceCertificateHasBeenSet = true;
    }

    if (value.HasMember("DeviceCertificateSn") && !value["DeviceCertificateSn"].IsNull())
    {
        if (!value["DeviceCertificateSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.DeviceCertificateSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCertificateSn = string(value["DeviceCertificateSn"].GetString());
        m_deviceCertificateSnHasBeenSet = true;
    }

    if (value.HasMember("DeviceCertificateCn") && !value["DeviceCertificateCn"].IsNull())
    {
        if (!value["DeviceCertificateCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.DeviceCertificateCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCertificateCn = string(value["DeviceCertificateCn"].GetString());
        m_deviceCertificateCnHasBeenSet = true;
    }

    if (value.HasMember("CaSn") && !value["CaSn"].IsNull())
    {
        if (!value["CaSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.CaSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caSn = string(value["CaSn"].GetString());
        m_caSnHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OrganizationalUnit") && !value["OrganizationalUnit"].IsNull())
    {
        if (!value["OrganizationalUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.OrganizationalUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationalUnit = string(value["OrganizationalUnit"].GetString());
        m_organizationalUnitHasBeenSet = true;
    }

    if (value.HasMember("LastActivationTime") && !value["LastActivationTime"].IsNull())
    {
        if (!value["LastActivationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.LastActivationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastActivationTime = value["LastActivationTime"].GetInt64();
        m_lastActivationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastInactivationTime") && !value["LastInactivationTime"].IsNull())
    {
        if (!value["LastInactivationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.LastInactivationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastInactivationTime = value["LastInactivationTime"].GetInt64();
        m_lastInactivationTimeHasBeenSet = true;
    }

    if (value.HasMember("CertificateSource") && !value["CertificateSource"].IsNull())
    {
        if (!value["CertificateSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.CertificateSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateSource = string(value["CertificateSource"].GetString());
        m_certificateSourceHasBeenSet = true;
    }

    if (value.HasMember("NotAfterTime") && !value["NotAfterTime"].IsNull())
    {
        if (!value["NotAfterTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.NotAfterTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notAfterTime = value["NotAfterTime"].GetInt64();
        m_notAfterTimeHasBeenSet = true;
    }

    if (value.HasMember("NotBeforeTime") && !value["NotBeforeTime"].IsNull())
    {
        if (!value["NotBeforeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.NotBeforeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notBeforeTime = value["NotBeforeTime"].GetInt64();
        m_notBeforeTimeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ModificationTime") && !value["ModificationTime"].IsNull())
    {
        if (!value["ModificationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateBackupHistoryItem.ModificationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modificationTime = value["ModificationTime"].GetInt64();
        m_modificationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceCertificateBackupHistoryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCertificate.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCertificateSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCertificateSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCertificateSn.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCertificateCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCertificateCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceCertificateCn.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationalUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationalUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationalUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_lastActivationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastActivationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastActivationTime, allocator);
    }

    if (m_lastInactivationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastInactivationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastInactivationTime, allocator);
    }

    if (m_certificateSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateSource.c_str(), allocator).Move(), allocator);
    }

    if (m_notAfterTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotAfterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notAfterTime, allocator);
    }

    if (m_notBeforeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBeforeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notBeforeTime, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_modificationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModificationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modificationTime, allocator);
    }

}


string DeviceCertificateBackupHistoryItem::GetClientId() const
{
    return m_clientId;
}

void DeviceCertificateBackupHistoryItem::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string DeviceCertificateBackupHistoryItem::GetDeviceCertificate() const
{
    return m_deviceCertificate;
}

void DeviceCertificateBackupHistoryItem::SetDeviceCertificate(const string& _deviceCertificate)
{
    m_deviceCertificate = _deviceCertificate;
    m_deviceCertificateHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::DeviceCertificateHasBeenSet() const
{
    return m_deviceCertificateHasBeenSet;
}

string DeviceCertificateBackupHistoryItem::GetDeviceCertificateSn() const
{
    return m_deviceCertificateSn;
}

void DeviceCertificateBackupHistoryItem::SetDeviceCertificateSn(const string& _deviceCertificateSn)
{
    m_deviceCertificateSn = _deviceCertificateSn;
    m_deviceCertificateSnHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::DeviceCertificateSnHasBeenSet() const
{
    return m_deviceCertificateSnHasBeenSet;
}

string DeviceCertificateBackupHistoryItem::GetDeviceCertificateCn() const
{
    return m_deviceCertificateCn;
}

void DeviceCertificateBackupHistoryItem::SetDeviceCertificateCn(const string& _deviceCertificateCn)
{
    m_deviceCertificateCn = _deviceCertificateCn;
    m_deviceCertificateCnHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::DeviceCertificateCnHasBeenSet() const
{
    return m_deviceCertificateCnHasBeenSet;
}

string DeviceCertificateBackupHistoryItem::GetCaSn() const
{
    return m_caSn;
}

void DeviceCertificateBackupHistoryItem::SetCaSn(const string& _caSn)
{
    m_caSn = _caSn;
    m_caSnHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::CaSnHasBeenSet() const
{
    return m_caSnHasBeenSet;
}

string DeviceCertificateBackupHistoryItem::GetFormat() const
{
    return m_format;
}

void DeviceCertificateBackupHistoryItem::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string DeviceCertificateBackupHistoryItem::GetStatus() const
{
    return m_status;
}

void DeviceCertificateBackupHistoryItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeviceCertificateBackupHistoryItem::GetOrganizationalUnit() const
{
    return m_organizationalUnit;
}

void DeviceCertificateBackupHistoryItem::SetOrganizationalUnit(const string& _organizationalUnit)
{
    m_organizationalUnit = _organizationalUnit;
    m_organizationalUnitHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::OrganizationalUnitHasBeenSet() const
{
    return m_organizationalUnitHasBeenSet;
}

int64_t DeviceCertificateBackupHistoryItem::GetLastActivationTime() const
{
    return m_lastActivationTime;
}

void DeviceCertificateBackupHistoryItem::SetLastActivationTime(const int64_t& _lastActivationTime)
{
    m_lastActivationTime = _lastActivationTime;
    m_lastActivationTimeHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::LastActivationTimeHasBeenSet() const
{
    return m_lastActivationTimeHasBeenSet;
}

int64_t DeviceCertificateBackupHistoryItem::GetLastInactivationTime() const
{
    return m_lastInactivationTime;
}

void DeviceCertificateBackupHistoryItem::SetLastInactivationTime(const int64_t& _lastInactivationTime)
{
    m_lastInactivationTime = _lastInactivationTime;
    m_lastInactivationTimeHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::LastInactivationTimeHasBeenSet() const
{
    return m_lastInactivationTimeHasBeenSet;
}

string DeviceCertificateBackupHistoryItem::GetCertificateSource() const
{
    return m_certificateSource;
}

void DeviceCertificateBackupHistoryItem::SetCertificateSource(const string& _certificateSource)
{
    m_certificateSource = _certificateSource;
    m_certificateSourceHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::CertificateSourceHasBeenSet() const
{
    return m_certificateSourceHasBeenSet;
}

int64_t DeviceCertificateBackupHistoryItem::GetNotAfterTime() const
{
    return m_notAfterTime;
}

void DeviceCertificateBackupHistoryItem::SetNotAfterTime(const int64_t& _notAfterTime)
{
    m_notAfterTime = _notAfterTime;
    m_notAfterTimeHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::NotAfterTimeHasBeenSet() const
{
    return m_notAfterTimeHasBeenSet;
}

int64_t DeviceCertificateBackupHistoryItem::GetNotBeforeTime() const
{
    return m_notBeforeTime;
}

void DeviceCertificateBackupHistoryItem::SetNotBeforeTime(const int64_t& _notBeforeTime)
{
    m_notBeforeTime = _notBeforeTime;
    m_notBeforeTimeHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::NotBeforeTimeHasBeenSet() const
{
    return m_notBeforeTimeHasBeenSet;
}

string DeviceCertificateBackupHistoryItem::GetSource() const
{
    return m_source;
}

void DeviceCertificateBackupHistoryItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DeviceCertificateBackupHistoryItem::GetModificationTime() const
{
    return m_modificationTime;
}

void DeviceCertificateBackupHistoryItem::SetModificationTime(const int64_t& _modificationTime)
{
    m_modificationTime = _modificationTime;
    m_modificationTimeHasBeenSet = true;
}

bool DeviceCertificateBackupHistoryItem::ModificationTimeHasBeenSet() const
{
    return m_modificationTimeHasBeenSet;
}

