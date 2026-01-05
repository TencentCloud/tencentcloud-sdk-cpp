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

#include <tencentcloud/wedata/v20250806/model/QualityRuleGroupConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityRuleGroupConfig::QualityRuleGroupConfig() :
    m_analysisTypeHasBeenSet(false),
    m_modelMonitorTypeHasBeenSet(false),
    m_predictColumnHasBeenSet(false),
    m_predictColumnTypeHasBeenSet(false),
    m_labelColumnHasBeenSet(false),
    m_labelColumnTypeHasBeenSet(false),
    m_modelIdColumnHasBeenSet(false),
    m_modelIdColumnTypeHasBeenSet(false),
    m_timestampColumnHasBeenSet(false),
    m_timestampColumnTypeHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_granularityTypeHasBeenSet(false),
    m_baseTableHasBeenSet(false),
    m_baseDbHasBeenSet(false),
    m_comparisonColumnHasBeenSet(false),
    m_comparisonColumnTypeHasBeenSet(false),
    m_protectionValueHasBeenSet(false),
    m_positiveValueHasBeenSet(false),
    m_featureColumnHasBeenSet(false)
{
}

CoreInternalOutcome QualityRuleGroupConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AnalysisType") && !value["AnalysisType"].IsNull())
    {
        if (!value["AnalysisType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.AnalysisType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisType = string(value["AnalysisType"].GetString());
        m_analysisTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelMonitorType") && !value["ModelMonitorType"].IsNull())
    {
        if (!value["ModelMonitorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.ModelMonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelMonitorType = string(value["ModelMonitorType"].GetString());
        m_modelMonitorTypeHasBeenSet = true;
    }

    if (value.HasMember("PredictColumn") && !value["PredictColumn"].IsNull())
    {
        if (!value["PredictColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.PredictColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_predictColumn = string(value["PredictColumn"].GetString());
        m_predictColumnHasBeenSet = true;
    }

    if (value.HasMember("PredictColumnType") && !value["PredictColumnType"].IsNull())
    {
        if (!value["PredictColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.PredictColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_predictColumnType = string(value["PredictColumnType"].GetString());
        m_predictColumnTypeHasBeenSet = true;
    }

    if (value.HasMember("LabelColumn") && !value["LabelColumn"].IsNull())
    {
        if (!value["LabelColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.LabelColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelColumn = string(value["LabelColumn"].GetString());
        m_labelColumnHasBeenSet = true;
    }

    if (value.HasMember("LabelColumnType") && !value["LabelColumnType"].IsNull())
    {
        if (!value["LabelColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.LabelColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelColumnType = string(value["LabelColumnType"].GetString());
        m_labelColumnTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelIdColumn") && !value["ModelIdColumn"].IsNull())
    {
        if (!value["ModelIdColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.ModelIdColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelIdColumn = string(value["ModelIdColumn"].GetString());
        m_modelIdColumnHasBeenSet = true;
    }

    if (value.HasMember("ModelIdColumnType") && !value["ModelIdColumnType"].IsNull())
    {
        if (!value["ModelIdColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.ModelIdColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelIdColumnType = string(value["ModelIdColumnType"].GetString());
        m_modelIdColumnTypeHasBeenSet = true;
    }

    if (value.HasMember("TimestampColumn") && !value["TimestampColumn"].IsNull())
    {
        if (!value["TimestampColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.TimestampColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestampColumn = string(value["TimestampColumn"].GetString());
        m_timestampColumnHasBeenSet = true;
    }

    if (value.HasMember("TimestampColumnType") && !value["TimestampColumnType"].IsNull())
    {
        if (!value["TimestampColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.TimestampColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestampColumnType = string(value["TimestampColumnType"].GetString());
        m_timestampColumnTypeHasBeenSet = true;
    }

    if (value.HasMember("Granularity") && !value["Granularity"].IsNull())
    {
        if (!value["Granularity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.Granularity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_granularity = value["Granularity"].GetInt64();
        m_granularityHasBeenSet = true;
    }

    if (value.HasMember("GranularityType") && !value["GranularityType"].IsNull())
    {
        if (!value["GranularityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.GranularityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_granularityType = string(value["GranularityType"].GetString());
        m_granularityTypeHasBeenSet = true;
    }

    if (value.HasMember("BaseTable") && !value["BaseTable"].IsNull())
    {
        if (!value["BaseTable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.BaseTable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseTable = string(value["BaseTable"].GetString());
        m_baseTableHasBeenSet = true;
    }

    if (value.HasMember("BaseDb") && !value["BaseDb"].IsNull())
    {
        if (!value["BaseDb"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.BaseDb` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseDb = string(value["BaseDb"].GetString());
        m_baseDbHasBeenSet = true;
    }

    if (value.HasMember("ComparisonColumn") && !value["ComparisonColumn"].IsNull())
    {
        if (!value["ComparisonColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.ComparisonColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comparisonColumn = string(value["ComparisonColumn"].GetString());
        m_comparisonColumnHasBeenSet = true;
    }

    if (value.HasMember("ComparisonColumnType") && !value["ComparisonColumnType"].IsNull())
    {
        if (!value["ComparisonColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.ComparisonColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comparisonColumnType = string(value["ComparisonColumnType"].GetString());
        m_comparisonColumnTypeHasBeenSet = true;
    }

    if (value.HasMember("ProtectionValue") && !value["ProtectionValue"].IsNull())
    {
        if (!value["ProtectionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.ProtectionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectionValue = string(value["ProtectionValue"].GetString());
        m_protectionValueHasBeenSet = true;
    }

    if (value.HasMember("PositiveValue") && !value["PositiveValue"].IsNull())
    {
        if (!value["PositiveValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.PositiveValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positiveValue = string(value["PositiveValue"].GetString());
        m_positiveValueHasBeenSet = true;
    }

    if (value.HasMember("FeatureColumn") && !value["FeatureColumn"].IsNull())
    {
        if (!value["FeatureColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupConfig.FeatureColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_featureColumn = string(value["FeatureColumn"].GetString());
        m_featureColumnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityRuleGroupConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_analysisTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelMonitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelMonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelMonitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_predictColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredictColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_predictColumn.c_str(), allocator).Move(), allocator);
    }

    if (m_predictColumnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredictColumnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_predictColumnType.c_str(), allocator).Move(), allocator);
    }

    if (m_labelColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelColumn.c_str(), allocator).Move(), allocator);
    }

    if (m_labelColumnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelColumnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelColumnType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelIdColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelIdColumn.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdColumnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelIdColumnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelIdColumnType.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestampColumn.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampColumnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampColumnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestampColumnType.c_str(), allocator).Move(), allocator);
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_granularity, allocator);
    }

    if (m_granularityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GranularityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_granularityType.c_str(), allocator).Move(), allocator);
    }

    if (m_baseTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseTable.c_str(), allocator).Move(), allocator);
    }

    if (m_baseDbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseDb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseDb.c_str(), allocator).Move(), allocator);
    }

    if (m_comparisonColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComparisonColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comparisonColumn.c_str(), allocator).Move(), allocator);
    }

    if (m_comparisonColumnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComparisonColumnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comparisonColumnType.c_str(), allocator).Move(), allocator);
    }

    if (m_protectionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectionValue.c_str(), allocator).Move(), allocator);
    }

    if (m_positiveValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositiveValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positiveValue.c_str(), allocator).Move(), allocator);
    }

    if (m_featureColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_featureColumn.c_str(), allocator).Move(), allocator);
    }

}


string QualityRuleGroupConfig::GetAnalysisType() const
{
    return m_analysisType;
}

void QualityRuleGroupConfig::SetAnalysisType(const string& _analysisType)
{
    m_analysisType = _analysisType;
    m_analysisTypeHasBeenSet = true;
}

bool QualityRuleGroupConfig::AnalysisTypeHasBeenSet() const
{
    return m_analysisTypeHasBeenSet;
}

string QualityRuleGroupConfig::GetModelMonitorType() const
{
    return m_modelMonitorType;
}

void QualityRuleGroupConfig::SetModelMonitorType(const string& _modelMonitorType)
{
    m_modelMonitorType = _modelMonitorType;
    m_modelMonitorTypeHasBeenSet = true;
}

bool QualityRuleGroupConfig::ModelMonitorTypeHasBeenSet() const
{
    return m_modelMonitorTypeHasBeenSet;
}

string QualityRuleGroupConfig::GetPredictColumn() const
{
    return m_predictColumn;
}

void QualityRuleGroupConfig::SetPredictColumn(const string& _predictColumn)
{
    m_predictColumn = _predictColumn;
    m_predictColumnHasBeenSet = true;
}

bool QualityRuleGroupConfig::PredictColumnHasBeenSet() const
{
    return m_predictColumnHasBeenSet;
}

string QualityRuleGroupConfig::GetPredictColumnType() const
{
    return m_predictColumnType;
}

void QualityRuleGroupConfig::SetPredictColumnType(const string& _predictColumnType)
{
    m_predictColumnType = _predictColumnType;
    m_predictColumnTypeHasBeenSet = true;
}

bool QualityRuleGroupConfig::PredictColumnTypeHasBeenSet() const
{
    return m_predictColumnTypeHasBeenSet;
}

string QualityRuleGroupConfig::GetLabelColumn() const
{
    return m_labelColumn;
}

void QualityRuleGroupConfig::SetLabelColumn(const string& _labelColumn)
{
    m_labelColumn = _labelColumn;
    m_labelColumnHasBeenSet = true;
}

bool QualityRuleGroupConfig::LabelColumnHasBeenSet() const
{
    return m_labelColumnHasBeenSet;
}

string QualityRuleGroupConfig::GetLabelColumnType() const
{
    return m_labelColumnType;
}

void QualityRuleGroupConfig::SetLabelColumnType(const string& _labelColumnType)
{
    m_labelColumnType = _labelColumnType;
    m_labelColumnTypeHasBeenSet = true;
}

bool QualityRuleGroupConfig::LabelColumnTypeHasBeenSet() const
{
    return m_labelColumnTypeHasBeenSet;
}

string QualityRuleGroupConfig::GetModelIdColumn() const
{
    return m_modelIdColumn;
}

void QualityRuleGroupConfig::SetModelIdColumn(const string& _modelIdColumn)
{
    m_modelIdColumn = _modelIdColumn;
    m_modelIdColumnHasBeenSet = true;
}

bool QualityRuleGroupConfig::ModelIdColumnHasBeenSet() const
{
    return m_modelIdColumnHasBeenSet;
}

string QualityRuleGroupConfig::GetModelIdColumnType() const
{
    return m_modelIdColumnType;
}

void QualityRuleGroupConfig::SetModelIdColumnType(const string& _modelIdColumnType)
{
    m_modelIdColumnType = _modelIdColumnType;
    m_modelIdColumnTypeHasBeenSet = true;
}

bool QualityRuleGroupConfig::ModelIdColumnTypeHasBeenSet() const
{
    return m_modelIdColumnTypeHasBeenSet;
}

string QualityRuleGroupConfig::GetTimestampColumn() const
{
    return m_timestampColumn;
}

void QualityRuleGroupConfig::SetTimestampColumn(const string& _timestampColumn)
{
    m_timestampColumn = _timestampColumn;
    m_timestampColumnHasBeenSet = true;
}

bool QualityRuleGroupConfig::TimestampColumnHasBeenSet() const
{
    return m_timestampColumnHasBeenSet;
}

string QualityRuleGroupConfig::GetTimestampColumnType() const
{
    return m_timestampColumnType;
}

void QualityRuleGroupConfig::SetTimestampColumnType(const string& _timestampColumnType)
{
    m_timestampColumnType = _timestampColumnType;
    m_timestampColumnTypeHasBeenSet = true;
}

bool QualityRuleGroupConfig::TimestampColumnTypeHasBeenSet() const
{
    return m_timestampColumnTypeHasBeenSet;
}

int64_t QualityRuleGroupConfig::GetGranularity() const
{
    return m_granularity;
}

void QualityRuleGroupConfig::SetGranularity(const int64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool QualityRuleGroupConfig::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

string QualityRuleGroupConfig::GetGranularityType() const
{
    return m_granularityType;
}

void QualityRuleGroupConfig::SetGranularityType(const string& _granularityType)
{
    m_granularityType = _granularityType;
    m_granularityTypeHasBeenSet = true;
}

bool QualityRuleGroupConfig::GranularityTypeHasBeenSet() const
{
    return m_granularityTypeHasBeenSet;
}

string QualityRuleGroupConfig::GetBaseTable() const
{
    return m_baseTable;
}

void QualityRuleGroupConfig::SetBaseTable(const string& _baseTable)
{
    m_baseTable = _baseTable;
    m_baseTableHasBeenSet = true;
}

bool QualityRuleGroupConfig::BaseTableHasBeenSet() const
{
    return m_baseTableHasBeenSet;
}

string QualityRuleGroupConfig::GetBaseDb() const
{
    return m_baseDb;
}

void QualityRuleGroupConfig::SetBaseDb(const string& _baseDb)
{
    m_baseDb = _baseDb;
    m_baseDbHasBeenSet = true;
}

bool QualityRuleGroupConfig::BaseDbHasBeenSet() const
{
    return m_baseDbHasBeenSet;
}

string QualityRuleGroupConfig::GetComparisonColumn() const
{
    return m_comparisonColumn;
}

void QualityRuleGroupConfig::SetComparisonColumn(const string& _comparisonColumn)
{
    m_comparisonColumn = _comparisonColumn;
    m_comparisonColumnHasBeenSet = true;
}

bool QualityRuleGroupConfig::ComparisonColumnHasBeenSet() const
{
    return m_comparisonColumnHasBeenSet;
}

string QualityRuleGroupConfig::GetComparisonColumnType() const
{
    return m_comparisonColumnType;
}

void QualityRuleGroupConfig::SetComparisonColumnType(const string& _comparisonColumnType)
{
    m_comparisonColumnType = _comparisonColumnType;
    m_comparisonColumnTypeHasBeenSet = true;
}

bool QualityRuleGroupConfig::ComparisonColumnTypeHasBeenSet() const
{
    return m_comparisonColumnTypeHasBeenSet;
}

string QualityRuleGroupConfig::GetProtectionValue() const
{
    return m_protectionValue;
}

void QualityRuleGroupConfig::SetProtectionValue(const string& _protectionValue)
{
    m_protectionValue = _protectionValue;
    m_protectionValueHasBeenSet = true;
}

bool QualityRuleGroupConfig::ProtectionValueHasBeenSet() const
{
    return m_protectionValueHasBeenSet;
}

string QualityRuleGroupConfig::GetPositiveValue() const
{
    return m_positiveValue;
}

void QualityRuleGroupConfig::SetPositiveValue(const string& _positiveValue)
{
    m_positiveValue = _positiveValue;
    m_positiveValueHasBeenSet = true;
}

bool QualityRuleGroupConfig::PositiveValueHasBeenSet() const
{
    return m_positiveValueHasBeenSet;
}

string QualityRuleGroupConfig::GetFeatureColumn() const
{
    return m_featureColumn;
}

void QualityRuleGroupConfig::SetFeatureColumn(const string& _featureColumn)
{
    m_featureColumn = _featureColumn;
    m_featureColumnHasBeenSet = true;
}

bool QualityRuleGroupConfig::FeatureColumnHasBeenSet() const
{
    return m_featureColumnHasBeenSet;
}

