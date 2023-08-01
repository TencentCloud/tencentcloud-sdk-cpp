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

#include <tencentcloud/cls/v20201016/model/ConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ConfigInfo::ConfigInfo() :
    m_configIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_extractRuleHasBeenSet(false),
    m_excludePathsHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userDefineRuleHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
{
}

CoreInternalOutcome ConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LogFormat") && !value["LogFormat"].IsNull())
    {
        if (!value["LogFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.LogFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFormat = string(value["LogFormat"].GetString());
        m_logFormatHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("ExtractRule") && !value["ExtractRule"].IsNull())
    {
        if (!value["ExtractRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.ExtractRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extractRule.Deserialize(value["ExtractRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extractRuleHasBeenSet = true;
    }

    if (value.HasMember("ExcludePaths") && !value["ExcludePaths"].IsNull())
    {
        if (!value["ExcludePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.ExcludePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExcludePathInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_excludePaths.push_back(item);
        }
        m_excludePathsHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserDefineRule") && !value["UserDefineRule"].IsNull())
    {
        if (!value["UserDefineRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.UserDefineRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDefineRule = string(value["UserDefineRule"].GetString());
        m_userDefineRuleHasBeenSet = true;
    }

    if (value.HasMember("AdvancedConfig") && !value["AdvancedConfig"].IsNull())
    {
        if (!value["AdvancedConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigInfo.AdvancedConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedConfig = string(value["AdvancedConfig"].GetString());
        m_advancedConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_logFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_extractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_excludePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludePaths.begin(); itr != m_excludePaths.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userDefineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDefineRule.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedConfig.c_str(), allocator).Move(), allocator);
    }

}


string ConfigInfo::GetConfigId() const
{
    return m_configId;
}

void ConfigInfo::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ConfigInfo::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ConfigInfo::GetName() const
{
    return m_name;
}

void ConfigInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConfigInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConfigInfo::GetLogFormat() const
{
    return m_logFormat;
}

void ConfigInfo::SetLogFormat(const string& _logFormat)
{
    m_logFormat = _logFormat;
    m_logFormatHasBeenSet = true;
}

bool ConfigInfo::LogFormatHasBeenSet() const
{
    return m_logFormatHasBeenSet;
}

string ConfigInfo::GetPath() const
{
    return m_path;
}

void ConfigInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ConfigInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ConfigInfo::GetLogType() const
{
    return m_logType;
}

void ConfigInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ConfigInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

ExtractRuleInfo ConfigInfo::GetExtractRule() const
{
    return m_extractRule;
}

void ConfigInfo::SetExtractRule(const ExtractRuleInfo& _extractRule)
{
    m_extractRule = _extractRule;
    m_extractRuleHasBeenSet = true;
}

bool ConfigInfo::ExtractRuleHasBeenSet() const
{
    return m_extractRuleHasBeenSet;
}

vector<ExcludePathInfo> ConfigInfo::GetExcludePaths() const
{
    return m_excludePaths;
}

void ConfigInfo::SetExcludePaths(const vector<ExcludePathInfo>& _excludePaths)
{
    m_excludePaths = _excludePaths;
    m_excludePathsHasBeenSet = true;
}

bool ConfigInfo::ExcludePathsHasBeenSet() const
{
    return m_excludePathsHasBeenSet;
}

string ConfigInfo::GetOutput() const
{
    return m_output;
}

void ConfigInfo::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool ConfigInfo::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string ConfigInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ConfigInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ConfigInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ConfigInfo::GetCreateTime() const
{
    return m_createTime;
}

void ConfigInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConfigInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConfigInfo::GetUserDefineRule() const
{
    return m_userDefineRule;
}

void ConfigInfo::SetUserDefineRule(const string& _userDefineRule)
{
    m_userDefineRule = _userDefineRule;
    m_userDefineRuleHasBeenSet = true;
}

bool ConfigInfo::UserDefineRuleHasBeenSet() const
{
    return m_userDefineRuleHasBeenSet;
}

string ConfigInfo::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void ConfigInfo::SetAdvancedConfig(const string& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool ConfigInfo::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}

