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

#include <tencentcloud/csip/v20221121/model/AlertExtraInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AlertExtraInfo::AlertExtraInfo() :
    m_relateEventHasBeenSet(false),
    m_leakContentHasBeenSet(false),
    m_leakAPIHasBeenSet(false),
    m_secretIDHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_ruleDescHasBeenSet(false),
    m_protocolPortHasBeenSet(false),
    m_attackContentHasBeenSet(false),
    m_attackIPProfileHasBeenSet(false),
    m_attackIPTagsHasBeenSet(false),
    m_requestMethodHasBeenSet(false),
    m_httpLogHasBeenSet(false),
    m_attackDomainHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_requestHeadersHasBeenSet(false),
    m_loginUserNameHasBeenSet(false),
    m_vulnerabilityNameHasBeenSet(false),
    m_cVEHasBeenSet(false),
    m_serviceProcessHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileMD5HasBeenSet(false),
    m_fileLastAccessTimeHasBeenSet(false),
    m_fileModifyTimeHasBeenSet(false),
    m_recentAccessTimeHasBeenSet(false),
    m_recentModifyTimeHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_virusFileTagsHasBeenSet(false),
    m_behavioralCharacteristicsHasBeenSet(false),
    m_processNamePIDHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_processCommandLineHasBeenSet(false),
    m_processPermissionsHasBeenSet(false),
    m_executedCommandHasBeenSet(false),
    m_affectedFileNameHasBeenSet(false),
    m_decoyPathHasBeenSet(false),
    m_maliciousProcessFileSizeHasBeenSet(false),
    m_maliciousProcessFileMD5HasBeenSet(false),
    m_maliciousProcessNamePIDHasBeenSet(false),
    m_maliciousProcessPathHasBeenSet(false),
    m_maliciousProcessStartTimeHasBeenSet(false),
    m_commandContentHasBeenSet(false),
    m_startupUserHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_newPermissionsHasBeenSet(false),
    m_parentProcessHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_classLoaderHasBeenSet(false),
    m_classFileSizeHasBeenSet(false),
    m_classFileMD5HasBeenSet(false),
    m_parentClassNameHasBeenSet(false),
    m_inheritedInterfaceHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_payloadContentHasBeenSet(false),
    m_callbackAddressPortraitHasBeenSet(false),
    m_callbackAddressTagHasBeenSet(false),
    m_processMD5HasBeenSet(false),
    m_filePermissionHasBeenSet(false),
    m_fromLogAnalysisDataHasBeenSet(false),
    m_hitProbeHasBeenSet(false),
    m_hitHoneyPotHasBeenSet(false),
    m_commandListHasBeenSet(false),
    m_attackEventDescHasBeenSet(false),
    m_processInfoHasBeenSet(false),
    m_userNameAndPwdHasBeenSet(false),
    m_strategyIDHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_hitStrategyHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_pIDHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_podIDHasBeenSet(false),
    m_responseHasBeenSet(false),
    m_systemCallHasBeenSet(false),
    m_verbHasBeenSet(false),
    m_logIDHasBeenSet(false),
    m_differentHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetAddressHasBeenSet(false),
    m_maliciousRequestDomainHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_requestURIHasBeenSet(false),
    m_requestUserHasBeenSet(false),
    m_requestObjectHasBeenSet(false),
    m_responseObjectHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_tITypeHasBeenSet(false),
    m_sourceIPHasBeenSet(false)
{
}

CoreInternalOutcome AlertExtraInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RelateEvent") && !value["RelateEvent"].IsNull())
    {
        if (!value["RelateEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RelateEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_relateEvent.Deserialize(value["RelateEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_relateEventHasBeenSet = true;
    }

    if (value.HasMember("LeakContent") && !value["LeakContent"].IsNull())
    {
        if (!value["LeakContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.LeakContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_leakContent = string(value["LeakContent"].GetString());
        m_leakContentHasBeenSet = true;
    }

    if (value.HasMember("LeakAPI") && !value["LeakAPI"].IsNull())
    {
        if (!value["LeakAPI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.LeakAPI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_leakAPI = string(value["LeakAPI"].GetString());
        m_leakAPIHasBeenSet = true;
    }

    if (value.HasMember("SecretID") && !value["SecretID"].IsNull())
    {
        if (!value["SecretID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.SecretID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretID = string(value["SecretID"].GetString());
        m_secretIDHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("RuleDesc") && !value["RuleDesc"].IsNull())
    {
        if (!value["RuleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RuleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDesc = string(value["RuleDesc"].GetString());
        m_ruleDescHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPort") && !value["ProtocolPort"].IsNull())
    {
        if (!value["ProtocolPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ProtocolPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolPort = string(value["ProtocolPort"].GetString());
        m_protocolPortHasBeenSet = true;
    }

    if (value.HasMember("AttackContent") && !value["AttackContent"].IsNull())
    {
        if (!value["AttackContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.AttackContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackContent = string(value["AttackContent"].GetString());
        m_attackContentHasBeenSet = true;
    }

    if (value.HasMember("AttackIPProfile") && !value["AttackIPProfile"].IsNull())
    {
        if (!value["AttackIPProfile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.AttackIPProfile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackIPProfile = string(value["AttackIPProfile"].GetString());
        m_attackIPProfileHasBeenSet = true;
    }

    if (value.HasMember("AttackIPTags") && !value["AttackIPTags"].IsNull())
    {
        if (!value["AttackIPTags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.AttackIPTags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackIPTags = string(value["AttackIPTags"].GetString());
        m_attackIPTagsHasBeenSet = true;
    }

    if (value.HasMember("RequestMethod") && !value["RequestMethod"].IsNull())
    {
        if (!value["RequestMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RequestMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestMethod = string(value["RequestMethod"].GetString());
        m_requestMethodHasBeenSet = true;
    }

    if (value.HasMember("HttpLog") && !value["HttpLog"].IsNull())
    {
        if (!value["HttpLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.HttpLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpLog = string(value["HttpLog"].GetString());
        m_httpLogHasBeenSet = true;
    }

    if (value.HasMember("AttackDomain") && !value["AttackDomain"].IsNull())
    {
        if (!value["AttackDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.AttackDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackDomain = string(value["AttackDomain"].GetString());
        m_attackDomainHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("RequestHeaders") && !value["RequestHeaders"].IsNull())
    {
        if (!value["RequestHeaders"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RequestHeaders` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestHeaders = string(value["RequestHeaders"].GetString());
        m_requestHeadersHasBeenSet = true;
    }

    if (value.HasMember("LoginUserName") && !value["LoginUserName"].IsNull())
    {
        if (!value["LoginUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.LoginUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginUserName = string(value["LoginUserName"].GetString());
        m_loginUserNameHasBeenSet = true;
    }

    if (value.HasMember("VulnerabilityName") && !value["VulnerabilityName"].IsNull())
    {
        if (!value["VulnerabilityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.VulnerabilityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityName = string(value["VulnerabilityName"].GetString());
        m_vulnerabilityNameHasBeenSet = true;
    }

    if (value.HasMember("CVE") && !value["CVE"].IsNull())
    {
        if (!value["CVE"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.CVE` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVE = string(value["CVE"].GetString());
        m_cVEHasBeenSet = true;
    }

    if (value.HasMember("ServiceProcess") && !value["ServiceProcess"].IsNull())
    {
        if (!value["ServiceProcess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ServiceProcess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProcess = string(value["ServiceProcess"].GetString());
        m_serviceProcessHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileMD5") && !value["FileMD5"].IsNull())
    {
        if (!value["FileMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.FileMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMD5 = string(value["FileMD5"].GetString());
        m_fileMD5HasBeenSet = true;
    }

    if (value.HasMember("FileLastAccessTime") && !value["FileLastAccessTime"].IsNull())
    {
        if (!value["FileLastAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.FileLastAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileLastAccessTime = string(value["FileLastAccessTime"].GetString());
        m_fileLastAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("FileModifyTime") && !value["FileModifyTime"].IsNull())
    {
        if (!value["FileModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.FileModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileModifyTime = string(value["FileModifyTime"].GetString());
        m_fileModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("RecentAccessTime") && !value["RecentAccessTime"].IsNull())
    {
        if (!value["RecentAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RecentAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentAccessTime = string(value["RecentAccessTime"].GetString());
        m_recentAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("RecentModifyTime") && !value["RecentModifyTime"].IsNull())
    {
        if (!value["RecentModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RecentModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentModifyTime = string(value["RecentModifyTime"].GetString());
        m_recentModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("VirusFileTags") && !value["VirusFileTags"].IsNull())
    {
        if (!value["VirusFileTags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.VirusFileTags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusFileTags = string(value["VirusFileTags"].GetString());
        m_virusFileTagsHasBeenSet = true;
    }

    if (value.HasMember("BehavioralCharacteristics") && !value["BehavioralCharacteristics"].IsNull())
    {
        if (!value["BehavioralCharacteristics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.BehavioralCharacteristics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behavioralCharacteristics = string(value["BehavioralCharacteristics"].GetString());
        m_behavioralCharacteristicsHasBeenSet = true;
    }

    if (value.HasMember("ProcessNamePID") && !value["ProcessNamePID"].IsNull())
    {
        if (!value["ProcessNamePID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ProcessNamePID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processNamePID = string(value["ProcessNamePID"].GetString());
        m_processNamePIDHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("ProcessCommandLine") && !value["ProcessCommandLine"].IsNull())
    {
        if (!value["ProcessCommandLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ProcessCommandLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processCommandLine = string(value["ProcessCommandLine"].GetString());
        m_processCommandLineHasBeenSet = true;
    }

    if (value.HasMember("ProcessPermissions") && !value["ProcessPermissions"].IsNull())
    {
        if (!value["ProcessPermissions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ProcessPermissions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPermissions = string(value["ProcessPermissions"].GetString());
        m_processPermissionsHasBeenSet = true;
    }

    if (value.HasMember("ExecutedCommand") && !value["ExecutedCommand"].IsNull())
    {
        if (!value["ExecutedCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ExecutedCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executedCommand = string(value["ExecutedCommand"].GetString());
        m_executedCommandHasBeenSet = true;
    }

    if (value.HasMember("AffectedFileName") && !value["AffectedFileName"].IsNull())
    {
        if (!value["AffectedFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.AffectedFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectedFileName = string(value["AffectedFileName"].GetString());
        m_affectedFileNameHasBeenSet = true;
    }

    if (value.HasMember("DecoyPath") && !value["DecoyPath"].IsNull())
    {
        if (!value["DecoyPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.DecoyPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decoyPath = string(value["DecoyPath"].GetString());
        m_decoyPathHasBeenSet = true;
    }

    if (value.HasMember("MaliciousProcessFileSize") && !value["MaliciousProcessFileSize"].IsNull())
    {
        if (!value["MaliciousProcessFileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.MaliciousProcessFileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maliciousProcessFileSize = string(value["MaliciousProcessFileSize"].GetString());
        m_maliciousProcessFileSizeHasBeenSet = true;
    }

    if (value.HasMember("MaliciousProcessFileMD5") && !value["MaliciousProcessFileMD5"].IsNull())
    {
        if (!value["MaliciousProcessFileMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.MaliciousProcessFileMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maliciousProcessFileMD5 = string(value["MaliciousProcessFileMD5"].GetString());
        m_maliciousProcessFileMD5HasBeenSet = true;
    }

    if (value.HasMember("MaliciousProcessNamePID") && !value["MaliciousProcessNamePID"].IsNull())
    {
        if (!value["MaliciousProcessNamePID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.MaliciousProcessNamePID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maliciousProcessNamePID = string(value["MaliciousProcessNamePID"].GetString());
        m_maliciousProcessNamePIDHasBeenSet = true;
    }

    if (value.HasMember("MaliciousProcessPath") && !value["MaliciousProcessPath"].IsNull())
    {
        if (!value["MaliciousProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.MaliciousProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maliciousProcessPath = string(value["MaliciousProcessPath"].GetString());
        m_maliciousProcessPathHasBeenSet = true;
    }

    if (value.HasMember("MaliciousProcessStartTime") && !value["MaliciousProcessStartTime"].IsNull())
    {
        if (!value["MaliciousProcessStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.MaliciousProcessStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maliciousProcessStartTime = string(value["MaliciousProcessStartTime"].GetString());
        m_maliciousProcessStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CommandContent") && !value["CommandContent"].IsNull())
    {
        if (!value["CommandContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.CommandContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandContent = string(value["CommandContent"].GetString());
        m_commandContentHasBeenSet = true;
    }

    if (value.HasMember("StartupUser") && !value["StartupUser"].IsNull())
    {
        if (!value["StartupUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.StartupUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startupUser = string(value["StartupUser"].GetString());
        m_startupUserHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.UserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userGroup = string(value["UserGroup"].GetString());
        m_userGroupHasBeenSet = true;
    }

    if (value.HasMember("NewPermissions") && !value["NewPermissions"].IsNull())
    {
        if (!value["NewPermissions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.NewPermissions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newPermissions = string(value["NewPermissions"].GetString());
        m_newPermissionsHasBeenSet = true;
    }

    if (value.HasMember("ParentProcess") && !value["ParentProcess"].IsNull())
    {
        if (!value["ParentProcess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ParentProcess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcess = string(value["ParentProcess"].GetString());
        m_parentProcessHasBeenSet = true;
    }

    if (value.HasMember("ClassName") && !value["ClassName"].IsNull())
    {
        if (!value["ClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_className = string(value["ClassName"].GetString());
        m_classNameHasBeenSet = true;
    }

    if (value.HasMember("ClassLoader") && !value["ClassLoader"].IsNull())
    {
        if (!value["ClassLoader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ClassLoader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classLoader = string(value["ClassLoader"].GetString());
        m_classLoaderHasBeenSet = true;
    }

    if (value.HasMember("ClassFileSize") && !value["ClassFileSize"].IsNull())
    {
        if (!value["ClassFileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ClassFileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classFileSize = string(value["ClassFileSize"].GetString());
        m_classFileSizeHasBeenSet = true;
    }

    if (value.HasMember("ClassFileMD5") && !value["ClassFileMD5"].IsNull())
    {
        if (!value["ClassFileMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ClassFileMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classFileMD5 = string(value["ClassFileMD5"].GetString());
        m_classFileMD5HasBeenSet = true;
    }

    if (value.HasMember("ParentClassName") && !value["ParentClassName"].IsNull())
    {
        if (!value["ParentClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ParentClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentClassName = string(value["ParentClassName"].GetString());
        m_parentClassNameHasBeenSet = true;
    }

    if (value.HasMember("InheritedInterface") && !value["InheritedInterface"].IsNull())
    {
        if (!value["InheritedInterface"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.InheritedInterface` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inheritedInterface = string(value["InheritedInterface"].GetString());
        m_inheritedInterfaceHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("PayloadContent") && !value["PayloadContent"].IsNull())
    {
        if (!value["PayloadContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.PayloadContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payloadContent = string(value["PayloadContent"].GetString());
        m_payloadContentHasBeenSet = true;
    }

    if (value.HasMember("CallbackAddressPortrait") && !value["CallbackAddressPortrait"].IsNull())
    {
        if (!value["CallbackAddressPortrait"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.CallbackAddressPortrait` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackAddressPortrait = string(value["CallbackAddressPortrait"].GetString());
        m_callbackAddressPortraitHasBeenSet = true;
    }

    if (value.HasMember("CallbackAddressTag") && !value["CallbackAddressTag"].IsNull())
    {
        if (!value["CallbackAddressTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.CallbackAddressTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackAddressTag = string(value["CallbackAddressTag"].GetString());
        m_callbackAddressTagHasBeenSet = true;
    }

    if (value.HasMember("ProcessMD5") && !value["ProcessMD5"].IsNull())
    {
        if (!value["ProcessMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ProcessMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processMD5 = string(value["ProcessMD5"].GetString());
        m_processMD5HasBeenSet = true;
    }

    if (value.HasMember("FilePermission") && !value["FilePermission"].IsNull())
    {
        if (!value["FilePermission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.FilePermission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePermission = string(value["FilePermission"].GetString());
        m_filePermissionHasBeenSet = true;
    }

    if (value.HasMember("FromLogAnalysisData") && !value["FromLogAnalysisData"].IsNull())
    {
        if (!value["FromLogAnalysisData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.FromLogAnalysisData` is not array type"));

        const rapidjson::Value &tmpValue = value["FromLogAnalysisData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fromLogAnalysisData.push_back(item);
        }
        m_fromLogAnalysisDataHasBeenSet = true;
    }

    if (value.HasMember("HitProbe") && !value["HitProbe"].IsNull())
    {
        if (!value["HitProbe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.HitProbe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitProbe = string(value["HitProbe"].GetString());
        m_hitProbeHasBeenSet = true;
    }

    if (value.HasMember("HitHoneyPot") && !value["HitHoneyPot"].IsNull())
    {
        if (!value["HitHoneyPot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.HitHoneyPot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitHoneyPot = string(value["HitHoneyPot"].GetString());
        m_hitHoneyPotHasBeenSet = true;
    }

    if (value.HasMember("CommandList") && !value["CommandList"].IsNull())
    {
        if (!value["CommandList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.CommandList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandList = string(value["CommandList"].GetString());
        m_commandListHasBeenSet = true;
    }

    if (value.HasMember("AttackEventDesc") && !value["AttackEventDesc"].IsNull())
    {
        if (!value["AttackEventDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.AttackEventDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackEventDesc = string(value["AttackEventDesc"].GetString());
        m_attackEventDescHasBeenSet = true;
    }

    if (value.HasMember("ProcessInfo") && !value["ProcessInfo"].IsNull())
    {
        if (!value["ProcessInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ProcessInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processInfo = string(value["ProcessInfo"].GetString());
        m_processInfoHasBeenSet = true;
    }

    if (value.HasMember("UserNameAndPwd") && !value["UserNameAndPwd"].IsNull())
    {
        if (!value["UserNameAndPwd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.UserNameAndPwd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userNameAndPwd = string(value["UserNameAndPwd"].GetString());
        m_userNameAndPwdHasBeenSet = true;
    }

    if (value.HasMember("StrategyID") && !value["StrategyID"].IsNull())
    {
        if (!value["StrategyID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.StrategyID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyID = string(value["StrategyID"].GetString());
        m_strategyIDHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("HitStrategy") && !value["HitStrategy"].IsNull())
    {
        if (!value["HitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.HitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitStrategy = string(value["HitStrategy"].GetString());
        m_hitStrategyHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("PID") && !value["PID"].IsNull())
    {
        if (!value["PID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.PID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pID = string(value["PID"].GetString());
        m_pIDHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodID") && !value["PodID"].IsNull())
    {
        if (!value["PodID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.PodID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podID = string(value["PodID"].GetString());
        m_podIDHasBeenSet = true;
    }

    if (value.HasMember("Response") && !value["Response"].IsNull())
    {
        if (!value["Response"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.Response` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_response = string(value["Response"].GetString());
        m_responseHasBeenSet = true;
    }

    if (value.HasMember("SystemCall") && !value["SystemCall"].IsNull())
    {
        if (!value["SystemCall"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.SystemCall` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemCall = string(value["SystemCall"].GetString());
        m_systemCallHasBeenSet = true;
    }

    if (value.HasMember("Verb") && !value["Verb"].IsNull())
    {
        if (!value["Verb"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.Verb` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verb = string(value["Verb"].GetString());
        m_verbHasBeenSet = true;
    }

    if (value.HasMember("LogID") && !value["LogID"].IsNull())
    {
        if (!value["LogID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.LogID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logID = string(value["LogID"].GetString());
        m_logIDHasBeenSet = true;
    }

    if (value.HasMember("Different") && !value["Different"].IsNull())
    {
        if (!value["Different"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.Different` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_different = string(value["Different"].GetString());
        m_differentHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("TargetAddress") && !value["TargetAddress"].IsNull())
    {
        if (!value["TargetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.TargetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetAddress = string(value["TargetAddress"].GetString());
        m_targetAddressHasBeenSet = true;
    }

    if (value.HasMember("MaliciousRequestDomain") && !value["MaliciousRequestDomain"].IsNull())
    {
        if (!value["MaliciousRequestDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.MaliciousRequestDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maliciousRequestDomain = string(value["MaliciousRequestDomain"].GetString());
        m_maliciousRequestDomainHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RequestURI") && !value["RequestURI"].IsNull())
    {
        if (!value["RequestURI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RequestURI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestURI = string(value["RequestURI"].GetString());
        m_requestURIHasBeenSet = true;
    }

    if (value.HasMember("RequestUser") && !value["RequestUser"].IsNull())
    {
        if (!value["RequestUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RequestUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestUser = string(value["RequestUser"].GetString());
        m_requestUserHasBeenSet = true;
    }

    if (value.HasMember("RequestObject") && !value["RequestObject"].IsNull())
    {
        if (!value["RequestObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.RequestObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestObject = string(value["RequestObject"].GetString());
        m_requestObjectHasBeenSet = true;
    }

    if (value.HasMember("ResponseObject") && !value["ResponseObject"].IsNull())
    {
        if (!value["ResponseObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.ResponseObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseObject = string(value["ResponseObject"].GetString());
        m_responseObjectHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("TIType") && !value["TIType"].IsNull())
    {
        if (!value["TIType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.TIType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tIType = string(value["TIType"].GetString());
        m_tITypeHasBeenSet = true;
    }

    if (value.HasMember("SourceIP") && !value["SourceIP"].IsNull())
    {
        if (!value["SourceIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertExtraInfo.SourceIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIP = string(value["SourceIP"].GetString());
        m_sourceIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertExtraInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_relateEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_relateEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_leakContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_leakContent.c_str(), allocator).Move(), allocator);
    }

    if (m_leakAPIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakAPI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_leakAPI.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretID.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolPort.c_str(), allocator).Move(), allocator);
    }

    if (m_attackContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackContent.c_str(), allocator).Move(), allocator);
    }

    if (m_attackIPProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackIPProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackIPProfile.c_str(), allocator).Move(), allocator);
    }

    if (m_attackIPTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackIPTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackIPTags.c_str(), allocator).Move(), allocator);
    }

    if (m_requestMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_httpLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpLog.c_str(), allocator).Move(), allocator);
    }

    if (m_attackDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_requestHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestHeaders.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulnerabilityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulnerabilityName.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVE.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceProcess.c_str(), allocator).Move(), allocator);
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

    if (m_fileMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileLastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileLastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileLastAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recentAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recentModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_virusFileTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusFileTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusFileTags.c_str(), allocator).Move(), allocator);
    }

    if (m_behavioralCharacteristicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehavioralCharacteristics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_behavioralCharacteristics.c_str(), allocator).Move(), allocator);
    }

    if (m_processNamePIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessNamePID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processNamePID.c_str(), allocator).Move(), allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_processCommandLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCommandLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processCommandLine.c_str(), allocator).Move(), allocator);
    }

    if (m_processPermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPermissions.c_str(), allocator).Move(), allocator);
    }

    if (m_executedCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutedCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executedCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_affectedFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectedFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_decoyPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecoyPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decoyPath.c_str(), allocator).Move(), allocator);
    }

    if (m_maliciousProcessFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousProcessFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maliciousProcessFileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_maliciousProcessFileMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousProcessFileMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maliciousProcessFileMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_maliciousProcessNamePIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousProcessNamePID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maliciousProcessNamePID.c_str(), allocator).Move(), allocator);
    }

    if (m_maliciousProcessPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maliciousProcessPath.c_str(), allocator).Move(), allocator);
    }

    if (m_maliciousProcessStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousProcessStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maliciousProcessStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commandContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandContent.c_str(), allocator).Move(), allocator);
    }

    if (m_startupUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startupUser.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_newPermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newPermissions.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcess.c_str(), allocator).Move(), allocator);
    }

    if (m_classNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_className.c_str(), allocator).Move(), allocator);
    }

    if (m_classLoaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassLoader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classLoader.c_str(), allocator).Move(), allocator);
    }

    if (m_classFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classFileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_classFileMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassFileMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classFileMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_parentClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_inheritedInterfaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InheritedInterface";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inheritedInterface.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payloadContent.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackAddressPortraitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackAddressPortrait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackAddressPortrait.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackAddressTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackAddressTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackAddressTag.c_str(), allocator).Move(), allocator);
    }

    if (m_processMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_filePermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePermission.c_str(), allocator).Move(), allocator);
    }

    if (m_fromLogAnalysisDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromLogAnalysisData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fromLogAnalysisData.begin(); itr != m_fromLogAnalysisData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hitProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitProbe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitProbe.c_str(), allocator).Move(), allocator);
    }

    if (m_hitHoneyPotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitHoneyPot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitHoneyPot.c_str(), allocator).Move(), allocator);
    }

    if (m_commandListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandList.c_str(), allocator).Move(), allocator);
    }

    if (m_attackEventDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackEventDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackEventDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_processInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameAndPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNameAndPwd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userNameAndPwd.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyID.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_hitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_pIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pID.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_podIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podID.c_str(), allocator).Move(), allocator);
    }

    if (m_responseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Response";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_response.c_str(), allocator).Move(), allocator);
    }

    if (m_systemCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemCall.c_str(), allocator).Move(), allocator);
    }

    if (m_verbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Verb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verb.c_str(), allocator).Move(), allocator);
    }

    if (m_logIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logID.c_str(), allocator).Move(), allocator);
    }

    if (m_differentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Different";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_different.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_maliciousRequestDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousRequestDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maliciousRequestDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_requestURIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestURI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestURI.c_str(), allocator).Move(), allocator);
    }

    if (m_requestUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestUser.c_str(), allocator).Move(), allocator);
    }

    if (m_requestObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestObject.c_str(), allocator).Move(), allocator);
    }

    if (m_responseObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseObject.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_tITypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TIType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tIType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIP.c_str(), allocator).Move(), allocator);
    }

}


RelatedEvent AlertExtraInfo::GetRelateEvent() const
{
    return m_relateEvent;
}

void AlertExtraInfo::SetRelateEvent(const RelatedEvent& _relateEvent)
{
    m_relateEvent = _relateEvent;
    m_relateEventHasBeenSet = true;
}

bool AlertExtraInfo::RelateEventHasBeenSet() const
{
    return m_relateEventHasBeenSet;
}

string AlertExtraInfo::GetLeakContent() const
{
    return m_leakContent;
}

void AlertExtraInfo::SetLeakContent(const string& _leakContent)
{
    m_leakContent = _leakContent;
    m_leakContentHasBeenSet = true;
}

bool AlertExtraInfo::LeakContentHasBeenSet() const
{
    return m_leakContentHasBeenSet;
}

string AlertExtraInfo::GetLeakAPI() const
{
    return m_leakAPI;
}

void AlertExtraInfo::SetLeakAPI(const string& _leakAPI)
{
    m_leakAPI = _leakAPI;
    m_leakAPIHasBeenSet = true;
}

bool AlertExtraInfo::LeakAPIHasBeenSet() const
{
    return m_leakAPIHasBeenSet;
}

string AlertExtraInfo::GetSecretID() const
{
    return m_secretID;
}

void AlertExtraInfo::SetSecretID(const string& _secretID)
{
    m_secretID = _secretID;
    m_secretIDHasBeenSet = true;
}

bool AlertExtraInfo::SecretIDHasBeenSet() const
{
    return m_secretIDHasBeenSet;
}

string AlertExtraInfo::GetRule() const
{
    return m_rule;
}

void AlertExtraInfo::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool AlertExtraInfo::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string AlertExtraInfo::GetRuleDesc() const
{
    return m_ruleDesc;
}

void AlertExtraInfo::SetRuleDesc(const string& _ruleDesc)
{
    m_ruleDesc = _ruleDesc;
    m_ruleDescHasBeenSet = true;
}

bool AlertExtraInfo::RuleDescHasBeenSet() const
{
    return m_ruleDescHasBeenSet;
}

string AlertExtraInfo::GetProtocolPort() const
{
    return m_protocolPort;
}

void AlertExtraInfo::SetProtocolPort(const string& _protocolPort)
{
    m_protocolPort = _protocolPort;
    m_protocolPortHasBeenSet = true;
}

bool AlertExtraInfo::ProtocolPortHasBeenSet() const
{
    return m_protocolPortHasBeenSet;
}

string AlertExtraInfo::GetAttackContent() const
{
    return m_attackContent;
}

void AlertExtraInfo::SetAttackContent(const string& _attackContent)
{
    m_attackContent = _attackContent;
    m_attackContentHasBeenSet = true;
}

bool AlertExtraInfo::AttackContentHasBeenSet() const
{
    return m_attackContentHasBeenSet;
}

string AlertExtraInfo::GetAttackIPProfile() const
{
    return m_attackIPProfile;
}

void AlertExtraInfo::SetAttackIPProfile(const string& _attackIPProfile)
{
    m_attackIPProfile = _attackIPProfile;
    m_attackIPProfileHasBeenSet = true;
}

bool AlertExtraInfo::AttackIPProfileHasBeenSet() const
{
    return m_attackIPProfileHasBeenSet;
}

string AlertExtraInfo::GetAttackIPTags() const
{
    return m_attackIPTags;
}

void AlertExtraInfo::SetAttackIPTags(const string& _attackIPTags)
{
    m_attackIPTags = _attackIPTags;
    m_attackIPTagsHasBeenSet = true;
}

bool AlertExtraInfo::AttackIPTagsHasBeenSet() const
{
    return m_attackIPTagsHasBeenSet;
}

string AlertExtraInfo::GetRequestMethod() const
{
    return m_requestMethod;
}

void AlertExtraInfo::SetRequestMethod(const string& _requestMethod)
{
    m_requestMethod = _requestMethod;
    m_requestMethodHasBeenSet = true;
}

bool AlertExtraInfo::RequestMethodHasBeenSet() const
{
    return m_requestMethodHasBeenSet;
}

string AlertExtraInfo::GetHttpLog() const
{
    return m_httpLog;
}

void AlertExtraInfo::SetHttpLog(const string& _httpLog)
{
    m_httpLog = _httpLog;
    m_httpLogHasBeenSet = true;
}

bool AlertExtraInfo::HttpLogHasBeenSet() const
{
    return m_httpLogHasBeenSet;
}

string AlertExtraInfo::GetAttackDomain() const
{
    return m_attackDomain;
}

void AlertExtraInfo::SetAttackDomain(const string& _attackDomain)
{
    m_attackDomain = _attackDomain;
    m_attackDomainHasBeenSet = true;
}

bool AlertExtraInfo::AttackDomainHasBeenSet() const
{
    return m_attackDomainHasBeenSet;
}

string AlertExtraInfo::GetFilePath() const
{
    return m_filePath;
}

void AlertExtraInfo::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool AlertExtraInfo::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string AlertExtraInfo::GetUserAgent() const
{
    return m_userAgent;
}

void AlertExtraInfo::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool AlertExtraInfo::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string AlertExtraInfo::GetRequestHeaders() const
{
    return m_requestHeaders;
}

void AlertExtraInfo::SetRequestHeaders(const string& _requestHeaders)
{
    m_requestHeaders = _requestHeaders;
    m_requestHeadersHasBeenSet = true;
}

bool AlertExtraInfo::RequestHeadersHasBeenSet() const
{
    return m_requestHeadersHasBeenSet;
}

string AlertExtraInfo::GetLoginUserName() const
{
    return m_loginUserName;
}

void AlertExtraInfo::SetLoginUserName(const string& _loginUserName)
{
    m_loginUserName = _loginUserName;
    m_loginUserNameHasBeenSet = true;
}

bool AlertExtraInfo::LoginUserNameHasBeenSet() const
{
    return m_loginUserNameHasBeenSet;
}

string AlertExtraInfo::GetVulnerabilityName() const
{
    return m_vulnerabilityName;
}

void AlertExtraInfo::SetVulnerabilityName(const string& _vulnerabilityName)
{
    m_vulnerabilityName = _vulnerabilityName;
    m_vulnerabilityNameHasBeenSet = true;
}

bool AlertExtraInfo::VulnerabilityNameHasBeenSet() const
{
    return m_vulnerabilityNameHasBeenSet;
}

string AlertExtraInfo::GetCVE() const
{
    return m_cVE;
}

void AlertExtraInfo::SetCVE(const string& _cVE)
{
    m_cVE = _cVE;
    m_cVEHasBeenSet = true;
}

bool AlertExtraInfo::CVEHasBeenSet() const
{
    return m_cVEHasBeenSet;
}

string AlertExtraInfo::GetServiceProcess() const
{
    return m_serviceProcess;
}

void AlertExtraInfo::SetServiceProcess(const string& _serviceProcess)
{
    m_serviceProcess = _serviceProcess;
    m_serviceProcessHasBeenSet = true;
}

bool AlertExtraInfo::ServiceProcessHasBeenSet() const
{
    return m_serviceProcessHasBeenSet;
}

string AlertExtraInfo::GetFileName() const
{
    return m_fileName;
}

void AlertExtraInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AlertExtraInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string AlertExtraInfo::GetFileSize() const
{
    return m_fileSize;
}

void AlertExtraInfo::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool AlertExtraInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string AlertExtraInfo::GetFileMD5() const
{
    return m_fileMD5;
}

void AlertExtraInfo::SetFileMD5(const string& _fileMD5)
{
    m_fileMD5 = _fileMD5;
    m_fileMD5HasBeenSet = true;
}

bool AlertExtraInfo::FileMD5HasBeenSet() const
{
    return m_fileMD5HasBeenSet;
}

string AlertExtraInfo::GetFileLastAccessTime() const
{
    return m_fileLastAccessTime;
}

void AlertExtraInfo::SetFileLastAccessTime(const string& _fileLastAccessTime)
{
    m_fileLastAccessTime = _fileLastAccessTime;
    m_fileLastAccessTimeHasBeenSet = true;
}

bool AlertExtraInfo::FileLastAccessTimeHasBeenSet() const
{
    return m_fileLastAccessTimeHasBeenSet;
}

string AlertExtraInfo::GetFileModifyTime() const
{
    return m_fileModifyTime;
}

void AlertExtraInfo::SetFileModifyTime(const string& _fileModifyTime)
{
    m_fileModifyTime = _fileModifyTime;
    m_fileModifyTimeHasBeenSet = true;
}

bool AlertExtraInfo::FileModifyTimeHasBeenSet() const
{
    return m_fileModifyTimeHasBeenSet;
}

string AlertExtraInfo::GetRecentAccessTime() const
{
    return m_recentAccessTime;
}

void AlertExtraInfo::SetRecentAccessTime(const string& _recentAccessTime)
{
    m_recentAccessTime = _recentAccessTime;
    m_recentAccessTimeHasBeenSet = true;
}

bool AlertExtraInfo::RecentAccessTimeHasBeenSet() const
{
    return m_recentAccessTimeHasBeenSet;
}

string AlertExtraInfo::GetRecentModifyTime() const
{
    return m_recentModifyTime;
}

void AlertExtraInfo::SetRecentModifyTime(const string& _recentModifyTime)
{
    m_recentModifyTime = _recentModifyTime;
    m_recentModifyTimeHasBeenSet = true;
}

bool AlertExtraInfo::RecentModifyTimeHasBeenSet() const
{
    return m_recentModifyTimeHasBeenSet;
}

string AlertExtraInfo::GetVirusName() const
{
    return m_virusName;
}

void AlertExtraInfo::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool AlertExtraInfo::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string AlertExtraInfo::GetVirusFileTags() const
{
    return m_virusFileTags;
}

void AlertExtraInfo::SetVirusFileTags(const string& _virusFileTags)
{
    m_virusFileTags = _virusFileTags;
    m_virusFileTagsHasBeenSet = true;
}

bool AlertExtraInfo::VirusFileTagsHasBeenSet() const
{
    return m_virusFileTagsHasBeenSet;
}

string AlertExtraInfo::GetBehavioralCharacteristics() const
{
    return m_behavioralCharacteristics;
}

void AlertExtraInfo::SetBehavioralCharacteristics(const string& _behavioralCharacteristics)
{
    m_behavioralCharacteristics = _behavioralCharacteristics;
    m_behavioralCharacteristicsHasBeenSet = true;
}

bool AlertExtraInfo::BehavioralCharacteristicsHasBeenSet() const
{
    return m_behavioralCharacteristicsHasBeenSet;
}

string AlertExtraInfo::GetProcessNamePID() const
{
    return m_processNamePID;
}

void AlertExtraInfo::SetProcessNamePID(const string& _processNamePID)
{
    m_processNamePID = _processNamePID;
    m_processNamePIDHasBeenSet = true;
}

bool AlertExtraInfo::ProcessNamePIDHasBeenSet() const
{
    return m_processNamePIDHasBeenSet;
}

string AlertExtraInfo::GetProcessPath() const
{
    return m_processPath;
}

void AlertExtraInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool AlertExtraInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string AlertExtraInfo::GetProcessCommandLine() const
{
    return m_processCommandLine;
}

void AlertExtraInfo::SetProcessCommandLine(const string& _processCommandLine)
{
    m_processCommandLine = _processCommandLine;
    m_processCommandLineHasBeenSet = true;
}

bool AlertExtraInfo::ProcessCommandLineHasBeenSet() const
{
    return m_processCommandLineHasBeenSet;
}

string AlertExtraInfo::GetProcessPermissions() const
{
    return m_processPermissions;
}

void AlertExtraInfo::SetProcessPermissions(const string& _processPermissions)
{
    m_processPermissions = _processPermissions;
    m_processPermissionsHasBeenSet = true;
}

bool AlertExtraInfo::ProcessPermissionsHasBeenSet() const
{
    return m_processPermissionsHasBeenSet;
}

string AlertExtraInfo::GetExecutedCommand() const
{
    return m_executedCommand;
}

void AlertExtraInfo::SetExecutedCommand(const string& _executedCommand)
{
    m_executedCommand = _executedCommand;
    m_executedCommandHasBeenSet = true;
}

bool AlertExtraInfo::ExecutedCommandHasBeenSet() const
{
    return m_executedCommandHasBeenSet;
}

string AlertExtraInfo::GetAffectedFileName() const
{
    return m_affectedFileName;
}

void AlertExtraInfo::SetAffectedFileName(const string& _affectedFileName)
{
    m_affectedFileName = _affectedFileName;
    m_affectedFileNameHasBeenSet = true;
}

bool AlertExtraInfo::AffectedFileNameHasBeenSet() const
{
    return m_affectedFileNameHasBeenSet;
}

string AlertExtraInfo::GetDecoyPath() const
{
    return m_decoyPath;
}

void AlertExtraInfo::SetDecoyPath(const string& _decoyPath)
{
    m_decoyPath = _decoyPath;
    m_decoyPathHasBeenSet = true;
}

bool AlertExtraInfo::DecoyPathHasBeenSet() const
{
    return m_decoyPathHasBeenSet;
}

string AlertExtraInfo::GetMaliciousProcessFileSize() const
{
    return m_maliciousProcessFileSize;
}

void AlertExtraInfo::SetMaliciousProcessFileSize(const string& _maliciousProcessFileSize)
{
    m_maliciousProcessFileSize = _maliciousProcessFileSize;
    m_maliciousProcessFileSizeHasBeenSet = true;
}

bool AlertExtraInfo::MaliciousProcessFileSizeHasBeenSet() const
{
    return m_maliciousProcessFileSizeHasBeenSet;
}

string AlertExtraInfo::GetMaliciousProcessFileMD5() const
{
    return m_maliciousProcessFileMD5;
}

void AlertExtraInfo::SetMaliciousProcessFileMD5(const string& _maliciousProcessFileMD5)
{
    m_maliciousProcessFileMD5 = _maliciousProcessFileMD5;
    m_maliciousProcessFileMD5HasBeenSet = true;
}

bool AlertExtraInfo::MaliciousProcessFileMD5HasBeenSet() const
{
    return m_maliciousProcessFileMD5HasBeenSet;
}

string AlertExtraInfo::GetMaliciousProcessNamePID() const
{
    return m_maliciousProcessNamePID;
}

void AlertExtraInfo::SetMaliciousProcessNamePID(const string& _maliciousProcessNamePID)
{
    m_maliciousProcessNamePID = _maliciousProcessNamePID;
    m_maliciousProcessNamePIDHasBeenSet = true;
}

bool AlertExtraInfo::MaliciousProcessNamePIDHasBeenSet() const
{
    return m_maliciousProcessNamePIDHasBeenSet;
}

string AlertExtraInfo::GetMaliciousProcessPath() const
{
    return m_maliciousProcessPath;
}

void AlertExtraInfo::SetMaliciousProcessPath(const string& _maliciousProcessPath)
{
    m_maliciousProcessPath = _maliciousProcessPath;
    m_maliciousProcessPathHasBeenSet = true;
}

bool AlertExtraInfo::MaliciousProcessPathHasBeenSet() const
{
    return m_maliciousProcessPathHasBeenSet;
}

string AlertExtraInfo::GetMaliciousProcessStartTime() const
{
    return m_maliciousProcessStartTime;
}

void AlertExtraInfo::SetMaliciousProcessStartTime(const string& _maliciousProcessStartTime)
{
    m_maliciousProcessStartTime = _maliciousProcessStartTime;
    m_maliciousProcessStartTimeHasBeenSet = true;
}

bool AlertExtraInfo::MaliciousProcessStartTimeHasBeenSet() const
{
    return m_maliciousProcessStartTimeHasBeenSet;
}

string AlertExtraInfo::GetCommandContent() const
{
    return m_commandContent;
}

void AlertExtraInfo::SetCommandContent(const string& _commandContent)
{
    m_commandContent = _commandContent;
    m_commandContentHasBeenSet = true;
}

bool AlertExtraInfo::CommandContentHasBeenSet() const
{
    return m_commandContentHasBeenSet;
}

string AlertExtraInfo::GetStartupUser() const
{
    return m_startupUser;
}

void AlertExtraInfo::SetStartupUser(const string& _startupUser)
{
    m_startupUser = _startupUser;
    m_startupUserHasBeenSet = true;
}

bool AlertExtraInfo::StartupUserHasBeenSet() const
{
    return m_startupUserHasBeenSet;
}

string AlertExtraInfo::GetUserGroup() const
{
    return m_userGroup;
}

void AlertExtraInfo::SetUserGroup(const string& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool AlertExtraInfo::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

string AlertExtraInfo::GetNewPermissions() const
{
    return m_newPermissions;
}

void AlertExtraInfo::SetNewPermissions(const string& _newPermissions)
{
    m_newPermissions = _newPermissions;
    m_newPermissionsHasBeenSet = true;
}

bool AlertExtraInfo::NewPermissionsHasBeenSet() const
{
    return m_newPermissionsHasBeenSet;
}

string AlertExtraInfo::GetParentProcess() const
{
    return m_parentProcess;
}

void AlertExtraInfo::SetParentProcess(const string& _parentProcess)
{
    m_parentProcess = _parentProcess;
    m_parentProcessHasBeenSet = true;
}

bool AlertExtraInfo::ParentProcessHasBeenSet() const
{
    return m_parentProcessHasBeenSet;
}

string AlertExtraInfo::GetClassName() const
{
    return m_className;
}

void AlertExtraInfo::SetClassName(const string& _className)
{
    m_className = _className;
    m_classNameHasBeenSet = true;
}

bool AlertExtraInfo::ClassNameHasBeenSet() const
{
    return m_classNameHasBeenSet;
}

string AlertExtraInfo::GetClassLoader() const
{
    return m_classLoader;
}

void AlertExtraInfo::SetClassLoader(const string& _classLoader)
{
    m_classLoader = _classLoader;
    m_classLoaderHasBeenSet = true;
}

bool AlertExtraInfo::ClassLoaderHasBeenSet() const
{
    return m_classLoaderHasBeenSet;
}

string AlertExtraInfo::GetClassFileSize() const
{
    return m_classFileSize;
}

void AlertExtraInfo::SetClassFileSize(const string& _classFileSize)
{
    m_classFileSize = _classFileSize;
    m_classFileSizeHasBeenSet = true;
}

bool AlertExtraInfo::ClassFileSizeHasBeenSet() const
{
    return m_classFileSizeHasBeenSet;
}

string AlertExtraInfo::GetClassFileMD5() const
{
    return m_classFileMD5;
}

void AlertExtraInfo::SetClassFileMD5(const string& _classFileMD5)
{
    m_classFileMD5 = _classFileMD5;
    m_classFileMD5HasBeenSet = true;
}

bool AlertExtraInfo::ClassFileMD5HasBeenSet() const
{
    return m_classFileMD5HasBeenSet;
}

string AlertExtraInfo::GetParentClassName() const
{
    return m_parentClassName;
}

void AlertExtraInfo::SetParentClassName(const string& _parentClassName)
{
    m_parentClassName = _parentClassName;
    m_parentClassNameHasBeenSet = true;
}

bool AlertExtraInfo::ParentClassNameHasBeenSet() const
{
    return m_parentClassNameHasBeenSet;
}

string AlertExtraInfo::GetInheritedInterface() const
{
    return m_inheritedInterface;
}

void AlertExtraInfo::SetInheritedInterface(const string& _inheritedInterface)
{
    m_inheritedInterface = _inheritedInterface;
    m_inheritedInterfaceHasBeenSet = true;
}

bool AlertExtraInfo::InheritedInterfaceHasBeenSet() const
{
    return m_inheritedInterfaceHasBeenSet;
}

string AlertExtraInfo::GetComment() const
{
    return m_comment;
}

void AlertExtraInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool AlertExtraInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string AlertExtraInfo::GetPayloadContent() const
{
    return m_payloadContent;
}

void AlertExtraInfo::SetPayloadContent(const string& _payloadContent)
{
    m_payloadContent = _payloadContent;
    m_payloadContentHasBeenSet = true;
}

bool AlertExtraInfo::PayloadContentHasBeenSet() const
{
    return m_payloadContentHasBeenSet;
}

string AlertExtraInfo::GetCallbackAddressPortrait() const
{
    return m_callbackAddressPortrait;
}

void AlertExtraInfo::SetCallbackAddressPortrait(const string& _callbackAddressPortrait)
{
    m_callbackAddressPortrait = _callbackAddressPortrait;
    m_callbackAddressPortraitHasBeenSet = true;
}

bool AlertExtraInfo::CallbackAddressPortraitHasBeenSet() const
{
    return m_callbackAddressPortraitHasBeenSet;
}

string AlertExtraInfo::GetCallbackAddressTag() const
{
    return m_callbackAddressTag;
}

void AlertExtraInfo::SetCallbackAddressTag(const string& _callbackAddressTag)
{
    m_callbackAddressTag = _callbackAddressTag;
    m_callbackAddressTagHasBeenSet = true;
}

bool AlertExtraInfo::CallbackAddressTagHasBeenSet() const
{
    return m_callbackAddressTagHasBeenSet;
}

string AlertExtraInfo::GetProcessMD5() const
{
    return m_processMD5;
}

void AlertExtraInfo::SetProcessMD5(const string& _processMD5)
{
    m_processMD5 = _processMD5;
    m_processMD5HasBeenSet = true;
}

bool AlertExtraInfo::ProcessMD5HasBeenSet() const
{
    return m_processMD5HasBeenSet;
}

string AlertExtraInfo::GetFilePermission() const
{
    return m_filePermission;
}

void AlertExtraInfo::SetFilePermission(const string& _filePermission)
{
    m_filePermission = _filePermission;
    m_filePermissionHasBeenSet = true;
}

bool AlertExtraInfo::FilePermissionHasBeenSet() const
{
    return m_filePermissionHasBeenSet;
}

vector<KeyValue> AlertExtraInfo::GetFromLogAnalysisData() const
{
    return m_fromLogAnalysisData;
}

void AlertExtraInfo::SetFromLogAnalysisData(const vector<KeyValue>& _fromLogAnalysisData)
{
    m_fromLogAnalysisData = _fromLogAnalysisData;
    m_fromLogAnalysisDataHasBeenSet = true;
}

bool AlertExtraInfo::FromLogAnalysisDataHasBeenSet() const
{
    return m_fromLogAnalysisDataHasBeenSet;
}

string AlertExtraInfo::GetHitProbe() const
{
    return m_hitProbe;
}

void AlertExtraInfo::SetHitProbe(const string& _hitProbe)
{
    m_hitProbe = _hitProbe;
    m_hitProbeHasBeenSet = true;
}

bool AlertExtraInfo::HitProbeHasBeenSet() const
{
    return m_hitProbeHasBeenSet;
}

string AlertExtraInfo::GetHitHoneyPot() const
{
    return m_hitHoneyPot;
}

void AlertExtraInfo::SetHitHoneyPot(const string& _hitHoneyPot)
{
    m_hitHoneyPot = _hitHoneyPot;
    m_hitHoneyPotHasBeenSet = true;
}

bool AlertExtraInfo::HitHoneyPotHasBeenSet() const
{
    return m_hitHoneyPotHasBeenSet;
}

string AlertExtraInfo::GetCommandList() const
{
    return m_commandList;
}

void AlertExtraInfo::SetCommandList(const string& _commandList)
{
    m_commandList = _commandList;
    m_commandListHasBeenSet = true;
}

bool AlertExtraInfo::CommandListHasBeenSet() const
{
    return m_commandListHasBeenSet;
}

string AlertExtraInfo::GetAttackEventDesc() const
{
    return m_attackEventDesc;
}

void AlertExtraInfo::SetAttackEventDesc(const string& _attackEventDesc)
{
    m_attackEventDesc = _attackEventDesc;
    m_attackEventDescHasBeenSet = true;
}

bool AlertExtraInfo::AttackEventDescHasBeenSet() const
{
    return m_attackEventDescHasBeenSet;
}

string AlertExtraInfo::GetProcessInfo() const
{
    return m_processInfo;
}

void AlertExtraInfo::SetProcessInfo(const string& _processInfo)
{
    m_processInfo = _processInfo;
    m_processInfoHasBeenSet = true;
}

bool AlertExtraInfo::ProcessInfoHasBeenSet() const
{
    return m_processInfoHasBeenSet;
}

string AlertExtraInfo::GetUserNameAndPwd() const
{
    return m_userNameAndPwd;
}

void AlertExtraInfo::SetUserNameAndPwd(const string& _userNameAndPwd)
{
    m_userNameAndPwd = _userNameAndPwd;
    m_userNameAndPwdHasBeenSet = true;
}

bool AlertExtraInfo::UserNameAndPwdHasBeenSet() const
{
    return m_userNameAndPwdHasBeenSet;
}

string AlertExtraInfo::GetStrategyID() const
{
    return m_strategyID;
}

void AlertExtraInfo::SetStrategyID(const string& _strategyID)
{
    m_strategyID = _strategyID;
    m_strategyIDHasBeenSet = true;
}

bool AlertExtraInfo::StrategyIDHasBeenSet() const
{
    return m_strategyIDHasBeenSet;
}

string AlertExtraInfo::GetStrategyName() const
{
    return m_strategyName;
}

void AlertExtraInfo::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool AlertExtraInfo::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string AlertExtraInfo::GetHitStrategy() const
{
    return m_hitStrategy;
}

void AlertExtraInfo::SetHitStrategy(const string& _hitStrategy)
{
    m_hitStrategy = _hitStrategy;
    m_hitStrategyHasBeenSet = true;
}

bool AlertExtraInfo::HitStrategyHasBeenSet() const
{
    return m_hitStrategyHasBeenSet;
}

string AlertExtraInfo::GetProcessName() const
{
    return m_processName;
}

void AlertExtraInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool AlertExtraInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string AlertExtraInfo::GetPID() const
{
    return m_pID;
}

void AlertExtraInfo::SetPID(const string& _pID)
{
    m_pID = _pID;
    m_pIDHasBeenSet = true;
}

bool AlertExtraInfo::PIDHasBeenSet() const
{
    return m_pIDHasBeenSet;
}

string AlertExtraInfo::GetPodName() const
{
    return m_podName;
}

void AlertExtraInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool AlertExtraInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string AlertExtraInfo::GetPodID() const
{
    return m_podID;
}

void AlertExtraInfo::SetPodID(const string& _podID)
{
    m_podID = _podID;
    m_podIDHasBeenSet = true;
}

bool AlertExtraInfo::PodIDHasBeenSet() const
{
    return m_podIDHasBeenSet;
}

string AlertExtraInfo::GetResponse() const
{
    return m_response;
}

void AlertExtraInfo::SetResponse(const string& _response)
{
    m_response = _response;
    m_responseHasBeenSet = true;
}

bool AlertExtraInfo::ResponseHasBeenSet() const
{
    return m_responseHasBeenSet;
}

string AlertExtraInfo::GetSystemCall() const
{
    return m_systemCall;
}

void AlertExtraInfo::SetSystemCall(const string& _systemCall)
{
    m_systemCall = _systemCall;
    m_systemCallHasBeenSet = true;
}

bool AlertExtraInfo::SystemCallHasBeenSet() const
{
    return m_systemCallHasBeenSet;
}

string AlertExtraInfo::GetVerb() const
{
    return m_verb;
}

void AlertExtraInfo::SetVerb(const string& _verb)
{
    m_verb = _verb;
    m_verbHasBeenSet = true;
}

bool AlertExtraInfo::VerbHasBeenSet() const
{
    return m_verbHasBeenSet;
}

string AlertExtraInfo::GetLogID() const
{
    return m_logID;
}

void AlertExtraInfo::SetLogID(const string& _logID)
{
    m_logID = _logID;
    m_logIDHasBeenSet = true;
}

bool AlertExtraInfo::LogIDHasBeenSet() const
{
    return m_logIDHasBeenSet;
}

string AlertExtraInfo::GetDifferent() const
{
    return m_different;
}

void AlertExtraInfo::SetDifferent(const string& _different)
{
    m_different = _different;
    m_differentHasBeenSet = true;
}

bool AlertExtraInfo::DifferentHasBeenSet() const
{
    return m_differentHasBeenSet;
}

string AlertExtraInfo::GetEventType() const
{
    return m_eventType;
}

void AlertExtraInfo::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool AlertExtraInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string AlertExtraInfo::GetDescription() const
{
    return m_description;
}

void AlertExtraInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AlertExtraInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AlertExtraInfo::GetTargetAddress() const
{
    return m_targetAddress;
}

void AlertExtraInfo::SetTargetAddress(const string& _targetAddress)
{
    m_targetAddress = _targetAddress;
    m_targetAddressHasBeenSet = true;
}

bool AlertExtraInfo::TargetAddressHasBeenSet() const
{
    return m_targetAddressHasBeenSet;
}

string AlertExtraInfo::GetMaliciousRequestDomain() const
{
    return m_maliciousRequestDomain;
}

void AlertExtraInfo::SetMaliciousRequestDomain(const string& _maliciousRequestDomain)
{
    m_maliciousRequestDomain = _maliciousRequestDomain;
    m_maliciousRequestDomainHasBeenSet = true;
}

bool AlertExtraInfo::MaliciousRequestDomainHasBeenSet() const
{
    return m_maliciousRequestDomainHasBeenSet;
}

string AlertExtraInfo::GetRuleType() const
{
    return m_ruleType;
}

void AlertExtraInfo::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool AlertExtraInfo::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string AlertExtraInfo::GetRequestURI() const
{
    return m_requestURI;
}

void AlertExtraInfo::SetRequestURI(const string& _requestURI)
{
    m_requestURI = _requestURI;
    m_requestURIHasBeenSet = true;
}

bool AlertExtraInfo::RequestURIHasBeenSet() const
{
    return m_requestURIHasBeenSet;
}

string AlertExtraInfo::GetRequestUser() const
{
    return m_requestUser;
}

void AlertExtraInfo::SetRequestUser(const string& _requestUser)
{
    m_requestUser = _requestUser;
    m_requestUserHasBeenSet = true;
}

bool AlertExtraInfo::RequestUserHasBeenSet() const
{
    return m_requestUserHasBeenSet;
}

string AlertExtraInfo::GetRequestObject() const
{
    return m_requestObject;
}

void AlertExtraInfo::SetRequestObject(const string& _requestObject)
{
    m_requestObject = _requestObject;
    m_requestObjectHasBeenSet = true;
}

bool AlertExtraInfo::RequestObjectHasBeenSet() const
{
    return m_requestObjectHasBeenSet;
}

string AlertExtraInfo::GetResponseObject() const
{
    return m_responseObject;
}

void AlertExtraInfo::SetResponseObject(const string& _responseObject)
{
    m_responseObject = _responseObject;
    m_responseObjectHasBeenSet = true;
}

bool AlertExtraInfo::ResponseObjectHasBeenSet() const
{
    return m_responseObjectHasBeenSet;
}

string AlertExtraInfo::GetFileType() const
{
    return m_fileType;
}

void AlertExtraInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool AlertExtraInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string AlertExtraInfo::GetTIType() const
{
    return m_tIType;
}

void AlertExtraInfo::SetTIType(const string& _tIType)
{
    m_tIType = _tIType;
    m_tITypeHasBeenSet = true;
}

bool AlertExtraInfo::TITypeHasBeenSet() const
{
    return m_tITypeHasBeenSet;
}

string AlertExtraInfo::GetSourceIP() const
{
    return m_sourceIP;
}

void AlertExtraInfo::SetSourceIP(const string& _sourceIP)
{
    m_sourceIP = _sourceIP;
    m_sourceIPHasBeenSet = true;
}

bool AlertExtraInfo::SourceIPHasBeenSet() const
{
    return m_sourceIPHasBeenSet;
}

