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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SEARCHSTRATEGY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SEARCHSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/NL2SQLModelConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 知识库检索策略
                */
                class SearchStrategy : public AbstractModel
                {
                public:
                    SearchStrategy();
                    ~SearchStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索策略类型 0:混合检索，1：语义检索
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyType 检索策略类型 0:混合检索，1：语义检索
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStrategyType() const;

                    /**
                     * 设置检索策略类型 0:混合检索，1：语义检索
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyType 检索策略类型 0:混合检索，1：语义检索
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyType(const uint64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取Excel检索增强开关, false关闭，true打开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableEnhancement Excel检索增强开关, false关闭，true打开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTableEnhancement() const;

                    /**
                     * 设置Excel检索增强开关, false关闭，true打开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableEnhancement Excel检索增强开关, false关闭，true打开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableEnhancement(const bool& _tableEnhancement);

                    /**
                     * 判断参数 TableEnhancement 是否已赋值
                     * @return TableEnhancement 是否已赋值
                     * 
                     */
                    bool TableEnhancementHasBeenSet() const;

                    /**
                     * 获取向量模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmbeddingModel 向量模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmbeddingModel() const;

                    /**
                     * 设置向量模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _embeddingModel 向量模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmbeddingModel(const std::string& _embeddingModel);

                    /**
                     * 判断参数 EmbeddingModel 是否已赋值
                     * @return EmbeddingModel 是否已赋值
                     * 
                     */
                    bool EmbeddingModelHasBeenSet() const;

                    /**
                     * 获取结果重排序开关， on打开，off关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerankModelSwitch 结果重排序开关， on打开，off关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRerankModelSwitch() const;

                    /**
                     * 设置结果重排序开关， on打开，off关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerankModelSwitch 结果重排序开关， on打开，off关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRerankModelSwitch(const std::string& _rerankModelSwitch);

                    /**
                     * 判断参数 RerankModelSwitch 是否已赋值
                     * @return RerankModelSwitch 是否已赋值
                     * 
                     */
                    bool RerankModelSwitchHasBeenSet() const;

                    /**
                     * 获取结果重排序模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerankModel 结果重排序模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRerankModel() const;

                    /**
                     * 设置结果重排序模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerankModel 结果重排序模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRerankModel(const std::string& _rerankModel);

                    /**
                     * 判断参数 RerankModel 是否已赋值
                     * @return RerankModel 是否已赋值
                     * 
                     */
                    bool RerankModelHasBeenSet() const;

                    /**
                     * 获取NL2SQL模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NatureLanguageToSqlModelConfig NL2SQL模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NL2SQLModelConfig GetNatureLanguageToSqlModelConfig() const;

                    /**
                     * 设置NL2SQL模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _natureLanguageToSqlModelConfig NL2SQL模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNatureLanguageToSqlModelConfig(const NL2SQLModelConfig& _natureLanguageToSqlModelConfig);

                    /**
                     * 判断参数 NatureLanguageToSqlModelConfig 是否已赋值
                     * @return NatureLanguageToSqlModelConfig 是否已赋值
                     * 
                     */
                    bool NatureLanguageToSqlModelConfigHasBeenSet() const;

                    /**
                     * 获取是否开启图谱检索
                     * @return GraphRetrieval 是否开启图谱检索
                     * 
                     */
                    bool GetGraphRetrieval() const;

                    /**
                     * 设置是否开启图谱检索
                     * @param _graphRetrieval 是否开启图谱检索
                     * 
                     */
                    void SetGraphRetrieval(const bool& _graphRetrieval);

                    /**
                     * 判断参数 GraphRetrieval 是否已赋值
                     * @return GraphRetrieval 是否已赋值
                     * 
                     */
                    bool GraphRetrievalHasBeenSet() const;

                private:

                    /**
                     * 检索策略类型 0:混合检索，1：语义检索
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Excel检索增强开关, false关闭，true打开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_tableEnhancement;
                    bool m_tableEnhancementHasBeenSet;

                    /**
                     * 向量模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_embeddingModel;
                    bool m_embeddingModelHasBeenSet;

                    /**
                     * 结果重排序开关， on打开，off关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rerankModelSwitch;
                    bool m_rerankModelSwitchHasBeenSet;

                    /**
                     * 结果重排序模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rerankModel;
                    bool m_rerankModelHasBeenSet;

                    /**
                     * NL2SQL模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NL2SQLModelConfig m_natureLanguageToSqlModelConfig;
                    bool m_natureLanguageToSqlModelConfigHasBeenSet;

                    /**
                     * 是否开启图谱检索
                     */
                    bool m_graphRetrieval;
                    bool m_graphRetrievalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SEARCHSTRATEGY_H_
