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

#include <tencentcloud/dlc/v20210125/model/DataEngineImageSessionParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DataEngineImageSessionParameter::DataEngineImageSessionParameter() :
    m_parameterIdHasBeenSet(false),
    m_childImageVersionIdHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_keyDescriptionHasBeenSet(false),
    m_valueTypeHasBeenSet(false),
    m_valueLengthLimitHasBeenSet(false),
    m_valueRegexpLimitHasBeenSet(false),
    m_valueDefaultHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_parameterTypeHasBeenSet(false),
    m_submitMethodHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DataEngineImageSessionParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParameterId") && !value["ParameterId"].IsNull())
    {
        if (!value["ParameterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.ParameterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterId = string(value["ParameterId"].GetString());
        m_parameterIdHasBeenSet = true;
    }

    if (value.HasMember("ChildImageVersionId") && !value["ChildImageVersionId"].IsNull())
    {
        if (!value["ChildImageVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.ChildImageVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childImageVersionId = string(value["ChildImageVersionId"].GetString());
        m_childImageVersionIdHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("KeyDescription") && !value["KeyDescription"].IsNull())
    {
        if (!value["KeyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.KeyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyDescription = string(value["KeyDescription"].GetString());
        m_keyDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("ValueLengthLimit") && !value["ValueLengthLimit"].IsNull())
    {
        if (!value["ValueLengthLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.ValueLengthLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueLengthLimit = string(value["ValueLengthLimit"].GetString());
        m_valueLengthLimitHasBeenSet = true;
    }

    if (value.HasMember("ValueRegexpLimit") && !value["ValueRegexpLimit"].IsNull())
    {
        if (!value["ValueRegexpLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.ValueRegexpLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueRegexpLimit = string(value["ValueRegexpLimit"].GetString());
        m_valueRegexpLimitHasBeenSet = true;
    }

    if (value.HasMember("ValueDefault") && !value["ValueDefault"].IsNull())
    {
        if (!value["ValueDefault"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.ValueDefault` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueDefault = string(value["ValueDefault"].GetString());
        m_valueDefaultHasBeenSet = true;
    }

    if (value.HasMember("IsPublic") && !value["IsPublic"].IsNull())
    {
        if (!value["IsPublic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.IsPublic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isPublic = value["IsPublic"].GetUint64();
        m_isPublicHasBeenSet = true;
    }

    if (value.HasMember("ParameterType") && !value["ParameterType"].IsNull())
    {
        if (!value["ParameterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.ParameterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parameterType = value["ParameterType"].GetUint64();
        m_parameterTypeHasBeenSet = true;
    }

    if (value.HasMember("SubmitMethod") && !value["SubmitMethod"].IsNull())
    {
        if (!value["SubmitMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.SubmitMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitMethod = string(value["SubmitMethod"].GetString());
        m_submitMethodHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineImageSessionParameter.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataEngineImageSessionParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parameterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterId.c_str(), allocator).Move(), allocator);
    }

    if (m_childImageVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildImageVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childImageVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

    if (m_valueLengthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueLengthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueLengthLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_valueRegexpLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueRegexpLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueRegexpLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_valueDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueDefault.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_parameterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parameterType, allocator);
    }

    if (m_submitMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string DataEngineImageSessionParameter::GetParameterId() const
{
    return m_parameterId;
}

void DataEngineImageSessionParameter::SetParameterId(const string& _parameterId)
{
    m_parameterId = _parameterId;
    m_parameterIdHasBeenSet = true;
}

bool DataEngineImageSessionParameter::ParameterIdHasBeenSet() const
{
    return m_parameterIdHasBeenSet;
}

string DataEngineImageSessionParameter::GetChildImageVersionId() const
{
    return m_childImageVersionId;
}

void DataEngineImageSessionParameter::SetChildImageVersionId(const string& _childImageVersionId)
{
    m_childImageVersionId = _childImageVersionId;
    m_childImageVersionIdHasBeenSet = true;
}

bool DataEngineImageSessionParameter::ChildImageVersionIdHasBeenSet() const
{
    return m_childImageVersionIdHasBeenSet;
}

string DataEngineImageSessionParameter::GetEngineType() const
{
    return m_engineType;
}

void DataEngineImageSessionParameter::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool DataEngineImageSessionParameter::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string DataEngineImageSessionParameter::GetKeyName() const
{
    return m_keyName;
}

void DataEngineImageSessionParameter::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool DataEngineImageSessionParameter::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

string DataEngineImageSessionParameter::GetKeyDescription() const
{
    return m_keyDescription;
}

void DataEngineImageSessionParameter::SetKeyDescription(const string& _keyDescription)
{
    m_keyDescription = _keyDescription;
    m_keyDescriptionHasBeenSet = true;
}

bool DataEngineImageSessionParameter::KeyDescriptionHasBeenSet() const
{
    return m_keyDescriptionHasBeenSet;
}

string DataEngineImageSessionParameter::GetValueType() const
{
    return m_valueType;
}

void DataEngineImageSessionParameter::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool DataEngineImageSessionParameter::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string DataEngineImageSessionParameter::GetValueLengthLimit() const
{
    return m_valueLengthLimit;
}

void DataEngineImageSessionParameter::SetValueLengthLimit(const string& _valueLengthLimit)
{
    m_valueLengthLimit = _valueLengthLimit;
    m_valueLengthLimitHasBeenSet = true;
}

bool DataEngineImageSessionParameter::ValueLengthLimitHasBeenSet() const
{
    return m_valueLengthLimitHasBeenSet;
}

string DataEngineImageSessionParameter::GetValueRegexpLimit() const
{
    return m_valueRegexpLimit;
}

void DataEngineImageSessionParameter::SetValueRegexpLimit(const string& _valueRegexpLimit)
{
    m_valueRegexpLimit = _valueRegexpLimit;
    m_valueRegexpLimitHasBeenSet = true;
}

bool DataEngineImageSessionParameter::ValueRegexpLimitHasBeenSet() const
{
    return m_valueRegexpLimitHasBeenSet;
}

string DataEngineImageSessionParameter::GetValueDefault() const
{
    return m_valueDefault;
}

void DataEngineImageSessionParameter::SetValueDefault(const string& _valueDefault)
{
    m_valueDefault = _valueDefault;
    m_valueDefaultHasBeenSet = true;
}

bool DataEngineImageSessionParameter::ValueDefaultHasBeenSet() const
{
    return m_valueDefaultHasBeenSet;
}

uint64_t DataEngineImageSessionParameter::GetIsPublic() const
{
    return m_isPublic;
}

void DataEngineImageSessionParameter::SetIsPublic(const uint64_t& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool DataEngineImageSessionParameter::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

uint64_t DataEngineImageSessionParameter::GetParameterType() const
{
    return m_parameterType;
}

void DataEngineImageSessionParameter::SetParameterType(const uint64_t& _parameterType)
{
    m_parameterType = _parameterType;
    m_parameterTypeHasBeenSet = true;
}

bool DataEngineImageSessionParameter::ParameterTypeHasBeenSet() const
{
    return m_parameterTypeHasBeenSet;
}

string DataEngineImageSessionParameter::GetSubmitMethod() const
{
    return m_submitMethod;
}

void DataEngineImageSessionParameter::SetSubmitMethod(const string& _submitMethod)
{
    m_submitMethod = _submitMethod;
    m_submitMethodHasBeenSet = true;
}

bool DataEngineImageSessionParameter::SubmitMethodHasBeenSet() const
{
    return m_submitMethodHasBeenSet;
}

string DataEngineImageSessionParameter::GetOperator() const
{
    return m_operator;
}

void DataEngineImageSessionParameter::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DataEngineImageSessionParameter::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DataEngineImageSessionParameter::GetInsertTime() const
{
    return m_insertTime;
}

void DataEngineImageSessionParameter::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool DataEngineImageSessionParameter::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string DataEngineImageSessionParameter::GetUpdateTime() const
{
    return m_updateTime;
}

void DataEngineImageSessionParameter::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DataEngineImageSessionParameter::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

