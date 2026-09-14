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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RETRIEVALOPTION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RETRIEVALOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExpirationAwareness.h>
#include <tencentcloud/adp/v20260520/model/GraphRAG.h>
#include <tencentcloud/adp/v20260520/model/TableEnhancement.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 检索可选配置
                */
                class RetrievalOption : public AbstractModel
                {
                public:
                    RetrievalOption();
                    ~RetrievalOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时效性检索增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpirationAwareness <p>时效性检索增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExpirationAwareness GetExpirationAwareness() const;

                    /**
                     * 设置<p>时效性检索增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expirationAwareness <p>时效性检索增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpirationAwareness(const ExpirationAwareness& _expirationAwareness);

                    /**
                     * 判断参数 ExpirationAwareness 是否已赋值
                     * @return ExpirationAwareness 是否已赋值
                     * 
                     */
                    bool ExpirationAwarenessHasBeenSet() const;

                    /**
                     * 获取<p>GraphRAG配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GraphRag <p>GraphRAG配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GraphRAG GetGraphRag() const;

                    /**
                     * 设置<p>GraphRAG配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _graphRag <p>GraphRAG配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGraphRag(const GraphRAG& _graphRag);

                    /**
                     * 判断参数 GraphRag 是否已赋值
                     * @return GraphRag 是否已赋值
                     * 
                     */
                    bool GraphRagHasBeenSet() const;

                    /**
                     * 获取<p>表格增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableEnhancement <p>表格增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TableEnhancement GetTableEnhancement() const;

                    /**
                     * 设置<p>表格增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableEnhancement <p>表格增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableEnhancement(const TableEnhancement& _tableEnhancement);

                    /**
                     * 判断参数 TableEnhancement 是否已赋值
                     * @return TableEnhancement 是否已赋值
                     * 
                     */
                    bool TableEnhancementHasBeenSet() const;

                private:

                    /**
                     * <p>时效性检索增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExpirationAwareness m_expirationAwareness;
                    bool m_expirationAwarenessHasBeenSet;

                    /**
                     * <p>GraphRAG配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GraphRAG m_graphRag;
                    bool m_graphRagHasBeenSet;

                    /**
                     * <p>表格增强配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TableEnhancement m_tableEnhancement;
                    bool m_tableEnhancementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RETRIEVALOPTION_H_
