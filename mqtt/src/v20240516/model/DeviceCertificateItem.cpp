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

#include <tencentcloud/mqtt/v20240516/model/DeviceCertificateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DeviceCertificateItem::DeviceCertificateItem() :
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
    m_createdTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_certificateSourceHasBeenSet(false),
    m_notAfterTimeHasBeenSet(false),
    m_notBeforeTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceCertificateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceCertificate") && !value["DeviceCertificate"].IsNull())
    {
        if (!value["DeviceCertificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.DeviceCertificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCertificate = string(value["DeviceCertificate"].GetString());
        m_deviceCertificateHasBeenSet = true;
    }

    if (value.HasMember("DeviceCertificateSn") && !value["DeviceCertificateSn"].IsNull())
    {
        if (!value["DeviceCertificateSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.DeviceCertificateSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCertificateSn = string(value["DeviceCertificateSn"].GetString());
        m_deviceCertificateSnHasBeenSet = true;
    }

    if (value.HasMember("DeviceCertificateCn") && !value["DeviceCertificateCn"].IsNull())
    {
        if (!value["DeviceCertificateCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.DeviceCertificateCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCertificateCn = string(value["DeviceCertificateCn"].GetString());
        m_deviceCertificateCnHasBeenSet = true;
    }

    if (value.HasMember("CaSn") && !value["CaSn"].IsNull())
    {
        if (!value["CaSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.CaSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caSn = string(value["CaSn"].GetString());
        m_caSnHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OrganizationalUnit") && !value["OrganizationalUnit"].IsNull())
    {
        if (!value["OrganizationalUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.OrganizationalUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationalUnit = string(value["OrganizationalUnit"].GetString());
        m_organizationalUnitHasBeenSet = true;
    }

    if (value.HasMember("LastActivationTime") && !value["LastActivationTime"].IsNull())
    {
        if (!value["LastActivationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.LastActivationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastActivationTime = value["LastActivationTime"].GetInt64();
        m_lastActivationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastInactivationTime") && !value["LastInactivationTime"].IsNull())
    {
        if (!value["LastInactivationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.LastInactivationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastInactivationTime = value["LastInactivationTime"].GetInt64();
        m_lastInactivationTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = value["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CertificateSource") && !value["CertificateSource"].IsNull())
    {
        if (!value["CertificateSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.CertificateSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateSource = string(value["CertificateSource"].GetString());
        m_certificateSourceHasBeenSet = true;
    }

    if (value.HasMember("NotAfterTime") && !value["NotAfterTime"].IsNull())
    {
        if (!value["NotAfterTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.NotAfterTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notAfterTime = value["NotAfterTime"].GetInt64();
        m_notAfterTimeHasBeenSet = true;
    }

    if (value.HasMember("NotBeforeTime") && !value["NotBeforeTime"].IsNull())
    {
        if (!value["NotBeforeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCertificateItem.NotBeforeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notBeforeTime = value["NotBeforeTime"].GetInt64();
        m_notBeforeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceCertificateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string DeviceCertificateItem::GetClientId() const
{
    return m_clientId;
}

void DeviceCertificateItem::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool DeviceCertificateItem::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string DeviceCertificateItem::GetDeviceCertificate() const
{
    return m_deviceCertificate;
}

void DeviceCertificateItem::SetDeviceCertificate(const string& _deviceCertificate)
{
    m_deviceCertificate = _deviceCertificate;
    m_deviceCertificateHasBeenSet = true;
}

bool DeviceCertificateItem::DeviceCertificateHasBeenSet() const
{
    return m_deviceCertificateHasBeenSet;
}

string DeviceCertificateItem::GetDeviceCertificateSn() const
{
    return m_deviceCertificateSn;
}

void DeviceCertificateItem::SetDeviceCertificateSn(const string& _deviceCertificateSn)
{
    m_deviceCertificateSn = _deviceCertificateSn;
    m_deviceCertificateSnHasBeenSet = true;
}

bool DeviceCertificateItem::DeviceCertificateSnHasBeenSet() const
{
    return m_deviceCertificateSnHasBeenSet;
}

string DeviceCertificateItem::GetDeviceCertificateCn() const
{
    return m_deviceCertificateCn;
}

void DeviceCertificateItem::SetDeviceCertificateCn(const string& _deviceCertificateCn)
{
    m_deviceCertificateCn = _deviceCertificateCn;
    m_deviceCertificateCnHasBeenSet = true;
}

bool DeviceCertificateItem::DeviceCertificateCnHasBeenSet() const
{
    return m_deviceCertificateCnHasBeenSet;
}

string DeviceCertificateItem::GetCaSn() const
{
    return m_caSn;
}

void DeviceCertificateItem::SetCaSn(const string& _caSn)
{
    m_caSn = _caSn;
    m_caSnHasBeenSet = true;
}

bool DeviceCertificateItem::CaSnHasBeenSet() const
{
    return m_caSnHasBeenSet;
}

string DeviceCertificateItem::GetFormat() const
{
    return m_format;
}

void DeviceCertificateItem::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool DeviceCertificateItem::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string DeviceCertificateItem::GetStatus() const
{
    return m_status;
}

void DeviceCertificateItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceCertificateItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeviceCertificateItem::GetOrganizationalUnit() const
{
    return m_organizationalUnit;
}

void DeviceCertificateItem::SetOrganizationalUnit(const string& _organizationalUnit)
{
    m_organizationalUnit = _organizationalUnit;
    m_organizationalUnitHasBeenSet = true;
}

bool DeviceCertificateItem::OrganizationalUnitHasBeenSet() const
{
    return m_organizationalUnitHasBeenSet;
}

int64_t DeviceCertificateItem::GetLastActivationTime() const
{
    return m_lastActivationTime;
}

void DeviceCertificateItem::SetLastActivationTime(const int64_t& _lastActivationTime)
{
    m_lastActivationTime = _lastActivationTime;
    m_lastActivationTimeHasBeenSet = true;
}

bool DeviceCertificateItem::LastActivationTimeHasBeenSet() const
{
    return m_lastActivationTimeHasBeenSet;
}

int64_t DeviceCertificateItem::GetLastInactivationTime() const
{
    return m_lastInactivationTime;
}

void DeviceCertificateItem::SetLastInactivationTime(const int64_t& _lastInactivationTime)
{
    m_lastInactivationTime = _lastInactivationTime;
    m_lastInactivationTimeHasBeenSet = true;
}

bool DeviceCertificateItem::LastInactivationTimeHasBeenSet() const
{
    return m_lastInactivationTimeHasBeenSet;
}

int64_t DeviceCertificateItem::GetCreatedTime() const
{
    return m_createdTime;
}

void DeviceCertificateItem::SetCreatedTime(const int64_t& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DeviceCertificateItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t DeviceCertificateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void DeviceCertificateItem::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DeviceCertificateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DeviceCertificateItem::GetCertificateSource() const
{
    return m_certificateSource;
}

void DeviceCertificateItem::SetCertificateSource(const string& _certificateSource)
{
    m_certificateSource = _certificateSource;
    m_certificateSourceHasBeenSet = true;
}

bool DeviceCertificateItem::CertificateSourceHasBeenSet() const
{
    return m_certificateSourceHasBeenSet;
}

int64_t DeviceCertificateItem::GetNotAfterTime() const
{
    return m_notAfterTime;
}

void DeviceCertificateItem::SetNotAfterTime(const int64_t& _notAfterTime)
{
    m_notAfterTime = _notAfterTime;
    m_notAfterTimeHasBeenSet = true;
}

bool DeviceCertificateItem::NotAfterTimeHasBeenSet() const
{
    return m_notAfterTimeHasBeenSet;
}

int64_t DeviceCertificateItem::GetNotBeforeTime() const
{
    return m_notBeforeTime;
}

void DeviceCertificateItem::SetNotBeforeTime(const int64_t& _notBeforeTime)
{
    m_notBeforeTime = _notBeforeTime;
    m_notBeforeTimeHasBeenSet = true;
}

bool DeviceCertificateItem::NotBeforeTimeHasBeenSet() const
{
    return m_notBeforeTimeHasBeenSet;
}

