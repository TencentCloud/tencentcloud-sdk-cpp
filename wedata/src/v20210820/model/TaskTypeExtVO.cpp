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

#include <tencentcloud/wedata/v20210820/model/TaskTypeExtVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskTypeExtVO::TaskTypeExtVO() :
    m_typeIdHasBeenSet(false),
    m_propNameHasBeenSet(false),
    m_propLabelHasBeenSet(false),
    m_defaultFlagHasBeenSet(false),
    m_visibleFlagHasBeenSet(false),
    m_propDescHasBeenSet(false),
    m_rankIdHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_valueTypeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_candidateValuesHasBeenSet(false),
    m_isMandatoryHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_minValueHasBeenSet(false),
    m_confLevelHasBeenSet(false),
    m_candidateTextsHasBeenSet(false),
    m_copyKeyHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_tipHasBeenSet(false)
{
}

CoreInternalOutcome TaskTypeExtVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.TypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetInt64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("PropName") && !value["PropName"].IsNull())
    {
        if (!value["PropName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.PropName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propName = string(value["PropName"].GetString());
        m_propNameHasBeenSet = true;
    }

    if (value.HasMember("PropLabel") && !value["PropLabel"].IsNull())
    {
        if (!value["PropLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.PropLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propLabel = string(value["PropLabel"].GetString());
        m_propLabelHasBeenSet = true;
    }

    if (value.HasMember("DefaultFlag") && !value["DefaultFlag"].IsNull())
    {
        if (!value["DefaultFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.DefaultFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultFlag = value["DefaultFlag"].GetInt64();
        m_defaultFlagHasBeenSet = true;
    }

    if (value.HasMember("VisibleFlag") && !value["VisibleFlag"].IsNull())
    {
        if (!value["VisibleFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.VisibleFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_visibleFlag = value["VisibleFlag"].GetInt64();
        m_visibleFlagHasBeenSet = true;
    }

    if (value.HasMember("PropDesc") && !value["PropDesc"].IsNull())
    {
        if (!value["PropDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.PropDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propDesc = string(value["PropDesc"].GetString());
        m_propDescHasBeenSet = true;
    }

    if (value.HasMember("RankId") && !value["RankId"].IsNull())
    {
        if (!value["RankId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.RankId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rankId = value["RankId"].GetInt64();
        m_rankIdHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("CandidateValues") && !value["CandidateValues"].IsNull())
    {
        if (!value["CandidateValues"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.CandidateValues` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_candidateValues = string(value["CandidateValues"].GetString());
        m_candidateValuesHasBeenSet = true;
    }

    if (value.HasMember("IsMandatory") && !value["IsMandatory"].IsNull())
    {
        if (!value["IsMandatory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.IsMandatory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isMandatory = value["IsMandatory"].GetInt64();
        m_isMandatoryHasBeenSet = true;
    }

    if (value.HasMember("MaxValue") && !value["MaxValue"].IsNull())
    {
        if (!value["MaxValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.MaxValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxValue = value["MaxValue"].GetInt64();
        m_maxValueHasBeenSet = true;
    }

    if (value.HasMember("MinValue") && !value["MinValue"].IsNull())
    {
        if (!value["MinValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.MinValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minValue = value["MinValue"].GetInt64();
        m_minValueHasBeenSet = true;
    }

    if (value.HasMember("ConfLevel") && !value["ConfLevel"].IsNull())
    {
        if (!value["ConfLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.ConfLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confLevel = value["ConfLevel"].GetInt64();
        m_confLevelHasBeenSet = true;
    }

    if (value.HasMember("CandidateTexts") && !value["CandidateTexts"].IsNull())
    {
        if (!value["CandidateTexts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.CandidateTexts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_candidateTexts = string(value["CandidateTexts"].GetString());
        m_candidateTextsHasBeenSet = true;
    }

    if (value.HasMember("CopyKey") && !value["CopyKey"].IsNull())
    {
        if (!value["CopyKey"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.CopyKey` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_copyKey = value["CopyKey"].GetInt64();
        m_copyKeyHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }

    if (value.HasMember("Tip") && !value["Tip"].IsNull())
    {
        if (!value["Tip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtVO.Tip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tip = string(value["Tip"].GetString());
        m_tipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTypeExtVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_propNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propName.c_str(), allocator).Move(), allocator);
    }

    if (m_propLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultFlag, allocator);
    }

    if (m_visibleFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisibleFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visibleFlag, allocator);
    }

    if (m_propDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_rankIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RankId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rankId, allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_candidateValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CandidateValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_candidateValues.c_str(), allocator).Move(), allocator);
    }

    if (m_isMandatoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMandatory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMandatory, allocator);
    }

    if (m_maxValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxValue, allocator);
    }

    if (m_minValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minValue, allocator);
    }

    if (m_confLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confLevel, allocator);
    }

    if (m_candidateTextsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CandidateTexts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_candidateTexts.c_str(), allocator).Move(), allocator);
    }

    if (m_copyKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copyKey, allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

    if (m_tipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tip.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskTypeExtVO::GetTypeId() const
{
    return m_typeId;
}

void TaskTypeExtVO::SetTypeId(const int64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool TaskTypeExtVO::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string TaskTypeExtVO::GetPropName() const
{
    return m_propName;
}

void TaskTypeExtVO::SetPropName(const string& _propName)
{
    m_propName = _propName;
    m_propNameHasBeenSet = true;
}

bool TaskTypeExtVO::PropNameHasBeenSet() const
{
    return m_propNameHasBeenSet;
}

string TaskTypeExtVO::GetPropLabel() const
{
    return m_propLabel;
}

void TaskTypeExtVO::SetPropLabel(const string& _propLabel)
{
    m_propLabel = _propLabel;
    m_propLabelHasBeenSet = true;
}

bool TaskTypeExtVO::PropLabelHasBeenSet() const
{
    return m_propLabelHasBeenSet;
}

int64_t TaskTypeExtVO::GetDefaultFlag() const
{
    return m_defaultFlag;
}

void TaskTypeExtVO::SetDefaultFlag(const int64_t& _defaultFlag)
{
    m_defaultFlag = _defaultFlag;
    m_defaultFlagHasBeenSet = true;
}

bool TaskTypeExtVO::DefaultFlagHasBeenSet() const
{
    return m_defaultFlagHasBeenSet;
}

int64_t TaskTypeExtVO::GetVisibleFlag() const
{
    return m_visibleFlag;
}

void TaskTypeExtVO::SetVisibleFlag(const int64_t& _visibleFlag)
{
    m_visibleFlag = _visibleFlag;
    m_visibleFlagHasBeenSet = true;
}

bool TaskTypeExtVO::VisibleFlagHasBeenSet() const
{
    return m_visibleFlagHasBeenSet;
}

string TaskTypeExtVO::GetPropDesc() const
{
    return m_propDesc;
}

void TaskTypeExtVO::SetPropDesc(const string& _propDesc)
{
    m_propDesc = _propDesc;
    m_propDescHasBeenSet = true;
}

bool TaskTypeExtVO::PropDescHasBeenSet() const
{
    return m_propDescHasBeenSet;
}

int64_t TaskTypeExtVO::GetRankId() const
{
    return m_rankId;
}

void TaskTypeExtVO::SetRankId(const int64_t& _rankId)
{
    m_rankId = _rankId;
    m_rankIdHasBeenSet = true;
}

bool TaskTypeExtVO::RankIdHasBeenSet() const
{
    return m_rankIdHasBeenSet;
}

string TaskTypeExtVO::GetInputType() const
{
    return m_inputType;
}

void TaskTypeExtVO::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool TaskTypeExtVO::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string TaskTypeExtVO::GetValueType() const
{
    return m_valueType;
}

void TaskTypeExtVO::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool TaskTypeExtVO::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string TaskTypeExtVO::GetDefaultValue() const
{
    return m_defaultValue;
}

void TaskTypeExtVO::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool TaskTypeExtVO::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string TaskTypeExtVO::GetCandidateValues() const
{
    return m_candidateValues;
}

void TaskTypeExtVO::SetCandidateValues(const string& _candidateValues)
{
    m_candidateValues = _candidateValues;
    m_candidateValuesHasBeenSet = true;
}

bool TaskTypeExtVO::CandidateValuesHasBeenSet() const
{
    return m_candidateValuesHasBeenSet;
}

int64_t TaskTypeExtVO::GetIsMandatory() const
{
    return m_isMandatory;
}

void TaskTypeExtVO::SetIsMandatory(const int64_t& _isMandatory)
{
    m_isMandatory = _isMandatory;
    m_isMandatoryHasBeenSet = true;
}

bool TaskTypeExtVO::IsMandatoryHasBeenSet() const
{
    return m_isMandatoryHasBeenSet;
}

int64_t TaskTypeExtVO::GetMaxValue() const
{
    return m_maxValue;
}

void TaskTypeExtVO::SetMaxValue(const int64_t& _maxValue)
{
    m_maxValue = _maxValue;
    m_maxValueHasBeenSet = true;
}

bool TaskTypeExtVO::MaxValueHasBeenSet() const
{
    return m_maxValueHasBeenSet;
}

int64_t TaskTypeExtVO::GetMinValue() const
{
    return m_minValue;
}

void TaskTypeExtVO::SetMinValue(const int64_t& _minValue)
{
    m_minValue = _minValue;
    m_minValueHasBeenSet = true;
}

bool TaskTypeExtVO::MinValueHasBeenSet() const
{
    return m_minValueHasBeenSet;
}

int64_t TaskTypeExtVO::GetConfLevel() const
{
    return m_confLevel;
}

void TaskTypeExtVO::SetConfLevel(const int64_t& _confLevel)
{
    m_confLevel = _confLevel;
    m_confLevelHasBeenSet = true;
}

bool TaskTypeExtVO::ConfLevelHasBeenSet() const
{
    return m_confLevelHasBeenSet;
}

string TaskTypeExtVO::GetCandidateTexts() const
{
    return m_candidateTexts;
}

void TaskTypeExtVO::SetCandidateTexts(const string& _candidateTexts)
{
    m_candidateTexts = _candidateTexts;
    m_candidateTextsHasBeenSet = true;
}

bool TaskTypeExtVO::CandidateTextsHasBeenSet() const
{
    return m_candidateTextsHasBeenSet;
}

int64_t TaskTypeExtVO::GetCopyKey() const
{
    return m_copyKey;
}

void TaskTypeExtVO::SetCopyKey(const int64_t& _copyKey)
{
    m_copyKey = _copyKey;
    m_copyKeyHasBeenSet = true;
}

bool TaskTypeExtVO::CopyKeyHasBeenSet() const
{
    return m_copyKeyHasBeenSet;
}

string TaskTypeExtVO::GetRegex() const
{
    return m_regex;
}

void TaskTypeExtVO::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool TaskTypeExtVO::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

string TaskTypeExtVO::GetTip() const
{
    return m_tip;
}

void TaskTypeExtVO::SetTip(const string& _tip)
{
    m_tip = _tip;
    m_tipHasBeenSet = true;
}

bool TaskTypeExtVO::TipHasBeenSet() const
{
    return m_tipHasBeenSet;
}

