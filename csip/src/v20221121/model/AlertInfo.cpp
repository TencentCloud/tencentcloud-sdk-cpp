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

#include <tencentcloud/csip/v20221121/model/AlertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AlertInfo::AlertInfo() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_attackerHasBeenSet(false),
    m_victimHasBeenSet(false),
    m_evidenceDataHasBeenSet(false),
    m_evidenceLocationHasBeenSet(false),
    m_evidencePathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_urgentSuggestionHasBeenSet(false),
    m_remediationSuggestionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_riskInvestigationHasBeenSet(false),
    m_riskTreatmentHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_logSearchHasBeenSet(false)
{
}

CoreInternalOutcome AlertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Attacker") && !value["Attacker"].IsNull())
    {
        if (!value["Attacker"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Attacker` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_attacker.Deserialize(value["Attacker"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_attackerHasBeenSet = true;
    }

    if (value.HasMember("Victim") && !value["Victim"].IsNull())
    {
        if (!value["Victim"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Victim` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_victim.Deserialize(value["Victim"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_victimHasBeenSet = true;
    }

    if (value.HasMember("EvidenceData") && !value["EvidenceData"].IsNull())
    {
        if (!value["EvidenceData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.EvidenceData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceData = string(value["EvidenceData"].GetString());
        m_evidenceDataHasBeenSet = true;
    }

    if (value.HasMember("EvidenceLocation") && !value["EvidenceLocation"].IsNull())
    {
        if (!value["EvidenceLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.EvidenceLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceLocation = string(value["EvidenceLocation"].GetString());
        m_evidenceLocationHasBeenSet = true;
    }

    if (value.HasMember("EvidencePath") && !value["EvidencePath"].IsNull())
    {
        if (!value["EvidencePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.EvidencePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidencePath = string(value["EvidencePath"].GetString());
        m_evidencePathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("UrgentSuggestion") && !value["UrgentSuggestion"].IsNull())
    {
        if (!value["UrgentSuggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.UrgentSuggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urgentSuggestion = string(value["UrgentSuggestion"].GetString());
        m_urgentSuggestionHasBeenSet = true;
    }

    if (value.HasMember("RemediationSuggestion") && !value["RemediationSuggestion"].IsNull())
    {
        if (!value["RemediationSuggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.RemediationSuggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remediationSuggestion = string(value["RemediationSuggestion"].GetString());
        m_remediationSuggestionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProcessType") && !value["ProcessType"].IsNull())
    {
        if (!value["ProcessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.ProcessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processType = string(value["ProcessType"].GetString());
        m_processTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.ExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraInfo.Deserialize(value["ExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.AppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appID = string(value["AppID"].GetString());
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.Action` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetUint64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RiskInvestigation") && !value["RiskInvestigation"].IsNull())
    {
        if (!value["RiskInvestigation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.RiskInvestigation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskInvestigation = string(value["RiskInvestigation"].GetString());
        m_riskInvestigationHasBeenSet = true;
    }

    if (value.HasMember("RiskTreatment") && !value["RiskTreatment"].IsNull())
    {
        if (!value["RiskTreatment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.RiskTreatment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskTreatment = string(value["RiskTreatment"].GetString());
        m_riskTreatmentHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("LogSearch") && !value["LogSearch"].IsNull())
    {
        if (!value["LogSearch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertInfo.LogSearch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSearch = string(value["LogSearch"].GetString());
        m_logSearchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_attackerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attacker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_attacker.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_victimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Victim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_victim.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_evidenceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidenceData.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidenceLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_evidencePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidencePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidencePath.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_urgentSuggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrgentSuggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urgentSuggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_remediationSuggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemediationSuggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remediationSuggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appID.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_riskInvestigationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInvestigation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskInvestigation.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTreatmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTreatment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskTreatment.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_logSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSearch.c_str(), allocator).Move(), allocator);
    }

}


string AlertInfo::GetID() const
{
    return m_iD;
}

void AlertInfo::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AlertInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AlertInfo::GetName() const
{
    return m_name;
}

void AlertInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlertInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AlertInfo::GetSource() const
{
    return m_source;
}

void AlertInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AlertInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t AlertInfo::GetLevel() const
{
    return m_level;
}

void AlertInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AlertInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

RoleInfo AlertInfo::GetAttacker() const
{
    return m_attacker;
}

void AlertInfo::SetAttacker(const RoleInfo& _attacker)
{
    m_attacker = _attacker;
    m_attackerHasBeenSet = true;
}

bool AlertInfo::AttackerHasBeenSet() const
{
    return m_attackerHasBeenSet;
}

RoleInfo AlertInfo::GetVictim() const
{
    return m_victim;
}

void AlertInfo::SetVictim(const RoleInfo& _victim)
{
    m_victim = _victim;
    m_victimHasBeenSet = true;
}

bool AlertInfo::VictimHasBeenSet() const
{
    return m_victimHasBeenSet;
}

string AlertInfo::GetEvidenceData() const
{
    return m_evidenceData;
}

void AlertInfo::SetEvidenceData(const string& _evidenceData)
{
    m_evidenceData = _evidenceData;
    m_evidenceDataHasBeenSet = true;
}

bool AlertInfo::EvidenceDataHasBeenSet() const
{
    return m_evidenceDataHasBeenSet;
}

string AlertInfo::GetEvidenceLocation() const
{
    return m_evidenceLocation;
}

void AlertInfo::SetEvidenceLocation(const string& _evidenceLocation)
{
    m_evidenceLocation = _evidenceLocation;
    m_evidenceLocationHasBeenSet = true;
}

bool AlertInfo::EvidenceLocationHasBeenSet() const
{
    return m_evidenceLocationHasBeenSet;
}

string AlertInfo::GetEvidencePath() const
{
    return m_evidencePath;
}

void AlertInfo::SetEvidencePath(const string& _evidencePath)
{
    m_evidencePath = _evidencePath;
    m_evidencePathHasBeenSet = true;
}

bool AlertInfo::EvidencePathHasBeenSet() const
{
    return m_evidencePathHasBeenSet;
}

string AlertInfo::GetCreateTime() const
{
    return m_createTime;
}

void AlertInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AlertInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AlertInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AlertInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AlertInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t AlertInfo::GetCount() const
{
    return m_count;
}

void AlertInfo::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool AlertInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string AlertInfo::GetUrgentSuggestion() const
{
    return m_urgentSuggestion;
}

void AlertInfo::SetUrgentSuggestion(const string& _urgentSuggestion)
{
    m_urgentSuggestion = _urgentSuggestion;
    m_urgentSuggestionHasBeenSet = true;
}

bool AlertInfo::UrgentSuggestionHasBeenSet() const
{
    return m_urgentSuggestionHasBeenSet;
}

string AlertInfo::GetRemediationSuggestion() const
{
    return m_remediationSuggestion;
}

void AlertInfo::SetRemediationSuggestion(const string& _remediationSuggestion)
{
    m_remediationSuggestion = _remediationSuggestion;
    m_remediationSuggestionHasBeenSet = true;
}

bool AlertInfo::RemediationSuggestionHasBeenSet() const
{
    return m_remediationSuggestionHasBeenSet;
}

uint64_t AlertInfo::GetStatus() const
{
    return m_status;
}

void AlertInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlertInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlertInfo::GetProcessType() const
{
    return m_processType;
}

void AlertInfo::SetProcessType(const string& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool AlertInfo::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

string AlertInfo::GetType() const
{
    return m_type;
}

void AlertInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlertInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AlertInfo::GetSubType() const
{
    return m_subType;
}

void AlertInfo::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool AlertInfo::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

AlertExtraInfo AlertInfo::GetExtraInfo() const
{
    return m_extraInfo;
}

void AlertInfo::SetExtraInfo(const AlertExtraInfo& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool AlertInfo::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string AlertInfo::GetKey() const
{
    return m_key;
}

void AlertInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool AlertInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string AlertInfo::GetDate() const
{
    return m_date;
}

void AlertInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool AlertInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string AlertInfo::GetAppID() const
{
    return m_appID;
}

void AlertInfo::SetAppID(const string& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AlertInfo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string AlertInfo::GetNickName() const
{
    return m_nickName;
}

void AlertInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool AlertInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string AlertInfo::GetUin() const
{
    return m_uin;
}

void AlertInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AlertInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t AlertInfo::GetAction() const
{
    return m_action;
}

void AlertInfo::SetAction(const uint64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AlertInfo::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string AlertInfo::GetRiskInvestigation() const
{
    return m_riskInvestigation;
}

void AlertInfo::SetRiskInvestigation(const string& _riskInvestigation)
{
    m_riskInvestigation = _riskInvestigation;
    m_riskInvestigationHasBeenSet = true;
}

bool AlertInfo::RiskInvestigationHasBeenSet() const
{
    return m_riskInvestigationHasBeenSet;
}

string AlertInfo::GetRiskTreatment() const
{
    return m_riskTreatment;
}

void AlertInfo::SetRiskTreatment(const string& _riskTreatment)
{
    m_riskTreatment = _riskTreatment;
    m_riskTreatmentHasBeenSet = true;
}

bool AlertInfo::RiskTreatmentHasBeenSet() const
{
    return m_riskTreatmentHasBeenSet;
}

string AlertInfo::GetLogType() const
{
    return m_logType;
}

void AlertInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool AlertInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string AlertInfo::GetLogSearch() const
{
    return m_logSearch;
}

void AlertInfo::SetLogSearch(const string& _logSearch)
{
    m_logSearch = _logSearch;
    m_logSearchHasBeenSet = true;
}

bool AlertInfo::LogSearchHasBeenSet() const
{
    return m_logSearchHasBeenSet;
}

