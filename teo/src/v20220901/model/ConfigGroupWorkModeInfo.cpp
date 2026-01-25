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

#include <tencentcloud/teo/v20220901/model/ConfigGroupWorkModeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ConfigGroupWorkModeInfo::ConfigGroupWorkModeInfo() :
    m_configGroupTypeHasBeenSet(false),
    m_workModeHasBeenSet(false)
{
}

CoreInternalOutcome ConfigGroupWorkModeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigGroupType") && !value["ConfigGroupType"].IsNull())
    {
        if (!value["ConfigGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigGroupWorkModeInfo.ConfigGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configGroupType = string(value["ConfigGroupType"].GetString());
        m_configGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkMode") && !value["WorkMode"].IsNull())
    {
        if (!value["WorkMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigGroupWorkModeInfo.WorkMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workMode = string(value["WorkMode"].GetString());
        m_workModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigGroupWorkModeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_workModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workMode.c_str(), allocator).Move(), allocator);
    }

}


string ConfigGroupWorkModeInfo::GetConfigGroupType() const
{
    return m_configGroupType;
}

void ConfigGroupWorkModeInfo::SetConfigGroupType(const string& _configGroupType)
{
    m_configGroupType = _configGroupType;
    m_configGroupTypeHasBeenSet = true;
}

bool ConfigGroupWorkModeInfo::ConfigGroupTypeHasBeenSet() const
{
    return m_configGroupTypeHasBeenSet;
}

string ConfigGroupWorkModeInfo::GetWorkMode() const
{
    return m_workMode;
}

void ConfigGroupWorkModeInfo::SetWorkMode(const string& _workMode)
{
    m_workMode = _workMode;
    m_workModeHasBeenSet = true;
}

bool ConfigGroupWorkModeInfo::WorkModeHasBeenSet() const
{
    return m_workModeHasBeenSet;
}

