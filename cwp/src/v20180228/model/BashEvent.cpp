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

#include <tencentcloud/cwp/v20180228/model/BashEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BashEvent::BashEvent() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_hostipHasBeenSet(false),
    m_userHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_bashCmdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleLevelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_detectByHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_ruleCategoryHasBeenSet(false),
    m_regexBashCmdHasBeenSet(false),
    m_hostNameHasBeenSet(false)
{
}

CoreInternalOutcome BashEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Hostip") && !value["Hostip"].IsNull())
    {
        if (!value["Hostip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.Hostip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostip = string(value["Hostip"].GetString());
        m_hostipHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.Platform` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_platform = value["Platform"].GetUint64();
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("BashCmd") && !value["BashCmd"].IsNull())
    {
        if (!value["BashCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.BashCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bashCmd = string(value["BashCmd"].GetString());
        m_bashCmdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleLevel") && !value["RuleLevel"].IsNull())
    {
        if (!value["RuleLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.RuleLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleLevel = value["RuleLevel"].GetUint64();
        m_ruleLevelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("DetectBy") && !value["DetectBy"].IsNull())
    {
        if (!value["DetectBy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.DetectBy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detectBy = value["DetectBy"].GetUint64();
        m_detectByHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.Pid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pid = string(value["Pid"].GetString());
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleCategory") && !value["RuleCategory"].IsNull())
    {
        if (!value["RuleCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.RuleCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCategory = value["RuleCategory"].GetUint64();
        m_ruleCategoryHasBeenSet = true;
    }

    if (value.HasMember("RegexBashCmd") && !value["RegexBashCmd"].IsNull())
    {
        if (!value["RegexBashCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.RegexBashCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regexBashCmd = string(value["RegexBashCmd"].GetString());
        m_regexBashCmdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEvent.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BashEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostip.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platform, allocator);
    }

    if (m_bashCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BashCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bashCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleLevel, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_detectByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectBy, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pid.c_str(), allocator).Move(), allocator);
    }

    if (m_exeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exe.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCategory, allocator);
    }

    if (m_regexBashCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegexBashCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regexBashCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BashEvent::GetId() const
{
    return m_id;
}

void BashEvent::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BashEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BashEvent::GetUuid() const
{
    return m_uuid;
}

void BashEvent::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool BashEvent::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string BashEvent::GetQuuid() const
{
    return m_quuid;
}

void BashEvent::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool BashEvent::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string BashEvent::GetHostip() const
{
    return m_hostip;
}

void BashEvent::SetHostip(const string& _hostip)
{
    m_hostip = _hostip;
    m_hostipHasBeenSet = true;
}

bool BashEvent::HostipHasBeenSet() const
{
    return m_hostipHasBeenSet;
}

string BashEvent::GetUser() const
{
    return m_user;
}

void BashEvent::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool BashEvent::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

uint64_t BashEvent::GetPlatform() const
{
    return m_platform;
}

void BashEvent::SetPlatform(const uint64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool BashEvent::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string BashEvent::GetBashCmd() const
{
    return m_bashCmd;
}

void BashEvent::SetBashCmd(const string& _bashCmd)
{
    m_bashCmd = _bashCmd;
    m_bashCmdHasBeenSet = true;
}

bool BashEvent::BashCmdHasBeenSet() const
{
    return m_bashCmdHasBeenSet;
}

uint64_t BashEvent::GetRuleId() const
{
    return m_ruleId;
}

void BashEvent::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BashEvent::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BashEvent::GetRuleName() const
{
    return m_ruleName;
}

void BashEvent::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BashEvent::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t BashEvent::GetRuleLevel() const
{
    return m_ruleLevel;
}

void BashEvent::SetRuleLevel(const uint64_t& _ruleLevel)
{
    m_ruleLevel = _ruleLevel;
    m_ruleLevelHasBeenSet = true;
}

bool BashEvent::RuleLevelHasBeenSet() const
{
    return m_ruleLevelHasBeenSet;
}

uint64_t BashEvent::GetStatus() const
{
    return m_status;
}

void BashEvent::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BashEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BashEvent::GetCreateTime() const
{
    return m_createTime;
}

void BashEvent::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BashEvent::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BashEvent::GetMachineName() const
{
    return m_machineName;
}

void BashEvent::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool BashEvent::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

uint64_t BashEvent::GetDetectBy() const
{
    return m_detectBy;
}

void BashEvent::SetDetectBy(const uint64_t& _detectBy)
{
    m_detectBy = _detectBy;
    m_detectByHasBeenSet = true;
}

bool BashEvent::DetectByHasBeenSet() const
{
    return m_detectByHasBeenSet;
}

string BashEvent::GetPid() const
{
    return m_pid;
}

void BashEvent::SetPid(const string& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool BashEvent::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string BashEvent::GetExe() const
{
    return m_exe;
}

void BashEvent::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool BashEvent::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string BashEvent::GetModifyTime() const
{
    return m_modifyTime;
}

void BashEvent::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BashEvent::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t BashEvent::GetRuleCategory() const
{
    return m_ruleCategory;
}

void BashEvent::SetRuleCategory(const uint64_t& _ruleCategory)
{
    m_ruleCategory = _ruleCategory;
    m_ruleCategoryHasBeenSet = true;
}

bool BashEvent::RuleCategoryHasBeenSet() const
{
    return m_ruleCategoryHasBeenSet;
}

string BashEvent::GetRegexBashCmd() const
{
    return m_regexBashCmd;
}

void BashEvent::SetRegexBashCmd(const string& _regexBashCmd)
{
    m_regexBashCmd = _regexBashCmd;
    m_regexBashCmdHasBeenSet = true;
}

bool BashEvent::RegexBashCmdHasBeenSet() const
{
    return m_regexBashCmdHasBeenSet;
}

string BashEvent::GetHostName() const
{
    return m_hostName;
}

void BashEvent::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool BashEvent::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

