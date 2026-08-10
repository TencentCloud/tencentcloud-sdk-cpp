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

#include <tencentcloud/csip/v20221121/model/ComponentDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ComponentDetailItem::ComponentDetailItem() :
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_fixCommandHasBeenSet(false)
{
}

CoreInternalOutcome ComponentDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentDetailItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentDetailItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentDetailItem.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("FixCommand") && !value["FixCommand"].IsNull())
    {
        if (!value["FixCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentDetailItem.FixCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixCommand = string(value["FixCommand"].GetString());
        m_fixCommandHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_fixCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixCommand.c_str(), allocator).Move(), allocator);
    }

}


string ComponentDetailItem::GetName() const
{
    return m_name;
}

void ComponentDetailItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComponentDetailItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ComponentDetailItem::GetVersion() const
{
    return m_version;
}

void ComponentDetailItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ComponentDetailItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ComponentDetailItem::GetPath() const
{
    return m_path;
}

void ComponentDetailItem::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ComponentDetailItem::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ComponentDetailItem::GetFixCommand() const
{
    return m_fixCommand;
}

void ComponentDetailItem::SetFixCommand(const string& _fixCommand)
{
    m_fixCommand = _fixCommand;
    m_fixCommandHasBeenSet = true;
}

bool ComponentDetailItem::FixCommandHasBeenSet() const
{
    return m_fixCommandHasBeenSet;
}

