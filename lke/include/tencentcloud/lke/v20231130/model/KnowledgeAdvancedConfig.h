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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEADVANCEDCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEADVANCEDCONFIG_H_

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
                * 知识库高级设置
                */
                class KnowledgeAdvancedConfig : public AbstractModel
                {
                public:
                    KnowledgeAdvancedConfig();
                    ~KnowledgeAdvancedConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重排序模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerankModel 重排序模型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRerankModel() const;

                    /**
                     * 设置重排序模型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerankModel 重排序模型
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
                     * 获取召回数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerankRecallNum 召回数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRerankRecallNum() const;

                    /**
                     * 设置召回数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerankRecallNum 召回数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRerankRecallNum(const int64_t& _rerankRecallNum);

                    /**
                     * 判断参数 RerankRecallNum 是否已赋值
                     * @return RerankRecallNum 是否已赋值
                     * 
                     */
                    bool RerankRecallNumHasBeenSet() const;

                private:

                    /**
                     * 重排序模型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rerankModel;
                    bool m_rerankModelHasBeenSet;

                    /**
                     * 召回数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rerankRecallNum;
                    bool m_rerankRecallNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEADVANCEDCONFIG_H_
