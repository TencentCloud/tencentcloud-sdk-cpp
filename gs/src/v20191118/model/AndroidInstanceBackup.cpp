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

#include <tencentcloud/gs/v20191118/model/AndroidInstanceBackup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstanceBackup::AndroidInstanceBackup() :
    m_backupIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_androidInstanceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstanceBackup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceBackup.BackupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = string(value["BackupId"].GetString());
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceBackup.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceBackup.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceBackup.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceId") && !value["AndroidInstanceId"].IsNull())
    {
        if (!value["AndroidInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceBackup.AndroidInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceId = string(value["AndroidInstanceId"].GetString());
        m_androidInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceBackup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstanceBackup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string AndroidInstanceBackup::GetBackupId() const
{
    return m_backupId;
}

void AndroidInstanceBackup::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool AndroidInstanceBackup::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string AndroidInstanceBackup::GetState() const
{
    return m_state;
}

void AndroidInstanceBackup::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AndroidInstanceBackup::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string AndroidInstanceBackup::GetZone() const
{
    return m_zone;
}

void AndroidInstanceBackup::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool AndroidInstanceBackup::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t AndroidInstanceBackup::GetSize() const
{
    return m_size;
}

void AndroidInstanceBackup::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool AndroidInstanceBackup::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string AndroidInstanceBackup::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void AndroidInstanceBackup::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool AndroidInstanceBackup::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

string AndroidInstanceBackup::GetCreateTime() const
{
    return m_createTime;
}

void AndroidInstanceBackup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AndroidInstanceBackup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

