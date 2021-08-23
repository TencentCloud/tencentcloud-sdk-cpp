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

#include <tencentcloud/tsf/v20180326/model/Config.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

Config::Config() :
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_configVersionHasBeenSet(false),
    m_configVersionDescHasBeenSet(false),
    m_configValueHasBeenSet(false),
    m_configTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_deleteFlagHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_configVersionCountHasBeenSet(false)
{
}

CoreInternalOutcome Config::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersion") && !value["ConfigVersion"].IsNull())
    {
        if (!value["ConfigVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.ConfigVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configVersion = string(value["ConfigVersion"].GetString());
        m_configVersionHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersionDesc") && !value["ConfigVersionDesc"].IsNull())
    {
        if (!value["ConfigVersionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.ConfigVersionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configVersionDesc = string(value["ConfigVersionDesc"].GetString());
        m_configVersionDescHasBeenSet = true;
    }

    if (value.HasMember("ConfigValue") && !value["ConfigValue"].IsNull())
    {
        if (!value["ConfigValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.ConfigValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configValue = string(value["ConfigValue"].GetString());
        m_configValueHasBeenSet = true;
    }

    if (value.HasMember("ConfigType") && !value["ConfigType"].IsNull())
    {
        if (!value["ConfigType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.ConfigType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configType = string(value["ConfigType"].GetString());
        m_configTypeHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlag") && !value["DeleteFlag"].IsNull())
    {
        if (!value["DeleteFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Config.DeleteFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = value["DeleteFlag"].GetBool();
        m_deleteFlagHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Config.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersionCount") && !value["ConfigVersionCount"].IsNull())
    {
        if (!value["ConfigVersionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Config.ConfigVersionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configVersionCount = value["ConfigVersionCount"].GetInt64();
        m_configVersionCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Config::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_configValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configValue.c_str(), allocator).Move(), allocator);
    }

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configType.c_str(), allocator).Move(), allocator);
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

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configVersionCount, allocator);
    }

}


string Config::GetConfigId() const
{
    return m_configId;
}

void Config::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool Config::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string Config::GetConfigName() const
{
    return m_configName;
}

void Config::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool Config::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string Config::GetConfigVersion() const
{
    return m_configVersion;
}

void Config::SetConfigVersion(const string& _configVersion)
{
    m_configVersion = _configVersion;
    m_configVersionHasBeenSet = true;
}

bool Config::ConfigVersionHasBeenSet() const
{
    return m_configVersionHasBeenSet;
}

string Config::GetConfigVersionDesc() const
{
    return m_configVersionDesc;
}

void Config::SetConfigVersionDesc(const string& _configVersionDesc)
{
    m_configVersionDesc = _configVersionDesc;
    m_configVersionDescHasBeenSet = true;
}

bool Config::ConfigVersionDescHasBeenSet() const
{
    return m_configVersionDescHasBeenSet;
}

string Config::GetConfigValue() const
{
    return m_configValue;
}

void Config::SetConfigValue(const string& _configValue)
{
    m_configValue = _configValue;
    m_configValueHasBeenSet = true;
}

bool Config::ConfigValueHasBeenSet() const
{
    return m_configValueHasBeenSet;
}

string Config::GetConfigType() const
{
    return m_configType;
}

void Config::SetConfigType(const string& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool Config::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

string Config::GetCreationTime() const
{
    return m_creationTime;
}

void Config::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool Config::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string Config::GetApplicationId() const
{
    return m_applicationId;
}

void Config::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool Config::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string Config::GetApplicationName() const
{
    return m_applicationName;
}

void Config::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool Config::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

bool Config::GetDeleteFlag() const
{
    return m_deleteFlag;
}

void Config::SetDeleteFlag(const bool& _deleteFlag)
{
    m_deleteFlag = _deleteFlag;
    m_deleteFlagHasBeenSet = true;
}

bool Config::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

string Config::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void Config::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool Config::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

int64_t Config::GetConfigVersionCount() const
{
    return m_configVersionCount;
}

void Config::SetConfigVersionCount(const int64_t& _configVersionCount)
{
    m_configVersionCount = _configVersionCount;
    m_configVersionCountHasBeenSet = true;
}

bool Config::ConfigVersionCountHasBeenSet() const
{
    return m_configVersionCountHasBeenSet;
}

