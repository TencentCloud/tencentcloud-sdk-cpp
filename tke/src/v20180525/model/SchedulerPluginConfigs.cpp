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

#include <tencentcloud/tke/v20180525/model/SchedulerPluginConfigs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

SchedulerPluginConfigs::SchedulerPluginConfigs() :
    m_nameHasBeenSet(false),
    m_argsHasBeenSet(false)
{
}

CoreInternalOutcome SchedulerPluginConfigs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerPluginConfigs.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulerPluginConfigs.Args` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_args = string(value["Args"].GetString());
        m_argsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulerPluginConfigs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_args.c_str(), allocator).Move(), allocator);
    }

}


string SchedulerPluginConfigs::GetName() const
{
    return m_name;
}

void SchedulerPluginConfigs::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SchedulerPluginConfigs::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SchedulerPluginConfigs::GetArgs() const
{
    return m_args;
}

void SchedulerPluginConfigs::SetArgs(const string& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool SchedulerPluginConfigs::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

