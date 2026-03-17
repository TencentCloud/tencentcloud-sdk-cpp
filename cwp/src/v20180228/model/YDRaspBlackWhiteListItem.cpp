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

#include <tencentcloud/cwp/v20180228/model/YDRaspBlackWhiteListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

YDRaspBlackWhiteListItem::YDRaspBlackWhiteListItem() :
    m_idHasBeenSet(false),
    m_logicalSymbolHasBeenSet(false),
    m_classNameRegexpHasBeenSet(false),
    m_superClassNameRegexpHasBeenSet(false),
    m_interfacesRegexpHasBeenSet(false),
    m_annotationsRegexpHasBeenSet(false),
    m_loaderClassNameRegexpHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_handleHistoryHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_matchModeHasBeenSet(false),
    m_cWPEffectiveHasBeenSet(false),
    m_cWPScopeHasBeenSet(false),
    m_cWPQuuidsHasBeenSet(false),
    m_tCSSEffectiveHasBeenSet(false),
    m_tCSSScopeHasBeenSet(false),
    m_tCSSQuuidsHasBeenSet(false),
    m_eksEffectiveHasBeenSet(false),
    m_eksScopeHasBeenSet(false),
    m_eksNodeUniqueIDHasBeenSet(false),
    m_cWPMachinesNumsHasBeenSet(false),
    m_tCSSMachinesNumsHasBeenSet(false),
    m_eksMachinesNumsHasBeenSet(false)
{
}

CoreInternalOutcome YDRaspBlackWhiteListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("LogicalSymbol") && !value["LogicalSymbol"].IsNull())
    {
        if (!value["LogicalSymbol"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.LogicalSymbol` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logicalSymbol = value["LogicalSymbol"].GetUint64();
        m_logicalSymbolHasBeenSet = true;
    }

    if (value.HasMember("ClassNameRegexp") && !value["ClassNameRegexp"].IsNull())
    {
        if (!value["ClassNameRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.ClassNameRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classNameRegexp = string(value["ClassNameRegexp"].GetString());
        m_classNameRegexpHasBeenSet = true;
    }

    if (value.HasMember("SuperClassNameRegexp") && !value["SuperClassNameRegexp"].IsNull())
    {
        if (!value["SuperClassNameRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.SuperClassNameRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_superClassNameRegexp = string(value["SuperClassNameRegexp"].GetString());
        m_superClassNameRegexpHasBeenSet = true;
    }

    if (value.HasMember("InterfacesRegexp") && !value["InterfacesRegexp"].IsNull())
    {
        if (!value["InterfacesRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.InterfacesRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interfacesRegexp = string(value["InterfacesRegexp"].GetString());
        m_interfacesRegexpHasBeenSet = true;
    }

    if (value.HasMember("AnnotationsRegexp") && !value["AnnotationsRegexp"].IsNull())
    {
        if (!value["AnnotationsRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.AnnotationsRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationsRegexp = string(value["AnnotationsRegexp"].GetString());
        m_annotationsRegexpHasBeenSet = true;
    }

    if (value.HasMember("LoaderClassNameRegexp") && !value["LoaderClassNameRegexp"].IsNull())
    {
        if (!value["LoaderClassNameRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.LoaderClassNameRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loaderClassNameRegexp = string(value["LoaderClassNameRegexp"].GetString());
        m_loaderClassNameRegexpHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("HandleHistory") && !value["HandleHistory"].IsNull())
    {
        if (!value["HandleHistory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.HandleHistory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_handleHistory = value["HandleHistory"].GetUint64();
        m_handleHistoryHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.FilterType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = value["FilterType"].GetInt64();
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.AttackType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = value["AttackType"].GetInt64();
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("MatchMode") && !value["MatchMode"].IsNull())
    {
        if (!value["MatchMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.MatchMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_matchMode = value["MatchMode"].GetInt64();
        m_matchModeHasBeenSet = true;
    }

    if (value.HasMember("CWPEffective") && !value["CWPEffective"].IsNull())
    {
        if (!value["CWPEffective"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.CWPEffective` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPEffective = value["CWPEffective"].GetInt64();
        m_cWPEffectiveHasBeenSet = true;
    }

    if (value.HasMember("CWPScope") && !value["CWPScope"].IsNull())
    {
        if (!value["CWPScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.CWPScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPScope = value["CWPScope"].GetInt64();
        m_cWPScopeHasBeenSet = true;
    }

    if (value.HasMember("CWPQuuids") && !value["CWPQuuids"].IsNull())
    {
        if (!value["CWPQuuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.CWPQuuids` is not array type"));

        const rapidjson::Value &tmpValue = value["CWPQuuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cWPQuuids.push_back((*itr).GetString());
        }
        m_cWPQuuidsHasBeenSet = true;
    }

    if (value.HasMember("TCSSEffective") && !value["TCSSEffective"].IsNull())
    {
        if (!value["TCSSEffective"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.TCSSEffective` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tCSSEffective = value["TCSSEffective"].GetInt64();
        m_tCSSEffectiveHasBeenSet = true;
    }

    if (value.HasMember("TCSSScope") && !value["TCSSScope"].IsNull())
    {
        if (!value["TCSSScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.TCSSScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tCSSScope = value["TCSSScope"].GetInt64();
        m_tCSSScopeHasBeenSet = true;
    }

    if (value.HasMember("TCSSQuuids") && !value["TCSSQuuids"].IsNull())
    {
        if (!value["TCSSQuuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.TCSSQuuids` is not array type"));

        const rapidjson::Value &tmpValue = value["TCSSQuuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tCSSQuuids.push_back((*itr).GetString());
        }
        m_tCSSQuuidsHasBeenSet = true;
    }

    if (value.HasMember("EksEffective") && !value["EksEffective"].IsNull())
    {
        if (!value["EksEffective"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.EksEffective` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eksEffective = value["EksEffective"].GetInt64();
        m_eksEffectiveHasBeenSet = true;
    }

    if (value.HasMember("EksScope") && !value["EksScope"].IsNull())
    {
        if (!value["EksScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.EksScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eksScope = value["EksScope"].GetInt64();
        m_eksScopeHasBeenSet = true;
    }

    if (value.HasMember("EksNodeUniqueID") && !value["EksNodeUniqueID"].IsNull())
    {
        if (!value["EksNodeUniqueID"].IsArray())
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.EksNodeUniqueID` is not array type"));

        const rapidjson::Value &tmpValue = value["EksNodeUniqueID"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eksNodeUniqueID.push_back((*itr).GetString());
        }
        m_eksNodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("CWPMachinesNums") && !value["CWPMachinesNums"].IsNull())
    {
        if (!value["CWPMachinesNums"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.CWPMachinesNums` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cWPMachinesNums = string(value["CWPMachinesNums"].GetString());
        m_cWPMachinesNumsHasBeenSet = true;
    }

    if (value.HasMember("TCSSMachinesNums") && !value["TCSSMachinesNums"].IsNull())
    {
        if (!value["TCSSMachinesNums"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.TCSSMachinesNums` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tCSSMachinesNums = string(value["TCSSMachinesNums"].GetString());
        m_tCSSMachinesNumsHasBeenSet = true;
    }

    if (value.HasMember("EksMachinesNums") && !value["EksMachinesNums"].IsNull())
    {
        if (!value["EksMachinesNums"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `YDRaspBlackWhiteListItem.EksMachinesNums` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eksMachinesNums = string(value["EksMachinesNums"].GetString());
        m_eksMachinesNumsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void YDRaspBlackWhiteListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_logicalSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalSymbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logicalSymbol, allocator);
    }

    if (m_classNameRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassNameRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classNameRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_superClassNameRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperClassNameRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_superClassNameRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_interfacesRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterfacesRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interfacesRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationsRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationsRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationsRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_loaderClassNameRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoaderClassNameRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loaderClassNameRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
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

    if (m_handleHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleHistory, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterType, allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackType, allocator);
    }

    if (m_matchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchMode, allocator);
    }

    if (m_cWPEffectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPEffective";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPEffective, allocator);
    }

    if (m_cWPScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPScope, allocator);
    }

    if (m_cWPQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPQuuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cWPQuuids.begin(); itr != m_cWPQuuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tCSSEffectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCSSEffective";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tCSSEffective, allocator);
    }

    if (m_tCSSScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCSSScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tCSSScope, allocator);
    }

    if (m_tCSSQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCSSQuuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tCSSQuuids.begin(); itr != m_tCSSQuuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eksEffectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksEffective";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eksEffective, allocator);
    }

    if (m_eksScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eksScope, allocator);
    }

    if (m_eksNodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksNodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eksNodeUniqueID.begin(); itr != m_eksNodeUniqueID.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cWPMachinesNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPMachinesNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cWPMachinesNums.c_str(), allocator).Move(), allocator);
    }

    if (m_tCSSMachinesNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCSSMachinesNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tCSSMachinesNums.c_str(), allocator).Move(), allocator);
    }

    if (m_eksMachinesNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksMachinesNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eksMachinesNums.c_str(), allocator).Move(), allocator);
    }

}


uint64_t YDRaspBlackWhiteListItem::GetId() const
{
    return m_id;
}

void YDRaspBlackWhiteListItem::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t YDRaspBlackWhiteListItem::GetLogicalSymbol() const
{
    return m_logicalSymbol;
}

void YDRaspBlackWhiteListItem::SetLogicalSymbol(const uint64_t& _logicalSymbol)
{
    m_logicalSymbol = _logicalSymbol;
    m_logicalSymbolHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::LogicalSymbolHasBeenSet() const
{
    return m_logicalSymbolHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetClassNameRegexp() const
{
    return m_classNameRegexp;
}

void YDRaspBlackWhiteListItem::SetClassNameRegexp(const string& _classNameRegexp)
{
    m_classNameRegexp = _classNameRegexp;
    m_classNameRegexpHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::ClassNameRegexpHasBeenSet() const
{
    return m_classNameRegexpHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetSuperClassNameRegexp() const
{
    return m_superClassNameRegexp;
}

void YDRaspBlackWhiteListItem::SetSuperClassNameRegexp(const string& _superClassNameRegexp)
{
    m_superClassNameRegexp = _superClassNameRegexp;
    m_superClassNameRegexpHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::SuperClassNameRegexpHasBeenSet() const
{
    return m_superClassNameRegexpHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetInterfacesRegexp() const
{
    return m_interfacesRegexp;
}

void YDRaspBlackWhiteListItem::SetInterfacesRegexp(const string& _interfacesRegexp)
{
    m_interfacesRegexp = _interfacesRegexp;
    m_interfacesRegexpHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::InterfacesRegexpHasBeenSet() const
{
    return m_interfacesRegexpHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetAnnotationsRegexp() const
{
    return m_annotationsRegexp;
}

void YDRaspBlackWhiteListItem::SetAnnotationsRegexp(const string& _annotationsRegexp)
{
    m_annotationsRegexp = _annotationsRegexp;
    m_annotationsRegexpHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::AnnotationsRegexpHasBeenSet() const
{
    return m_annotationsRegexpHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetLoaderClassNameRegexp() const
{
    return m_loaderClassNameRegexp;
}

void YDRaspBlackWhiteListItem::SetLoaderClassNameRegexp(const string& _loaderClassNameRegexp)
{
    m_loaderClassNameRegexp = _loaderClassNameRegexp;
    m_loaderClassNameRegexpHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::LoaderClassNameRegexpHasBeenSet() const
{
    return m_loaderClassNameRegexpHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetSource() const
{
    return m_source;
}

void YDRaspBlackWhiteListItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t YDRaspBlackWhiteListItem::GetStatus() const
{
    return m_status;
}

void YDRaspBlackWhiteListItem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetCreateTime() const
{
    return m_createTime;
}

void YDRaspBlackWhiteListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetModifyTime() const
{
    return m_modifyTime;
}

void YDRaspBlackWhiteListItem::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t YDRaspBlackWhiteListItem::GetHandleHistory() const
{
    return m_handleHistory;
}

void YDRaspBlackWhiteListItem::SetHandleHistory(const uint64_t& _handleHistory)
{
    m_handleHistory = _handleHistory;
    m_handleHistoryHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::HandleHistoryHasBeenSet() const
{
    return m_handleHistoryHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetContent() const
{
    return m_content;
}

void YDRaspBlackWhiteListItem::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetIP() const
{
    return m_iP;
}

void YDRaspBlackWhiteListItem::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetPolicyName() const
{
    return m_policyName;
}

void YDRaspBlackWhiteListItem::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t YDRaspBlackWhiteListItem::GetFilterType() const
{
    return m_filterType;
}

void YDRaspBlackWhiteListItem::SetFilterType(const int64_t& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

int64_t YDRaspBlackWhiteListItem::GetAttackType() const
{
    return m_attackType;
}

void YDRaspBlackWhiteListItem::SetAttackType(const int64_t& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

int64_t YDRaspBlackWhiteListItem::GetMatchMode() const
{
    return m_matchMode;
}

void YDRaspBlackWhiteListItem::SetMatchMode(const int64_t& _matchMode)
{
    m_matchMode = _matchMode;
    m_matchModeHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::MatchModeHasBeenSet() const
{
    return m_matchModeHasBeenSet;
}

int64_t YDRaspBlackWhiteListItem::GetCWPEffective() const
{
    return m_cWPEffective;
}

void YDRaspBlackWhiteListItem::SetCWPEffective(const int64_t& _cWPEffective)
{
    m_cWPEffective = _cWPEffective;
    m_cWPEffectiveHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::CWPEffectiveHasBeenSet() const
{
    return m_cWPEffectiveHasBeenSet;
}

int64_t YDRaspBlackWhiteListItem::GetCWPScope() const
{
    return m_cWPScope;
}

void YDRaspBlackWhiteListItem::SetCWPScope(const int64_t& _cWPScope)
{
    m_cWPScope = _cWPScope;
    m_cWPScopeHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::CWPScopeHasBeenSet() const
{
    return m_cWPScopeHasBeenSet;
}

vector<string> YDRaspBlackWhiteListItem::GetCWPQuuids() const
{
    return m_cWPQuuids;
}

void YDRaspBlackWhiteListItem::SetCWPQuuids(const vector<string>& _cWPQuuids)
{
    m_cWPQuuids = _cWPQuuids;
    m_cWPQuuidsHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::CWPQuuidsHasBeenSet() const
{
    return m_cWPQuuidsHasBeenSet;
}

int64_t YDRaspBlackWhiteListItem::GetTCSSEffective() const
{
    return m_tCSSEffective;
}

void YDRaspBlackWhiteListItem::SetTCSSEffective(const int64_t& _tCSSEffective)
{
    m_tCSSEffective = _tCSSEffective;
    m_tCSSEffectiveHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::TCSSEffectiveHasBeenSet() const
{
    return m_tCSSEffectiveHasBeenSet;
}

int64_t YDRaspBlackWhiteListItem::GetTCSSScope() const
{
    return m_tCSSScope;
}

void YDRaspBlackWhiteListItem::SetTCSSScope(const int64_t& _tCSSScope)
{
    m_tCSSScope = _tCSSScope;
    m_tCSSScopeHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::TCSSScopeHasBeenSet() const
{
    return m_tCSSScopeHasBeenSet;
}

vector<string> YDRaspBlackWhiteListItem::GetTCSSQuuids() const
{
    return m_tCSSQuuids;
}

void YDRaspBlackWhiteListItem::SetTCSSQuuids(const vector<string>& _tCSSQuuids)
{
    m_tCSSQuuids = _tCSSQuuids;
    m_tCSSQuuidsHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::TCSSQuuidsHasBeenSet() const
{
    return m_tCSSQuuidsHasBeenSet;
}

int64_t YDRaspBlackWhiteListItem::GetEksEffective() const
{
    return m_eksEffective;
}

void YDRaspBlackWhiteListItem::SetEksEffective(const int64_t& _eksEffective)
{
    m_eksEffective = _eksEffective;
    m_eksEffectiveHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::EksEffectiveHasBeenSet() const
{
    return m_eksEffectiveHasBeenSet;
}

int64_t YDRaspBlackWhiteListItem::GetEksScope() const
{
    return m_eksScope;
}

void YDRaspBlackWhiteListItem::SetEksScope(const int64_t& _eksScope)
{
    m_eksScope = _eksScope;
    m_eksScopeHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::EksScopeHasBeenSet() const
{
    return m_eksScopeHasBeenSet;
}

vector<string> YDRaspBlackWhiteListItem::GetEksNodeUniqueID() const
{
    return m_eksNodeUniqueID;
}

void YDRaspBlackWhiteListItem::SetEksNodeUniqueID(const vector<string>& _eksNodeUniqueID)
{
    m_eksNodeUniqueID = _eksNodeUniqueID;
    m_eksNodeUniqueIDHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::EksNodeUniqueIDHasBeenSet() const
{
    return m_eksNodeUniqueIDHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetCWPMachinesNums() const
{
    return m_cWPMachinesNums;
}

void YDRaspBlackWhiteListItem::SetCWPMachinesNums(const string& _cWPMachinesNums)
{
    m_cWPMachinesNums = _cWPMachinesNums;
    m_cWPMachinesNumsHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::CWPMachinesNumsHasBeenSet() const
{
    return m_cWPMachinesNumsHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetTCSSMachinesNums() const
{
    return m_tCSSMachinesNums;
}

void YDRaspBlackWhiteListItem::SetTCSSMachinesNums(const string& _tCSSMachinesNums)
{
    m_tCSSMachinesNums = _tCSSMachinesNums;
    m_tCSSMachinesNumsHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::TCSSMachinesNumsHasBeenSet() const
{
    return m_tCSSMachinesNumsHasBeenSet;
}

string YDRaspBlackWhiteListItem::GetEksMachinesNums() const
{
    return m_eksMachinesNums;
}

void YDRaspBlackWhiteListItem::SetEksMachinesNums(const string& _eksMachinesNums)
{
    m_eksMachinesNums = _eksMachinesNums;
    m_eksMachinesNumsHasBeenSet = true;
}

bool YDRaspBlackWhiteListItem::EksMachinesNumsHasBeenSet() const
{
    return m_eksMachinesNumsHasBeenSet;
}

