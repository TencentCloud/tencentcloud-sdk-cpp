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

#include <tencentcloud/bi/v20220105/model/TableField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

TableField::TableField() :
    m_dbNameHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_fieldTypeHasBeenSet(false),
    m_fieldComplexTypeHasBeenSet(false),
    m_markHasBeenSet(false),
    m_formatRuleHasBeenSet(false),
    m_isFilterHasBeenSet(false),
    m_calcTypeHasBeenSet(false),
    m_calcFormulaHasBeenSet(false),
    m_calcDescHasBeenSet(false),
    m_dictIdHasBeenSet(false),
    m_dictNameHasBeenSet(false),
    m_tableNodeIdHasBeenSet(false),
    m_excelNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_jsonPathNameHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_geoJsonIdHasBeenSet(false),
    m_emptyValueConfigHasBeenSet(false),
    m_dbFieldNameHasBeenSet(false),
    m_isCopyOperationHasBeenSet(false),
    m_isCopyFromNormalHasBeenSet(false)
{
}

CoreInternalOutcome TableField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("FieldType") && !value["FieldType"].IsNull())
    {
        if (!value["FieldType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.FieldType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldType = string(value["FieldType"].GetString());
        m_fieldTypeHasBeenSet = true;
    }

    if (value.HasMember("FieldComplexType") && !value["FieldComplexType"].IsNull())
    {
        if (!value["FieldComplexType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.FieldComplexType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldComplexType = string(value["FieldComplexType"].GetString());
        m_fieldComplexTypeHasBeenSet = true;
    }

    if (value.HasMember("Mark") && !value["Mark"].IsNull())
    {
        if (!value["Mark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.Mark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mark = string(value["Mark"].GetString());
        m_markHasBeenSet = true;
    }

    if (value.HasMember("FormatRule") && !value["FormatRule"].IsNull())
    {
        if (!value["FormatRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.FormatRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formatRule = string(value["FormatRule"].GetString());
        m_formatRuleHasBeenSet = true;
    }

    if (value.HasMember("IsFilter") && !value["IsFilter"].IsNull())
    {
        if (!value["IsFilter"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.IsFilter` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFilter = value["IsFilter"].GetBool();
        m_isFilterHasBeenSet = true;
    }

    if (value.HasMember("CalcType") && !value["CalcType"].IsNull())
    {
        if (!value["CalcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.CalcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcType = string(value["CalcType"].GetString());
        m_calcTypeHasBeenSet = true;
    }

    if (value.HasMember("CalcFormula") && !value["CalcFormula"].IsNull())
    {
        if (!value["CalcFormula"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.CalcFormula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcFormula = string(value["CalcFormula"].GetString());
        m_calcFormulaHasBeenSet = true;
    }

    if (value.HasMember("CalcDesc") && !value["CalcDesc"].IsNull())
    {
        if (!value["CalcDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.CalcDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcDesc = string(value["CalcDesc"].GetString());
        m_calcDescHasBeenSet = true;
    }

    if (value.HasMember("DictId") && !value["DictId"].IsNull())
    {
        if (!value["DictId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.DictId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dictId = value["DictId"].GetUint64();
        m_dictIdHasBeenSet = true;
    }

    if (value.HasMember("DictName") && !value["DictName"].IsNull())
    {
        if (!value["DictName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.DictName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dictName = string(value["DictName"].GetString());
        m_dictNameHasBeenSet = true;
    }

    if (value.HasMember("TableNodeId") && !value["TableNodeId"].IsNull())
    {
        if (!value["TableNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.TableNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableNodeId = string(value["TableNodeId"].GetString());
        m_tableNodeIdHasBeenSet = true;
    }

    if (value.HasMember("ExcelName") && !value["ExcelName"].IsNull())
    {
        if (!value["ExcelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.ExcelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_excelName = string(value["ExcelName"].GetString());
        m_excelNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("JsonPathName") && !value["JsonPathName"].IsNull())
    {
        if (!value["JsonPathName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.JsonPathName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jsonPathName = string(value["JsonPathName"].GetString());
        m_jsonPathNameHasBeenSet = true;
    }

    if (value.HasMember("Granularity") && !value["Granularity"].IsNull())
    {
        if (!value["Granularity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.Granularity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_granularity = string(value["Granularity"].GetString());
        m_granularityHasBeenSet = true;
    }

    if (value.HasMember("GeoJsonId") && !value["GeoJsonId"].IsNull())
    {
        if (!value["GeoJsonId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.GeoJsonId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_geoJsonId = value["GeoJsonId"].GetUint64();
        m_geoJsonIdHasBeenSet = true;
    }

    if (value.HasMember("EmptyValueConfig") && !value["EmptyValueConfig"].IsNull())
    {
        if (!value["EmptyValueConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.EmptyValueConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emptyValueConfig.Deserialize(value["EmptyValueConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emptyValueConfigHasBeenSet = true;
    }

    if (value.HasMember("DbFieldName") && !value["DbFieldName"].IsNull())
    {
        if (!value["DbFieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.DbFieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbFieldName = string(value["DbFieldName"].GetString());
        m_dbFieldNameHasBeenSet = true;
    }

    if (value.HasMember("IsCopyOperation") && !value["IsCopyOperation"].IsNull())
    {
        if (!value["IsCopyOperation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.IsCopyOperation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCopyOperation = value["IsCopyOperation"].GetBool();
        m_isCopyOperationHasBeenSet = true;
    }

    if (value.HasMember("IsCopyFromNormal") && !value["IsCopyFromNormal"].IsNull())
    {
        if (!value["IsCopyFromNormal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableField.IsCopyFromNormal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCopyFromNormal = value["IsCopyFromNormal"].GetBool();
        m_isCopyFromNormalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldType.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldComplexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldComplexType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldComplexType.c_str(), allocator).Move(), allocator);
    }

    if (m_markHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mark.c_str(), allocator).Move(), allocator);
    }

    if (m_formatRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormatRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formatRule.c_str(), allocator).Move(), allocator);
    }

    if (m_isFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFilter, allocator);
    }

    if (m_calcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcType.c_str(), allocator).Move(), allocator);
    }

    if (m_calcFormulaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcFormula";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcFormula.c_str(), allocator).Move(), allocator);
    }

    if (m_calcDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_dictIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dictId, allocator);
    }

    if (m_dictNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dictName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_excelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_excelName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_jsonPathNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonPathName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jsonPathName.c_str(), allocator).Move(), allocator);
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_granularity.c_str(), allocator).Move(), allocator);
    }

    if (m_geoJsonIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeoJsonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_geoJsonId, allocator);
    }

    if (m_emptyValueConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyValueConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emptyValueConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dbFieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbFieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbFieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_isCopyOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCopyOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCopyOperation, allocator);
    }

    if (m_isCopyFromNormalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCopyFromNormal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCopyFromNormal, allocator);
    }

}


string TableField::GetDbName() const
{
    return m_dbName;
}

void TableField::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool TableField::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string TableField::GetAliasName() const
{
    return m_aliasName;
}

void TableField::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool TableField::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string TableField::GetDbType() const
{
    return m_dbType;
}

void TableField::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool TableField::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string TableField::GetFieldType() const
{
    return m_fieldType;
}

void TableField::SetFieldType(const string& _fieldType)
{
    m_fieldType = _fieldType;
    m_fieldTypeHasBeenSet = true;
}

bool TableField::FieldTypeHasBeenSet() const
{
    return m_fieldTypeHasBeenSet;
}

string TableField::GetFieldComplexType() const
{
    return m_fieldComplexType;
}

void TableField::SetFieldComplexType(const string& _fieldComplexType)
{
    m_fieldComplexType = _fieldComplexType;
    m_fieldComplexTypeHasBeenSet = true;
}

bool TableField::FieldComplexTypeHasBeenSet() const
{
    return m_fieldComplexTypeHasBeenSet;
}

string TableField::GetMark() const
{
    return m_mark;
}

void TableField::SetMark(const string& _mark)
{
    m_mark = _mark;
    m_markHasBeenSet = true;
}

bool TableField::MarkHasBeenSet() const
{
    return m_markHasBeenSet;
}

string TableField::GetFormatRule() const
{
    return m_formatRule;
}

void TableField::SetFormatRule(const string& _formatRule)
{
    m_formatRule = _formatRule;
    m_formatRuleHasBeenSet = true;
}

bool TableField::FormatRuleHasBeenSet() const
{
    return m_formatRuleHasBeenSet;
}

bool TableField::GetIsFilter() const
{
    return m_isFilter;
}

void TableField::SetIsFilter(const bool& _isFilter)
{
    m_isFilter = _isFilter;
    m_isFilterHasBeenSet = true;
}

bool TableField::IsFilterHasBeenSet() const
{
    return m_isFilterHasBeenSet;
}

string TableField::GetCalcType() const
{
    return m_calcType;
}

void TableField::SetCalcType(const string& _calcType)
{
    m_calcType = _calcType;
    m_calcTypeHasBeenSet = true;
}

bool TableField::CalcTypeHasBeenSet() const
{
    return m_calcTypeHasBeenSet;
}

string TableField::GetCalcFormula() const
{
    return m_calcFormula;
}

void TableField::SetCalcFormula(const string& _calcFormula)
{
    m_calcFormula = _calcFormula;
    m_calcFormulaHasBeenSet = true;
}

bool TableField::CalcFormulaHasBeenSet() const
{
    return m_calcFormulaHasBeenSet;
}

string TableField::GetCalcDesc() const
{
    return m_calcDesc;
}

void TableField::SetCalcDesc(const string& _calcDesc)
{
    m_calcDesc = _calcDesc;
    m_calcDescHasBeenSet = true;
}

bool TableField::CalcDescHasBeenSet() const
{
    return m_calcDescHasBeenSet;
}

uint64_t TableField::GetDictId() const
{
    return m_dictId;
}

void TableField::SetDictId(const uint64_t& _dictId)
{
    m_dictId = _dictId;
    m_dictIdHasBeenSet = true;
}

bool TableField::DictIdHasBeenSet() const
{
    return m_dictIdHasBeenSet;
}

string TableField::GetDictName() const
{
    return m_dictName;
}

void TableField::SetDictName(const string& _dictName)
{
    m_dictName = _dictName;
    m_dictNameHasBeenSet = true;
}

bool TableField::DictNameHasBeenSet() const
{
    return m_dictNameHasBeenSet;
}

string TableField::GetTableNodeId() const
{
    return m_tableNodeId;
}

void TableField::SetTableNodeId(const string& _tableNodeId)
{
    m_tableNodeId = _tableNodeId;
    m_tableNodeIdHasBeenSet = true;
}

bool TableField::TableNodeIdHasBeenSet() const
{
    return m_tableNodeIdHasBeenSet;
}

string TableField::GetExcelName() const
{
    return m_excelName;
}

void TableField::SetExcelName(const string& _excelName)
{
    m_excelName = _excelName;
    m_excelNameHasBeenSet = true;
}

bool TableField::ExcelNameHasBeenSet() const
{
    return m_excelNameHasBeenSet;
}

string TableField::GetTableName() const
{
    return m_tableName;
}

void TableField::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableField::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableField::GetJsonPathName() const
{
    return m_jsonPathName;
}

void TableField::SetJsonPathName(const string& _jsonPathName)
{
    m_jsonPathName = _jsonPathName;
    m_jsonPathNameHasBeenSet = true;
}

bool TableField::JsonPathNameHasBeenSet() const
{
    return m_jsonPathNameHasBeenSet;
}

string TableField::GetGranularity() const
{
    return m_granularity;
}

void TableField::SetGranularity(const string& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool TableField::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

uint64_t TableField::GetGeoJsonId() const
{
    return m_geoJsonId;
}

void TableField::SetGeoJsonId(const uint64_t& _geoJsonId)
{
    m_geoJsonId = _geoJsonId;
    m_geoJsonIdHasBeenSet = true;
}

bool TableField::GeoJsonIdHasBeenSet() const
{
    return m_geoJsonIdHasBeenSet;
}

EmptyValueConfig TableField::GetEmptyValueConfig() const
{
    return m_emptyValueConfig;
}

void TableField::SetEmptyValueConfig(const EmptyValueConfig& _emptyValueConfig)
{
    m_emptyValueConfig = _emptyValueConfig;
    m_emptyValueConfigHasBeenSet = true;
}

bool TableField::EmptyValueConfigHasBeenSet() const
{
    return m_emptyValueConfigHasBeenSet;
}

string TableField::GetDbFieldName() const
{
    return m_dbFieldName;
}

void TableField::SetDbFieldName(const string& _dbFieldName)
{
    m_dbFieldName = _dbFieldName;
    m_dbFieldNameHasBeenSet = true;
}

bool TableField::DbFieldNameHasBeenSet() const
{
    return m_dbFieldNameHasBeenSet;
}

bool TableField::GetIsCopyOperation() const
{
    return m_isCopyOperation;
}

void TableField::SetIsCopyOperation(const bool& _isCopyOperation)
{
    m_isCopyOperation = _isCopyOperation;
    m_isCopyOperationHasBeenSet = true;
}

bool TableField::IsCopyOperationHasBeenSet() const
{
    return m_isCopyOperationHasBeenSet;
}

bool TableField::GetIsCopyFromNormal() const
{
    return m_isCopyFromNormal;
}

void TableField::SetIsCopyFromNormal(const bool& _isCopyFromNormal)
{
    m_isCopyFromNormal = _isCopyFromNormal;
    m_isCopyFromNormalHasBeenSet = true;
}

bool TableField::IsCopyFromNormalHasBeenSet() const
{
    return m_isCopyFromNormalHasBeenSet;
}

