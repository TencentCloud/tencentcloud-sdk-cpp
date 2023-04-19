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

#include <tencentcloud/cwp/v20180228/model/FileTamperEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

FileTamperEvent::FileTamperEvent() :
    m_hostNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_processExeHasBeenSet(false),
    m_processArgvHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_pstreeHasBeenSet(false),
    m_ruleCategoryHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_exePermissionHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_exeMd5HasBeenSet(false),
    m_exeSizeHasBeenSet(false),
    m_exeTimeHasBeenSet(false),
    m_targetSizeHasBeenSet(false),
    m_targetPermissionHasBeenSet(false),
    m_targetModifyTimeHasBeenSet(false),
    m_targetCreatTimeHasBeenSet(false),
    m_exePidHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_exeNameHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_fileActionHasBeenSet(false)
{
}

CoreInternalOutcome FileTamperEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ProcessExe") && !value["ProcessExe"].IsNull())
    {
        if (!value["ProcessExe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.ProcessExe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processExe = string(value["ProcessExe"].GetString());
        m_processExeHasBeenSet = true;
    }

    if (value.HasMember("ProcessArgv") && !value["ProcessArgv"].IsNull())
    {
        if (!value["ProcessArgv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.ProcessArgv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processArgv = string(value["ProcessArgv"].GetString());
        m_processArgvHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.EventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetUint64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Pstree") && !value["Pstree"].IsNull())
    {
        if (!value["Pstree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Pstree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pstree = string(value["Pstree"].GetString());
        m_pstreeHasBeenSet = true;
    }

    if (value.HasMember("RuleCategory") && !value["RuleCategory"].IsNull())
    {
        if (!value["RuleCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.RuleCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCategory = value["RuleCategory"].GetUint64();
        m_ruleCategoryHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("ExePermission") && !value["ExePermission"].IsNull())
    {
        if (!value["ExePermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.ExePermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exePermission = string(value["ExePermission"].GetString());
        m_exePermissionHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.UserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroup = string(value["UserGroup"].GetString());
        m_userGroupHasBeenSet = true;
    }

    if (value.HasMember("ExeMd5") && !value["ExeMd5"].IsNull())
    {
        if (!value["ExeMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.ExeMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exeMd5 = string(value["ExeMd5"].GetString());
        m_exeMd5HasBeenSet = true;
    }

    if (value.HasMember("ExeSize") && !value["ExeSize"].IsNull())
    {
        if (!value["ExeSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.ExeSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exeSize = value["ExeSize"].GetUint64();
        m_exeSizeHasBeenSet = true;
    }

    if (value.HasMember("ExeTime") && !value["ExeTime"].IsNull())
    {
        if (!value["ExeTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.ExeTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exeTime = value["ExeTime"].GetUint64();
        m_exeTimeHasBeenSet = true;
    }

    if (value.HasMember("TargetSize") && !value["TargetSize"].IsNull())
    {
        if (!value["TargetSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.TargetSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetSize = value["TargetSize"].GetUint64();
        m_targetSizeHasBeenSet = true;
    }

    if (value.HasMember("TargetPermission") && !value["TargetPermission"].IsNull())
    {
        if (!value["TargetPermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.TargetPermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetPermission = string(value["TargetPermission"].GetString());
        m_targetPermissionHasBeenSet = true;
    }

    if (value.HasMember("TargetModifyTime") && !value["TargetModifyTime"].IsNull())
    {
        if (!value["TargetModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.TargetModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetModifyTime = string(value["TargetModifyTime"].GetString());
        m_targetModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("TargetCreatTime") && !value["TargetCreatTime"].IsNull())
    {
        if (!value["TargetCreatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.TargetCreatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetCreatTime = string(value["TargetCreatTime"].GetString());
        m_targetCreatTimeHasBeenSet = true;
    }

    if (value.HasMember("ExePid") && !value["ExePid"].IsNull())
    {
        if (!value["ExePid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.ExePid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exePid = value["ExePid"].GetUint64();
        m_exePidHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(value["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("ExeName") && !value["ExeName"].IsNull())
    {
        if (!value["ExeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.ExeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exeName = string(value["ExeName"].GetString());
        m_exeNameHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("FileAction") && !value["FileAction"].IsNull())
    {
        if (!value["FileAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperEvent.FileAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileAction = string(value["FileAction"].GetString());
        m_fileActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileTamperEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_processExeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessExe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processExe.c_str(), allocator).Move(), allocator);
    }

    if (m_processArgvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessArgv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processArgv.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
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

    if (m_pstreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pstree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pstree.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCategory, allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_exePermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExePermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exePermission.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_exeMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExeMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exeMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_exeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exeSize, allocator);
    }

    if (m_exeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exeTime, allocator);
    }

    if (m_targetSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetSize, allocator);
    }

    if (m_targetPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetPermission.c_str(), allocator).Move(), allocator);
    }

    if (m_targetModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCreatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCreatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetCreatTime.c_str(), allocator).Move(), allocator);
    }

    if (m_exePidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExePid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exePid, allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_exeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exeName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileAction.c_str(), allocator).Move(), allocator);
    }

}


string FileTamperEvent::GetHostName() const
{
    return m_hostName;
}

void FileTamperEvent::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool FileTamperEvent::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string FileTamperEvent::GetHostIp() const
{
    return m_hostIp;
}

void FileTamperEvent::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool FileTamperEvent::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string FileTamperEvent::GetCreateTime() const
{
    return m_createTime;
}

void FileTamperEvent::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FileTamperEvent::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string FileTamperEvent::GetModifyTime() const
{
    return m_modifyTime;
}

void FileTamperEvent::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool FileTamperEvent::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t FileTamperEvent::GetId() const
{
    return m_id;
}

void FileTamperEvent::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool FileTamperEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string FileTamperEvent::GetUuid() const
{
    return m_uuid;
}

void FileTamperEvent::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool FileTamperEvent::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string FileTamperEvent::GetQuuid() const
{
    return m_quuid;
}

void FileTamperEvent::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool FileTamperEvent::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t FileTamperEvent::GetType() const
{
    return m_type;
}

void FileTamperEvent::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FileTamperEvent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string FileTamperEvent::GetProcessExe() const
{
    return m_processExe;
}

void FileTamperEvent::SetProcessExe(const string& _processExe)
{
    m_processExe = _processExe;
    m_processExeHasBeenSet = true;
}

bool FileTamperEvent::ProcessExeHasBeenSet() const
{
    return m_processExeHasBeenSet;
}

string FileTamperEvent::GetProcessArgv() const
{
    return m_processArgv;
}

void FileTamperEvent::SetProcessArgv(const string& _processArgv)
{
    m_processArgv = _processArgv;
    m_processArgvHasBeenSet = true;
}

bool FileTamperEvent::ProcessArgvHasBeenSet() const
{
    return m_processArgvHasBeenSet;
}

string FileTamperEvent::GetTarget() const
{
    return m_target;
}

void FileTamperEvent::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool FileTamperEvent::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

uint64_t FileTamperEvent::GetStatus() const
{
    return m_status;
}

void FileTamperEvent::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FileTamperEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t FileTamperEvent::GetEventCount() const
{
    return m_eventCount;
}

void FileTamperEvent::SetEventCount(const uint64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool FileTamperEvent::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

uint64_t FileTamperEvent::GetRuleId() const
{
    return m_ruleId;
}

void FileTamperEvent::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool FileTamperEvent::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string FileTamperEvent::GetRuleName() const
{
    return m_ruleName;
}

void FileTamperEvent::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool FileTamperEvent::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string FileTamperEvent::GetPstree() const
{
    return m_pstree;
}

void FileTamperEvent::SetPstree(const string& _pstree)
{
    m_pstree = _pstree;
    m_pstreeHasBeenSet = true;
}

bool FileTamperEvent::PstreeHasBeenSet() const
{
    return m_pstreeHasBeenSet;
}

uint64_t FileTamperEvent::GetRuleCategory() const
{
    return m_ruleCategory;
}

void FileTamperEvent::SetRuleCategory(const uint64_t& _ruleCategory)
{
    m_ruleCategory = _ruleCategory;
    m_ruleCategoryHasBeenSet = true;
}

bool FileTamperEvent::RuleCategoryHasBeenSet() const
{
    return m_ruleCategoryHasBeenSet;
}

string FileTamperEvent::GetMachineStatus() const
{
    return m_machineStatus;
}

void FileTamperEvent::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool FileTamperEvent::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

string FileTamperEvent::GetDescription() const
{
    return m_description;
}

void FileTamperEvent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool FileTamperEvent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string FileTamperEvent::GetSuggestion() const
{
    return m_suggestion;
}

void FileTamperEvent::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool FileTamperEvent::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string FileTamperEvent::GetPrivateIp() const
{
    return m_privateIp;
}

void FileTamperEvent::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool FileTamperEvent::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string FileTamperEvent::GetExePermission() const
{
    return m_exePermission;
}

void FileTamperEvent::SetExePermission(const string& _exePermission)
{
    m_exePermission = _exePermission;
    m_exePermissionHasBeenSet = true;
}

bool FileTamperEvent::ExePermissionHasBeenSet() const
{
    return m_exePermissionHasBeenSet;
}

string FileTamperEvent::GetUserName() const
{
    return m_userName;
}

void FileTamperEvent::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool FileTamperEvent::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string FileTamperEvent::GetUserGroup() const
{
    return m_userGroup;
}

void FileTamperEvent::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool FileTamperEvent::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

string FileTamperEvent::GetExeMd5() const
{
    return m_exeMd5;
}

void FileTamperEvent::SetExeMd5(const string& _exeMd5)
{
    m_exeMd5 = _exeMd5;
    m_exeMd5HasBeenSet = true;
}

bool FileTamperEvent::ExeMd5HasBeenSet() const
{
    return m_exeMd5HasBeenSet;
}

uint64_t FileTamperEvent::GetExeSize() const
{
    return m_exeSize;
}

void FileTamperEvent::SetExeSize(const uint64_t& _exeSize)
{
    m_exeSize = _exeSize;
    m_exeSizeHasBeenSet = true;
}

bool FileTamperEvent::ExeSizeHasBeenSet() const
{
    return m_exeSizeHasBeenSet;
}

uint64_t FileTamperEvent::GetExeTime() const
{
    return m_exeTime;
}

void FileTamperEvent::SetExeTime(const uint64_t& _exeTime)
{
    m_exeTime = _exeTime;
    m_exeTimeHasBeenSet = true;
}

bool FileTamperEvent::ExeTimeHasBeenSet() const
{
    return m_exeTimeHasBeenSet;
}

uint64_t FileTamperEvent::GetTargetSize() const
{
    return m_targetSize;
}

void FileTamperEvent::SetTargetSize(const uint64_t& _targetSize)
{
    m_targetSize = _targetSize;
    m_targetSizeHasBeenSet = true;
}

bool FileTamperEvent::TargetSizeHasBeenSet() const
{
    return m_targetSizeHasBeenSet;
}

string FileTamperEvent::GetTargetPermission() const
{
    return m_targetPermission;
}

void FileTamperEvent::SetTargetPermission(const string& _targetPermission)
{
    m_targetPermission = _targetPermission;
    m_targetPermissionHasBeenSet = true;
}

bool FileTamperEvent::TargetPermissionHasBeenSet() const
{
    return m_targetPermissionHasBeenSet;
}

string FileTamperEvent::GetTargetModifyTime() const
{
    return m_targetModifyTime;
}

void FileTamperEvent::SetTargetModifyTime(const string& _targetModifyTime)
{
    m_targetModifyTime = _targetModifyTime;
    m_targetModifyTimeHasBeenSet = true;
}

bool FileTamperEvent::TargetModifyTimeHasBeenSet() const
{
    return m_targetModifyTimeHasBeenSet;
}

string FileTamperEvent::GetTargetCreatTime() const
{
    return m_targetCreatTime;
}

void FileTamperEvent::SetTargetCreatTime(const string& _targetCreatTime)
{
    m_targetCreatTime = _targetCreatTime;
    m_targetCreatTimeHasBeenSet = true;
}

bool FileTamperEvent::TargetCreatTimeHasBeenSet() const
{
    return m_targetCreatTimeHasBeenSet;
}

uint64_t FileTamperEvent::GetExePid() const
{
    return m_exePid;
}

void FileTamperEvent::SetExePid(const uint64_t& _exePid)
{
    m_exePid = _exePid;
    m_exePidHasBeenSet = true;
}

bool FileTamperEvent::ExePidHasBeenSet() const
{
    return m_exePidHasBeenSet;
}

string FileTamperEvent::GetTargetName() const
{
    return m_targetName;
}

void FileTamperEvent::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool FileTamperEvent::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string FileTamperEvent::GetReference() const
{
    return m_reference;
}

void FileTamperEvent::SetReference(const string& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool FileTamperEvent::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

uint64_t FileTamperEvent::GetLevel() const
{
    return m_level;
}

void FileTamperEvent::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool FileTamperEvent::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string FileTamperEvent::GetExeName() const
{
    return m_exeName;
}

void FileTamperEvent::SetExeName(const string& _exeName)
{
    m_exeName = _exeName;
    m_exeNameHasBeenSet = true;
}

bool FileTamperEvent::ExeNameHasBeenSet() const
{
    return m_exeNameHasBeenSet;
}

MachineExtraInfo FileTamperEvent::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void FileTamperEvent::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool FileTamperEvent::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string FileTamperEvent::GetFileAction() const
{
    return m_fileAction;
}

void FileTamperEvent::SetFileAction(const string& _fileAction)
{
    m_fileAction = _fileAction;
    m_fileActionHasBeenSet = true;
}

bool FileTamperEvent::FileActionHasBeenSet() const
{
    return m_fileActionHasBeenSet;
}

