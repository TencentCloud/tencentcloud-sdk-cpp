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

#include <tencentcloud/tcss/v20201101/model/VulAffectedImageComponentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulAffectedImageComponentInfo::VulAffectedImageComponentInfo() :
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_fixedVersionHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CoreInternalOutcome VulAffectedImageComponentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageComponentInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageComponentInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("FixedVersion") && !value["FixedVersion"].IsNull())
    {
        if (!value["FixedVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageComponentInfo.FixedVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixedVersion = string(value["FixedVersion"].GetString());
        m_fixedVersionHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageComponentInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulAffectedImageComponentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fixedVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixedVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

}


string VulAffectedImageComponentInfo::GetName() const
{
    return m_name;
}

void VulAffectedImageComponentInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulAffectedImageComponentInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VulAffectedImageComponentInfo::GetVersion() const
{
    return m_version;
}

void VulAffectedImageComponentInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool VulAffectedImageComponentInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string VulAffectedImageComponentInfo::GetFixedVersion() const
{
    return m_fixedVersion;
}

void VulAffectedImageComponentInfo::SetFixedVersion(const string& _fixedVersion)
{
    m_fixedVersion = _fixedVersion;
    m_fixedVersionHasBeenSet = true;
}

bool VulAffectedImageComponentInfo::FixedVersionHasBeenSet() const
{
    return m_fixedVersionHasBeenSet;
}

string VulAffectedImageComponentInfo::GetPath() const
{
    return m_path;
}

void VulAffectedImageComponentInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool VulAffectedImageComponentInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

