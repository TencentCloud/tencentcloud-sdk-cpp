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

#include <tencentcloud/ioa/v20220601/model/AggrSoftDeviceRow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

AggrSoftDeviceRow::AggrSoftDeviceRow() :
    m_deviceNameHasBeenSet(false),
    m_lastLoginAccountHasBeenSet(false),
    m_deviceUserNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_piracyRiskHasBeenSet(false),
    m_piracyReasonHasBeenSet(false),
    m_installTimeHasBeenSet(false),
    m_userPathHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_mACHasBeenSet(false),
    m_useTimeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_fullSoftNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_newVersionHasBeenSet(false),
    m_upgradeSoftIdHasBeenSet(false),
    m_remarkNameHasBeenSet(false)
{
}

CoreInternalOutcome AggrSoftDeviceRow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("LastLoginAccount") && !value["LastLoginAccount"].IsNull())
    {
        if (!value["LastLoginAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.LastLoginAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLoginAccount = string(value["LastLoginAccount"].GetString());
        m_lastLoginAccountHasBeenSet = true;
    }

    if (value.HasMember("DeviceUserName") && !value["DeviceUserName"].IsNull())
    {
        if (!value["DeviceUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.DeviceUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceUserName = string(value["DeviceUserName"].GetString());
        m_deviceUserNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("PiracyRisk") && !value["PiracyRisk"].IsNull())
    {
        if (!value["PiracyRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.PiracyRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_piracyRisk = value["PiracyRisk"].GetInt64();
        m_piracyRiskHasBeenSet = true;
    }

    if (value.HasMember("PiracyReason") && !value["PiracyReason"].IsNull())
    {
        if (!value["PiracyReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.PiracyReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_piracyReason = string(value["PiracyReason"].GetString());
        m_piracyReasonHasBeenSet = true;
    }

    if (value.HasMember("InstallTime") && !value["InstallTime"].IsNull())
    {
        if (!value["InstallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.InstallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installTime = string(value["InstallTime"].GetString());
        m_installTimeHasBeenSet = true;
    }

    if (value.HasMember("UserPath") && !value["UserPath"].IsNull())
    {
        if (!value["UserPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.UserPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userPath = string(value["UserPath"].GetString());
        m_userPathHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.UserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroup = string(value["UserGroup"].GetString());
        m_userGroupHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("MAC") && !value["MAC"].IsNull())
    {
        if (!value["MAC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.MAC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mAC = string(value["MAC"].GetString());
        m_mACHasBeenSet = true;
    }

    if (value.HasMember("UseTime") && !value["UseTime"].IsNull())
    {
        if (!value["UseTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.UseTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useTime = value["UseTime"].GetInt64();
        m_useTimeHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.DeviceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = value["DeviceId"].GetInt64();
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("FullSoftName") && !value["FullSoftName"].IsNull())
    {
        if (!value["FullSoftName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.FullSoftName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullSoftName = string(value["FullSoftName"].GetString());
        m_fullSoftNameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("NewVersion") && !value["NewVersion"].IsNull())
    {
        if (!value["NewVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.NewVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newVersion = string(value["NewVersion"].GetString());
        m_newVersionHasBeenSet = true;
    }

    if (value.HasMember("UpgradeSoftId") && !value["UpgradeSoftId"].IsNull())
    {
        if (!value["UpgradeSoftId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.UpgradeSoftId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeSoftId = value["UpgradeSoftId"].GetInt64();
        m_upgradeSoftIdHasBeenSet = true;
    }

    if (value.HasMember("RemarkName") && !value["RemarkName"].IsNull())
    {
        if (!value["RemarkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggrSoftDeviceRow.RemarkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarkName = string(value["RemarkName"].GetString());
        m_remarkNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AggrSoftDeviceRow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLoginAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLoginAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLoginAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_piracyRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PiracyRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_piracyRisk, allocator);
    }

    if (m_piracyReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PiracyReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_piracyReason.c_str(), allocator).Move(), allocator);
    }

    if (m_installTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userPath.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_mACHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MAC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mAC.c_str(), allocator).Move(), allocator);
    }

    if (m_useTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useTime, allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceId, allocator);
    }

    if (m_fullSoftNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullSoftName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullSoftName.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_newVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeSoftIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeSoftId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upgradeSoftId, allocator);
    }

    if (m_remarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemarkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarkName.c_str(), allocator).Move(), allocator);
    }

}


string AggrSoftDeviceRow::GetDeviceName() const
{
    return m_deviceName;
}

void AggrSoftDeviceRow::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool AggrSoftDeviceRow::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string AggrSoftDeviceRow::GetLastLoginAccount() const
{
    return m_lastLoginAccount;
}

void AggrSoftDeviceRow::SetLastLoginAccount(const string& _lastLoginAccount)
{
    m_lastLoginAccount = _lastLoginAccount;
    m_lastLoginAccountHasBeenSet = true;
}

bool AggrSoftDeviceRow::LastLoginAccountHasBeenSet() const
{
    return m_lastLoginAccountHasBeenSet;
}

string AggrSoftDeviceRow::GetDeviceUserName() const
{
    return m_deviceUserName;
}

void AggrSoftDeviceRow::SetDeviceUserName(const string& _deviceUserName)
{
    m_deviceUserName = _deviceUserName;
    m_deviceUserNameHasBeenSet = true;
}

bool AggrSoftDeviceRow::DeviceUserNameHasBeenSet() const
{
    return m_deviceUserNameHasBeenSet;
}

string AggrSoftDeviceRow::GetVersion() const
{
    return m_version;
}

void AggrSoftDeviceRow::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AggrSoftDeviceRow::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t AggrSoftDeviceRow::GetPiracyRisk() const
{
    return m_piracyRisk;
}

void AggrSoftDeviceRow::SetPiracyRisk(const int64_t& _piracyRisk)
{
    m_piracyRisk = _piracyRisk;
    m_piracyRiskHasBeenSet = true;
}

bool AggrSoftDeviceRow::PiracyRiskHasBeenSet() const
{
    return m_piracyRiskHasBeenSet;
}

string AggrSoftDeviceRow::GetPiracyReason() const
{
    return m_piracyReason;
}

void AggrSoftDeviceRow::SetPiracyReason(const string& _piracyReason)
{
    m_piracyReason = _piracyReason;
    m_piracyReasonHasBeenSet = true;
}

bool AggrSoftDeviceRow::PiracyReasonHasBeenSet() const
{
    return m_piracyReasonHasBeenSet;
}

string AggrSoftDeviceRow::GetInstallTime() const
{
    return m_installTime;
}

void AggrSoftDeviceRow::SetInstallTime(const string& _installTime)
{
    m_installTime = _installTime;
    m_installTimeHasBeenSet = true;
}

bool AggrSoftDeviceRow::InstallTimeHasBeenSet() const
{
    return m_installTimeHasBeenSet;
}

string AggrSoftDeviceRow::GetUserPath() const
{
    return m_userPath;
}

void AggrSoftDeviceRow::SetUserPath(const string& _userPath)
{
    m_userPath = _userPath;
    m_userPathHasBeenSet = true;
}

bool AggrSoftDeviceRow::UserPathHasBeenSet() const
{
    return m_userPathHasBeenSet;
}

string AggrSoftDeviceRow::GetUserGroup() const
{
    return m_userGroup;
}

void AggrSoftDeviceRow::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool AggrSoftDeviceRow::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

string AggrSoftDeviceRow::GetIP() const
{
    return m_iP;
}

void AggrSoftDeviceRow::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool AggrSoftDeviceRow::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string AggrSoftDeviceRow::GetMAC() const
{
    return m_mAC;
}

void AggrSoftDeviceRow::SetMAC(const string& _mAC)
{
    m_mAC = _mAC;
    m_mACHasBeenSet = true;
}

bool AggrSoftDeviceRow::MACHasBeenSet() const
{
    return m_mACHasBeenSet;
}

int64_t AggrSoftDeviceRow::GetUseTime() const
{
    return m_useTime;
}

void AggrSoftDeviceRow::SetUseTime(const int64_t& _useTime)
{
    m_useTime = _useTime;
    m_useTimeHasBeenSet = true;
}

bool AggrSoftDeviceRow::UseTimeHasBeenSet() const
{
    return m_useTimeHasBeenSet;
}

int64_t AggrSoftDeviceRow::GetDeviceId() const
{
    return m_deviceId;
}

void AggrSoftDeviceRow::SetDeviceId(const int64_t& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool AggrSoftDeviceRow::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string AggrSoftDeviceRow::GetFullSoftName() const
{
    return m_fullSoftName;
}

void AggrSoftDeviceRow::SetFullSoftName(const string& _fullSoftName)
{
    m_fullSoftName = _fullSoftName;
    m_fullSoftNameHasBeenSet = true;
}

bool AggrSoftDeviceRow::FullSoftNameHasBeenSet() const
{
    return m_fullSoftNameHasBeenSet;
}

int64_t AggrSoftDeviceRow::GetId() const
{
    return m_id;
}

void AggrSoftDeviceRow::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AggrSoftDeviceRow::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AggrSoftDeviceRow::GetNewVersion() const
{
    return m_newVersion;
}

void AggrSoftDeviceRow::SetNewVersion(const string& _newVersion)
{
    m_newVersion = _newVersion;
    m_newVersionHasBeenSet = true;
}

bool AggrSoftDeviceRow::NewVersionHasBeenSet() const
{
    return m_newVersionHasBeenSet;
}

int64_t AggrSoftDeviceRow::GetUpgradeSoftId() const
{
    return m_upgradeSoftId;
}

void AggrSoftDeviceRow::SetUpgradeSoftId(const int64_t& _upgradeSoftId)
{
    m_upgradeSoftId = _upgradeSoftId;
    m_upgradeSoftIdHasBeenSet = true;
}

bool AggrSoftDeviceRow::UpgradeSoftIdHasBeenSet() const
{
    return m_upgradeSoftIdHasBeenSet;
}

string AggrSoftDeviceRow::GetRemarkName() const
{
    return m_remarkName;
}

void AggrSoftDeviceRow::SetRemarkName(const string& _remarkName)
{
    m_remarkName = _remarkName;
    m_remarkNameHasBeenSet = true;
}

bool AggrSoftDeviceRow::RemarkNameHasBeenSet() const
{
    return m_remarkNameHasBeenSet;
}

