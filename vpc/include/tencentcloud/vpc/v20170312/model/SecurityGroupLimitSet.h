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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPLIMITSET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPLIMITSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 用户安全组配额限制。
                */
                class SecurityGroupLimitSet : public AbstractModel
                {
                public:
                    SecurityGroupLimitSet();
                    ~SecurityGroupLimitSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每个项目每个地域可创建安全组数
                     * @return SecurityGroupLimit 每个项目每个地域可创建安全组数
                     * 
                     */
                    uint64_t GetSecurityGroupLimit() const;

                    /**
                     * 设置每个项目每个地域可创建安全组数
                     * @param _securityGroupLimit 每个项目每个地域可创建安全组数
                     * 
                     */
                    void SetSecurityGroupLimit(const uint64_t& _securityGroupLimit);

                    /**
                     * 判断参数 SecurityGroupLimit 是否已赋值
                     * @return SecurityGroupLimit 是否已赋值
                     * 
                     */
                    bool SecurityGroupLimitHasBeenSet() const;

                    /**
                     * 获取安全组下的最大规则数
                     * @return SecurityGroupPolicyLimit 安全组下的最大规则数
                     * 
                     */
                    uint64_t GetSecurityGroupPolicyLimit() const;

                    /**
                     * 设置安全组下的最大规则数
                     * @param _securityGroupPolicyLimit 安全组下的最大规则数
                     * 
                     */
                    void SetSecurityGroupPolicyLimit(const uint64_t& _securityGroupPolicyLimit);

                    /**
                     * 判断参数 SecurityGroupPolicyLimit 是否已赋值
                     * @return SecurityGroupPolicyLimit 是否已赋值
                     * 
                     */
                    bool SecurityGroupPolicyLimitHasBeenSet() const;

                    /**
                     * 获取安全组下嵌套安全组规则数
                     * @return ReferedSecurityGroupLimit 安全组下嵌套安全组规则数
                     * 
                     */
                    uint64_t GetReferedSecurityGroupLimit() const;

                    /**
                     * 设置安全组下嵌套安全组规则数
                     * @param _referedSecurityGroupLimit 安全组下嵌套安全组规则数
                     * 
                     */
                    void SetReferedSecurityGroupLimit(const uint64_t& _referedSecurityGroupLimit);

                    /**
                     * 判断参数 ReferedSecurityGroupLimit 是否已赋值
                     * @return ReferedSecurityGroupLimit 是否已赋值
                     * 
                     */
                    bool ReferedSecurityGroupLimitHasBeenSet() const;

                    /**
                     * 获取单安全组关联实例数
                     * @return SecurityGroupInstanceLimit 单安全组关联实例数
                     * 
                     */
                    uint64_t GetSecurityGroupInstanceLimit() const;

                    /**
                     * 设置单安全组关联实例数
                     * @param _securityGroupInstanceLimit 单安全组关联实例数
                     * 
                     */
                    void SetSecurityGroupInstanceLimit(const uint64_t& _securityGroupInstanceLimit);

                    /**
                     * 判断参数 SecurityGroupInstanceLimit 是否已赋值
                     * @return SecurityGroupInstanceLimit 是否已赋值
                     * 
                     */
                    bool SecurityGroupInstanceLimitHasBeenSet() const;

                    /**
                     * 获取实例关联安全组数
                     * @return InstanceSecurityGroupLimit 实例关联安全组数
                     * 
                     */
                    uint64_t GetInstanceSecurityGroupLimit() const;

                    /**
                     * 设置实例关联安全组数
                     * @param _instanceSecurityGroupLimit 实例关联安全组数
                     * 
                     */
                    void SetInstanceSecurityGroupLimit(const uint64_t& _instanceSecurityGroupLimit);

                    /**
                     * 判断参数 InstanceSecurityGroupLimit 是否已赋值
                     * @return InstanceSecurityGroupLimit 是否已赋值
                     * 
                     */
                    bool InstanceSecurityGroupLimitHasBeenSet() const;

                    /**
                     * 获取安全组展开后的规则数限制
                     * @return SecurityGroupExtendedPolicyLimit 安全组展开后的规则数限制
                     * 
                     */
                    uint64_t GetSecurityGroupExtendedPolicyLimit() const;

                    /**
                     * 设置安全组展开后的规则数限制
                     * @param _securityGroupExtendedPolicyLimit 安全组展开后的规则数限制
                     * 
                     */
                    void SetSecurityGroupExtendedPolicyLimit(const uint64_t& _securityGroupExtendedPolicyLimit);

                    /**
                     * 判断参数 SecurityGroupExtendedPolicyLimit 是否已赋值
                     * @return SecurityGroupExtendedPolicyLimit 是否已赋值
                     * 
                     */
                    bool SecurityGroupExtendedPolicyLimitHasBeenSet() const;

                    /**
                     * 获取被引用的安全组关联CVM、ENI的实例配额
                     * @return SecurityGroupReferedCvmAndEniLimit 被引用的安全组关联CVM、ENI的实例配额
                     * 
                     */
                    uint64_t GetSecurityGroupReferedCvmAndEniLimit() const;

                    /**
                     * 设置被引用的安全组关联CVM、ENI的实例配额
                     * @param _securityGroupReferedCvmAndEniLimit 被引用的安全组关联CVM、ENI的实例配额
                     * 
                     */
                    void SetSecurityGroupReferedCvmAndEniLimit(const uint64_t& _securityGroupReferedCvmAndEniLimit);

                    /**
                     * 判断参数 SecurityGroupReferedCvmAndEniLimit 是否已赋值
                     * @return SecurityGroupReferedCvmAndEniLimit 是否已赋值
                     * 
                     */
                    bool SecurityGroupReferedCvmAndEniLimitHasBeenSet() const;

                    /**
                     * 获取被引用的安全组关联数据库、LB等服务实例配额
                     * @return SecurityGroupReferedSvcLimit 被引用的安全组关联数据库、LB等服务实例配额
                     * 
                     */
                    uint64_t GetSecurityGroupReferedSvcLimit() const;

                    /**
                     * 设置被引用的安全组关联数据库、LB等服务实例配额
                     * @param _securityGroupReferedSvcLimit 被引用的安全组关联数据库、LB等服务实例配额
                     * 
                     */
                    void SetSecurityGroupReferedSvcLimit(const uint64_t& _securityGroupReferedSvcLimit);

                    /**
                     * 判断参数 SecurityGroupReferedSvcLimit 是否已赋值
                     * @return SecurityGroupReferedSvcLimit 是否已赋值
                     * 
                     */
                    bool SecurityGroupReferedSvcLimitHasBeenSet() const;

                private:

                    /**
                     * 每个项目每个地域可创建安全组数
                     */
                    uint64_t m_securityGroupLimit;
                    bool m_securityGroupLimitHasBeenSet;

                    /**
                     * 安全组下的最大规则数
                     */
                    uint64_t m_securityGroupPolicyLimit;
                    bool m_securityGroupPolicyLimitHasBeenSet;

                    /**
                     * 安全组下嵌套安全组规则数
                     */
                    uint64_t m_referedSecurityGroupLimit;
                    bool m_referedSecurityGroupLimitHasBeenSet;

                    /**
                     * 单安全组关联实例数
                     */
                    uint64_t m_securityGroupInstanceLimit;
                    bool m_securityGroupInstanceLimitHasBeenSet;

                    /**
                     * 实例关联安全组数
                     */
                    uint64_t m_instanceSecurityGroupLimit;
                    bool m_instanceSecurityGroupLimitHasBeenSet;

                    /**
                     * 安全组展开后的规则数限制
                     */
                    uint64_t m_securityGroupExtendedPolicyLimit;
                    bool m_securityGroupExtendedPolicyLimitHasBeenSet;

                    /**
                     * 被引用的安全组关联CVM、ENI的实例配额
                     */
                    uint64_t m_securityGroupReferedCvmAndEniLimit;
                    bool m_securityGroupReferedCvmAndEniLimitHasBeenSet;

                    /**
                     * 被引用的安全组关联数据库、LB等服务实例配额
                     */
                    uint64_t m_securityGroupReferedSvcLimit;
                    bool m_securityGroupReferedSvcLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPLIMITSET_H_
