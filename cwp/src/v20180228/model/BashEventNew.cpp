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

#include <tencentcloud/cwp/v20180228/model/BashEventNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BashEventNew::BashEventNew() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_hostIpHasBeenSet(false),
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
    m_regexExeHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome BashEventNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.Platform` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_platform = value["Platform"].GetUint64();
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("BashCmd") && !value["BashCmd"].IsNull())
    {
        if (!value["BashCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.BashCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bashCmd = string(value["BashCmd"].GetString());
        m_bashCmdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleLevel") && !value["RuleLevel"].IsNull())
    {
        if (!value["RuleLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.RuleLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleLevel = value["RuleLevel"].GetUint64();
        m_ruleLevelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("DetectBy") && !value["DetectBy"].IsNull())
    {
        if (!value["DetectBy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.DetectBy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detectBy = value["DetectBy"].GetUint64();
        m_detectByHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.Pid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pid = string(value["Pid"].GetString());
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleCategory") && !value["RuleCategory"].IsNull())
    {
        if (!value["RuleCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.RuleCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCategory = value["RuleCategory"].GetUint64();
        m_ruleCategoryHasBeenSet = true;
    }

    if (value.HasMember("RegexBashCmd") && !value["RegexBashCmd"].IsNull())
    {
        if (!value["RegexBashCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.RegexBashCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regexBashCmd = string(value["RegexBashCmd"].GetString());
        m_regexBashCmdHasBeenSet = true;
    }

    if (value.HasMember("RegexExe") && !value["RegexExe"].IsNull())
    {
        if (!value["RegexExe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.RegexExe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regexExe = string(value["RegexExe"].GetString());
        m_regexExeHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.MachineType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = value["MachineType"].GetInt64();
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventNew.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BashEventNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
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

    if (m_regexExeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegexExe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regexExe.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineType, allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t BashEventNew::GetId() const
{
    return m_id;
}

void BashEventNew::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BashEventNew::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BashEventNew::GetUuid() const
{
    return m_uuid;
}

void BashEventNew::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool BashEventNew::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string BashEventNew::GetQuuid() const
{
    return m_quuid;
}

void BashEventNew::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool BashEventNew::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string BashEventNew::GetHostIp() const
{
    return m_hostIp;
}

void BashEventNew::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool BashEventNew::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string BashEventNew::GetUser() const
{
    return m_user;
}

void BashEventNew::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool BashEventNew::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

uint64_t BashEventNew::GetPlatform() const
{
    return m_platform;
}

void BashEventNew::SetPlatform(const uint64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool BashEventNew::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string BashEventNew::GetBashCmd() const
{
    return m_bashCmd;
}

void BashEventNew::SetBashCmd(const string& _bashCmd)
{
    m_bashCmd = _bashCmd;
    m_bashCmdHasBeenSet = true;
}

bool BashEventNew::BashCmdHasBeenSet() const
{
    return m_bashCmdHasBeenSet;
}

uint64_t BashEventNew::GetRuleId() const
{
    return m_ruleId;
}

void BashEventNew::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BashEventNew::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BashEventNew::GetRuleName() const
{
    return m_ruleName;
}

void BashEventNew::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BashEventNew::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t BashEventNew::GetRuleLevel() const
{
    return m_ruleLevel;
}

void BashEventNew::SetRuleLevel(const uint64_t& _ruleLevel)
{
    m_ruleLevel = _ruleLevel;
    m_ruleLevelHasBeenSet = true;
}

bool BashEventNew::RuleLevelHasBeenSet() const
{
    return m_ruleLevelHasBeenSet;
}

uint64_t BashEventNew::GetStatus() const
{
    return m_status;
}

void BashEventNew::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BashEventNew::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BashEventNew::GetCreateTime() const
{
    return m_createTime;
}

void BashEventNew::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BashEventNew::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BashEventNew::GetMachineName() const
{
    return m_machineName;
}

void BashEventNew::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool BashEventNew::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

uint64_t BashEventNew::GetDetectBy() const
{
    return m_detectBy;
}

void BashEventNew::SetDetectBy(const uint64_t& _detectBy)
{
    m_detectBy = _detectBy;
    m_detectByHasBeenSet = true;
}

bool BashEventNew::DetectByHasBeenSet() const
{
    return m_detectByHasBeenSet;
}

string BashEventNew::GetPid() const
{
    return m_pid;
}

void BashEventNew::SetPid(const string& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool BashEventNew::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string BashEventNew::GetExe() const
{
    return m_exe;
}

void BashEventNew::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool BashEventNew::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string BashEventNew::GetModifyTime() const
{
    return m_modifyTime;
}

void BashEventNew::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BashEventNew::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t BashEventNew::GetRuleCategory() const
{
    return m_ruleCategory;
}

void BashEventNew::SetRuleCategory(const uint64_t& _ruleCategory)
{
    m_ruleCategory = _ruleCategory;
    m_ruleCategoryHasBeenSet = true;
}

bool BashEventNew::RuleCategoryHasBeenSet() const
{
    return m_ruleCategoryHasBeenSet;
}

string BashEventNew::GetRegexBashCmd() const
{
    return m_regexBashCmd;
}

void BashEventNew::SetRegexBashCmd(const string& _regexBashCmd)
{
    m_regexBashCmd = _regexBashCmd;
    m_regexBashCmdHasBeenSet = true;
}

bool BashEventNew::RegexBashCmdHasBeenSet() const
{
    return m_regexBashCmdHasBeenSet;
}

string BashEventNew::GetRegexExe() const
{
    return m_regexExe;
}

void BashEventNew::SetRegexExe(const string& _regexExe)
{
    m_regexExe = _regexExe;
    m_regexExeHasBeenSet = true;
}

bool BashEventNew::RegexExeHasBeenSet() const
{
    return m_regexExeHasBeenSet;
}

int64_t BashEventNew::GetMachineType() const
{
    return m_machineType;
}

void BashEventNew::SetMachineType(const int64_t& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool BashEventNew::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

MachineExtraInfo BashEventNew::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void BashEventNew::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool BashEventNew::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

