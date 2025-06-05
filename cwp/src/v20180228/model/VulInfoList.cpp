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

#include <tencentcloud/cwp/v20180228/model/VulInfoList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulInfoList::VulInfoList() :
    m_idsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_descriptHasBeenSet(false),
    m_publishTimeWisteriaHasBeenSet(false),
    m_nameWisteriaHasBeenSet(false),
    m_descriptWisteriaHasBeenSet(false),
    m_statusStrHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_cvssScoreHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_fixSwitchHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_isSupportDefenseHasBeenSet(false),
    m_defenseAttackCountHasBeenSet(false),
    m_firstAppearTimeHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_attackLevelHasBeenSet(false),
    m_fixNoNeedRestartHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_vulFixSwitchHasBeenSet(false),
    m_latestFixTimeHasBeenSet(false)
{
}

CoreInternalOutcome VulInfoList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ids") && !value["Ids"].IsNull())
    {
        if (!value["Ids"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.Ids` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ids = string(value["Ids"].GetString());
        m_idsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.HostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetUint64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.From` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_from = value["From"].GetUint64();
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("Descript") && !value["Descript"].IsNull())
    {
        if (!value["Descript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.Descript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descript = string(value["Descript"].GetString());
        m_descriptHasBeenSet = true;
    }

    if (value.HasMember("PublishTimeWisteria") && !value["PublishTimeWisteria"].IsNull())
    {
        if (!value["PublishTimeWisteria"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.PublishTimeWisteria` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTimeWisteria = string(value["PublishTimeWisteria"].GetString());
        m_publishTimeWisteriaHasBeenSet = true;
    }

    if (value.HasMember("NameWisteria") && !value["NameWisteria"].IsNull())
    {
        if (!value["NameWisteria"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.NameWisteria` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameWisteria = string(value["NameWisteria"].GetString());
        m_nameWisteriaHasBeenSet = true;
    }

    if (value.HasMember("DescriptWisteria") && !value["DescriptWisteria"].IsNull())
    {
        if (!value["DescriptWisteria"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.DescriptWisteria` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptWisteria = string(value["DescriptWisteria"].GetString());
        m_descriptWisteriaHasBeenSet = true;
    }

    if (value.HasMember("StatusStr") && !value["StatusStr"].IsNull())
    {
        if (!value["StatusStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.StatusStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusStr = string(value["StatusStr"].GetString());
        m_statusStrHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("CvssScore") && !value["CvssScore"].IsNull())
    {
        if (!value["CvssScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.CvssScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScore = value["CvssScore"].GetDouble();
        m_cvssScoreHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.Labels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labels = string(value["Labels"].GetString());
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("FixSwitch") && !value["FixSwitch"].IsNull())
    {
        if (!value["FixSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.FixSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixSwitch = value["FixSwitch"].GetUint64();
        m_fixSwitchHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("IsSupportDefense") && !value["IsSupportDefense"].IsNull())
    {
        if (!value["IsSupportDefense"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.IsSupportDefense` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportDefense = value["IsSupportDefense"].GetUint64();
        m_isSupportDefenseHasBeenSet = true;
    }

    if (value.HasMember("DefenseAttackCount") && !value["DefenseAttackCount"].IsNull())
    {
        if (!value["DefenseAttackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.DefenseAttackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defenseAttackCount = value["DefenseAttackCount"].GetUint64();
        m_defenseAttackCountHasBeenSet = true;
    }

    if (value.HasMember("FirstAppearTime") && !value["FirstAppearTime"].IsNull())
    {
        if (!value["FirstAppearTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.FirstAppearTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstAppearTime = string(value["FirstAppearTime"].GetString());
        m_firstAppearTimeHasBeenSet = true;
    }

    if (value.HasMember("VulCategory") && !value["VulCategory"].IsNull())
    {
        if (!value["VulCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.VulCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategory = value["VulCategory"].GetUint64();
        m_vulCategoryHasBeenSet = true;
    }

    if (value.HasMember("AttackLevel") && !value["AttackLevel"].IsNull())
    {
        if (!value["AttackLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.AttackLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackLevel = value["AttackLevel"].GetUint64();
        m_attackLevelHasBeenSet = true;
    }

    if (value.HasMember("FixNoNeedRestart") && !value["FixNoNeedRestart"].IsNull())
    {
        if (!value["FixNoNeedRestart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.FixNoNeedRestart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fixNoNeedRestart = value["FixNoNeedRestart"].GetBool();
        m_fixNoNeedRestartHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.Method` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_method = value["Method"].GetUint64();
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("VulFixSwitch") && !value["VulFixSwitch"].IsNull())
    {
        if (!value["VulFixSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.VulFixSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulFixSwitch = value["VulFixSwitch"].GetUint64();
        m_vulFixSwitchHasBeenSet = true;
    }

    if (value.HasMember("LatestFixTime") && !value["LatestFixTime"].IsNull())
    {
        if (!value["LatestFixTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoList.LatestFixTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFixTime = string(value["LatestFixTime"].GetString());
        m_latestFixTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulInfoList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ids.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_from, allocator);
    }

    if (m_descriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descript.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeWisteriaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTimeWisteria";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTimeWisteria.c_str(), allocator).Move(), allocator);
    }

    if (m_nameWisteriaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameWisteria";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameWisteria.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptWisteriaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptWisteria";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptWisteria.c_str(), allocator).Move(), allocator);
    }

    if (m_statusStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusStr.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_cvssScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvssScore, allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labels.c_str(), allocator).Move(), allocator);
    }

    if (m_fixSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixSwitch, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_isSupportDefenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportDefense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportDefense, allocator);
    }

    if (m_defenseAttackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseAttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenseAttackCount, allocator);
    }

    if (m_firstAppearTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstAppearTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstAppearTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCategory, allocator);
    }

    if (m_attackLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackLevel, allocator);
    }

    if (m_fixNoNeedRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixNoNeedRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixNoNeedRestart, allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_method, allocator);
    }

    if (m_vulFixSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulFixSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulFixSwitch, allocator);
    }

    if (m_latestFixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFixTime.c_str(), allocator).Move(), allocator);
    }

}


string VulInfoList::GetIds() const
{
    return m_ids;
}

void VulInfoList::SetIds(const string& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool VulInfoList::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

string VulInfoList::GetName() const
{
    return m_name;
}

void VulInfoList::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulInfoList::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t VulInfoList::GetStatus() const
{
    return m_status;
}

void VulInfoList::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulInfoList::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t VulInfoList::GetVulId() const
{
    return m_vulId;
}

void VulInfoList::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulInfoList::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string VulInfoList::GetPublishTime() const
{
    return m_publishTime;
}

void VulInfoList::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool VulInfoList::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string VulInfoList::GetLastTime() const
{
    return m_lastTime;
}

void VulInfoList::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool VulInfoList::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

uint64_t VulInfoList::GetHostCount() const
{
    return m_hostCount;
}

void VulInfoList::SetHostCount(const uint64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool VulInfoList::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

uint64_t VulInfoList::GetLevel() const
{
    return m_level;
}

void VulInfoList::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulInfoList::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t VulInfoList::GetFrom() const
{
    return m_from;
}

void VulInfoList::SetFrom(const uint64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool VulInfoList::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string VulInfoList::GetDescript() const
{
    return m_descript;
}

void VulInfoList::SetDescript(const string& _descript)
{
    m_descript = _descript;
    m_descriptHasBeenSet = true;
}

bool VulInfoList::DescriptHasBeenSet() const
{
    return m_descriptHasBeenSet;
}

string VulInfoList::GetPublishTimeWisteria() const
{
    return m_publishTimeWisteria;
}

void VulInfoList::SetPublishTimeWisteria(const string& _publishTimeWisteria)
{
    m_publishTimeWisteria = _publishTimeWisteria;
    m_publishTimeWisteriaHasBeenSet = true;
}

bool VulInfoList::PublishTimeWisteriaHasBeenSet() const
{
    return m_publishTimeWisteriaHasBeenSet;
}

string VulInfoList::GetNameWisteria() const
{
    return m_nameWisteria;
}

void VulInfoList::SetNameWisteria(const string& _nameWisteria)
{
    m_nameWisteria = _nameWisteria;
    m_nameWisteriaHasBeenSet = true;
}

bool VulInfoList::NameWisteriaHasBeenSet() const
{
    return m_nameWisteriaHasBeenSet;
}

string VulInfoList::GetDescriptWisteria() const
{
    return m_descriptWisteria;
}

void VulInfoList::SetDescriptWisteria(const string& _descriptWisteria)
{
    m_descriptWisteria = _descriptWisteria;
    m_descriptWisteriaHasBeenSet = true;
}

bool VulInfoList::DescriptWisteriaHasBeenSet() const
{
    return m_descriptWisteriaHasBeenSet;
}

string VulInfoList::GetStatusStr() const
{
    return m_statusStr;
}

void VulInfoList::SetStatusStr(const string& _statusStr)
{
    m_statusStr = _statusStr;
    m_statusStrHasBeenSet = true;
}

bool VulInfoList::StatusStrHasBeenSet() const
{
    return m_statusStrHasBeenSet;
}

string VulInfoList::GetCveId() const
{
    return m_cveId;
}

void VulInfoList::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool VulInfoList::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

double VulInfoList::GetCvssScore() const
{
    return m_cvssScore;
}

void VulInfoList::SetCvssScore(const double& _cvssScore)
{
    m_cvssScore = _cvssScore;
    m_cvssScoreHasBeenSet = true;
}

bool VulInfoList::CvssScoreHasBeenSet() const
{
    return m_cvssScoreHasBeenSet;
}

string VulInfoList::GetLabels() const
{
    return m_labels;
}

void VulInfoList::SetLabels(const string& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool VulInfoList::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

uint64_t VulInfoList::GetFixSwitch() const
{
    return m_fixSwitch;
}

void VulInfoList::SetFixSwitch(const uint64_t& _fixSwitch)
{
    m_fixSwitch = _fixSwitch;
    m_fixSwitchHasBeenSet = true;
}

bool VulInfoList::FixSwitchHasBeenSet() const
{
    return m_fixSwitchHasBeenSet;
}

uint64_t VulInfoList::GetTaskId() const
{
    return m_taskId;
}

void VulInfoList::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool VulInfoList::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t VulInfoList::GetIsSupportDefense() const
{
    return m_isSupportDefense;
}

void VulInfoList::SetIsSupportDefense(const uint64_t& _isSupportDefense)
{
    m_isSupportDefense = _isSupportDefense;
    m_isSupportDefenseHasBeenSet = true;
}

bool VulInfoList::IsSupportDefenseHasBeenSet() const
{
    return m_isSupportDefenseHasBeenSet;
}

uint64_t VulInfoList::GetDefenseAttackCount() const
{
    return m_defenseAttackCount;
}

void VulInfoList::SetDefenseAttackCount(const uint64_t& _defenseAttackCount)
{
    m_defenseAttackCount = _defenseAttackCount;
    m_defenseAttackCountHasBeenSet = true;
}

bool VulInfoList::DefenseAttackCountHasBeenSet() const
{
    return m_defenseAttackCountHasBeenSet;
}

string VulInfoList::GetFirstAppearTime() const
{
    return m_firstAppearTime;
}

void VulInfoList::SetFirstAppearTime(const string& _firstAppearTime)
{
    m_firstAppearTime = _firstAppearTime;
    m_firstAppearTimeHasBeenSet = true;
}

bool VulInfoList::FirstAppearTimeHasBeenSet() const
{
    return m_firstAppearTimeHasBeenSet;
}

uint64_t VulInfoList::GetVulCategory() const
{
    return m_vulCategory;
}

void VulInfoList::SetVulCategory(const uint64_t& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool VulInfoList::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

uint64_t VulInfoList::GetAttackLevel() const
{
    return m_attackLevel;
}

void VulInfoList::SetAttackLevel(const uint64_t& _attackLevel)
{
    m_attackLevel = _attackLevel;
    m_attackLevelHasBeenSet = true;
}

bool VulInfoList::AttackLevelHasBeenSet() const
{
    return m_attackLevelHasBeenSet;
}

bool VulInfoList::GetFixNoNeedRestart() const
{
    return m_fixNoNeedRestart;
}

void VulInfoList::SetFixNoNeedRestart(const bool& _fixNoNeedRestart)
{
    m_fixNoNeedRestart = _fixNoNeedRestart;
    m_fixNoNeedRestartHasBeenSet = true;
}

bool VulInfoList::FixNoNeedRestartHasBeenSet() const
{
    return m_fixNoNeedRestartHasBeenSet;
}

uint64_t VulInfoList::GetMethod() const
{
    return m_method;
}

void VulInfoList::SetMethod(const uint64_t& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool VulInfoList::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

uint64_t VulInfoList::GetVulFixSwitch() const
{
    return m_vulFixSwitch;
}

void VulInfoList::SetVulFixSwitch(const uint64_t& _vulFixSwitch)
{
    m_vulFixSwitch = _vulFixSwitch;
    m_vulFixSwitchHasBeenSet = true;
}

bool VulInfoList::VulFixSwitchHasBeenSet() const
{
    return m_vulFixSwitchHasBeenSet;
}

string VulInfoList::GetLatestFixTime() const
{
    return m_latestFixTime;
}

void VulInfoList::SetLatestFixTime(const string& _latestFixTime)
{
    m_latestFixTime = _latestFixTime;
    m_latestFixTimeHasBeenSet = true;
}

bool VulInfoList::LatestFixTimeHasBeenSet() const
{
    return m_latestFixTimeHasBeenSet;
}

