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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_STATISTICINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_STATISTICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 大模型token统计信息
                */
                class StatisticInfo : public AbstractModel
                {
                public:
                    StatisticInfo();
                    ~StatisticInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>首Token耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstTokenCost <p>首Token耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFirstTokenCost() const;

                    /**
                     * 设置<p>首Token耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstTokenCost <p>首Token耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstTokenCost(const uint64_t& _firstTokenCost);

                    /**
                     * 判断参数 FirstTokenCost 是否已赋值
                     * @return FirstTokenCost 是否已赋值
                     * 
                     */
                    bool FirstTokenCostHasBeenSet() const;

                    /**
                     * 获取<p>总耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCost <p>总耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCost() const;

                    /**
                     * 设置<p>总耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCost <p>总耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCost(const uint64_t& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取<p>输入Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputTokens <p>输入Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInputTokens() const;

                    /**
                     * 设置<p>输入Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputTokens <p>输入Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputTokens(const uint64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>输出Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputTokens <p>输出Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOutputTokens() const;

                    /**
                     * 设置<p>输出Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputTokens <p>输出Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputTokens(const uint64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>总Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalTokens <p>总Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置<p>总Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalTokens <p>总Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>首Token耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_firstTokenCost;
                    bool m_firstTokenCostHasBeenSet;

                    /**
                     * <p>总耗时</p><p>单位：ms</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * <p>输入Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>输出Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>总Token数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_STATISTICINFO_H_
