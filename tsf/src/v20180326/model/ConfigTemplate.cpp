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

#include <tencentcloud/tsf/v20180326/model/ConfigTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ConfigTemplate::ConfigTemplate() :
    m_configTemplateIdHasBeenSet(false),
    m_configTemplateNameHasBeenSet(false),
    m_configTemplateDescHasBeenSet(false),
    m_configTemplateTypeHasBeenSet(false),
    m_configTemplateValueHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ConfigTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigTemplateId") && !value["ConfigTemplateId"].IsNull())
    {
        if (!value["ConfigTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigTemplate.ConfigTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configTemplateId = string(value["ConfigTemplateId"].GetString());
        m_configTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigTemplateName") && !value["ConfigTemplateName"].IsNull())
    {
        if (!value["ConfigTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigTemplate.ConfigTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configTemplateName = string(value["ConfigTemplateName"].GetString());
        m_configTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigTemplateDesc") && !value["ConfigTemplateDesc"].IsNull())
    {
        if (!value["ConfigTemplateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigTemplate.ConfigTemplateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configTemplateDesc = string(value["ConfigTemplateDesc"].GetString());
        m_configTemplateDescHasBeenSet = true;
    }

    if (value.HasMember("ConfigTemplateType") && !value["ConfigTemplateType"].IsNull())
    {
        if (!value["ConfigTemplateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigTemplate.ConfigTemplateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configTemplateType = string(value["ConfigTemplateType"].GetString());
        m_configTemplateTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfigTemplateValue") && !value["ConfigTemplateValue"].IsNull())
    {
        if (!value["ConfigTemplateValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigTemplate.ConfigTemplateValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configTemplateValue = string(value["ConfigTemplateValue"].GetString());
        m_configTemplateValueHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_configTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_configTemplateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configTemplateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_configTemplateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configTemplateType.c_str(), allocator).Move(), allocator);
    }

    if (m_configTemplateValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configTemplateValue.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string ConfigTemplate::GetConfigTemplateId() const
{
    return m_configTemplateId;
}

void ConfigTemplate::SetConfigTemplateId(const string& _configTemplateId)
{
    m_configTemplateId = _configTemplateId;
    m_configTemplateIdHasBeenSet = true;
}

bool ConfigTemplate::ConfigTemplateIdHasBeenSet() const
{
    return m_configTemplateIdHasBeenSet;
}

string ConfigTemplate::GetConfigTemplateName() const
{
    return m_configTemplateName;
}

void ConfigTemplate::SetConfigTemplateName(const string& _configTemplateName)
{
    m_configTemplateName = _configTemplateName;
    m_configTemplateNameHasBeenSet = true;
}

bool ConfigTemplate::ConfigTemplateNameHasBeenSet() const
{
    return m_configTemplateNameHasBeenSet;
}

string ConfigTemplate::GetConfigTemplateDesc() const
{
    return m_configTemplateDesc;
}

void ConfigTemplate::SetConfigTemplateDesc(const string& _configTemplateDesc)
{
    m_configTemplateDesc = _configTemplateDesc;
    m_configTemplateDescHasBeenSet = true;
}

bool ConfigTemplate::ConfigTemplateDescHasBeenSet() const
{
    return m_configTemplateDescHasBeenSet;
}

string ConfigTemplate::GetConfigTemplateType() const
{
    return m_configTemplateType;
}

void ConfigTemplate::SetConfigTemplateType(const string& _configTemplateType)
{
    m_configTemplateType = _configTemplateType;
    m_configTemplateTypeHasBeenSet = true;
}

bool ConfigTemplate::ConfigTemplateTypeHasBeenSet() const
{
    return m_configTemplateTypeHasBeenSet;
}

string ConfigTemplate::GetConfigTemplateValue() const
{
    return m_configTemplateValue;
}

void ConfigTemplate::SetConfigTemplateValue(const string& _configTemplateValue)
{
    m_configTemplateValue = _configTemplateValue;
    m_configTemplateValueHasBeenSet = true;
}

bool ConfigTemplate::ConfigTemplateValueHasBeenSet() const
{
    return m_configTemplateValueHasBeenSet;
}

string ConfigTemplate::GetCreateTime() const
{
    return m_createTime;
}

void ConfigTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConfigTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConfigTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void ConfigTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ConfigTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

