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

#include <tencentcloud/fwm/v20250611/model/NatAclRuleResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

NatAclRuleResp::NatAclRuleResp() :
    m_ruleIdHasBeenSet(false),
    m_sequenceHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_sourceContentHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_targetContentHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_scopeDescHasBeenSet(false),
    m_fwInsIdHasBeenSet(false),
    m_countryNameHasBeenSet(false),
    m_cityNameHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_cityCodeHasBeenSet(false),
    m_countryKeyHasBeenSet(false),
    m_cityKeyHasBeenSet(false),
    m_isRegionHasBeenSet(false),
    m_cloudCodeHasBeenSet(false),
    m_isCloudHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_paramTemplateNameHasBeenSet(false),
    m_invalidHasBeenSet(false),
    m_belongMemberHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dnsParseCntHasBeenSet(false)
{
}

CoreInternalOutcome NatAclRuleResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.Sequence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = value["Sequence"].GetInt64();
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("TargetContent") && !value["TargetContent"].IsNull())
    {
        if (!value["TargetContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.TargetContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetContent = string(value["TargetContent"].GetString());
        m_targetContentHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("ScopeDesc") && !value["ScopeDesc"].IsNull())
    {
        if (!value["ScopeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.ScopeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeDesc = string(value["ScopeDesc"].GetString());
        m_scopeDescHasBeenSet = true;
    }

    if (value.HasMember("FwInsId") && !value["FwInsId"].IsNull())
    {
        if (!value["FwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.FwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsId = string(value["FwInsId"].GetString());
        m_fwInsIdHasBeenSet = true;
    }

    if (value.HasMember("CountryName") && !value["CountryName"].IsNull())
    {
        if (!value["CountryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.CountryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryName = string(value["CountryName"].GetString());
        m_countryNameHasBeenSet = true;
    }

    if (value.HasMember("CityName") && !value["CityName"].IsNull())
    {
        if (!value["CityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.CityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityName = string(value["CityName"].GetString());
        m_cityNameHasBeenSet = true;
    }

    if (value.HasMember("CountryCode") && !value["CountryCode"].IsNull())
    {
        if (!value["CountryCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.CountryCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = value["CountryCode"].GetInt64();
        m_countryCodeHasBeenSet = true;
    }

    if (value.HasMember("CityCode") && !value["CityCode"].IsNull())
    {
        if (!value["CityCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.CityCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cityCode = value["CityCode"].GetInt64();
        m_cityCodeHasBeenSet = true;
    }

    if (value.HasMember("CountryKey") && !value["CountryKey"].IsNull())
    {
        if (!value["CountryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.CountryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryKey = string(value["CountryKey"].GetString());
        m_countryKeyHasBeenSet = true;
    }

    if (value.HasMember("CityKey") && !value["CityKey"].IsNull())
    {
        if (!value["CityKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.CityKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityKey = string(value["CityKey"].GetString());
        m_cityKeyHasBeenSet = true;
    }

    if (value.HasMember("IsRegion") && !value["IsRegion"].IsNull())
    {
        if (!value["IsRegion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.IsRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRegion = value["IsRegion"].GetInt64();
        m_isRegionHasBeenSet = true;
    }

    if (value.HasMember("CloudCode") && !value["CloudCode"].IsNull())
    {
        if (!value["CloudCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.CloudCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudCode = string(value["CloudCode"].GetString());
        m_cloudCodeHasBeenSet = true;
    }

    if (value.HasMember("IsCloud") && !value["IsCloud"].IsNull())
    {
        if (!value["IsCloud"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.IsCloud` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCloud = value["IsCloud"].GetInt64();
        m_isCloudHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateId") && !value["ParamTemplateId"].IsNull())
    {
        if (!value["ParamTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.ParamTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateId = string(value["ParamTemplateId"].GetString());
        m_paramTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateName") && !value["ParamTemplateName"].IsNull())
    {
        if (!value["ParamTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.ParamTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateName = string(value["ParamTemplateName"].GetString());
        m_paramTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("Invalid") && !value["Invalid"].IsNull())
    {
        if (!value["Invalid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.Invalid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalid = value["Invalid"].GetInt64();
        m_invalidHasBeenSet = true;
    }

    if (value.HasMember("BelongMember") && !value["BelongMember"].IsNull())
    {
        if (!value["BelongMember"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.BelongMember` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_belongMember.Deserialize(value["BelongMember"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_belongMemberHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DnsParseCnt") && !value["DnsParseCnt"].IsNull())
    {
        if (!value["DnsParseCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NatAclRuleResp.DnsParseCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsParseCnt = value["DnsParseCnt"].GetInt64();
        m_dnsParseCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatAclRuleResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sequence, allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_sourceContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceContent.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetContent.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_countryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryName.c_str(), allocator).Move(), allocator);
    }

    if (m_cityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityName.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countryCode, allocator);
    }

    if (m_cityCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cityCode, allocator);
    }

    if (m_countryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_cityKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityKey.c_str(), allocator).Move(), allocator);
    }

    if (m_isRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRegion, allocator);
    }

    if (m_cloudCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudCode.c_str(), allocator).Move(), allocator);
    }

    if (m_isCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCloud, allocator);
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_invalidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invalid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalid, allocator);
    }

    if (m_belongMemberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongMember";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_belongMember.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_dnsParseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsParseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dnsParseCnt, allocator);
    }

}


string NatAclRuleResp::GetRuleId() const
{
    return m_ruleId;
}

void NatAclRuleResp::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool NatAclRuleResp::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t NatAclRuleResp::GetSequence() const
{
    return m_sequence;
}

void NatAclRuleResp::SetSequence(const int64_t& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool NatAclRuleResp::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

int64_t NatAclRuleResp::GetDirection() const
{
    return m_direction;
}

void NatAclRuleResp::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool NatAclRuleResp::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string NatAclRuleResp::GetSourceContent() const
{
    return m_sourceContent;
}

void NatAclRuleResp::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool NatAclRuleResp::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string NatAclRuleResp::GetSourceType() const
{
    return m_sourceType;
}

void NatAclRuleResp::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool NatAclRuleResp::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string NatAclRuleResp::GetSourceName() const
{
    return m_sourceName;
}

void NatAclRuleResp::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool NatAclRuleResp::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string NatAclRuleResp::GetTargetContent() const
{
    return m_targetContent;
}

void NatAclRuleResp::SetTargetContent(const string& _targetContent)
{
    m_targetContent = _targetContent;
    m_targetContentHasBeenSet = true;
}

bool NatAclRuleResp::TargetContentHasBeenSet() const
{
    return m_targetContentHasBeenSet;
}

string NatAclRuleResp::GetTargetType() const
{
    return m_targetType;
}

void NatAclRuleResp::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool NatAclRuleResp::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string NatAclRuleResp::GetTargetName() const
{
    return m_targetName;
}

void NatAclRuleResp::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool NatAclRuleResp::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string NatAclRuleResp::GetPort() const
{
    return m_port;
}

void NatAclRuleResp::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool NatAclRuleResp::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string NatAclRuleResp::GetProtocol() const
{
    return m_protocol;
}

void NatAclRuleResp::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool NatAclRuleResp::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string NatAclRuleResp::GetRuleAction() const
{
    return m_ruleAction;
}

void NatAclRuleResp::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool NatAclRuleResp::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string NatAclRuleResp::GetDescription() const
{
    return m_description;
}

void NatAclRuleResp::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NatAclRuleResp::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NatAclRuleResp::GetScope() const
{
    return m_scope;
}

void NatAclRuleResp::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool NatAclRuleResp::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string NatAclRuleResp::GetScopeDesc() const
{
    return m_scopeDesc;
}

void NatAclRuleResp::SetScopeDesc(const string& _scopeDesc)
{
    m_scopeDesc = _scopeDesc;
    m_scopeDescHasBeenSet = true;
}

bool NatAclRuleResp::ScopeDescHasBeenSet() const
{
    return m_scopeDescHasBeenSet;
}

string NatAclRuleResp::GetFwInsId() const
{
    return m_fwInsId;
}

void NatAclRuleResp::SetFwInsId(const string& _fwInsId)
{
    m_fwInsId = _fwInsId;
    m_fwInsIdHasBeenSet = true;
}

bool NatAclRuleResp::FwInsIdHasBeenSet() const
{
    return m_fwInsIdHasBeenSet;
}

string NatAclRuleResp::GetCountryName() const
{
    return m_countryName;
}

void NatAclRuleResp::SetCountryName(const string& _countryName)
{
    m_countryName = _countryName;
    m_countryNameHasBeenSet = true;
}

bool NatAclRuleResp::CountryNameHasBeenSet() const
{
    return m_countryNameHasBeenSet;
}

string NatAclRuleResp::GetCityName() const
{
    return m_cityName;
}

void NatAclRuleResp::SetCityName(const string& _cityName)
{
    m_cityName = _cityName;
    m_cityNameHasBeenSet = true;
}

bool NatAclRuleResp::CityNameHasBeenSet() const
{
    return m_cityNameHasBeenSet;
}

int64_t NatAclRuleResp::GetCountryCode() const
{
    return m_countryCode;
}

void NatAclRuleResp::SetCountryCode(const int64_t& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool NatAclRuleResp::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

int64_t NatAclRuleResp::GetCityCode() const
{
    return m_cityCode;
}

void NatAclRuleResp::SetCityCode(const int64_t& _cityCode)
{
    m_cityCode = _cityCode;
    m_cityCodeHasBeenSet = true;
}

bool NatAclRuleResp::CityCodeHasBeenSet() const
{
    return m_cityCodeHasBeenSet;
}

string NatAclRuleResp::GetCountryKey() const
{
    return m_countryKey;
}

void NatAclRuleResp::SetCountryKey(const string& _countryKey)
{
    m_countryKey = _countryKey;
    m_countryKeyHasBeenSet = true;
}

bool NatAclRuleResp::CountryKeyHasBeenSet() const
{
    return m_countryKeyHasBeenSet;
}

string NatAclRuleResp::GetCityKey() const
{
    return m_cityKey;
}

void NatAclRuleResp::SetCityKey(const string& _cityKey)
{
    m_cityKey = _cityKey;
    m_cityKeyHasBeenSet = true;
}

bool NatAclRuleResp::CityKeyHasBeenSet() const
{
    return m_cityKeyHasBeenSet;
}

int64_t NatAclRuleResp::GetIsRegion() const
{
    return m_isRegion;
}

void NatAclRuleResp::SetIsRegion(const int64_t& _isRegion)
{
    m_isRegion = _isRegion;
    m_isRegionHasBeenSet = true;
}

bool NatAclRuleResp::IsRegionHasBeenSet() const
{
    return m_isRegionHasBeenSet;
}

string NatAclRuleResp::GetCloudCode() const
{
    return m_cloudCode;
}

void NatAclRuleResp::SetCloudCode(const string& _cloudCode)
{
    m_cloudCode = _cloudCode;
    m_cloudCodeHasBeenSet = true;
}

bool NatAclRuleResp::CloudCodeHasBeenSet() const
{
    return m_cloudCodeHasBeenSet;
}

int64_t NatAclRuleResp::GetIsCloud() const
{
    return m_isCloud;
}

void NatAclRuleResp::SetIsCloud(const int64_t& _isCloud)
{
    m_isCloud = _isCloud;
    m_isCloudHasBeenSet = true;
}

bool NatAclRuleResp::IsCloudHasBeenSet() const
{
    return m_isCloudHasBeenSet;
}

string NatAclRuleResp::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void NatAclRuleResp::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool NatAclRuleResp::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

string NatAclRuleResp::GetParamTemplateName() const
{
    return m_paramTemplateName;
}

void NatAclRuleResp::SetParamTemplateName(const string& _paramTemplateName)
{
    m_paramTemplateName = _paramTemplateName;
    m_paramTemplateNameHasBeenSet = true;
}

bool NatAclRuleResp::ParamTemplateNameHasBeenSet() const
{
    return m_paramTemplateNameHasBeenSet;
}

int64_t NatAclRuleResp::GetInvalid() const
{
    return m_invalid;
}

void NatAclRuleResp::SetInvalid(const int64_t& _invalid)
{
    m_invalid = _invalid;
    m_invalidHasBeenSet = true;
}

bool NatAclRuleResp::InvalidHasBeenSet() const
{
    return m_invalidHasBeenSet;
}

MemberInfo NatAclRuleResp::GetBelongMember() const
{
    return m_belongMember;
}

void NatAclRuleResp::SetBelongMember(const MemberInfo& _belongMember)
{
    m_belongMember = _belongMember;
    m_belongMemberHasBeenSet = true;
}

bool NatAclRuleResp::BelongMemberHasBeenSet() const
{
    return m_belongMemberHasBeenSet;
}

string NatAclRuleResp::GetCreateTime() const
{
    return m_createTime;
}

void NatAclRuleResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NatAclRuleResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string NatAclRuleResp::GetUpdateTime() const
{
    return m_updateTime;
}

void NatAclRuleResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NatAclRuleResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t NatAclRuleResp::GetDnsParseCnt() const
{
    return m_dnsParseCnt;
}

void NatAclRuleResp::SetDnsParseCnt(const int64_t& _dnsParseCnt)
{
    m_dnsParseCnt = _dnsParseCnt;
    m_dnsParseCntHasBeenSet = true;
}

bool NatAclRuleResp::DnsParseCntHasBeenSet() const
{
    return m_dnsParseCntHasBeenSet;
}

