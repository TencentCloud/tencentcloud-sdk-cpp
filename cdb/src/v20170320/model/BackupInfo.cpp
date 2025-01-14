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

#include <tencentcloud/cdb/v20170320/model/BackupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

BackupInfo::BackupInfo() :
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_intranetUrlHasBeenSet(false),
    m_internetUrlHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_wayHasBeenSet(false),
    m_manualBackupNameHasBeenSet(false),
    m_saveModeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_remoteInfoHasBeenSet(false),
    m_cosStorageTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_encryptionFlagHasBeenSet(false),
    m_executedGTIDSetHasBeenSet(false),
    m_mD5HasBeenSet(false)
{
}

CoreInternalOutcome BackupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("IntranetUrl") && !value["IntranetUrl"].IsNull())
    {
        if (!value["IntranetUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.IntranetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetUrl = string(value["IntranetUrl"].GetString());
        m_intranetUrlHasBeenSet = true;
    }

    if (value.HasMember("InternetUrl") && !value["InternetUrl"].IsNull())
    {
        if (!value["InternetUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.InternetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetUrl = string(value["InternetUrl"].GetString());
        m_internetUrlHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = value["BackupId"].GetInt64();
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Way") && !value["Way"].IsNull())
    {
        if (!value["Way"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Way` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_way = string(value["Way"].GetString());
        m_wayHasBeenSet = true;
    }

    if (value.HasMember("ManualBackupName") && !value["ManualBackupName"].IsNull())
    {
        if (!value["ManualBackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.ManualBackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackupName = string(value["ManualBackupName"].GetString());
        m_manualBackupNameHasBeenSet = true;
    }

    if (value.HasMember("SaveMode") && !value["SaveMode"].IsNull())
    {
        if (!value["SaveMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.SaveMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saveMode = string(value["SaveMode"].GetString());
        m_saveModeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RemoteInfo") && !value["RemoteInfo"].IsNull())
    {
        if (!value["RemoteInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupInfo.RemoteInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoteInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RemoteBackupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_remoteInfo.push_back(item);
        }
        m_remoteInfoHasBeenSet = true;
    }

    if (value.HasMember("CosStorageType") && !value["CosStorageType"].IsNull())
    {
        if (!value["CosStorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.CosStorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cosStorageType = value["CosStorageType"].GetInt64();
        m_cosStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("EncryptionFlag") && !value["EncryptionFlag"].IsNull())
    {
        if (!value["EncryptionFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.EncryptionFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionFlag = string(value["EncryptionFlag"].GetString());
        m_encryptionFlagHasBeenSet = true;
    }

    if (value.HasMember("ExecutedGTIDSet") && !value["ExecutedGTIDSet"].IsNull())
    {
        if (!value["ExecutedGTIDSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.ExecutedGTIDSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executedGTIDSet = string(value["ExecutedGTIDSet"].GetString());
        m_executedGTIDSetHasBeenSet = true;
    }

    if (value.HasMember("MD5") && !value["MD5"].IsNull())
    {
        if (!value["MD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(value["MD5"].GetString());
        m_mD5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_internetUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_wayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Way";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_way.c_str(), allocator).Move(), allocator);
    }

    if (m_manualBackupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manualBackupName.c_str(), allocator).Move(), allocator);
    }

    if (m_saveModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saveMode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_remoteInfo.begin(); itr != m_remoteInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cosStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosStorageType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptionFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_executedGTIDSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutedGTIDSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executedGTIDSet.c_str(), allocator).Move(), allocator);
    }

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

}


string BackupInfo::GetName() const
{
    return m_name;
}

void BackupInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BackupInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t BackupInfo::GetSize() const
{
    return m_size;
}

void BackupInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool BackupInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string BackupInfo::GetDate() const
{
    return m_date;
}

void BackupInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool BackupInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string BackupInfo::GetIntranetUrl() const
{
    return m_intranetUrl;
}

void BackupInfo::SetIntranetUrl(const string& _intranetUrl)
{
    m_intranetUrl = _intranetUrl;
    m_intranetUrlHasBeenSet = true;
}

bool BackupInfo::IntranetUrlHasBeenSet() const
{
    return m_intranetUrlHasBeenSet;
}

string BackupInfo::GetInternetUrl() const
{
    return m_internetUrl;
}

void BackupInfo::SetInternetUrl(const string& _internetUrl)
{
    m_internetUrl = _internetUrl;
    m_internetUrlHasBeenSet = true;
}

bool BackupInfo::InternetUrlHasBeenSet() const
{
    return m_internetUrlHasBeenSet;
}

string BackupInfo::GetType() const
{
    return m_type;
}

void BackupInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BackupInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t BackupInfo::GetBackupId() const
{
    return m_backupId;
}

void BackupInfo::SetBackupId(const int64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool BackupInfo::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string BackupInfo::GetStatus() const
{
    return m_status;
}

void BackupInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BackupInfo::GetFinishTime() const
{
    return m_finishTime;
}

void BackupInfo::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool BackupInfo::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string BackupInfo::GetCreator() const
{
    return m_creator;
}

void BackupInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool BackupInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string BackupInfo::GetStartTime() const
{
    return m_startTime;
}

void BackupInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BackupInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BackupInfo::GetMethod() const
{
    return m_method;
}

void BackupInfo::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool BackupInfo::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string BackupInfo::GetWay() const
{
    return m_way;
}

void BackupInfo::SetWay(const string& _way)
{
    m_way = _way;
    m_wayHasBeenSet = true;
}

bool BackupInfo::WayHasBeenSet() const
{
    return m_wayHasBeenSet;
}

string BackupInfo::GetManualBackupName() const
{
    return m_manualBackupName;
}

void BackupInfo::SetManualBackupName(const string& _manualBackupName)
{
    m_manualBackupName = _manualBackupName;
    m_manualBackupNameHasBeenSet = true;
}

bool BackupInfo::ManualBackupNameHasBeenSet() const
{
    return m_manualBackupNameHasBeenSet;
}

string BackupInfo::GetSaveMode() const
{
    return m_saveMode;
}

void BackupInfo::SetSaveMode(const string& _saveMode)
{
    m_saveMode = _saveMode;
    m_saveModeHasBeenSet = true;
}

bool BackupInfo::SaveModeHasBeenSet() const
{
    return m_saveModeHasBeenSet;
}

string BackupInfo::GetRegion() const
{
    return m_region;
}

void BackupInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BackupInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<RemoteBackupInfo> BackupInfo::GetRemoteInfo() const
{
    return m_remoteInfo;
}

void BackupInfo::SetRemoteInfo(const vector<RemoteBackupInfo>& _remoteInfo)
{
    m_remoteInfo = _remoteInfo;
    m_remoteInfoHasBeenSet = true;
}

bool BackupInfo::RemoteInfoHasBeenSet() const
{
    return m_remoteInfoHasBeenSet;
}

int64_t BackupInfo::GetCosStorageType() const
{
    return m_cosStorageType;
}

void BackupInfo::SetCosStorageType(const int64_t& _cosStorageType)
{
    m_cosStorageType = _cosStorageType;
    m_cosStorageTypeHasBeenSet = true;
}

bool BackupInfo::CosStorageTypeHasBeenSet() const
{
    return m_cosStorageTypeHasBeenSet;
}

string BackupInfo::GetInstanceId() const
{
    return m_instanceId;
}

void BackupInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BackupInfo::GetEncryptionFlag() const
{
    return m_encryptionFlag;
}

void BackupInfo::SetEncryptionFlag(const string& _encryptionFlag)
{
    m_encryptionFlag = _encryptionFlag;
    m_encryptionFlagHasBeenSet = true;
}

bool BackupInfo::EncryptionFlagHasBeenSet() const
{
    return m_encryptionFlagHasBeenSet;
}

string BackupInfo::GetExecutedGTIDSet() const
{
    return m_executedGTIDSet;
}

void BackupInfo::SetExecutedGTIDSet(const string& _executedGTIDSet)
{
    m_executedGTIDSet = _executedGTIDSet;
    m_executedGTIDSetHasBeenSet = true;
}

bool BackupInfo::ExecutedGTIDSetHasBeenSet() const
{
    return m_executedGTIDSetHasBeenSet;
}

string BackupInfo::GetMD5() const
{
    return m_mD5;
}

void BackupInfo::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool BackupInfo::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

