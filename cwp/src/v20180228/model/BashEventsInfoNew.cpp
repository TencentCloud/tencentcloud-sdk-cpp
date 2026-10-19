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

#include <tencentcloud/cwp/v20180228/model/BashEventsInfoNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BashEventsInfoNew::BashEventsInfoNew() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_bashCmdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleLevelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_ruleCategoryHasBeenSet(false),
    m_regexBashCmdHasBeenSet(false),
    m_psTreeHasBeenSet(false),
    m_suggestSchemeHasBeenSet(false),
    m_harmDescribeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_userHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_detectByHasBeenSet(false),
    m_bashCmdDecodedHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_firstDetectTimeHasBeenSet(false),
    m_latestDetectTimeHasBeenSet(false),
    m_fileProcessMd5HasBeenSet(false),
    m_fileActionHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileModifyTimeHasBeenSet(false),
    m_filePermissionHasBeenSet(false),
    m_fileAccessTimeHasBeenSet(false),
    m_bashTypeHasBeenSet(false)
{
}

CoreInternalOutcome BashEventsInfoNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.Platform` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_platform = value["Platform"].GetUint64();
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("BashCmd") && !value["BashCmd"].IsNull())
    {
        if (!value["BashCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.BashCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bashCmd = string(value["BashCmd"].GetString());
        m_bashCmdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleLevel") && !value["RuleLevel"].IsNull())
    {
        if (!value["RuleLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.RuleLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleLevel = value["RuleLevel"].GetUint64();
        m_ruleLevelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleCategory") && !value["RuleCategory"].IsNull())
    {
        if (!value["RuleCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.RuleCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCategory = value["RuleCategory"].GetUint64();
        m_ruleCategoryHasBeenSet = true;
    }

    if (value.HasMember("RegexBashCmd") && !value["RegexBashCmd"].IsNull())
    {
        if (!value["RegexBashCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.RegexBashCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regexBashCmd = string(value["RegexBashCmd"].GetString());
        m_regexBashCmdHasBeenSet = true;
    }

    if (value.HasMember("PsTree") && !value["PsTree"].IsNull())
    {
        if (!value["PsTree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.PsTree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psTree = string(value["PsTree"].GetString());
        m_psTreeHasBeenSet = true;
    }

    if (value.HasMember("SuggestScheme") && !value["SuggestScheme"].IsNull())
    {
        if (!value["SuggestScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.SuggestScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestScheme = string(value["SuggestScheme"].GetString());
        m_suggestSchemeHasBeenSet = true;
    }

    if (value.HasMember("HarmDescribe") && !value["HarmDescribe"].IsNull())
    {
        if (!value["HarmDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.HarmDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harmDescribe = string(value["HarmDescribe"].GetString());
        m_harmDescribeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.References` is not array type"));

        const rapidjson::Value &tmpValue = value["References"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_references.push_back((*itr).GetString());
        }
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.Pid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pid = string(value["Pid"].GetString());
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.MachineType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = value["MachineType"].GetInt64();
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("DetectBy") && !value["DetectBy"].IsNull())
    {
        if (!value["DetectBy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.DetectBy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectBy = value["DetectBy"].GetInt64();
        m_detectByHasBeenSet = true;
    }

    if (value.HasMember("BashCmdDecoded") && !value["BashCmdDecoded"].IsNull())
    {
        if (!value["BashCmdDecoded"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.BashCmdDecoded` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bashCmdDecoded = string(value["BashCmdDecoded"].GetString());
        m_bashCmdDecodedHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.EventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetUint64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("FirstDetectTime") && !value["FirstDetectTime"].IsNull())
    {
        if (!value["FirstDetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FirstDetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstDetectTime = string(value["FirstDetectTime"].GetString());
        m_firstDetectTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestDetectTime") && !value["LatestDetectTime"].IsNull())
    {
        if (!value["LatestDetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.LatestDetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestDetectTime = string(value["LatestDetectTime"].GetString());
        m_latestDetectTimeHasBeenSet = true;
    }

    if (value.HasMember("FileProcessMd5") && !value["FileProcessMd5"].IsNull())
    {
        if (!value["FileProcessMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FileProcessMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileProcessMd5 = string(value["FileProcessMd5"].GetString());
        m_fileProcessMd5HasBeenSet = true;
    }

    if (value.HasMember("FileAction") && !value["FileAction"].IsNull())
    {
        if (!value["FileAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FileAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileAction = string(value["FileAction"].GetString());
        m_fileActionHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileModifyTime") && !value["FileModifyTime"].IsNull())
    {
        if (!value["FileModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FileModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileModifyTime = string(value["FileModifyTime"].GetString());
        m_fileModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("FilePermission") && !value["FilePermission"].IsNull())
    {
        if (!value["FilePermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FilePermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePermission = string(value["FilePermission"].GetString());
        m_filePermissionHasBeenSet = true;
    }

    if (value.HasMember("FileAccessTime") && !value["FileAccessTime"].IsNull())
    {
        if (!value["FileAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.FileAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileAccessTime = string(value["FileAccessTime"].GetString());
        m_fileAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("BashType") && !value["BashType"].IsNull())
    {
        if (!value["BashType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BashEventsInfoNew.BashType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bashType = string(value["BashType"].GetString());
        m_bashTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BashEventsInfoNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_psTreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsTree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_psTree.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_harmDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HarmDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harmDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_references.begin(); itr != m_references.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineType, allocator);
    }

    if (m_detectByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectBy, allocator);
    }

    if (m_bashCmdDecodedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BashCmdDecoded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bashCmdDecoded.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_firstDetectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstDetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstDetectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestDetectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestDetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestDetectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileProcessMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileProcessMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileProcessMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileAction.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fileModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_filePermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePermission.c_str(), allocator).Move(), allocator);
    }

    if (m_fileAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bashTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BashType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bashType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BashEventsInfoNew::GetId() const
{
    return m_id;
}

void BashEventsInfoNew::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BashEventsInfoNew::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BashEventsInfoNew::GetUuid() const
{
    return m_uuid;
}

void BashEventsInfoNew::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool BashEventsInfoNew::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string BashEventsInfoNew::GetQuuid() const
{
    return m_quuid;
}

void BashEventsInfoNew::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool BashEventsInfoNew::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string BashEventsInfoNew::GetHostIp() const
{
    return m_hostIp;
}

void BashEventsInfoNew::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool BashEventsInfoNew::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

uint64_t BashEventsInfoNew::GetPlatform() const
{
    return m_platform;
}

void BashEventsInfoNew::SetPlatform(const uint64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool BashEventsInfoNew::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string BashEventsInfoNew::GetBashCmd() const
{
    return m_bashCmd;
}

void BashEventsInfoNew::SetBashCmd(const string& _bashCmd)
{
    m_bashCmd = _bashCmd;
    m_bashCmdHasBeenSet = true;
}

bool BashEventsInfoNew::BashCmdHasBeenSet() const
{
    return m_bashCmdHasBeenSet;
}

uint64_t BashEventsInfoNew::GetRuleId() const
{
    return m_ruleId;
}

void BashEventsInfoNew::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BashEventsInfoNew::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BashEventsInfoNew::GetRuleName() const
{
    return m_ruleName;
}

void BashEventsInfoNew::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BashEventsInfoNew::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t BashEventsInfoNew::GetRuleLevel() const
{
    return m_ruleLevel;
}

void BashEventsInfoNew::SetRuleLevel(const uint64_t& _ruleLevel)
{
    m_ruleLevel = _ruleLevel;
    m_ruleLevelHasBeenSet = true;
}

bool BashEventsInfoNew::RuleLevelHasBeenSet() const
{
    return m_ruleLevelHasBeenSet;
}

uint64_t BashEventsInfoNew::GetStatus() const
{
    return m_status;
}

void BashEventsInfoNew::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BashEventsInfoNew::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BashEventsInfoNew::GetCreateTime() const
{
    return m_createTime;
}

void BashEventsInfoNew::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BashEventsInfoNew::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BashEventsInfoNew::GetMachineName() const
{
    return m_machineName;
}

void BashEventsInfoNew::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool BashEventsInfoNew::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string BashEventsInfoNew::GetExe() const
{
    return m_exe;
}

void BashEventsInfoNew::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool BashEventsInfoNew::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string BashEventsInfoNew::GetModifyTime() const
{
    return m_modifyTime;
}

void BashEventsInfoNew::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BashEventsInfoNew::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t BashEventsInfoNew::GetRuleCategory() const
{
    return m_ruleCategory;
}

void BashEventsInfoNew::SetRuleCategory(const uint64_t& _ruleCategory)
{
    m_ruleCategory = _ruleCategory;
    m_ruleCategoryHasBeenSet = true;
}

bool BashEventsInfoNew::RuleCategoryHasBeenSet() const
{
    return m_ruleCategoryHasBeenSet;
}

string BashEventsInfoNew::GetRegexBashCmd() const
{
    return m_regexBashCmd;
}

void BashEventsInfoNew::SetRegexBashCmd(const string& _regexBashCmd)
{
    m_regexBashCmd = _regexBashCmd;
    m_regexBashCmdHasBeenSet = true;
}

bool BashEventsInfoNew::RegexBashCmdHasBeenSet() const
{
    return m_regexBashCmdHasBeenSet;
}

string BashEventsInfoNew::GetPsTree() const
{
    return m_psTree;
}

void BashEventsInfoNew::SetPsTree(const string& _psTree)
{
    m_psTree = _psTree;
    m_psTreeHasBeenSet = true;
}

bool BashEventsInfoNew::PsTreeHasBeenSet() const
{
    return m_psTreeHasBeenSet;
}

string BashEventsInfoNew::GetSuggestScheme() const
{
    return m_suggestScheme;
}

void BashEventsInfoNew::SetSuggestScheme(const string& _suggestScheme)
{
    m_suggestScheme = _suggestScheme;
    m_suggestSchemeHasBeenSet = true;
}

bool BashEventsInfoNew::SuggestSchemeHasBeenSet() const
{
    return m_suggestSchemeHasBeenSet;
}

string BashEventsInfoNew::GetHarmDescribe() const
{
    return m_harmDescribe;
}

void BashEventsInfoNew::SetHarmDescribe(const string& _harmDescribe)
{
    m_harmDescribe = _harmDescribe;
    m_harmDescribeHasBeenSet = true;
}

bool BashEventsInfoNew::HarmDescribeHasBeenSet() const
{
    return m_harmDescribeHasBeenSet;
}

vector<string> BashEventsInfoNew::GetTags() const
{
    return m_tags;
}

void BashEventsInfoNew::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BashEventsInfoNew::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> BashEventsInfoNew::GetReferences() const
{
    return m_references;
}

void BashEventsInfoNew::SetReferences(const vector<string>& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool BashEventsInfoNew::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

string BashEventsInfoNew::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void BashEventsInfoNew::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool BashEventsInfoNew::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string BashEventsInfoNew::GetMachineStatus() const
{
    return m_machineStatus;
}

void BashEventsInfoNew::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool BashEventsInfoNew::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

string BashEventsInfoNew::GetUser() const
{
    return m_user;
}

void BashEventsInfoNew::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool BashEventsInfoNew::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string BashEventsInfoNew::GetPid() const
{
    return m_pid;
}

void BashEventsInfoNew::SetPid(const string& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool BashEventsInfoNew::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

int64_t BashEventsInfoNew::GetMachineType() const
{
    return m_machineType;
}

void BashEventsInfoNew::SetMachineType(const int64_t& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool BashEventsInfoNew::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

int64_t BashEventsInfoNew::GetDetectBy() const
{
    return m_detectBy;
}

void BashEventsInfoNew::SetDetectBy(const int64_t& _detectBy)
{
    m_detectBy = _detectBy;
    m_detectByHasBeenSet = true;
}

bool BashEventsInfoNew::DetectByHasBeenSet() const
{
    return m_detectByHasBeenSet;
}

string BashEventsInfoNew::GetBashCmdDecoded() const
{
    return m_bashCmdDecoded;
}

void BashEventsInfoNew::SetBashCmdDecoded(const string& _bashCmdDecoded)
{
    m_bashCmdDecoded = _bashCmdDecoded;
    m_bashCmdDecodedHasBeenSet = true;
}

bool BashEventsInfoNew::BashCmdDecodedHasBeenSet() const
{
    return m_bashCmdDecodedHasBeenSet;
}

uint64_t BashEventsInfoNew::GetEventCount() const
{
    return m_eventCount;
}

void BashEventsInfoNew::SetEventCount(const uint64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool BashEventsInfoNew::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string BashEventsInfoNew::GetFirstDetectTime() const
{
    return m_firstDetectTime;
}

void BashEventsInfoNew::SetFirstDetectTime(const string& _firstDetectTime)
{
    m_firstDetectTime = _firstDetectTime;
    m_firstDetectTimeHasBeenSet = true;
}

bool BashEventsInfoNew::FirstDetectTimeHasBeenSet() const
{
    return m_firstDetectTimeHasBeenSet;
}

string BashEventsInfoNew::GetLatestDetectTime() const
{
    return m_latestDetectTime;
}

void BashEventsInfoNew::SetLatestDetectTime(const string& _latestDetectTime)
{
    m_latestDetectTime = _latestDetectTime;
    m_latestDetectTimeHasBeenSet = true;
}

bool BashEventsInfoNew::LatestDetectTimeHasBeenSet() const
{
    return m_latestDetectTimeHasBeenSet;
}

string BashEventsInfoNew::GetFileProcessMd5() const
{
    return m_fileProcessMd5;
}

void BashEventsInfoNew::SetFileProcessMd5(const string& _fileProcessMd5)
{
    m_fileProcessMd5 = _fileProcessMd5;
    m_fileProcessMd5HasBeenSet = true;
}

bool BashEventsInfoNew::FileProcessMd5HasBeenSet() const
{
    return m_fileProcessMd5HasBeenSet;
}

string BashEventsInfoNew::GetFileAction() const
{
    return m_fileAction;
}

void BashEventsInfoNew::SetFileAction(const string& _fileAction)
{
    m_fileAction = _fileAction;
    m_fileActionHasBeenSet = true;
}

bool BashEventsInfoNew::FileActionHasBeenSet() const
{
    return m_fileActionHasBeenSet;
}

string BashEventsInfoNew::GetFilePath() const
{
    return m_filePath;
}

void BashEventsInfoNew::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool BashEventsInfoNew::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string BashEventsInfoNew::GetFileMd5() const
{
    return m_fileMd5;
}

void BashEventsInfoNew::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool BashEventsInfoNew::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string BashEventsInfoNew::GetFileName() const
{
    return m_fileName;
}

void BashEventsInfoNew::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool BashEventsInfoNew::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string BashEventsInfoNew::GetFileSize() const
{
    return m_fileSize;
}

void BashEventsInfoNew::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool BashEventsInfoNew::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string BashEventsInfoNew::GetFileModifyTime() const
{
    return m_fileModifyTime;
}

void BashEventsInfoNew::SetFileModifyTime(const string& _fileModifyTime)
{
    m_fileModifyTime = _fileModifyTime;
    m_fileModifyTimeHasBeenSet = true;
}

bool BashEventsInfoNew::FileModifyTimeHasBeenSet() const
{
    return m_fileModifyTimeHasBeenSet;
}

string BashEventsInfoNew::GetFilePermission() const
{
    return m_filePermission;
}

void BashEventsInfoNew::SetFilePermission(const string& _filePermission)
{
    m_filePermission = _filePermission;
    m_filePermissionHasBeenSet = true;
}

bool BashEventsInfoNew::FilePermissionHasBeenSet() const
{
    return m_filePermissionHasBeenSet;
}

string BashEventsInfoNew::GetFileAccessTime() const
{
    return m_fileAccessTime;
}

void BashEventsInfoNew::SetFileAccessTime(const string& _fileAccessTime)
{
    m_fileAccessTime = _fileAccessTime;
    m_fileAccessTimeHasBeenSet = true;
}

bool BashEventsInfoNew::FileAccessTimeHasBeenSet() const
{
    return m_fileAccessTimeHasBeenSet;
}

string BashEventsInfoNew::GetBashType() const
{
    return m_bashType;
}

void BashEventsInfoNew::SetBashType(const string& _bashType)
{
    m_bashType = _bashType;
    m_bashTypeHasBeenSet = true;
}

bool BashEventsInfoNew::BashTypeHasBeenSet() const
{
    return m_bashTypeHasBeenSet;
}

