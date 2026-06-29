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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CLAWAGENTCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CLAWAGENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ClawAgentCustomConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ClawAgent配置
                */
                class ClawAgentConfig : public AbstractModel
                {
                public:
                    ClawAgentConfig();
                    ~ClawAgentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调用方自定义配置(控制C端用户在对话时可动态传入哪些自定义配置)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomConfig 调用方自定义配置(控制C端用户在对话时可动态传入哪些自定义配置)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClawAgentCustomConfig GetCustomConfig() const;

                    /**
                     * 设置调用方自定义配置(控制C端用户在对话时可动态传入哪些自定义配置)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customConfig 调用方自定义配置(控制C端用户在对话时可动态传入哪些自定义配置)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomConfig(const ClawAgentCustomConfig& _customConfig);

                    /**
                     * 判断参数 CustomConfig 是否已赋值
                     * @return CustomConfig 是否已赋值
                     * 
                     */
                    bool CustomConfigHasBeenSet() const;

                private:

                    /**
                     * 调用方自定义配置(控制C端用户在对话时可动态传入哪些自定义配置)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClawAgentCustomConfig m_customConfig;
                    bool m_customConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CLAWAGENTCONFIG_H_
