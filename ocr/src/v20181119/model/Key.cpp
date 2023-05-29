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

#include <tencentcloud/ocr/v20181119/model/Key.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

Key::Key() :
    m_autoNameHasBeenSet(false),
    m_configNameHasBeenSet(false)
{
}

CoreInternalOutcome Key::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoName") && !value["AutoName"].IsNull())
    {
        if (!value["AutoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Key.AutoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoName = string(value["AutoName"].GetString());
        m_autoNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Key.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Key::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoName.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

}


string Key::GetAutoName() const
{
    return m_autoName;
}

void Key::SetAutoName(const string& _autoName)
{
    m_autoName = _autoName;
    m_autoNameHasBeenSet = true;
}

bool Key::AutoNameHasBeenSet() const
{
    return m_autoNameHasBeenSet;
}

string Key::GetConfigName() const
{
    return m_configName;
}

void Key::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool Key::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

