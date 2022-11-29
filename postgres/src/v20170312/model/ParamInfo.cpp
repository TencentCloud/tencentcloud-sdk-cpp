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

#include <tencentcloud/postgres/v20170312/model/ParamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ParamInfo::ParamInfo() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_paramValueTypeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_currentValueHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_enumValueHasBeenSet(false),
    m_minHasBeenSet(false),
    m_paramDescriptionCHHasBeenSet(false),
    m_paramDescriptionENHasBeenSet(false),
    m_needRebootHasBeenSet(false),
    m_classificationCNHasBeenSet(false),
    m_classificationENHasBeenSet(false),
    m_specRelatedHasBeenSet(false),
    m_advancedHasBeenSet(false),
    m_lastModifyTimeHasBeenSet(false),
    m_standbyRelatedHasBeenSet(false),
    m_versionRelationSetHasBeenSet(false),
    m_specRelationSetHasBeenSet(false)
{
}

CoreInternalOutcome ParamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParamValueType") && !value["ParamValueType"].IsNull())
    {
        if (!value["ParamValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.ParamValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValueType = string(value["ParamValueType"].GetString());
        m_paramValueTypeHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.Max` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetDouble();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("EnumValue") && !value["EnumValue"].IsNull())
    {
        if (!value["EnumValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamInfo.EnumValue` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValue.push_back((*itr).GetString());
        }
        m_enumValueHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.Min` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetDouble();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("ParamDescriptionCH") && !value["ParamDescriptionCH"].IsNull())
    {
        if (!value["ParamDescriptionCH"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.ParamDescriptionCH` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDescriptionCH = string(value["ParamDescriptionCH"].GetString());
        m_paramDescriptionCHHasBeenSet = true;
    }

    if (value.HasMember("ParamDescriptionEN") && !value["ParamDescriptionEN"].IsNull())
    {
        if (!value["ParamDescriptionEN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.ParamDescriptionEN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDescriptionEN = string(value["ParamDescriptionEN"].GetString());
        m_paramDescriptionENHasBeenSet = true;
    }

    if (value.HasMember("NeedReboot") && !value["NeedReboot"].IsNull())
    {
        if (!value["NeedReboot"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.NeedReboot` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needReboot = value["NeedReboot"].GetBool();
        m_needRebootHasBeenSet = true;
    }

    if (value.HasMember("ClassificationCN") && !value["ClassificationCN"].IsNull())
    {
        if (!value["ClassificationCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.ClassificationCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classificationCN = string(value["ClassificationCN"].GetString());
        m_classificationCNHasBeenSet = true;
    }

    if (value.HasMember("ClassificationEN") && !value["ClassificationEN"].IsNull())
    {
        if (!value["ClassificationEN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.ClassificationEN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classificationEN = string(value["ClassificationEN"].GetString());
        m_classificationENHasBeenSet = true;
    }

    if (value.HasMember("SpecRelated") && !value["SpecRelated"].IsNull())
    {
        if (!value["SpecRelated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.SpecRelated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_specRelated = value["SpecRelated"].GetBool();
        m_specRelatedHasBeenSet = true;
    }

    if (value.HasMember("Advanced") && !value["Advanced"].IsNull())
    {
        if (!value["Advanced"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.Advanced` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_advanced = value["Advanced"].GetBool();
        m_advancedHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTime") && !value["LastModifyTime"].IsNull())
    {
        if (!value["LastModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.LastModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTime = string(value["LastModifyTime"].GetString());
        m_lastModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("StandbyRelated") && !value["StandbyRelated"].IsNull())
    {
        if (!value["StandbyRelated"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInfo.StandbyRelated` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_standbyRelated = value["StandbyRelated"].GetInt64();
        m_standbyRelatedHasBeenSet = true;
    }

    if (value.HasMember("VersionRelationSet") && !value["VersionRelationSet"].IsNull())
    {
        if (!value["VersionRelationSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamInfo.VersionRelationSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VersionRelationSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamVersionRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_versionRelationSet.push_back(item);
        }
        m_versionRelationSetHasBeenSet = true;
    }

    if (value.HasMember("SpecRelationSet") && !value["SpecRelationSet"].IsNull())
    {
        if (!value["SpecRelationSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamInfo.SpecRelationSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SpecRelationSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamSpecRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_specRelationSet.push_back(item);
        }
        m_specRelationSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_paramValueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValueType.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_enumValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enumValue.begin(); itr != m_enumValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_paramDescriptionCHHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDescriptionCH";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDescriptionCH.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDescriptionENHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDescriptionEN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDescriptionEN.c_str(), allocator).Move(), allocator);
    }

    if (m_needRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReboot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needReboot, allocator);
    }

    if (m_classificationCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classificationCN.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationENHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationEN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classificationEN.c_str(), allocator).Move(), allocator);
    }

    if (m_specRelatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecRelated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specRelated, allocator);
    }

    if (m_advancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advanced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advanced, allocator);
    }

    if (m_lastModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_standbyRelatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbyRelated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standbyRelated, allocator);
    }

    if (m_versionRelationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionRelationSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versionRelationSet.begin(); itr != m_versionRelationSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_specRelationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecRelationSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_specRelationSet.begin(); itr != m_specRelationSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ParamInfo::GetID() const
{
    return m_iD;
}

void ParamInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ParamInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ParamInfo::GetName() const
{
    return m_name;
}

void ParamInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ParamInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ParamInfo::GetParamValueType() const
{
    return m_paramValueType;
}

void ParamInfo::SetParamValueType(const string& _paramValueType)
{
    m_paramValueType = _paramValueType;
    m_paramValueTypeHasBeenSet = true;
}

bool ParamInfo::ParamValueTypeHasBeenSet() const
{
    return m_paramValueTypeHasBeenSet;
}

string ParamInfo::GetUnit() const
{
    return m_unit;
}

void ParamInfo::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ParamInfo::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string ParamInfo::GetDefaultValue() const
{
    return m_defaultValue;
}

void ParamInfo::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ParamInfo::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string ParamInfo::GetCurrentValue() const
{
    return m_currentValue;
}

void ParamInfo::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool ParamInfo::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

double ParamInfo::GetMax() const
{
    return m_max;
}

void ParamInfo::SetMax(const double& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool ParamInfo::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

vector<string> ParamInfo::GetEnumValue() const
{
    return m_enumValue;
}

void ParamInfo::SetEnumValue(const vector<string>& _enumValue)
{
    m_enumValue = _enumValue;
    m_enumValueHasBeenSet = true;
}

bool ParamInfo::EnumValueHasBeenSet() const
{
    return m_enumValueHasBeenSet;
}

double ParamInfo::GetMin() const
{
    return m_min;
}

void ParamInfo::SetMin(const double& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ParamInfo::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

string ParamInfo::GetParamDescriptionCH() const
{
    return m_paramDescriptionCH;
}

void ParamInfo::SetParamDescriptionCH(const string& _paramDescriptionCH)
{
    m_paramDescriptionCH = _paramDescriptionCH;
    m_paramDescriptionCHHasBeenSet = true;
}

bool ParamInfo::ParamDescriptionCHHasBeenSet() const
{
    return m_paramDescriptionCHHasBeenSet;
}

string ParamInfo::GetParamDescriptionEN() const
{
    return m_paramDescriptionEN;
}

void ParamInfo::SetParamDescriptionEN(const string& _paramDescriptionEN)
{
    m_paramDescriptionEN = _paramDescriptionEN;
    m_paramDescriptionENHasBeenSet = true;
}

bool ParamInfo::ParamDescriptionENHasBeenSet() const
{
    return m_paramDescriptionENHasBeenSet;
}

bool ParamInfo::GetNeedReboot() const
{
    return m_needReboot;
}

void ParamInfo::SetNeedReboot(const bool& _needReboot)
{
    m_needReboot = _needReboot;
    m_needRebootHasBeenSet = true;
}

bool ParamInfo::NeedRebootHasBeenSet() const
{
    return m_needRebootHasBeenSet;
}

string ParamInfo::GetClassificationCN() const
{
    return m_classificationCN;
}

void ParamInfo::SetClassificationCN(const string& _classificationCN)
{
    m_classificationCN = _classificationCN;
    m_classificationCNHasBeenSet = true;
}

bool ParamInfo::ClassificationCNHasBeenSet() const
{
    return m_classificationCNHasBeenSet;
}

string ParamInfo::GetClassificationEN() const
{
    return m_classificationEN;
}

void ParamInfo::SetClassificationEN(const string& _classificationEN)
{
    m_classificationEN = _classificationEN;
    m_classificationENHasBeenSet = true;
}

bool ParamInfo::ClassificationENHasBeenSet() const
{
    return m_classificationENHasBeenSet;
}

bool ParamInfo::GetSpecRelated() const
{
    return m_specRelated;
}

void ParamInfo::SetSpecRelated(const bool& _specRelated)
{
    m_specRelated = _specRelated;
    m_specRelatedHasBeenSet = true;
}

bool ParamInfo::SpecRelatedHasBeenSet() const
{
    return m_specRelatedHasBeenSet;
}

bool ParamInfo::GetAdvanced() const
{
    return m_advanced;
}

void ParamInfo::SetAdvanced(const bool& _advanced)
{
    m_advanced = _advanced;
    m_advancedHasBeenSet = true;
}

bool ParamInfo::AdvancedHasBeenSet() const
{
    return m_advancedHasBeenSet;
}

string ParamInfo::GetLastModifyTime() const
{
    return m_lastModifyTime;
}

void ParamInfo::SetLastModifyTime(const string& _lastModifyTime)
{
    m_lastModifyTime = _lastModifyTime;
    m_lastModifyTimeHasBeenSet = true;
}

bool ParamInfo::LastModifyTimeHasBeenSet() const
{
    return m_lastModifyTimeHasBeenSet;
}

int64_t ParamInfo::GetStandbyRelated() const
{
    return m_standbyRelated;
}

void ParamInfo::SetStandbyRelated(const int64_t& _standbyRelated)
{
    m_standbyRelated = _standbyRelated;
    m_standbyRelatedHasBeenSet = true;
}

bool ParamInfo::StandbyRelatedHasBeenSet() const
{
    return m_standbyRelatedHasBeenSet;
}

vector<ParamVersionRelation> ParamInfo::GetVersionRelationSet() const
{
    return m_versionRelationSet;
}

void ParamInfo::SetVersionRelationSet(const vector<ParamVersionRelation>& _versionRelationSet)
{
    m_versionRelationSet = _versionRelationSet;
    m_versionRelationSetHasBeenSet = true;
}

bool ParamInfo::VersionRelationSetHasBeenSet() const
{
    return m_versionRelationSetHasBeenSet;
}

vector<ParamSpecRelation> ParamInfo::GetSpecRelationSet() const
{
    return m_specRelationSet;
}

void ParamInfo::SetSpecRelationSet(const vector<ParamSpecRelation>& _specRelationSet)
{
    m_specRelationSet = _specRelationSet;
    m_specRelationSetHasBeenSet = true;
}

bool ParamInfo::SpecRelationSetHasBeenSet() const
{
    return m_specRelationSetHasBeenSet;
}

