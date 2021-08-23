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

#include <tencentcloud/tsf/v20180326/model/FileConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

FileConfig::FileConfig() :
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_configVersionHasBeenSet(false),
    m_configVersionDescHasBeenSet(false),
    m_configFileNameHasBeenSet(false),
    m_configFileValueHasBeenSet(false),
    m_configFileCodeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_deleteFlagHasBeenSet(false),
    m_configVersionCountHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_configFilePathHasBeenSet(false),
    m_configPostCmdHasBeenSet(false),
    m_configFileValueLengthHasBeenSet(false)
{
}

CoreInternalOutcome FileConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersion") && !value["ConfigVersion"].IsNull())
    {
        if (!value["ConfigVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configVersion = string(value["ConfigVersion"].GetString());
        m_configVersionHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersionDesc") && !value["ConfigVersionDesc"].IsNull())
    {
        if (!value["ConfigVersionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigVersionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configVersionDesc = string(value["ConfigVersionDesc"].GetString());
        m_configVersionDescHasBeenSet = true;
    }

    if (value.HasMember("ConfigFileName") && !value["ConfigFileName"].IsNull())
    {
        if (!value["ConfigFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configFileName = string(value["ConfigFileName"].GetString());
        m_configFileNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigFileValue") && !value["ConfigFileValue"].IsNull())
    {
        if (!value["ConfigFileValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigFileValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configFileValue = string(value["ConfigFileValue"].GetString());
        m_configFileValueHasBeenSet = true;
    }

    if (value.HasMember("ConfigFileCode") && !value["ConfigFileCode"].IsNull())
    {
        if (!value["ConfigFileCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigFileCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configFileCode = string(value["ConfigFileCode"].GetString());
        m_configFileCodeHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlag") && !value["DeleteFlag"].IsNull())
    {
        if (!value["DeleteFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.DeleteFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = value["DeleteFlag"].GetBool();
        m_deleteFlagHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersionCount") && !value["ConfigVersionCount"].IsNull())
    {
        if (!value["ConfigVersionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigVersionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configVersionCount = value["ConfigVersionCount"].GetInt64();
        m_configVersionCountHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigFilePath") && !value["ConfigFilePath"].IsNull())
    {
        if (!value["ConfigFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configFilePath = string(value["ConfigFilePath"].GetString());
        m_configFilePathHasBeenSet = true;
    }

    if (value.HasMember("ConfigPostCmd") && !value["ConfigPostCmd"].IsNull())
    {
        if (!value["ConfigPostCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigPostCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configPostCmd = string(value["ConfigPostCmd"].GetString());
        m_configPostCmdHasBeenSet = true;
    }

    if (value.HasMember("ConfigFileValueLength") && !value["ConfigFileValueLength"].IsNull())
    {
        if (!value["ConfigFileValueLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileConfig.ConfigFileValueLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configFileValueLength = value["ConfigFileValueLength"].GetUint64();
        m_configFileValueLengthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configVersionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configFileValue.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configFileCode.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteFlag, allocator);
    }

    if (m_configVersionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configVersionCount, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_configPostCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigPostCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configPostCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileValueLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileValueLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configFileValueLength, allocator);
    }

}


string FileConfig::GetConfigId() const
{
    return m_configId;
}

void FileConfig::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool FileConfig::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string FileConfig::GetConfigName() const
{
    return m_configName;
}

void FileConfig::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool FileConfig::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string FileConfig::GetConfigVersion() const
{
    return m_configVersion;
}

void FileConfig::SetConfigVersion(const string& _configVersion)
{
    m_configVersion = _configVersion;
    m_configVersionHasBeenSet = true;
}

bool FileConfig::ConfigVersionHasBeenSet() const
{
    return m_configVersionHasBeenSet;
}

string FileConfig::GetConfigVersionDesc() const
{
    return m_configVersionDesc;
}

void FileConfig::SetConfigVersionDesc(const string& _configVersionDesc)
{
    m_configVersionDesc = _configVersionDesc;
    m_configVersionDescHasBeenSet = true;
}

bool FileConfig::ConfigVersionDescHasBeenSet() const
{
    return m_configVersionDescHasBeenSet;
}

string FileConfig::GetConfigFileName() const
{
    return m_configFileName;
}

void FileConfig::SetConfigFileName(const string& _configFileName)
{
    m_configFileName = _configFileName;
    m_configFileNameHasBeenSet = true;
}

bool FileConfig::ConfigFileNameHasBeenSet() const
{
    return m_configFileNameHasBeenSet;
}

string FileConfig::GetConfigFileValue() const
{
    return m_configFileValue;
}

void FileConfig::SetConfigFileValue(const string& _configFileValue)
{
    m_configFileValue = _configFileValue;
    m_configFileValueHasBeenSet = true;
}

bool FileConfig::ConfigFileValueHasBeenSet() const
{
    return m_configFileValueHasBeenSet;
}

string FileConfig::GetConfigFileCode() const
{
    return m_configFileCode;
}

void FileConfig::SetConfigFileCode(const string& _configFileCode)
{
    m_configFileCode = _configFileCode;
    m_configFileCodeHasBeenSet = true;
}

bool FileConfig::ConfigFileCodeHasBeenSet() const
{
    return m_configFileCodeHasBeenSet;
}

string FileConfig::GetCreationTime() const
{
    return m_creationTime;
}

void FileConfig::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool FileConfig::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string FileConfig::GetApplicationId() const
{
    return m_applicationId;
}

void FileConfig::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool FileConfig::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string FileConfig::GetApplicationName() const
{
    return m_applicationName;
}

void FileConfig::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool FileConfig::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

bool FileConfig::GetDeleteFlag() const
{
    return m_deleteFlag;
}

void FileConfig::SetDeleteFlag(const bool& _deleteFlag)
{
    m_deleteFlag = _deleteFlag;
    m_deleteFlagHasBeenSet = true;
}

bool FileConfig::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

int64_t FileConfig::GetConfigVersionCount() const
{
    return m_configVersionCount;
}

void FileConfig::SetConfigVersionCount(const int64_t& _configVersionCount)
{
    m_configVersionCount = _configVersionCount;
    m_configVersionCountHasBeenSet = true;
}

bool FileConfig::ConfigVersionCountHasBeenSet() const
{
    return m_configVersionCountHasBeenSet;
}

string FileConfig::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void FileConfig::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool FileConfig::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string FileConfig::GetConfigFilePath() const
{
    return m_configFilePath;
}

void FileConfig::SetConfigFilePath(const string& _configFilePath)
{
    m_configFilePath = _configFilePath;
    m_configFilePathHasBeenSet = true;
}

bool FileConfig::ConfigFilePathHasBeenSet() const
{
    return m_configFilePathHasBeenSet;
}

string FileConfig::GetConfigPostCmd() const
{
    return m_configPostCmd;
}

void FileConfig::SetConfigPostCmd(const string& _configPostCmd)
{
    m_configPostCmd = _configPostCmd;
    m_configPostCmdHasBeenSet = true;
}

bool FileConfig::ConfigPostCmdHasBeenSet() const
{
    return m_configPostCmdHasBeenSet;
}

uint64_t FileConfig::GetConfigFileValueLength() const
{
    return m_configFileValueLength;
}

void FileConfig::SetConfigFileValueLength(const uint64_t& _configFileValueLength)
{
    m_configFileValueLength = _configFileValueLength;
    m_configFileValueLengthHasBeenSet = true;
}

bool FileConfig::ConfigFileValueLengthHasBeenSet() const
{
    return m_configFileValueLengthHasBeenSet;
}

