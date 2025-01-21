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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEWORKFLOW_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEWORKFLOW_H_

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
                * 问答知识库工作流配置
                */
                class KnowledgeWorkflow : public AbstractModel
                {
                public:
                    KnowledgeWorkflow();
                    ~KnowledgeWorkflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEnabled 是否启用工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsEnabled() const;

                    /**
                     * 设置是否启用工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEnabled 是否启用工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEnabled(const bool& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取是否启用PDL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsePdl 是否启用PDL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUsePdl() const;

                    /**
                     * 设置是否启用PDL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usePdl 是否启用PDL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsePdl(const bool& _usePdl);

                    /**
                     * 判断参数 UsePdl 是否已赋值
                     * @return UsePdl 是否已赋值
                     * 
                     */
                    bool UsePdlHasBeenSet() const;

                private:

                    /**
                     * 是否启用工作流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 是否启用PDL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_usePdl;
                    bool m_usePdlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEWORKFLOW_H_
