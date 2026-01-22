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
                     * 获取<p>绑定策略目标ID。成员Uin或部门ID</p>
                     * @return TargetId <p>绑定策略目标ID。成员Uin或部门ID</p>
                     * 
                     */
                    uint64_t GetTargetId() const;

                    /**
                     * 设置<p>绑定策略目标ID。成员Uin或部门ID</p>
                     * @param _targetId <p>绑定策略目标ID。成员Uin或部门ID</p>
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
                     * 获取<p>目标类型。取值范围：NODE-部门、MEMBER-成员</p>
                     * @return TargetType <p>目标类型。取值范围：NODE-部门、MEMBER-成员</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>目标类型。取值范围：NODE-部门、MEMBER-成员</p>
                     * @param _targetType <p>目标类型。取值范围：NODE-部门、MEMBER-成员</p>
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
                     * 获取<p>策略Id。可以调用<a href="https://cloud.tencent.com/document/product/850/105311">ListPolicies</a>获取</p>
                     * @return PolicyId <p>策略Id。可以调用<a href="https://cloud.tencent.com/document/product/850/105311">ListPolicies</a>获取</p>
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置<p>策略Id。可以调用<a href="https://cloud.tencent.com/document/product/850/105311">ListPolicies</a>获取</p>
                     * @param _policyId <p>策略Id。可以调用<a href="https://cloud.tencent.com/document/product/850/105311">ListPolicies</a>获取</p>
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
                     * 获取<p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
                     * @return Type <p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
                     * @param _type <p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
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
                     * <p>绑定策略目标ID。成员Uin或部门ID</p>
                     */
                    uint64_t m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * <p>目标类型。取值范围：NODE-部门、MEMBER-成员</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>策略Id。可以调用<a href="https://cloud.tencent.com/document/product/850/105311">ListPolicies</a>获取</p>
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ATTACHPOLICYREQUEST_H_
