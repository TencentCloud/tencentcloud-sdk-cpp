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

#include <tencentcloud/gs/v20191118/model/AndroidAppVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidAppVersionInfo::AndroidAppVersionInfo() :
    m_androidAppVersionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_uninstallCommandHasBeenSet(false),
    m_cleanupModeHasBeenSet(false),
    m_androidAppVersionNameHasBeenSet(false),
    m_activityHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_mD5HasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_packageNameHasBeenSet(false)
{
}

CoreInternalOutcome AndroidAppVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidAppVersion") && !value["AndroidAppVersion"].IsNull())
    {
        if (!value["AndroidAppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.AndroidAppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppVersion = string(value["AndroidAppVersion"].GetString());
        m_androidAppVersionHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("UninstallCommand") && !value["UninstallCommand"].IsNull())
    {
        if (!value["UninstallCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.UninstallCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uninstallCommand = string(value["UninstallCommand"].GetString());
        m_uninstallCommandHasBeenSet = true;
    }

    if (value.HasMember("CleanupMode") && !value["CleanupMode"].IsNull())
    {
        if (!value["CleanupMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.CleanupMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cleanupMode = string(value["CleanupMode"].GetString());
        m_cleanupModeHasBeenSet = true;
    }

    if (value.HasMember("AndroidAppVersionName") && !value["AndroidAppVersionName"].IsNull())
    {
        if (!value["AndroidAppVersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.AndroidAppVersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppVersionName = string(value["AndroidAppVersionName"].GetString());
        m_androidAppVersionNameHasBeenSet = true;
    }

    if (value.HasMember("Activity") && !value["Activity"].IsNull())
    {
        if (!value["Activity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.Activity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activity = string(value["Activity"].GetString());
        m_activityHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("MD5") && !value["MD5"].IsNull())
    {
        if (!value["MD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(value["MD5"].GetString());
        m_mD5HasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppVersionInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidAppVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidAppVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_uninstallCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UninstallCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uninstallCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_cleanupModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanupMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cleanupMode.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppVersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_activityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Activity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activity.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

}


string AndroidAppVersionInfo::GetAndroidAppVersion() const
{
    return m_androidAppVersion;
}

void AndroidAppVersionInfo::SetAndroidAppVersion(const string& _androidAppVersion)
{
    m_androidAppVersion = _androidAppVersion;
    m_androidAppVersionHasBeenSet = true;
}

bool AndroidAppVersionInfo::AndroidAppVersionHasBeenSet() const
{
    return m_androidAppVersionHasBeenSet;
}

string AndroidAppVersionInfo::GetState() const
{
    return m_state;
}

void AndroidAppVersionInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AndroidAppVersionInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string AndroidAppVersionInfo::GetCreateTime() const
{
    return m_createTime;
}

void AndroidAppVersionInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AndroidAppVersionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AndroidAppVersionInfo::GetCommand() const
{
    return m_command;
}

void AndroidAppVersionInfo::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool AndroidAppVersionInfo::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string AndroidAppVersionInfo::GetUninstallCommand() const
{
    return m_uninstallCommand;
}

void AndroidAppVersionInfo::SetUninstallCommand(const string& _uninstallCommand)
{
    m_uninstallCommand = _uninstallCommand;
    m_uninstallCommandHasBeenSet = true;
}

bool AndroidAppVersionInfo::UninstallCommandHasBeenSet() const
{
    return m_uninstallCommandHasBeenSet;
}

string AndroidAppVersionInfo::GetCleanupMode() const
{
    return m_cleanupMode;
}

void AndroidAppVersionInfo::SetCleanupMode(const string& _cleanupMode)
{
    m_cleanupMode = _cleanupMode;
    m_cleanupModeHasBeenSet = true;
}

bool AndroidAppVersionInfo::CleanupModeHasBeenSet() const
{
    return m_cleanupModeHasBeenSet;
}

string AndroidAppVersionInfo::GetAndroidAppVersionName() const
{
    return m_androidAppVersionName;
}

void AndroidAppVersionInfo::SetAndroidAppVersionName(const string& _androidAppVersionName)
{
    m_androidAppVersionName = _androidAppVersionName;
    m_androidAppVersionNameHasBeenSet = true;
}

bool AndroidAppVersionInfo::AndroidAppVersionNameHasBeenSet() const
{
    return m_androidAppVersionNameHasBeenSet;
}

string AndroidAppVersionInfo::GetActivity() const
{
    return m_activity;
}

void AndroidAppVersionInfo::SetActivity(const string& _activity)
{
    m_activity = _activity;
    m_activityHasBeenSet = true;
}

bool AndroidAppVersionInfo::ActivityHasBeenSet() const
{
    return m_activityHasBeenSet;
}

string AndroidAppVersionInfo::GetVersionName() const
{
    return m_versionName;
}

void AndroidAppVersionInfo::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool AndroidAppVersionInfo::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string AndroidAppVersionInfo::GetMD5() const
{
    return m_mD5;
}

void AndroidAppVersionInfo::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool AndroidAppVersionInfo::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

int64_t AndroidAppVersionInfo::GetFileSize() const
{
    return m_fileSize;
}

void AndroidAppVersionInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool AndroidAppVersionInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string AndroidAppVersionInfo::GetPackageName() const
{
    return m_packageName;
}

void AndroidAppVersionInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool AndroidAppVersionInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

