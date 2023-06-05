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

#include <tencentcloud/cwp/v20180228/model/VulStoreListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulStoreListInfo::VulStoreListInfo() :
    m_vulIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_publishDateHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_attackLevelHasBeenSet(false),
    m_fixSwitchHasBeenSet(false),
    m_supportDefenseHasBeenSet(false)
{
}

CoreInternalOutcome VulStoreListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("VulCategory") && !value["VulCategory"].IsNull())
    {
        if (!value["VulCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.VulCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategory = value["VulCategory"].GetUint64();
        m_vulCategoryHasBeenSet = true;
    }

    if (value.HasMember("PublishDate") && !value["PublishDate"].IsNull())
    {
        if (!value["PublishDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.PublishDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishDate = string(value["PublishDate"].GetString());
        m_publishDateHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.Method` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_method = value["Method"].GetUint64();
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("AttackLevel") && !value["AttackLevel"].IsNull())
    {
        if (!value["AttackLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.AttackLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackLevel = value["AttackLevel"].GetUint64();
        m_attackLevelHasBeenSet = true;
    }

    if (value.HasMember("FixSwitch") && !value["FixSwitch"].IsNull())
    {
        if (!value["FixSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.FixSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixSwitch = value["FixSwitch"].GetUint64();
        m_fixSwitchHasBeenSet = true;
    }

    if (value.HasMember("SupportDefense") && !value["SupportDefense"].IsNull())
    {
        if (!value["SupportDefense"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulStoreListInfo.SupportDefense` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_supportDefense = value["SupportDefense"].GetUint64();
        m_supportDefenseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulStoreListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCategory, allocator);
    }

    if (m_publishDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishDate.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_method, allocator);
    }

    if (m_attackLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackLevel, allocator);
    }

    if (m_fixSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixSwitch, allocator);
    }

    if (m_supportDefenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDefense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDefense, allocator);
    }

}


uint64_t VulStoreListInfo::GetVulId() const
{
    return m_vulId;
}

void VulStoreListInfo::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulStoreListInfo::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

uint64_t VulStoreListInfo::GetLevel() const
{
    return m_level;
}

void VulStoreListInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulStoreListInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VulStoreListInfo::GetName() const
{
    return m_name;
}

void VulStoreListInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulStoreListInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VulStoreListInfo::GetCveId() const
{
    return m_cveId;
}

void VulStoreListInfo::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool VulStoreListInfo::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

uint64_t VulStoreListInfo::GetVulCategory() const
{
    return m_vulCategory;
}

void VulStoreListInfo::SetVulCategory(const uint64_t& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool VulStoreListInfo::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

string VulStoreListInfo::GetPublishDate() const
{
    return m_publishDate;
}

void VulStoreListInfo::SetPublishDate(const string& _publishDate)
{
    m_publishDate = _publishDate;
    m_publishDateHasBeenSet = true;
}

bool VulStoreListInfo::PublishDateHasBeenSet() const
{
    return m_publishDateHasBeenSet;
}

uint64_t VulStoreListInfo::GetMethod() const
{
    return m_method;
}

void VulStoreListInfo::SetMethod(const uint64_t& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool VulStoreListInfo::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

uint64_t VulStoreListInfo::GetAttackLevel() const
{
    return m_attackLevel;
}

void VulStoreListInfo::SetAttackLevel(const uint64_t& _attackLevel)
{
    m_attackLevel = _attackLevel;
    m_attackLevelHasBeenSet = true;
}

bool VulStoreListInfo::AttackLevelHasBeenSet() const
{
    return m_attackLevelHasBeenSet;
}

uint64_t VulStoreListInfo::GetFixSwitch() const
{
    return m_fixSwitch;
}

void VulStoreListInfo::SetFixSwitch(const uint64_t& _fixSwitch)
{
    m_fixSwitch = _fixSwitch;
    m_fixSwitchHasBeenSet = true;
}

bool VulStoreListInfo::FixSwitchHasBeenSet() const
{
    return m_fixSwitchHasBeenSet;
}

uint64_t VulStoreListInfo::GetSupportDefense() const
{
    return m_supportDefense;
}

void VulStoreListInfo::SetSupportDefense(const uint64_t& _supportDefense)
{
    m_supportDefense = _supportDefense;
    m_supportDefenseHasBeenSet = true;
}

bool VulStoreListInfo::SupportDefenseHasBeenSet() const
{
    return m_supportDefenseHasBeenSet;
}

