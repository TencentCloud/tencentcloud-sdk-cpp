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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_PROMPTMODERATECONFIGDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_PROMPTMODERATECONFIGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 提示词安全配置
                */
                class PromptModerateConfigDTO : public AbstractModel
                {
                public:
                    PromptModerateConfigDTO();
                    ~PromptModerateConfigDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InterceptMessage 响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInterceptMessage() const;

                    /**
                     * 设置响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interceptMessage 响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterceptMessage(const std::string& _interceptMessage);

                    /**
                     * 判断参数 InterceptMessage 是否已赋值
                     * @return InterceptMessage 是否已赋值
                     * 
                     */
                    bool InterceptMessageHasBeenSet() const;

                private:

                    /**
                     * 执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_interceptMessage;
                    bool m_interceptMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_PROMPTMODERATECONFIGDTO_H_
