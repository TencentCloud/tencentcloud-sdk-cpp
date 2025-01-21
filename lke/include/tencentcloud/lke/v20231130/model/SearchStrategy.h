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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SEARCHSTRATEGY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SEARCHSTRATEGY_H_

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
                     * 获取Excel检索增强开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableEnhancement Excel检索增强开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTableEnhancement() const;

                    /**
                     * 设置Excel检索增强开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableEnhancement Excel检索增强开关
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

                private:

                    /**
                     * 检索策略类型 0:混合检索，1：语义检索
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Excel检索增强开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_tableEnhancement;
                    bool m_tableEnhancementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SEARCHSTRATEGY_H_
