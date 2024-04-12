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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_APPCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_APPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaConfig.h>
#include <tencentcloud/lke/v20231130/model/SummaryConfig.h>
#include <tencentcloud/lke/v20231130/model/ClassifyConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 应用配置
                */
                class AppConfig : public AbstractModel
                {
                public:
                    AppConfig();
                    ~AppConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取知识问答管理应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeQa 知识问答管理应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeQaConfig GetKnowledgeQa() const;

                    /**
                     * 设置知识问答管理应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeQa 知识问答管理应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeQa(const KnowledgeQaConfig& _knowledgeQa);

                    /**
                     * 判断参数 KnowledgeQa 是否已赋值
                     * @return KnowledgeQa 是否已赋值
                     * 
                     */
                    bool KnowledgeQaHasBeenSet() const;

                    /**
                     * 获取知识摘要应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Summary 知识摘要应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SummaryConfig GetSummary() const;

                    /**
                     * 设置知识摘要应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _summary 知识摘要应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSummary(const SummaryConfig& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取标签提取应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Classify 标签提取应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClassifyConfig GetClassify() const;

                    /**
                     * 设置标签提取应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classify 标签提取应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassify(const ClassifyConfig& _classify);

                    /**
                     * 判断参数 Classify 是否已赋值
                     * @return Classify 是否已赋值
                     * 
                     */
                    bool ClassifyHasBeenSet() const;

                private:

                    /**
                     * 知识问答管理应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeQaConfig m_knowledgeQa;
                    bool m_knowledgeQaHasBeenSet;

                    /**
                     * 知识摘要应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SummaryConfig m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 标签提取应用配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClassifyConfig m_classify;
                    bool m_classifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_APPCONFIG_H_
