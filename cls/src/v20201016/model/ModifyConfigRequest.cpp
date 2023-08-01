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

#include <tencentcloud/cls/v20201016/model/ModifyConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyConfigRequest::ModifyConfigRequest() :
    m_configIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_extractRuleHasBeenSet(false),
    m_excludePathsHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_userDefineRuleHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
{
}

string ModifyConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_extractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_excludePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludePaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludePaths.begin(); itr != m_excludePaths.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_userDefineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userDefineRule.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advancedConfig.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConfigRequest::GetConfigId() const
{
    return m_configId;
}

void ModifyConfigRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ModifyConfigRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ModifyConfigRequest::GetName() const
{
    return m_name;
}

void ModifyConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyConfigRequest::GetPath() const
{
    return m_path;
}

void ModifyConfigRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ModifyConfigRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ModifyConfigRequest::GetLogType() const
{
    return m_logType;
}

void ModifyConfigRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ModifyConfigRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

ExtractRuleInfo ModifyConfigRequest::GetExtractRule() const
{
    return m_extractRule;
}

void ModifyConfigRequest::SetExtractRule(const ExtractRuleInfo& _extractRule)
{
    m_extractRule = _extractRule;
    m_extractRuleHasBeenSet = true;
}

bool ModifyConfigRequest::ExtractRuleHasBeenSet() const
{
    return m_extractRuleHasBeenSet;
}

vector<ExcludePathInfo> ModifyConfigRequest::GetExcludePaths() const
{
    return m_excludePaths;
}

void ModifyConfigRequest::SetExcludePaths(const vector<ExcludePathInfo>& _excludePaths)
{
    m_excludePaths = _excludePaths;
    m_excludePathsHasBeenSet = true;
}

bool ModifyConfigRequest::ExcludePathsHasBeenSet() const
{
    return m_excludePathsHasBeenSet;
}

string ModifyConfigRequest::GetOutput() const
{
    return m_output;
}

void ModifyConfigRequest::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool ModifyConfigRequest::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string ModifyConfigRequest::GetUserDefineRule() const
{
    return m_userDefineRule;
}

void ModifyConfigRequest::SetUserDefineRule(const string& _userDefineRule)
{
    m_userDefineRule = _userDefineRule;
    m_userDefineRuleHasBeenSet = true;
}

bool ModifyConfigRequest::UserDefineRuleHasBeenSet() const
{
    return m_userDefineRuleHasBeenSet;
}

string ModifyConfigRequest::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void ModifyConfigRequest::SetAdvancedConfig(const string& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool ModifyConfigRequest::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}


