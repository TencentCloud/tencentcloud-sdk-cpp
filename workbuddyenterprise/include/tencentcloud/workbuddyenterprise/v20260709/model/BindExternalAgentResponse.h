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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_BINDEXTERNALAGENTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_BINDEXTERNALAGENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * BindExternalAgent返回参数结构体
                */
                class BindExternalAgentResponse : public AbstractModel
                {
                public:
                    BindExternalAgentResponse();
                    ~BindExternalAgentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作结果状态（大写枚举）：BOUND=已绑定 / UNBOUND=已解绑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 操作结果状态（大写枚举）：BOUND=已绑定 / UNBOUND=已解绑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取绑定记录 ID（自增 ID 字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindingId 绑定记录 ID（自增 ID 字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBindingId() const;

                    /**
                     * 判断参数 BindingId 是否已赋值
                     * @return BindingId 是否已赋值
                     * 
                     */
                    bool BindingIdHasBeenSet() const;

                private:

                    /**
                     * 操作结果状态（大写枚举）：BOUND=已绑定 / UNBOUND=已解绑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 绑定记录 ID（自增 ID 字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bindingId;
                    bool m_bindingIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_BINDEXTERNALAGENTRESPONSE_H_
