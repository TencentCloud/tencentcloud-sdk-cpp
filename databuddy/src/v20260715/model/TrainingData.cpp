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

#include <tencentcloud/databuddy/v20260715/model/TrainingData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

TrainingData::TrainingData() :
    m_catalogHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_targetLabelHasBeenSet(false),
    m_discardedLabelsHasBeenSet(false),
    m_predictionLabelHasBeenSet(false),
    m_evaluationIntervalHasBeenSet(false),
    m_forecastHorizonHasBeenSet(false),
    m_storageCatalogHasBeenSet(false),
    m_storageSchemaHasBeenSet(false),
    m_storageTableHasBeenSet(false),
    m_selectedLabelsHasBeenSet(false),
    m_featureLookupHasBeenSet(false)
{
}

CoreInternalOutcome TrainingData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("TargetLabel") && !value["TargetLabel"].IsNull())
    {
        if (!value["TargetLabel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.TargetLabel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetLabel.Deserialize(value["TargetLabel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetLabelHasBeenSet = true;
    }

    if (value.HasMember("DiscardedLabels") && !value["DiscardedLabels"].IsNull())
    {
        if (!value["DiscardedLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingData.DiscardedLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["DiscardedLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_discardedLabels.push_back(item);
        }
        m_discardedLabelsHasBeenSet = true;
    }

    if (value.HasMember("PredictionLabel") && !value["PredictionLabel"].IsNull())
    {
        if (!value["PredictionLabel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.PredictionLabel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_predictionLabel.Deserialize(value["PredictionLabel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_predictionLabelHasBeenSet = true;
    }

    if (value.HasMember("EvaluationInterval") && !value["EvaluationInterval"].IsNull())
    {
        if (!value["EvaluationInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.EvaluationInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evaluationInterval = string(value["EvaluationInterval"].GetString());
        m_evaluationIntervalHasBeenSet = true;
    }

    if (value.HasMember("ForecastHorizon") && !value["ForecastHorizon"].IsNull())
    {
        if (!value["ForecastHorizon"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.ForecastHorizon` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forecastHorizon = value["ForecastHorizon"].GetInt64();
        m_forecastHorizonHasBeenSet = true;
    }

    if (value.HasMember("StorageCatalog") && !value["StorageCatalog"].IsNull())
    {
        if (!value["StorageCatalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.StorageCatalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageCatalog = string(value["StorageCatalog"].GetString());
        m_storageCatalogHasBeenSet = true;
    }

    if (value.HasMember("StorageSchema") && !value["StorageSchema"].IsNull())
    {
        if (!value["StorageSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.StorageSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageSchema = string(value["StorageSchema"].GetString());
        m_storageSchemaHasBeenSet = true;
    }

    if (value.HasMember("StorageTable") && !value["StorageTable"].IsNull())
    {
        if (!value["StorageTable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingData.StorageTable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageTable = string(value["StorageTable"].GetString());
        m_storageTableHasBeenSet = true;
    }

    if (value.HasMember("SelectedLabels") && !value["SelectedLabels"].IsNull())
    {
        if (!value["SelectedLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingData.SelectedLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectedLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_selectedLabels.push_back(item);
        }
        m_selectedLabelsHasBeenSet = true;
    }

    if (value.HasMember("FeatureLookup") && !value["FeatureLookup"].IsNull())
    {
        if (!value["FeatureLookup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingData.FeatureLookup` is not array type"));

        const rapidjson::Value &tmpValue = value["FeatureLookup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FeatureLookup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_featureLookup.push_back(item);
        }
        m_featureLookupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetLabel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_discardedLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscardedLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_discardedLabels.begin(); itr != m_discardedLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_predictionLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredictionLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_predictionLabel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_evaluationIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvaluationInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evaluationInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_forecastHorizonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForecastHorizon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forecastHorizon, allocator);
    }

    if (m_storageCatalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageCatalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageCatalog.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageTable.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_selectedLabels.begin(); itr != m_selectedLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_featureLookupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureLookup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_featureLookup.begin(); itr != m_featureLookup.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TrainingData::GetCatalog() const
{
    return m_catalog;
}

void TrainingData::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool TrainingData::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string TrainingData::GetSchema() const
{
    return m_schema;
}

void TrainingData::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool TrainingData::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string TrainingData::GetTable() const
{
    return m_table;
}

void TrainingData::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool TrainingData::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

Label TrainingData::GetTargetLabel() const
{
    return m_targetLabel;
}

void TrainingData::SetTargetLabel(const Label& _targetLabel)
{
    m_targetLabel = _targetLabel;
    m_targetLabelHasBeenSet = true;
}

bool TrainingData::TargetLabelHasBeenSet() const
{
    return m_targetLabelHasBeenSet;
}

vector<Label> TrainingData::GetDiscardedLabels() const
{
    return m_discardedLabels;
}

void TrainingData::SetDiscardedLabels(const vector<Label>& _discardedLabels)
{
    m_discardedLabels = _discardedLabels;
    m_discardedLabelsHasBeenSet = true;
}

bool TrainingData::DiscardedLabelsHasBeenSet() const
{
    return m_discardedLabelsHasBeenSet;
}

Label TrainingData::GetPredictionLabel() const
{
    return m_predictionLabel;
}

void TrainingData::SetPredictionLabel(const Label& _predictionLabel)
{
    m_predictionLabel = _predictionLabel;
    m_predictionLabelHasBeenSet = true;
}

bool TrainingData::PredictionLabelHasBeenSet() const
{
    return m_predictionLabelHasBeenSet;
}

string TrainingData::GetEvaluationInterval() const
{
    return m_evaluationInterval;
}

void TrainingData::SetEvaluationInterval(const string& _evaluationInterval)
{
    m_evaluationInterval = _evaluationInterval;
    m_evaluationIntervalHasBeenSet = true;
}

bool TrainingData::EvaluationIntervalHasBeenSet() const
{
    return m_evaluationIntervalHasBeenSet;
}

int64_t TrainingData::GetForecastHorizon() const
{
    return m_forecastHorizon;
}

void TrainingData::SetForecastHorizon(const int64_t& _forecastHorizon)
{
    m_forecastHorizon = _forecastHorizon;
    m_forecastHorizonHasBeenSet = true;
}

bool TrainingData::ForecastHorizonHasBeenSet() const
{
    return m_forecastHorizonHasBeenSet;
}

string TrainingData::GetStorageCatalog() const
{
    return m_storageCatalog;
}

void TrainingData::SetStorageCatalog(const string& _storageCatalog)
{
    m_storageCatalog = _storageCatalog;
    m_storageCatalogHasBeenSet = true;
}

bool TrainingData::StorageCatalogHasBeenSet() const
{
    return m_storageCatalogHasBeenSet;
}

string TrainingData::GetStorageSchema() const
{
    return m_storageSchema;
}

void TrainingData::SetStorageSchema(const string& _storageSchema)
{
    m_storageSchema = _storageSchema;
    m_storageSchemaHasBeenSet = true;
}

bool TrainingData::StorageSchemaHasBeenSet() const
{
    return m_storageSchemaHasBeenSet;
}

string TrainingData::GetStorageTable() const
{
    return m_storageTable;
}

void TrainingData::SetStorageTable(const string& _storageTable)
{
    m_storageTable = _storageTable;
    m_storageTableHasBeenSet = true;
}

bool TrainingData::StorageTableHasBeenSet() const
{
    return m_storageTableHasBeenSet;
}

vector<Label> TrainingData::GetSelectedLabels() const
{
    return m_selectedLabels;
}

void TrainingData::SetSelectedLabels(const vector<Label>& _selectedLabels)
{
    m_selectedLabels = _selectedLabels;
    m_selectedLabelsHasBeenSet = true;
}

bool TrainingData::SelectedLabelsHasBeenSet() const
{
    return m_selectedLabelsHasBeenSet;
}

vector<FeatureLookup> TrainingData::GetFeatureLookup() const
{
    return m_featureLookup;
}

void TrainingData::SetFeatureLookup(const vector<FeatureLookup>& _featureLookup)
{
    m_featureLookup = _featureLookup;
    m_featureLookupHasBeenSet = true;
}

bool TrainingData::FeatureLookupHasBeenSet() const
{
    return m_featureLookupHasBeenSet;
}

