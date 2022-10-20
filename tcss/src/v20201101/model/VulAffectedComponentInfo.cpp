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

#include <tencentcloud/tcss/v20201101/model/VulAffectedComponentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulAffectedComponentInfo::VulAffectedComponentInfo() :
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_fixedVersionHasBeenSet(false)
{
}

CoreInternalOutcome VulAffectedComponentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedComponentInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulAffectedComponentInfo.Version` is not array type"));

        const rapidjson::Value &tmpValue = value["Version"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_version.push_back((*itr).GetString());
        }
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("FixedVersion") && !value["FixedVersion"].IsNull())
    {
        if (!value["FixedVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulAffectedComponentInfo.FixedVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["FixedVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fixedVersion.push_back((*itr).GetString());
        }
        m_fixedVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulAffectedComponentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_version.begin(); itr != m_version.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fixedVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fixedVersion.begin(); itr != m_fixedVersion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string VulAffectedComponentInfo::GetName() const
{
    return m_name;
}

void VulAffectedComponentInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulAffectedComponentInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> VulAffectedComponentInfo::GetVersion() const
{
    return m_version;
}

void VulAffectedComponentInfo::SetVersion(const vector<string>& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool VulAffectedComponentInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<string> VulAffectedComponentInfo::GetFixedVersion() const
{
    return m_fixedVersion;
}

void VulAffectedComponentInfo::SetFixedVersion(const vector<string>& _fixedVersion)
{
    m_fixedVersion = _fixedVersion;
    m_fixedVersionHasBeenSet = true;
}

bool VulAffectedComponentInfo::FixedVersionHasBeenSet() const
{
    return m_fixedVersionHasBeenSet;
}

