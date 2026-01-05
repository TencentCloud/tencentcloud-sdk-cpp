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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEGROUPCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEGROUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 任务配置
                */
                class QualityRuleGroupConfig : public AbstractModel
                {
                public:
                    QualityRuleGroupConfig();
                    ~QualityRuleGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分析类型，可选值：
INFERENCE-推理表
TIME_SERIES-时序表
SNAPSHOT-快照表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisType 分析类型，可选值：
INFERENCE-推理表
TIME_SERIES-时序表
SNAPSHOT-快照表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAnalysisType() const;

                    /**
                     * 设置分析类型，可选值：
INFERENCE-推理表
TIME_SERIES-时序表
SNAPSHOT-快照表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _analysisType 分析类型，可选值：
INFERENCE-推理表
TIME_SERIES-时序表
SNAPSHOT-快照表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnalysisType(const std::string& _analysisType);

                    /**
                     * 判断参数 AnalysisType 是否已赋值
                     * @return AnalysisType 是否已赋值
                     * 
                     */
                    bool AnalysisTypeHasBeenSet() const;

                    /**
                     * 获取模型检测类型，分析类型为推理表（INFERENCE）时必填，可选值：
CLAASSIFICATION-分类
REGRESSION-回归
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelMonitorType 模型检测类型，分析类型为推理表（INFERENCE）时必填，可选值：
CLAASSIFICATION-分类
REGRESSION-回归
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelMonitorType() const;

                    /**
                     * 设置模型检测类型，分析类型为推理表（INFERENCE）时必填，可选值：
CLAASSIFICATION-分类
REGRESSION-回归
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelMonitorType 模型检测类型，分析类型为推理表（INFERENCE）时必填，可选值：
CLAASSIFICATION-分类
REGRESSION-回归
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelMonitorType(const std::string& _modelMonitorType);

                    /**
                     * 判断参数 ModelMonitorType 是否已赋值
                     * @return ModelMonitorType 是否已赋值
                     * 
                     */
                    bool ModelMonitorTypeHasBeenSet() const;

                    /**
                     * 获取预测列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PredictColumn 预测列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPredictColumn() const;

                    /**
                     * 设置预测列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _predictColumn 预测列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPredictColumn(const std::string& _predictColumn);

                    /**
                     * 判断参数 PredictColumn 是否已赋值
                     * @return PredictColumn 是否已赋值
                     * 
                     */
                    bool PredictColumnHasBeenSet() const;

                    /**
                     * 获取预测列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PredictColumnType 预测列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPredictColumnType() const;

                    /**
                     * 设置预测列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _predictColumnType 预测列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPredictColumnType(const std::string& _predictColumnType);

                    /**
                     * 判断参数 PredictColumnType 是否已赋值
                     * @return PredictColumnType 是否已赋值
                     * 
                     */
                    bool PredictColumnTypeHasBeenSet() const;

                    /**
                     * 获取标签列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelColumn 标签列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelColumn() const;

                    /**
                     * 设置标签列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelColumn 标签列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelColumn(const std::string& _labelColumn);

                    /**
                     * 判断参数 LabelColumn 是否已赋值
                     * @return LabelColumn 是否已赋值
                     * 
                     */
                    bool LabelColumnHasBeenSet() const;

                    /**
                     * 获取标签列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelColumnType 标签列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelColumnType() const;

                    /**
                     * 设置标签列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelColumnType 标签列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelColumnType(const std::string& _labelColumnType);

                    /**
                     * 判断参数 LabelColumnType 是否已赋值
                     * @return LabelColumnType 是否已赋值
                     * 
                     */
                    bool LabelColumnTypeHasBeenSet() const;

                    /**
                     * 获取模型id列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelIdColumn 模型id列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelIdColumn() const;

                    /**
                     * 设置模型id列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelIdColumn 模型id列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelIdColumn(const std::string& _modelIdColumn);

                    /**
                     * 判断参数 ModelIdColumn 是否已赋值
                     * @return ModelIdColumn 是否已赋值
                     * 
                     */
                    bool ModelIdColumnHasBeenSet() const;

                    /**
                     * 获取模型id列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelIdColumnType 模型id列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelIdColumnType() const;

                    /**
                     * 设置模型id列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelIdColumnType 模型id列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelIdColumnType(const std::string& _modelIdColumnType);

                    /**
                     * 判断参数 ModelIdColumnType 是否已赋值
                     * @return ModelIdColumnType 是否已赋值
                     * 
                     */
                    bool ModelIdColumnTypeHasBeenSet() const;

                    /**
                     * 获取时间戳列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimestampColumn 时间戳列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestampColumn() const;

                    /**
                     * 设置时间戳列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestampColumn 时间戳列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestampColumn(const std::string& _timestampColumn);

                    /**
                     * 判断参数 TimestampColumn 是否已赋值
                     * @return TimestampColumn 是否已赋值
                     * 
                     */
                    bool TimestampColumnHasBeenSet() const;

                    /**
                     * 获取时间戳列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimestampColumnType 时间戳列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestampColumnType() const;

                    /**
                     * 设置时间戳列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestampColumnType 时间戳列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestampColumnType(const std::string& _timestampColumnType);

                    /**
                     * 判断参数 TimestampColumnType 是否已赋值
                     * @return TimestampColumnType 是否已赋值
                     * 
                     */
                    bool TimestampColumnTypeHasBeenSet() const;

                    /**
                     * 获取指标粒度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Granularity 指标粒度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGranularity() const;

                    /**
                     * 设置指标粒度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _granularity 指标粒度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGranularity(const int64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取指标粒度单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GranularityType 指标粒度单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGranularityType() const;

                    /**
                     * 设置指标粒度单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _granularityType 指标粒度单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGranularityType(const std::string& _granularityType);

                    /**
                     * 判断参数 GranularityType 是否已赋值
                     * @return GranularityType 是否已赋值
                     * 
                     */
                    bool GranularityTypeHasBeenSet() const;

                    /**
                     * 获取基准表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaseTable 基准表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBaseTable() const;

                    /**
                     * 设置基准表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baseTable 基准表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaseTable(const std::string& _baseTable);

                    /**
                     * 判断参数 BaseTable 是否已赋值
                     * @return BaseTable 是否已赋值
                     * 
                     */
                    bool BaseTableHasBeenSet() const;

                    /**
                     * 获取基准库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaseDb 基准库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBaseDb() const;

                    /**
                     * 设置基准库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baseDb 基准库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaseDb(const std::string& _baseDb);

                    /**
                     * 判断参数 BaseDb 是否已赋值
                     * @return BaseDb 是否已赋值
                     * 
                     */
                    bool BaseDbHasBeenSet() const;

                    /**
                     * 获取对比列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComparisonColumn 对比列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComparisonColumn() const;

                    /**
                     * 设置对比列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comparisonColumn 对比列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComparisonColumn(const std::string& _comparisonColumn);

                    /**
                     * 判断参数 ComparisonColumn 是否已赋值
                     * @return ComparisonColumn 是否已赋值
                     * 
                     */
                    bool ComparisonColumnHasBeenSet() const;

                    /**
                     * 获取对比列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComparisonColumnType 对比列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComparisonColumnType() const;

                    /**
                     * 设置对比列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comparisonColumnType 对比列类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComparisonColumnType(const std::string& _comparisonColumnType);

                    /**
                     * 判断参数 ComparisonColumnType 是否已赋值
                     * @return ComparisonColumnType 是否已赋值
                     * 
                     */
                    bool ComparisonColumnTypeHasBeenSet() const;

                    /**
                     * 获取保护组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectionValue 保护组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtectionValue() const;

                    /**
                     * 设置保护组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protectionValue 保护组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtectionValue(const std::string& _protectionValue);

                    /**
                     * 判断参数 ProtectionValue 是否已赋值
                     * @return ProtectionValue 是否已赋值
                     * 
                     */
                    bool ProtectionValueHasBeenSet() const;

                    /**
                     * 获取正类值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PositiveValue 正类值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPositiveValue() const;

                    /**
                     * 设置正类值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _positiveValue 正类值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPositiveValue(const std::string& _positiveValue);

                    /**
                     * 判断参数 PositiveValue 是否已赋值
                     * @return PositiveValue 是否已赋值
                     * 
                     */
                    bool PositiveValueHasBeenSet() const;

                    /**
                     * 获取特征列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeatureColumn 特征列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFeatureColumn() const;

                    /**
                     * 设置特征列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _featureColumn 特征列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeatureColumn(const std::string& _featureColumn);

                    /**
                     * 判断参数 FeatureColumn 是否已赋值
                     * @return FeatureColumn 是否已赋值
                     * 
                     */
                    bool FeatureColumnHasBeenSet() const;

                private:

                    /**
                     * 分析类型，可选值：
INFERENCE-推理表
TIME_SERIES-时序表
SNAPSHOT-快照表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_analysisType;
                    bool m_analysisTypeHasBeenSet;

                    /**
                     * 模型检测类型，分析类型为推理表（INFERENCE）时必填，可选值：
CLAASSIFICATION-分类
REGRESSION-回归
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelMonitorType;
                    bool m_modelMonitorTypeHasBeenSet;

                    /**
                     * 预测列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_predictColumn;
                    bool m_predictColumnHasBeenSet;

                    /**
                     * 预测列类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_predictColumnType;
                    bool m_predictColumnTypeHasBeenSet;

                    /**
                     * 标签列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelColumn;
                    bool m_labelColumnHasBeenSet;

                    /**
                     * 标签列类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelColumnType;
                    bool m_labelColumnTypeHasBeenSet;

                    /**
                     * 模型id列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelIdColumn;
                    bool m_modelIdColumnHasBeenSet;

                    /**
                     * 模型id列类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelIdColumnType;
                    bool m_modelIdColumnTypeHasBeenSet;

                    /**
                     * 时间戳列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestampColumn;
                    bool m_timestampColumnHasBeenSet;

                    /**
                     * 时间戳列类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestampColumnType;
                    bool m_timestampColumnTypeHasBeenSet;

                    /**
                     * 指标粒度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * 指标粒度单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_granularityType;
                    bool m_granularityTypeHasBeenSet;

                    /**
                     * 基准表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_baseTable;
                    bool m_baseTableHasBeenSet;

                    /**
                     * 基准库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_baseDb;
                    bool m_baseDbHasBeenSet;

                    /**
                     * 对比列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comparisonColumn;
                    bool m_comparisonColumnHasBeenSet;

                    /**
                     * 对比列类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comparisonColumnType;
                    bool m_comparisonColumnTypeHasBeenSet;

                    /**
                     * 保护组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protectionValue;
                    bool m_protectionValueHasBeenSet;

                    /**
                     * 正类值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_positiveValue;
                    bool m_positiveValueHasBeenSet;

                    /**
                     * 特征列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_featureColumn;
                    bool m_featureColumnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEGROUPCONFIG_H_
