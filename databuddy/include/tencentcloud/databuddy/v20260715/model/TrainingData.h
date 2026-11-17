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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TRAININGDATA_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TRAININGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Label.h>
#include <tencentcloud/databuddy/v20260715/model/FeatureLookup.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 训练数据配置
                */
                class TrainingData : public AbstractModel
                {
                public:
                    TrainingData();
                    ~TrainingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Catalog名称
                     * @return Catalog Catalog名称
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog名称
                     * @param _catalog Catalog名称
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取Schema名称
                     * @return Schema Schema名称
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置Schema名称
                     * @param _schema Schema名称
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取Table名称
                     * @return Table Table名称
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table名称
                     * @param _table Table名称
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取目标标签列
                     * @return TargetLabel 目标标签列
                     * 
                     */
                    Label GetTargetLabel() const;

                    /**
                     * 设置目标标签列
                     * @param _targetLabel 目标标签列
                     * 
                     */
                    void SetTargetLabel(const Label& _targetLabel);

                    /**
                     * 判断参数 TargetLabel 是否已赋值
                     * @return TargetLabel 是否已赋值
                     * 
                     */
                    bool TargetLabelHasBeenSet() const;

                    /**
                     * 获取忽略的列
                     * @return DiscardedLabels 忽略的列
                     * 
                     */
                    std::vector<Label> GetDiscardedLabels() const;

                    /**
                     * 设置忽略的列
                     * @param _discardedLabels 忽略的列
                     * 
                     */
                    void SetDiscardedLabels(const std::vector<Label>& _discardedLabels);

                    /**
                     * 判断参数 DiscardedLabels 是否已赋值
                     * @return DiscardedLabels 是否已赋值
                     * 
                     */
                    bool DiscardedLabelsHasBeenSet() const;

                    /**
                     * 获取预测列
                     * @return PredictionLabel 预测列
                     * 
                     */
                    Label GetPredictionLabel() const;

                    /**
                     * 设置预测列
                     * @param _predictionLabel 预测列
                     * 
                     */
                    void SetPredictionLabel(const Label& _predictionLabel);

                    /**
                     * 判断参数 PredictionLabel 是否已赋值
                     * @return PredictionLabel 是否已赋值
                     * 
                     */
                    bool PredictionLabelHasBeenSet() const;

                    /**
                     * 获取时间间隔单位
                     * @return EvaluationInterval 时间间隔单位
                     * 
                     */
                    std::string GetEvaluationInterval() const;

                    /**
                     * 设置时间间隔单位
                     * @param _evaluationInterval 时间间隔单位
                     * 
                     */
                    void SetEvaluationInterval(const std::string& _evaluationInterval);

                    /**
                     * 判断参数 EvaluationInterval 是否已赋值
                     * @return EvaluationInterval 是否已赋值
                     * 
                     */
                    bool EvaluationIntervalHasBeenSet() const;

                    /**
                     * 获取时序步长
                     * @return ForecastHorizon 时序步长
                     * 
                     */
                    int64_t GetForecastHorizon() const;

                    /**
                     * 设置时序步长
                     * @param _forecastHorizon 时序步长
                     * 
                     */
                    void SetForecastHorizon(const int64_t& _forecastHorizon);

                    /**
                     * 判断参数 ForecastHorizon 是否已赋值
                     * @return ForecastHorizon 是否已赋值
                     * 
                     */
                    bool ForecastHorizonHasBeenSet() const;

                    /**
                     * 获取结果集Catalog名称
                     * @return StorageCatalog 结果集Catalog名称
                     * 
                     */
                    std::string GetStorageCatalog() const;

                    /**
                     * 设置结果集Catalog名称
                     * @param _storageCatalog 结果集Catalog名称
                     * 
                     */
                    void SetStorageCatalog(const std::string& _storageCatalog);

                    /**
                     * 判断参数 StorageCatalog 是否已赋值
                     * @return StorageCatalog 是否已赋值
                     * 
                     */
                    bool StorageCatalogHasBeenSet() const;

                    /**
                     * 获取结果集Schema名称
                     * @return StorageSchema 结果集Schema名称
                     * 
                     */
                    std::string GetStorageSchema() const;

                    /**
                     * 设置结果集Schema名称
                     * @param _storageSchema 结果集Schema名称
                     * 
                     */
                    void SetStorageSchema(const std::string& _storageSchema);

                    /**
                     * 判断参数 StorageSchema 是否已赋值
                     * @return StorageSchema 是否已赋值
                     * 
                     */
                    bool StorageSchemaHasBeenSet() const;

                    /**
                     * 获取结果集Table名称
                     * @return StorageTable 结果集Table名称
                     * 
                     */
                    std::string GetStorageTable() const;

                    /**
                     * 设置结果集Table名称
                     * @param _storageTable 结果集Table名称
                     * 
                     */
                    void SetStorageTable(const std::string& _storageTable);

                    /**
                     * 判断参数 StorageTable 是否已赋值
                     * @return StorageTable 是否已赋值
                     * 
                     */
                    bool StorageTableHasBeenSet() const;

                    /**
                     * 获取选中的列
                     * @return SelectedLabels 选中的列
                     * 
                     */
                    std::vector<Label> GetSelectedLabels() const;

                    /**
                     * 设置选中的列
                     * @param _selectedLabels 选中的列
                     * 
                     */
                    void SetSelectedLabels(const std::vector<Label>& _selectedLabels);

                    /**
                     * 判断参数 SelectedLabels 是否已赋值
                     * @return SelectedLabels 是否已赋值
                     * 
                     */
                    bool SelectedLabelsHasBeenSet() const;

                    /**
                     * 获取特征查找配置
                     * @return FeatureLookup 特征查找配置
                     * 
                     */
                    std::vector<FeatureLookup> GetFeatureLookup() const;

                    /**
                     * 设置特征查找配置
                     * @param _featureLookup 特征查找配置
                     * 
                     */
                    void SetFeatureLookup(const std::vector<FeatureLookup>& _featureLookup);

                    /**
                     * 判断参数 FeatureLookup 是否已赋值
                     * @return FeatureLookup 是否已赋值
                     * 
                     */
                    bool FeatureLookupHasBeenSet() const;

                private:

                    /**
                     * Catalog名称
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Schema名称
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * Table名称
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 目标标签列
                     */
                    Label m_targetLabel;
                    bool m_targetLabelHasBeenSet;

                    /**
                     * 忽略的列
                     */
                    std::vector<Label> m_discardedLabels;
                    bool m_discardedLabelsHasBeenSet;

                    /**
                     * 预测列
                     */
                    Label m_predictionLabel;
                    bool m_predictionLabelHasBeenSet;

                    /**
                     * 时间间隔单位
                     */
                    std::string m_evaluationInterval;
                    bool m_evaluationIntervalHasBeenSet;

                    /**
                     * 时序步长
                     */
                    int64_t m_forecastHorizon;
                    bool m_forecastHorizonHasBeenSet;

                    /**
                     * 结果集Catalog名称
                     */
                    std::string m_storageCatalog;
                    bool m_storageCatalogHasBeenSet;

                    /**
                     * 结果集Schema名称
                     */
                    std::string m_storageSchema;
                    bool m_storageSchemaHasBeenSet;

                    /**
                     * 结果集Table名称
                     */
                    std::string m_storageTable;
                    bool m_storageTableHasBeenSet;

                    /**
                     * 选中的列
                     */
                    std::vector<Label> m_selectedLabels;
                    bool m_selectedLabelsHasBeenSet;

                    /**
                     * 特征查找配置
                     */
                    std::vector<FeatureLookup> m_featureLookup;
                    bool m_featureLookupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TRAININGDATA_H_
