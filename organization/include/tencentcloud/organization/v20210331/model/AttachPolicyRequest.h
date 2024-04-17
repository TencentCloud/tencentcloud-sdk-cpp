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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ATTACHPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ATTACHPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AttachPolicy请求参数结构体
                */
                class AttachPolicyRequest : public AbstractModel
                {
                public:
                    AttachPolicyRequest();
                    ~AttachPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定策略目标ID。成员Uin或部门ID
                     * @return TargetId 绑定策略目标ID。成员Uin或部门ID
                     * 
                     */
                    uint64_t GetTargetId() const;

                    /**
                     * 设置绑定策略目标ID。成员Uin或部门ID
                     * @param _targetId 绑定策略目标ID。成员Uin或部门ID
                     * 
                     */
                    void SetTargetId(const uint64_t& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取目标类型。取值范围：NODE-部门、MEMBER-成员
                     * @return TargetType 目标类型。取值范围：NODE-部门、MEMBER-成员
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置目标类型。取值范围：NODE-部门、MEMBER-成员
                     * @param _targetType 目标类型。取值范围：NODE-部门、MEMBER-成员
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取策略ID。
                     * @return PolicyId 策略ID。
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略ID。
                     * @param _policyId 策略ID。
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     * @return Type 策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     * @param _type 策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 绑定策略目标ID。成员Uin或部门ID
                     */
                    uint64_t m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 目标类型。取值范围：NODE-部门、MEMBER-成员
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 策略ID。
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ATTACHPOLICYREQUEST_H_
