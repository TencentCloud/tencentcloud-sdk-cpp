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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_A2ACONFIG_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_A2ACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Agent 的 A2A 对外互通配置与注册态
                */
                class A2AConfig : public AbstractModel
                {
                public:
                    A2AConfig();
                    ~A2AConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent 级唯一 A2A 开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2AEnabled Agent 级唯一 A2A 开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetA2AEnabled() const;

                    /**
                     * 设置Agent 级唯一 A2A 开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2AEnabled Agent 级唯一 A2A 开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2AEnabled(const bool& _a2AEnabled);

                    /**
                     * 判断参数 A2AEnabled 是否已赋值
                     * @return A2AEnabled 是否已赋值
                     * 
                     */
                    bool A2AEnabledHasBeenSet() const;

                    /**
                     * 获取对外 A2A handle（已注册时；仅 DescribeAgent / ModifyAgentA2AConfig 填充）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2APublicRef 对外 A2A handle（已注册时；仅 DescribeAgent / ModifyAgentA2AConfig 填充）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2APublicRef() const;

                    /**
                     * 设置对外 A2A handle（已注册时；仅 DescribeAgent / ModifyAgentA2AConfig 填充）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2APublicRef 对外 A2A handle（已注册时；仅 DescribeAgent / ModifyAgentA2AConfig 填充）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2APublicRef(const std::string& _a2APublicRef);

                    /**
                     * 判断参数 A2APublicRef 是否已赋值
                     * @return A2APublicRef 是否已赋值
                     * 
                     */
                    bool A2APublicRefHasBeenSet() const;

                    /**
                     * 获取对外 A2A card 发现地址（已注册时）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2AEndpoint 对外 A2A card 发现地址（已注册时）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2AEndpoint() const;

                    /**
                     * 设置对外 A2A card 发现地址（已注册时）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2AEndpoint 对外 A2A card 发现地址（已注册时）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2AEndpoint(const std::string& _a2AEndpoint);

                    /**
                     * 判断参数 A2AEndpoint 是否已赋值
                     * @return A2AEndpoint 是否已赋值
                     * 
                     */
                    bool A2AEndpointHasBeenSet() const;

                    /**
                     * 获取注册状态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return A2AStatus 注册状态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetA2AStatus() const;

                    /**
                     * 设置注册状态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _a2AStatus 注册状态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetA2AStatus(const std::string& _a2AStatus);

                    /**
                     * 判断参数 A2AStatus 是否已赋值
                     * @return A2AStatus 是否已赋值
                     * 
                     */
                    bool A2AStatusHasBeenSet() const;

                private:

                    /**
                     * Agent 级唯一 A2A 开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_a2AEnabled;
                    bool m_a2AEnabledHasBeenSet;

                    /**
                     * 对外 A2A handle（已注册时；仅 DescribeAgent / ModifyAgentA2AConfig 填充）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2APublicRef;
                    bool m_a2APublicRefHasBeenSet;

                    /**
                     * 对外 A2A card 发现地址（已注册时）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2AEndpoint;
                    bool m_a2AEndpointHasBeenSet;

                    /**
                     * 注册状态：DRAFT / REGISTERED / DISABLED / NONE / UNKNOWN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_a2AStatus;
                    bool m_a2AStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_A2ACONFIG_H_
