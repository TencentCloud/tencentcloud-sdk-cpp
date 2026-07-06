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

#include <tencentcloud/fwm/v20250611/model/EdgeAclRuleResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

EdgeAclRuleResp::EdgeAclRuleResp() :
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
    m_countryNameHasBeenSet(false),
    m_cityNameHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_paramTemplateNameHasBeenSet(false),
    m_invalidHasBeenSet(false),
    m_belongMemberHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_cityCodeHasBeenSet(false),
    m_isRegionHasBeenSet(false),
    m_cloudCodeHasBeenSet(false),
    m_isCloudHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_countryKeyHasBeenSet(false),
    m_cityKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dnsParseCntHasBeenSet(false)
{
}

CoreInternalOutcome EdgeAclRuleResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.Sequence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = value["Sequence"].GetInt64();
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("TargetContent") && !value["TargetContent"].IsNull())
    {
        if (!value["TargetContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.TargetContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetContent = string(value["TargetContent"].GetString());
        m_targetContentHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("CountryName") && !value["CountryName"].IsNull())
    {
        if (!value["CountryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.CountryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryName = string(value["CountryName"].GetString());
        m_countryNameHasBeenSet = true;
    }

    if (value.HasMember("CityName") && !value["CityName"].IsNull())
    {
        if (!value["CityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.CityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityName = string(value["CityName"].GetString());
        m_cityNameHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateId") && !value["ParamTemplateId"].IsNull())
    {
        if (!value["ParamTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.ParamTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateId = string(value["ParamTemplateId"].GetString());
        m_paramTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateName") && !value["ParamTemplateName"].IsNull())
    {
        if (!value["ParamTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.ParamTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateName = string(value["ParamTemplateName"].GetString());
        m_paramTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("Invalid") && !value["Invalid"].IsNull())
    {
        if (!value["Invalid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.Invalid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalid = value["Invalid"].GetInt64();
        m_invalidHasBeenSet = true;
    }

    if (value.HasMember("BelongMember") && !value["BelongMember"].IsNull())
    {
        if (!value["BelongMember"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.BelongMember` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_belongMember.Deserialize(value["BelongMember"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_belongMemberHasBeenSet = true;
    }

    if (value.HasMember("CountryCode") && !value["CountryCode"].IsNull())
    {
        if (!value["CountryCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.CountryCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = value["CountryCode"].GetUint64();
        m_countryCodeHasBeenSet = true;
    }

    if (value.HasMember("CityCode") && !value["CityCode"].IsNull())
    {
        if (!value["CityCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.CityCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cityCode = value["CityCode"].GetUint64();
        m_cityCodeHasBeenSet = true;
    }

    if (value.HasMember("IsRegion") && !value["IsRegion"].IsNull())
    {
        if (!value["IsRegion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.IsRegion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRegion = value["IsRegion"].GetUint64();
        m_isRegionHasBeenSet = true;
    }

    if (value.HasMember("CloudCode") && !value["CloudCode"].IsNull())
    {
        if (!value["CloudCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.CloudCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudCode = string(value["CloudCode"].GetString());
        m_cloudCodeHasBeenSet = true;
    }

    if (value.HasMember("IsCloud") && !value["IsCloud"].IsNull())
    {
        if (!value["IsCloud"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.IsCloud` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCloud = value["IsCloud"].GetUint64();
        m_isCloudHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("CountryKey") && !value["CountryKey"].IsNull())
    {
        if (!value["CountryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.CountryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryKey = string(value["CountryKey"].GetString());
        m_countryKeyHasBeenSet = true;
    }

    if (value.HasMember("CityKey") && !value["CityKey"].IsNull())
    {
        if (!value["CityKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.CityKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityKey = string(value["CityKey"].GetString());
        m_cityKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DnsParseCnt") && !value["DnsParseCnt"].IsNull())
    {
        if (!value["DnsParseCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeAclRuleResp.DnsParseCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsParseCnt = value["DnsParseCnt"].GetInt64();
        m_dnsParseCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeAclRuleResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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


string EdgeAclRuleResp::GetRuleId() const
{
    return m_ruleId;
}

void EdgeAclRuleResp::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool EdgeAclRuleResp::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t EdgeAclRuleResp::GetSequence() const
{
    return m_sequence;
}

void EdgeAclRuleResp::SetSequence(const int64_t& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool EdgeAclRuleResp::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

int64_t EdgeAclRuleResp::GetDirection() const
{
    return m_direction;
}

void EdgeAclRuleResp::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool EdgeAclRuleResp::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string EdgeAclRuleResp::GetSourceContent() const
{
    return m_sourceContent;
}

void EdgeAclRuleResp::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool EdgeAclRuleResp::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string EdgeAclRuleResp::GetSourceType() const
{
    return m_sourceType;
}

void EdgeAclRuleResp::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool EdgeAclRuleResp::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string EdgeAclRuleResp::GetSourceName() const
{
    return m_sourceName;
}

void EdgeAclRuleResp::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool EdgeAclRuleResp::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string EdgeAclRuleResp::GetTargetContent() const
{
    return m_targetContent;
}

void EdgeAclRuleResp::SetTargetContent(const string& _targetContent)
{
    m_targetContent = _targetContent;
    m_targetContentHasBeenSet = true;
}

bool EdgeAclRuleResp::TargetContentHasBeenSet() const
{
    return m_targetContentHasBeenSet;
}

string EdgeAclRuleResp::GetTargetType() const
{
    return m_targetType;
}

void EdgeAclRuleResp::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool EdgeAclRuleResp::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string EdgeAclRuleResp::GetTargetName() const
{
    return m_targetName;
}

void EdgeAclRuleResp::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool EdgeAclRuleResp::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string EdgeAclRuleResp::GetPort() const
{
    return m_port;
}

void EdgeAclRuleResp::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool EdgeAclRuleResp::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string EdgeAclRuleResp::GetProtocol() const
{
    return m_protocol;
}

void EdgeAclRuleResp::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool EdgeAclRuleResp::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string EdgeAclRuleResp::GetRuleAction() const
{
    return m_ruleAction;
}

void EdgeAclRuleResp::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool EdgeAclRuleResp::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string EdgeAclRuleResp::GetDescription() const
{
    return m_description;
}

void EdgeAclRuleResp::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EdgeAclRuleResp::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string EdgeAclRuleResp::GetScope() const
{
    return m_scope;
}

void EdgeAclRuleResp::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool EdgeAclRuleResp::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string EdgeAclRuleResp::GetCountryName() const
{
    return m_countryName;
}

void EdgeAclRuleResp::SetCountryName(const string& _countryName)
{
    m_countryName = _countryName;
    m_countryNameHasBeenSet = true;
}

bool EdgeAclRuleResp::CountryNameHasBeenSet() const
{
    return m_countryNameHasBeenSet;
}

string EdgeAclRuleResp::GetCityName() const
{
    return m_cityName;
}

void EdgeAclRuleResp::SetCityName(const string& _cityName)
{
    m_cityName = _cityName;
    m_cityNameHasBeenSet = true;
}

bool EdgeAclRuleResp::CityNameHasBeenSet() const
{
    return m_cityNameHasBeenSet;
}

string EdgeAclRuleResp::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void EdgeAclRuleResp::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool EdgeAclRuleResp::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

string EdgeAclRuleResp::GetParamTemplateName() const
{
    return m_paramTemplateName;
}

void EdgeAclRuleResp::SetParamTemplateName(const string& _paramTemplateName)
{
    m_paramTemplateName = _paramTemplateName;
    m_paramTemplateNameHasBeenSet = true;
}

bool EdgeAclRuleResp::ParamTemplateNameHasBeenSet() const
{
    return m_paramTemplateNameHasBeenSet;
}

int64_t EdgeAclRuleResp::GetInvalid() const
{
    return m_invalid;
}

void EdgeAclRuleResp::SetInvalid(const int64_t& _invalid)
{
    m_invalid = _invalid;
    m_invalidHasBeenSet = true;
}

bool EdgeAclRuleResp::InvalidHasBeenSet() const
{
    return m_invalidHasBeenSet;
}

MemberInfo EdgeAclRuleResp::GetBelongMember() const
{
    return m_belongMember;
}

void EdgeAclRuleResp::SetBelongMember(const MemberInfo& _belongMember)
{
    m_belongMember = _belongMember;
    m_belongMemberHasBeenSet = true;
}

bool EdgeAclRuleResp::BelongMemberHasBeenSet() const
{
    return m_belongMemberHasBeenSet;
}

uint64_t EdgeAclRuleResp::GetCountryCode() const
{
    return m_countryCode;
}

void EdgeAclRuleResp::SetCountryCode(const uint64_t& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool EdgeAclRuleResp::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

uint64_t EdgeAclRuleResp::GetCityCode() const
{
    return m_cityCode;
}

void EdgeAclRuleResp::SetCityCode(const uint64_t& _cityCode)
{
    m_cityCode = _cityCode;
    m_cityCodeHasBeenSet = true;
}

bool EdgeAclRuleResp::CityCodeHasBeenSet() const
{
    return m_cityCodeHasBeenSet;
}

uint64_t EdgeAclRuleResp::GetIsRegion() const
{
    return m_isRegion;
}

void EdgeAclRuleResp::SetIsRegion(const uint64_t& _isRegion)
{
    m_isRegion = _isRegion;
    m_isRegionHasBeenSet = true;
}

bool EdgeAclRuleResp::IsRegionHasBeenSet() const
{
    return m_isRegionHasBeenSet;
}

string EdgeAclRuleResp::GetCloudCode() const
{
    return m_cloudCode;
}

void EdgeAclRuleResp::SetCloudCode(const string& _cloudCode)
{
    m_cloudCode = _cloudCode;
    m_cloudCodeHasBeenSet = true;
}

bool EdgeAclRuleResp::CloudCodeHasBeenSet() const
{
    return m_cloudCodeHasBeenSet;
}

uint64_t EdgeAclRuleResp::GetIsCloud() const
{
    return m_isCloud;
}

void EdgeAclRuleResp::SetIsCloud(const uint64_t& _isCloud)
{
    m_isCloud = _isCloud;
    m_isCloudHasBeenSet = true;
}

bool EdgeAclRuleResp::IsCloudHasBeenSet() const
{
    return m_isCloudHasBeenSet;
}

string EdgeAclRuleResp::GetInstanceName() const
{
    return m_instanceName;
}

void EdgeAclRuleResp::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool EdgeAclRuleResp::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string EdgeAclRuleResp::GetCountryKey() const
{
    return m_countryKey;
}

void EdgeAclRuleResp::SetCountryKey(const string& _countryKey)
{
    m_countryKey = _countryKey;
    m_countryKeyHasBeenSet = true;
}

bool EdgeAclRuleResp::CountryKeyHasBeenSet() const
{
    return m_countryKeyHasBeenSet;
}

string EdgeAclRuleResp::GetCityKey() const
{
    return m_cityKey;
}

void EdgeAclRuleResp::SetCityKey(const string& _cityKey)
{
    m_cityKey = _cityKey;
    m_cityKeyHasBeenSet = true;
}

bool EdgeAclRuleResp::CityKeyHasBeenSet() const
{
    return m_cityKeyHasBeenSet;
}

string EdgeAclRuleResp::GetCreateTime() const
{
    return m_createTime;
}

void EdgeAclRuleResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EdgeAclRuleResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EdgeAclRuleResp::GetUpdateTime() const
{
    return m_updateTime;
}

void EdgeAclRuleResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool EdgeAclRuleResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t EdgeAclRuleResp::GetDnsParseCnt() const
{
    return m_dnsParseCnt;
}

void EdgeAclRuleResp::SetDnsParseCnt(const int64_t& _dnsParseCnt)
{
    m_dnsParseCnt = _dnsParseCnt;
    m_dnsParseCntHasBeenSet = true;
}

bool EdgeAclRuleResp::DnsParseCntHasBeenSet() const
{
    return m_dnsParseCntHasBeenSet;
}

