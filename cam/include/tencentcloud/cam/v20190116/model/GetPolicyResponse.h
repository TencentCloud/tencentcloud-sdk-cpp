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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETPOLICYRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETPOLICYRESPONSE_H_

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
                * GetPolicy返回参数结构体
                */
                class GetPolicyResponse : public AbstractModel
                {
                public:
                    GetPolicyResponse();
                    ~GetPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略名。
                     * @return PolicyName 策略名。
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
                     * 获取策略描述。
                     * @return Description 策略描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取1 表示自定义策略，2 表示预设策略。
                     * @return Type 1 表示自定义策略，2 表示预设策略。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取策略创建时间。
                     * @return AddTime 策略创建时间。
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取策略最近更新时间。
                     * @return UpdateTime 策略最近更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取策略文档。
                     * @return PolicyDocument 策略文档。
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
                     * 获取备注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresetAlias 备注。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPresetAlias() const;

                    /**
                     * 判断参数 PresetAlias 是否已赋值
                     * @return PresetAlias 是否已赋值
                     * 
                     */
                    bool PresetAliasHasBeenSet() const;

                    /**
                     * 获取是否是服务相关策略，0代表不是服务相关策略，1代表是服务相关策略。
                     * @return IsServiceLinkedRolePolicy 是否是服务相关策略，0代表不是服务相关策略，1代表是服务相关策略。
                     * 
                     */
                    uint64_t GetIsServiceLinkedRolePolicy() const;

                    /**
                     * 判断参数 IsServiceLinkedRolePolicy 是否已赋值
                     * @return IsServiceLinkedRolePolicy 是否已赋值
                     * 
                     */
                    bool IsServiceLinkedRolePolicyHasBeenSet() const;

                private:

                    /**
                     * 策略名。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 1 表示自定义策略，2 表示预设策略。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 策略创建时间。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 策略最近更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 策略文档。
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * 备注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_presetAlias;
                    bool m_presetAliasHasBeenSet;

                    /**
                     * 是否是服务相关策略，0代表不是服务相关策略，1代表是服务相关策略。
                     */
                    uint64_t m_isServiceLinkedRolePolicy;
                    bool m_isServiceLinkedRolePolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETPOLICYRESPONSE_H_
