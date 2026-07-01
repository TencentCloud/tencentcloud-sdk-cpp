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

#include <tencentcloud/csip/v20221121/model/EDRRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EDRRule::EDRRule() :
    m_ruleIDHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_detectModeHasBeenSet(false),
    m_detectTypeHasBeenSet(false),
    m_attackStageHasBeenSet(false),
    m_cWPScopeHasBeenSet(false),
    m_qUUIDSHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_supportBlockHasBeenSet(false),
    m_md5ListHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileDirectoryHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_outboundIPHasBeenSet(false),
    m_inboundIPHasBeenSet(false),
    m_cmdLineRulesHasBeenSet(false),
    m_tCSSScopeHasBeenSet(false),
    m_imageIDsHasBeenSet(false),
    m_imageNamesRegexHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_excludeQUUIDSHasBeenSet(false),
    m_excludeImageIDsHasBeenSet(false),
    m_processNetworkRulesHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_instanceIDsHasBeenSet(false),
    m_excludeInstanceIDsHasBeenSet(false)
{
}

CoreInternalOutcome EDRRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("DetectMode") && !value["DetectMode"].IsNull())
    {
        if (!value["DetectMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.DetectMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectMode = value["DetectMode"].GetInt64();
        m_detectModeHasBeenSet = true;
    }

    if (value.HasMember("DetectType") && !value["DetectType"].IsNull())
    {
        if (!value["DetectType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.DetectType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectType = value["DetectType"].GetInt64();
        m_detectTypeHasBeenSet = true;
    }

    if (value.HasMember("AttackStage") && !value["AttackStage"].IsNull())
    {
        if (!value["AttackStage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.AttackStage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackStage = string(value["AttackStage"].GetString());
        m_attackStageHasBeenSet = true;
    }

    if (value.HasMember("CWPScope") && !value["CWPScope"].IsNull())
    {
        if (!value["CWPScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.CWPScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPScope = value["CWPScope"].GetInt64();
        m_cWPScopeHasBeenSet = true;
    }

    if (value.HasMember("QUUIDS") && !value["QUUIDS"].IsNull())
    {
        if (!value["QUUIDS"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.QUUIDS` is not array type"));

        const rapidjson::Value &tmpValue = value["QUUIDS"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_qUUIDS.push_back((*itr).GetString());
        }
        m_qUUIDSHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("SupportBlock") && !value["SupportBlock"].IsNull())
    {
        if (!value["SupportBlock"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.SupportBlock` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportBlock = value["SupportBlock"].GetInt64();
        m_supportBlockHasBeenSet = true;
    }

    if (value.HasMember("Md5List") && !value["Md5List"].IsNull())
    {
        if (!value["Md5List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.Md5List` is not array type"));

        const rapidjson::Value &tmpValue = value["Md5List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_md5List.push_back((*itr).GetString());
        }
        m_md5ListHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.FileName` is not array type"));

        const rapidjson::Value &tmpValue = value["FileName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileName.push_back((*itr).GetString());
        }
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileDirectory") && !value["FileDirectory"].IsNull())
    {
        if (!value["FileDirectory"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.FileDirectory` is not array type"));

        const rapidjson::Value &tmpValue = value["FileDirectory"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileDirectory.push_back((*itr).GetString());
        }
        m_fileDirectoryHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.Domains` is not array type"));

        const rapidjson::Value &tmpValue = value["Domains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domains.push_back((*itr).GetString());
        }
        m_domainsHasBeenSet = true;
    }

    if (value.HasMember("OutboundIP") && !value["OutboundIP"].IsNull())
    {
        if (!value["OutboundIP"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.OutboundIP` is not array type"));

        const rapidjson::Value &tmpValue = value["OutboundIP"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outboundIP.push_back((*itr).GetString());
        }
        m_outboundIPHasBeenSet = true;
    }

    if (value.HasMember("InboundIP") && !value["InboundIP"].IsNull())
    {
        if (!value["InboundIP"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.InboundIP` is not array type"));

        const rapidjson::Value &tmpValue = value["InboundIP"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inboundIP.push_back((*itr).GetString());
        }
        m_inboundIPHasBeenSet = true;
    }

    if (value.HasMember("CmdLineRules") && !value["CmdLineRules"].IsNull())
    {
        if (!value["CmdLineRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.CmdLineRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cmdLineRules.Deserialize(value["CmdLineRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cmdLineRulesHasBeenSet = true;
    }

    if (value.HasMember("TCSSScope") && !value["TCSSScope"].IsNull())
    {
        if (!value["TCSSScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.TCSSScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tCSSScope = value["TCSSScope"].GetInt64();
        m_tCSSScopeHasBeenSet = true;
    }

    if (value.HasMember("ImageIDs") && !value["ImageIDs"].IsNull())
    {
        if (!value["ImageIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.ImageIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIDs.push_back((*itr).GetString());
        }
        m_imageIDsHasBeenSet = true;
    }

    if (value.HasMember("ImageNamesRegex") && !value["ImageNamesRegex"].IsNull())
    {
        if (!value["ImageNamesRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.ImageNamesRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageNamesRegex = string(value["ImageNamesRegex"].GetString());
        m_imageNamesRegexHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("ExcludeQUUIDS") && !value["ExcludeQUUIDS"].IsNull())
    {
        if (!value["ExcludeQUUIDS"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.ExcludeQUUIDS` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeQUUIDS"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeQUUIDS.push_back((*itr).GetString());
        }
        m_excludeQUUIDSHasBeenSet = true;
    }

    if (value.HasMember("ExcludeImageIDs") && !value["ExcludeImageIDs"].IsNull())
    {
        if (!value["ExcludeImageIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.ExcludeImageIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeImageIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeImageIDs.push_back((*itr).GetString());
        }
        m_excludeImageIDsHasBeenSet = true;
    }

    if (value.HasMember("ProcessNetworkRules") && !value["ProcessNetworkRules"].IsNull())
    {
        if (!value["ProcessNetworkRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.ProcessNetworkRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_processNetworkRules.Deserialize(value["ProcessNetworkRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processNetworkRulesHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRRule.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceIDs") && !value["InstanceIDs"].IsNull())
    {
        if (!value["InstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.InstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIDs.push_back((*itr).GetString());
        }
        m_instanceIDsHasBeenSet = true;
    }

    if (value.HasMember("ExcludeInstanceIDs") && !value["ExcludeInstanceIDs"].IsNull())
    {
        if (!value["ExcludeInstanceIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRRule.ExcludeInstanceIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeInstanceIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeInstanceIDs.push_back((*itr).GetString());
        }
        m_excludeInstanceIDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EDRRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_detectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectMode, allocator);
    }

    if (m_detectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectType, allocator);
    }

    if (m_attackStageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackStage.c_str(), allocator).Move(), allocator);
    }

    if (m_cWPScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPScope, allocator);
    }

    if (m_qUUIDSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUUIDS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_qUUIDS.begin(); itr != m_qUUIDS.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_supportBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportBlock, allocator);
    }

    if (m_md5ListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_md5List.begin(); itr != m_md5List.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileName.begin(); itr != m_fileName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileDirectory.begin(); itr != m_fileDirectory.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_outboundIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outboundIP.begin(); itr != m_outboundIP.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inboundIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InboundIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inboundIP.begin(); itr != m_inboundIP.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cmdLineRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLineRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cmdLineRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tCSSScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCSSScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tCSSScope, allocator);
    }

    if (m_imageIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIDs.begin(); itr != m_imageIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageNamesRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageNamesRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageNamesRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_excludeQUUIDSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeQUUIDS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeQUUIDS.begin(); itr != m_excludeQUUIDS.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeImageIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeImageIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeImageIDs.begin(); itr != m_excludeImageIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_processNetworkRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessNetworkRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_processNetworkRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_instanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIDs.begin(); itr != m_instanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeInstanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeInstanceIDs.begin(); itr != m_excludeInstanceIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string EDRRule::GetRuleID() const
{
    return m_ruleID;
}

void EDRRule::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool EDRRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

int64_t EDRRule::GetRuleType() const
{
    return m_ruleType;
}

void EDRRule::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool EDRRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string EDRRule::GetName() const
{
    return m_name;
}

void EDRRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EDRRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EDRRule::GetDescription() const
{
    return m_description;
}

void EDRRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EDRRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string EDRRule::GetContentType() const
{
    return m_contentType;
}

void EDRRule::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool EDRRule::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

int64_t EDRRule::GetAction() const
{
    return m_action;
}

void EDRRule::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool EDRRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t EDRRule::GetLevel() const
{
    return m_level;
}

void EDRRule::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool EDRRule::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t EDRRule::GetDetectMode() const
{
    return m_detectMode;
}

void EDRRule::SetDetectMode(const int64_t& _detectMode)
{
    m_detectMode = _detectMode;
    m_detectModeHasBeenSet = true;
}

bool EDRRule::DetectModeHasBeenSet() const
{
    return m_detectModeHasBeenSet;
}

int64_t EDRRule::GetDetectType() const
{
    return m_detectType;
}

void EDRRule::SetDetectType(const int64_t& _detectType)
{
    m_detectType = _detectType;
    m_detectTypeHasBeenSet = true;
}

bool EDRRule::DetectTypeHasBeenSet() const
{
    return m_detectTypeHasBeenSet;
}

string EDRRule::GetAttackStage() const
{
    return m_attackStage;
}

void EDRRule::SetAttackStage(const string& _attackStage)
{
    m_attackStage = _attackStage;
    m_attackStageHasBeenSet = true;
}

bool EDRRule::AttackStageHasBeenSet() const
{
    return m_attackStageHasBeenSet;
}

int64_t EDRRule::GetCWPScope() const
{
    return m_cWPScope;
}

void EDRRule::SetCWPScope(const int64_t& _cWPScope)
{
    m_cWPScope = _cWPScope;
    m_cWPScopeHasBeenSet = true;
}

bool EDRRule::CWPScopeHasBeenSet() const
{
    return m_cWPScopeHasBeenSet;
}

vector<string> EDRRule::GetQUUIDS() const
{
    return m_qUUIDS;
}

void EDRRule::SetQUUIDS(const vector<string>& _qUUIDS)
{
    m_qUUIDS = _qUUIDS;
    m_qUUIDSHasBeenSet = true;
}

bool EDRRule::QUUIDSHasBeenSet() const
{
    return m_qUUIDSHasBeenSet;
}

int64_t EDRRule::GetStatus() const
{
    return m_status;
}

void EDRRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EDRRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EDRRule::GetCreateTime() const
{
    return m_createTime;
}

void EDRRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EDRRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EDRRule::GetModifyTime() const
{
    return m_modifyTime;
}

void EDRRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool EDRRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t EDRRule::GetSupportBlock() const
{
    return m_supportBlock;
}

void EDRRule::SetSupportBlock(const int64_t& _supportBlock)
{
    m_supportBlock = _supportBlock;
    m_supportBlockHasBeenSet = true;
}

bool EDRRule::SupportBlockHasBeenSet() const
{
    return m_supportBlockHasBeenSet;
}

vector<string> EDRRule::GetMd5List() const
{
    return m_md5List;
}

void EDRRule::SetMd5List(const vector<string>& _md5List)
{
    m_md5List = _md5List;
    m_md5ListHasBeenSet = true;
}

bool EDRRule::Md5ListHasBeenSet() const
{
    return m_md5ListHasBeenSet;
}

vector<string> EDRRule::GetFileName() const
{
    return m_fileName;
}

void EDRRule::SetFileName(const vector<string>& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool EDRRule::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

vector<string> EDRRule::GetFileDirectory() const
{
    return m_fileDirectory;
}

void EDRRule::SetFileDirectory(const vector<string>& _fileDirectory)
{
    m_fileDirectory = _fileDirectory;
    m_fileDirectoryHasBeenSet = true;
}

bool EDRRule::FileDirectoryHasBeenSet() const
{
    return m_fileDirectoryHasBeenSet;
}

vector<string> EDRRule::GetDomains() const
{
    return m_domains;
}

void EDRRule::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool EDRRule::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<string> EDRRule::GetOutboundIP() const
{
    return m_outboundIP;
}

void EDRRule::SetOutboundIP(const vector<string>& _outboundIP)
{
    m_outboundIP = _outboundIP;
    m_outboundIPHasBeenSet = true;
}

bool EDRRule::OutboundIPHasBeenSet() const
{
    return m_outboundIPHasBeenSet;
}

vector<string> EDRRule::GetInboundIP() const
{
    return m_inboundIP;
}

void EDRRule::SetInboundIP(const vector<string>& _inboundIP)
{
    m_inboundIP = _inboundIP;
    m_inboundIPHasBeenSet = true;
}

bool EDRRule::InboundIPHasBeenSet() const
{
    return m_inboundIPHasBeenSet;
}

RuleContentCmdLine EDRRule::GetCmdLineRules() const
{
    return m_cmdLineRules;
}

void EDRRule::SetCmdLineRules(const RuleContentCmdLine& _cmdLineRules)
{
    m_cmdLineRules = _cmdLineRules;
    m_cmdLineRulesHasBeenSet = true;
}

bool EDRRule::CmdLineRulesHasBeenSet() const
{
    return m_cmdLineRulesHasBeenSet;
}

int64_t EDRRule::GetTCSSScope() const
{
    return m_tCSSScope;
}

void EDRRule::SetTCSSScope(const int64_t& _tCSSScope)
{
    m_tCSSScope = _tCSSScope;
    m_tCSSScopeHasBeenSet = true;
}

bool EDRRule::TCSSScopeHasBeenSet() const
{
    return m_tCSSScopeHasBeenSet;
}

vector<string> EDRRule::GetImageIDs() const
{
    return m_imageIDs;
}

void EDRRule::SetImageIDs(const vector<string>& _imageIDs)
{
    m_imageIDs = _imageIDs;
    m_imageIDsHasBeenSet = true;
}

bool EDRRule::ImageIDsHasBeenSet() const
{
    return m_imageIDsHasBeenSet;
}

string EDRRule::GetImageNamesRegex() const
{
    return m_imageNamesRegex;
}

void EDRRule::SetImageNamesRegex(const string& _imageNamesRegex)
{
    m_imageNamesRegex = _imageNamesRegex;
    m_imageNamesRegexHasBeenSet = true;
}

bool EDRRule::ImageNamesRegexHasBeenSet() const
{
    return m_imageNamesRegexHasBeenSet;
}

int64_t EDRRule::GetConfidence() const
{
    return m_confidence;
}

void EDRRule::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool EDRRule::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<string> EDRRule::GetExcludeQUUIDS() const
{
    return m_excludeQUUIDS;
}

void EDRRule::SetExcludeQUUIDS(const vector<string>& _excludeQUUIDS)
{
    m_excludeQUUIDS = _excludeQUUIDS;
    m_excludeQUUIDSHasBeenSet = true;
}

bool EDRRule::ExcludeQUUIDSHasBeenSet() const
{
    return m_excludeQUUIDSHasBeenSet;
}

vector<string> EDRRule::GetExcludeImageIDs() const
{
    return m_excludeImageIDs;
}

void EDRRule::SetExcludeImageIDs(const vector<string>& _excludeImageIDs)
{
    m_excludeImageIDs = _excludeImageIDs;
    m_excludeImageIDsHasBeenSet = true;
}

bool EDRRule::ExcludeImageIDsHasBeenSet() const
{
    return m_excludeImageIDsHasBeenSet;
}

RuleContentProcessNetwork EDRRule::GetProcessNetworkRules() const
{
    return m_processNetworkRules;
}

void EDRRule::SetProcessNetworkRules(const RuleContentProcessNetwork& _processNetworkRules)
{
    m_processNetworkRules = _processNetworkRules;
    m_processNetworkRulesHasBeenSet = true;
}

bool EDRRule::ProcessNetworkRulesHasBeenSet() const
{
    return m_processNetworkRulesHasBeenSet;
}

int64_t EDRRule::GetAppID() const
{
    return m_appID;
}

void EDRRule::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool EDRRule::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

vector<string> EDRRule::GetInstanceIDs() const
{
    return m_instanceIDs;
}

void EDRRule::SetInstanceIDs(const vector<string>& _instanceIDs)
{
    m_instanceIDs = _instanceIDs;
    m_instanceIDsHasBeenSet = true;
}

bool EDRRule::InstanceIDsHasBeenSet() const
{
    return m_instanceIDsHasBeenSet;
}

vector<string> EDRRule::GetExcludeInstanceIDs() const
{
    return m_excludeInstanceIDs;
}

void EDRRule::SetExcludeInstanceIDs(const vector<string>& _excludeInstanceIDs)
{
    m_excludeInstanceIDs = _excludeInstanceIDs;
    m_excludeInstanceIDsHasBeenSet = true;
}

bool EDRRule::ExcludeInstanceIDsHasBeenSet() const
{
    return m_excludeInstanceIDsHasBeenSet;
}

