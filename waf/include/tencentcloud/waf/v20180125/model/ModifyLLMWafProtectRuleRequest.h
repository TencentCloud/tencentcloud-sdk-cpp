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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMWAFPROTECTRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMWAFPROTECTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyLLMWafProtectRule请求参数结构体
                */
                class ModifyLLMWafProtectRuleRequest : public AbstractModel
                {
                public:
                    ModifyLLMWafProtectRuleRequest();
                    ~ModifyLLMWafProtectRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务ID</p>
                     * @return ServiceId <p>服务ID</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _serviceId <p>服务ID</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>要修改的规则id列表</p>
                     * @return RuleIds <p>要修改的规则id列表</p>
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置<p>要修改的规则id列表</p>
                     * @param _ruleIds <p>要修改的规则id列表</p>
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取<p>规则动作</p>
                     * @return RuleAction <p>规则动作</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>规则动作</p>
                     * @param _ruleAction <p>规则动作</p>
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取<p>开关</p>
                     * @return Status <p>开关</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>开关</p>
                     * @param _status <p>开关</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     * @return Direction <p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置<p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     * @param _direction <p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>要修改的规则id列表</p>
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * <p>规则动作</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>开关</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMWAFPROTECTRULEREQUEST_H_
