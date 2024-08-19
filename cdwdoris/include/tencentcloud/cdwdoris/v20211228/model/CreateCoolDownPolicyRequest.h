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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATECOOLDOWNPOLICYREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATECOOLDOWNPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * CreateCoolDownPolicy请求参数结构体
                */
                class CreateCoolDownPolicyRequest : public AbstractModel
                {
                public:
                    CreateCoolDownPolicyRequest();
                    ~CreateCoolDownPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取cooldown_ttl
                     * @return CoolDownTtl cooldown_ttl
                     * 
                     */
                    std::string GetCoolDownTtl() const;

                    /**
                     * 设置cooldown_ttl
                     * @param _coolDownTtl cooldown_ttl
                     * 
                     */
                    void SetCoolDownTtl(const std::string& _coolDownTtl);

                    /**
                     * 判断参数 CoolDownTtl 是否已赋值
                     * @return CoolDownTtl 是否已赋值
                     * 
                     */
                    bool CoolDownTtlHasBeenSet() const;

                    /**
                     * 获取cooldown_datetime
                     * @return CoolDownDatetime cooldown_datetime
                     * 
                     */
                    std::string GetCoolDownDatetime() const;

                    /**
                     * 设置cooldown_datetime
                     * @param _coolDownDatetime cooldown_datetime
                     * 
                     */
                    void SetCoolDownDatetime(const std::string& _coolDownDatetime);

                    /**
                     * 判断参数 CoolDownDatetime 是否已赋值
                     * @return CoolDownDatetime 是否已赋值
                     * 
                     */
                    bool CoolDownDatetimeHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * cooldown_ttl
                     */
                    std::string m_coolDownTtl;
                    bool m_coolDownTtlHasBeenSet;

                    /**
                     * cooldown_datetime
                     */
                    std::string m_coolDownDatetime;
                    bool m_coolDownDatetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATECOOLDOWNPOLICYREQUEST_H_
