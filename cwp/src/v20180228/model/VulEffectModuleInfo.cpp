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

#include <tencentcloud/cwp/v20180228/model/VulEffectModuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulEffectModuleInfo::VulEffectModuleInfo() :
    m_nameHasBeenSet(false),
    m_uuidsHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_fixCmdHasBeenSet(false),
    m_quuidsHasBeenSet(false)
{
}

CoreInternalOutcome VulEffectModuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectModuleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uuids") && !value["Uuids"].IsNull())
    {
        if (!value["Uuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulEffectModuleInfo.Uuids` is not array type"));

        const rapidjson::Value &tmpValue = value["Uuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uuids.push_back((*itr).GetString());
        }
        m_uuidsHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectModuleInfo.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectModuleInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectModuleInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("FixCmd") && !value["FixCmd"].IsNull())
    {
        if (!value["FixCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEffectModuleInfo.FixCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixCmd = string(value["FixCmd"].GetString());
        m_fixCmdHasBeenSet = true;
    }

    if (value.HasMember("Quuids") && !value["Quuids"].IsNull())
    {
        if (!value["Quuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulEffectModuleInfo.Quuids` is not array type"));

        const rapidjson::Value &tmpValue = value["Quuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_quuids.push_back((*itr).GetString());
        }
        m_quuidsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulEffectModuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uuids.begin(); itr != m_uuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_fixCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string VulEffectModuleInfo::GetName() const
{
    return m_name;
}

void VulEffectModuleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulEffectModuleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> VulEffectModuleInfo::GetUuids() const
{
    return m_uuids;
}

void VulEffectModuleInfo::SetUuids(const vector<string>& _uuids)
{
    m_uuids = _uuids;
    m_uuidsHasBeenSet = true;
}

bool VulEffectModuleInfo::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}

string VulEffectModuleInfo::GetRule() const
{
    return m_rule;
}

void VulEffectModuleInfo::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool VulEffectModuleInfo::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string VulEffectModuleInfo::GetPath() const
{
    return m_path;
}

void VulEffectModuleInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool VulEffectModuleInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string VulEffectModuleInfo::GetVersion() const
{
    return m_version;
}

void VulEffectModuleInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool VulEffectModuleInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string VulEffectModuleInfo::GetFixCmd() const
{
    return m_fixCmd;
}

void VulEffectModuleInfo::SetFixCmd(const string& _fixCmd)
{
    m_fixCmd = _fixCmd;
    m_fixCmdHasBeenSet = true;
}

bool VulEffectModuleInfo::FixCmdHasBeenSet() const
{
    return m_fixCmdHasBeenSet;
}

vector<string> VulEffectModuleInfo::GetQuuids() const
{
    return m_quuids;
}

void VulEffectModuleInfo::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool VulEffectModuleInfo::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

