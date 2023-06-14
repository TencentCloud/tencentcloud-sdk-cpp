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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DETACHROLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DETACHROLEPOLICYREQUEST_H_

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
                * DetachRolePolicy请求参数结构体
                */
                class DetachRolePolicyRequest : public AbstractModel
                {
                public:
                    DetachRolePolicyRequest();
                    ~DetachRolePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略ID，入参PolicyId与PolicyName二选一
                     * @return PolicyId 策略ID，入参PolicyId与PolicyName二选一
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略ID，入参PolicyId与PolicyName二选一
                     * @param _policyId 策略ID，入参PolicyId与PolicyName二选一
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
                     * 获取角色ID，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     * @return DetachRoleId 角色ID，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     * 
                     */
                    std::string GetDetachRoleId() const;

                    /**
                     * 设置角色ID，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     * @param _detachRoleId 角色ID，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     * 
                     */
                    void SetDetachRoleId(const std::string& _detachRoleId);

                    /**
                     * 判断参数 DetachRoleId 是否已赋值
                     * @return DetachRoleId 是否已赋值
                     * 
                     */
                    bool DetachRoleIdHasBeenSet() const;

                    /**
                     * 获取角色名称，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     * @return DetachRoleName 角色名称，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     * 
                     */
                    std::string GetDetachRoleName() const;

                    /**
                     * 设置角色名称，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     * @param _detachRoleName 角色名称，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     * 
                     */
                    void SetDetachRoleName(const std::string& _detachRoleName);

                    /**
                     * 判断参数 DetachRoleName 是否已赋值
                     * @return DetachRoleName 是否已赋值
                     * 
                     */
                    bool DetachRoleNameHasBeenSet() const;

                    /**
                     * 获取策略名，入参PolicyId与PolicyName二选一
                     * @return PolicyName 策略名，入参PolicyId与PolicyName二选一
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名，入参PolicyId与PolicyName二选一
                     * @param _policyName 策略名，入参PolicyId与PolicyName二选一
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                private:

                    /**
                     * 策略ID，入参PolicyId与PolicyName二选一
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 角色ID，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     */
                    std::string m_detachRoleId;
                    bool m_detachRoleIdHasBeenSet;

                    /**
                     * 角色名称，用于指定角色，入参 DetachRoleId 与 DetachRoleName 二选一
                     */
                    std::string m_detachRoleName;
                    bool m_detachRoleNameHasBeenSet;

                    /**
                     * 策略名，入参PolicyId与PolicyName二选一
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DETACHROLEPOLICYREQUEST_H_
