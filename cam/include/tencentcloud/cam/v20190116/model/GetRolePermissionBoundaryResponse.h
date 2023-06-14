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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETROLEPERMISSIONBOUNDARYRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETROLEPERMISSIONBOUNDARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GetRolePermissionBoundary返回参数结构体
                */
                class GetRolePermissionBoundaryResponse : public AbstractModel
                {
                public:
                    GetRolePermissionBoundaryResponse();
                    ~GetRolePermissionBoundaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyName 策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略语法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyDocument 策略语法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     * 
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取策略类型：1.自定义策略，2.预设策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyType 策略类型：1.自定义策略，2.预设策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取创建方式：1.按产品功能或项目权限创建，2.按策略语法创建，3.按策略生成器创建，4.按标签授权创建，5.按权限边界规则创建
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateMode 创建方式：1.按产品功能或项目权限创建，2.按策略语法创建，3.按策略生成器创建，4.按标签授权创建，5.按权限边界规则创建
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateMode() const;

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     * 
                     */
                    bool CreateModeHasBeenSet() const;

                private:

                    /**
                     * 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略语法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * 策略类型：1.自定义策略，2.预设策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 创建方式：1.按产品功能或项目权限创建，2.按策略语法创建，3.按策略生成器创建，4.按标签授权创建，5.按权限边界规则创建
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createMode;
                    bool m_createModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETROLEPERMISSIONBOUNDARYRESPONSE_H_
