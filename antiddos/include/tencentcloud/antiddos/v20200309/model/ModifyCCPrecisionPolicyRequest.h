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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYCCPRECISIONPOLICYREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYCCPRECISIONPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CCPrecisionPlyRecord.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyCCPrecisionPolicy请求参数结构体
                */
                class ModifyCCPrecisionPolicyRequest : public AbstractModel
                {
                public:
                    ModifyCCPrecisionPolicyRequest();
                    ~ModifyCCPrecisionPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取策略Id
                     * @return PolicyId 策略Id
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置策略Id
                     * @param _policyId 策略Id
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略方式。可取值：alg、drop、trans。alg指返回验证码方式验证，drop表示该访问丢弃，trans表示该访问放行。
                     * @return PolicyAction 策略方式。可取值：alg、drop、trans。alg指返回验证码方式验证，drop表示该访问丢弃，trans表示该访问放行。
                     * 
                     */
                    std::string GetPolicyAction() const;

                    /**
                     * 设置策略方式。可取值：alg、drop、trans。alg指返回验证码方式验证，drop表示该访问丢弃，trans表示该访问放行。
                     * @param _policyAction 策略方式。可取值：alg、drop、trans。alg指返回验证码方式验证，drop表示该访问丢弃，trans表示该访问放行。
                     * 
                     */
                    void SetPolicyAction(const std::string& _policyAction);

                    /**
                     * 判断参数 PolicyAction 是否已赋值
                     * @return PolicyAction 是否已赋值
                     * 
                     */
                    bool PolicyActionHasBeenSet() const;

                    /**
                     * 获取策略记录
                     * @return PolicyList 策略记录
                     * 
                     */
                    std::vector<CCPrecisionPlyRecord> GetPolicyList() const;

                    /**
                     * 设置策略记录
                     * @param _policyList 策略记录
                     * 
                     */
                    void SetPolicyList(const std::vector<CCPrecisionPlyRecord>& _policyList);

                    /**
                     * 判断参数 PolicyList 是否已赋值
                     * @return PolicyList 是否已赋值
                     * 
                     */
                    bool PolicyListHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 策略Id
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略方式。可取值：alg、drop、trans。alg指返回验证码方式验证，drop表示该访问丢弃，trans表示该访问放行。
                     */
                    std::string m_policyAction;
                    bool m_policyActionHasBeenSet;

                    /**
                     * 策略记录
                     */
                    std::vector<CCPrecisionPlyRecord> m_policyList;
                    bool m_policyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYCCPRECISIONPOLICYREQUEST_H_
