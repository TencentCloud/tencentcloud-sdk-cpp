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

#include <tencentcloud/as/v20180419/model/InstanceNameSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

InstanceNameSettings::InstanceNameSettings() :
    m_instanceNameHasBeenSet(false),
    m_instanceNameStyleHasBeenSet(false),
    m_instanceNameSuffixHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNameSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNameSettings.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceNameStyle") && !value["InstanceNameStyle"].IsNull())
    {
        if (!value["InstanceNameStyle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNameSettings.InstanceNameStyle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNameStyle = string(value["InstanceNameStyle"].GetString());
        m_instanceNameStyleHasBeenSet = true;
    }

    if (value.HasMember("InstanceNameSuffix") && !value["InstanceNameSuffix"].IsNull())
    {
        if (!value["InstanceNameSuffix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNameSettings.InstanceNameSuffix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNameSuffix = string(value["InstanceNameSuffix"].GetString());
        m_instanceNameSuffixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNameSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNameStyle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceNameStyle.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameSuffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNameSuffix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceNameSuffix.c_str(), allocator).Move(), allocator);
    }

}


string InstanceNameSettings::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceNameSettings::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceNameSettings::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceNameSettings::GetInstanceNameStyle() const
{
    return m_instanceNameStyle;
}

void InstanceNameSettings::SetInstanceNameStyle(const string& _instanceNameStyle)
{
    m_instanceNameStyle = _instanceNameStyle;
    m_instanceNameStyleHasBeenSet = true;
}

bool InstanceNameSettings::InstanceNameStyleHasBeenSet() const
{
    return m_instanceNameStyleHasBeenSet;
}

string InstanceNameSettings::GetInstanceNameSuffix() const
{
    return m_instanceNameSuffix;
}

void InstanceNameSettings::SetInstanceNameSuffix(const string& _instanceNameSuffix)
{
    m_instanceNameSuffix = _instanceNameSuffix;
    m_instanceNameSuffixHasBeenSet = true;
}

bool InstanceNameSettings::InstanceNameSuffixHasBeenSet() const
{
    return m_instanceNameSuffixHasBeenSet;
}

