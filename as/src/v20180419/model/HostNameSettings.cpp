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

#include <tencentcloud/as/v20180419/model/HostNameSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

HostNameSettings::HostNameSettings() :
    m_hostNameHasBeenSet(false),
    m_hostNameStyleHasBeenSet(false),
    m_hostNameSuffixHasBeenSet(false)
{
}

CoreInternalOutcome HostNameSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostNameSettings.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostNameStyle") && !value["HostNameStyle"].IsNull())
    {
        if (!value["HostNameStyle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostNameSettings.HostNameStyle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostNameStyle = string(value["HostNameStyle"].GetString());
        m_hostNameStyleHasBeenSet = true;
    }

    if (value.HasMember("HostNameSuffix") && !value["HostNameSuffix"].IsNull())
    {
        if (!value["HostNameSuffix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostNameSettings.HostNameSuffix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostNameSuffix = string(value["HostNameSuffix"].GetString());
        m_hostNameSuffixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostNameSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNameStyle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostNameStyle.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameSuffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNameSuffix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostNameSuffix.c_str(), allocator).Move(), allocator);
    }

}


string HostNameSettings::GetHostName() const
{
    return m_hostName;
}

void HostNameSettings::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool HostNameSettings::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string HostNameSettings::GetHostNameStyle() const
{
    return m_hostNameStyle;
}

void HostNameSettings::SetHostNameStyle(const string& _hostNameStyle)
{
    m_hostNameStyle = _hostNameStyle;
    m_hostNameStyleHasBeenSet = true;
}

bool HostNameSettings::HostNameStyleHasBeenSet() const
{
    return m_hostNameStyleHasBeenSet;
}

string HostNameSettings::GetHostNameSuffix() const
{
    return m_hostNameSuffix;
}

void HostNameSettings::SetHostNameSuffix(const string& _hostNameSuffix)
{
    m_hostNameSuffix = _hostNameSuffix;
    m_hostNameSuffixHasBeenSet = true;
}

bool HostNameSettings::HostNameSuffixHasBeenSet() const
{
    return m_hostNameSuffixHasBeenSet;
}

