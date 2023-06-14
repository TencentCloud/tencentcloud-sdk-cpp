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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPLIMITSET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPLIMITSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 用户安全组配额限制
                */
                class SecurityGroupLimitSet : public AbstractModel
                {
                public:
                    SecurityGroupLimitSet();
                    ~SecurityGroupLimitSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可创建安全组总数
                     * @return SecurityGroupLimit 可创建安全组总数
                     * 
                     */
                    int64_t GetSecurityGroupLimit() const;

                    /**
                     * 设置可创建安全组总数
                     * @param _securityGroupLimit 可创建安全组总数
                     * 
                     */
                    void SetSecurityGroupLimit(const int64_t& _securityGroupLimit);

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
                    int64_t GetSecurityGroupPolicyLimit() const;

                    /**
                     * 设置安全组下的最大规则数
                     * @param _securityGroupPolicyLimit 安全组下的最大规则数
                     * 
                     */
                    void SetSecurityGroupPolicyLimit(const int64_t& _securityGroupPolicyLimit);

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
                    int64_t GetReferedSecurityGroupLimit() const;

                    /**
                     * 设置安全组下嵌套安全组规则数
                     * @param _referedSecurityGroupLimit 安全组下嵌套安全组规则数
                     * 
                     */
                    void SetReferedSecurityGroupLimit(const int64_t& _referedSecurityGroupLimit);

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
                    int64_t GetSecurityGroupInstanceLimit() const;

                    /**
                     * 设置单安全组关联实例数
                     * @param _securityGroupInstanceLimit 单安全组关联实例数
                     * 
                     */
                    void SetSecurityGroupInstanceLimit(const int64_t& _securityGroupInstanceLimit);

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
                    int64_t GetInstanceSecurityGroupLimit() const;

                    /**
                     * 设置实例关联安全组数
                     * @param _instanceSecurityGroupLimit 实例关联安全组数
                     * 
                     */
                    void SetInstanceSecurityGroupLimit(const int64_t& _instanceSecurityGroupLimit);

                    /**
                     * 判断参数 InstanceSecurityGroupLimit 是否已赋值
                     * @return InstanceSecurityGroupLimit 是否已赋值
                     * 
                     */
                    bool InstanceSecurityGroupLimitHasBeenSet() const;

                    /**
                     * 获取单安全组关联的模块数
                     * @return SecurityGroupModuleLimit 单安全组关联的模块数
                     * 
                     */
                    int64_t GetSecurityGroupModuleLimit() const;

                    /**
                     * 设置单安全组关联的模块数
                     * @param _securityGroupModuleLimit 单安全组关联的模块数
                     * 
                     */
                    void SetSecurityGroupModuleLimit(const int64_t& _securityGroupModuleLimit);

                    /**
                     * 判断参数 SecurityGroupModuleLimit 是否已赋值
                     * @return SecurityGroupModuleLimit 是否已赋值
                     * 
                     */
                    bool SecurityGroupModuleLimitHasBeenSet() const;

                    /**
                     * 获取模块关联的安全组数
                     * @return ModuleSecurityGroupLimit 模块关联的安全组数
                     * 
                     */
                    int64_t GetModuleSecurityGroupLimit() const;

                    /**
                     * 设置模块关联的安全组数
                     * @param _moduleSecurityGroupLimit 模块关联的安全组数
                     * 
                     */
                    void SetModuleSecurityGroupLimit(const int64_t& _moduleSecurityGroupLimit);

                    /**
                     * 判断参数 ModuleSecurityGroupLimit 是否已赋值
                     * @return ModuleSecurityGroupLimit 是否已赋值
                     * 
                     */
                    bool ModuleSecurityGroupLimitHasBeenSet() const;

                private:

                    /**
                     * 可创建安全组总数
                     */
                    int64_t m_securityGroupLimit;
                    bool m_securityGroupLimitHasBeenSet;

                    /**
                     * 安全组下的最大规则数
                     */
                    int64_t m_securityGroupPolicyLimit;
                    bool m_securityGroupPolicyLimitHasBeenSet;

                    /**
                     * 安全组下嵌套安全组规则数
                     */
                    int64_t m_referedSecurityGroupLimit;
                    bool m_referedSecurityGroupLimitHasBeenSet;

                    /**
                     * 单安全组关联实例数
                     */
                    int64_t m_securityGroupInstanceLimit;
                    bool m_securityGroupInstanceLimitHasBeenSet;

                    /**
                     * 实例关联安全组数
                     */
                    int64_t m_instanceSecurityGroupLimit;
                    bool m_instanceSecurityGroupLimitHasBeenSet;

                    /**
                     * 单安全组关联的模块数
                     */
                    int64_t m_securityGroupModuleLimit;
                    bool m_securityGroupModuleLimitHasBeenSet;

                    /**
                     * 模块关联的安全组数
                     */
                    int64_t m_moduleSecurityGroupLimit;
                    bool m_moduleSecurityGroupLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPLIMITSET_H_
