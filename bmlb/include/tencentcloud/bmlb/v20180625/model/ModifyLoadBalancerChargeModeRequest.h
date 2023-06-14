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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYLOADBALANCERCHARGEMODEREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYLOADBALANCERCHARGEMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerChargeModeListener.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerChargeMode请求参数结构体
                */
                class ModifyLoadBalancerChargeModeRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerChargeModeRequest();
                    ~ModifyLoadBalancerChargeModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID。
                     * @return LoadBalancerId 负载均衡实例ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID。
                     * @param _loadBalancerId 负载均衡实例ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取计费方式。flow或bandwidth。
                     * @return PayMode 计费方式。flow或bandwidth。
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置计费方式。flow或bandwidth。
                     * @param _payMode 计费方式。flow或bandwidth。
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取监听器信息，当计费方式选为 bandwidth 且此负载均衡实例下存在监听器时需填入此字段，可以自定义每个监听器带宽上限。
                     * @return ListenerSet 监听器信息，当计费方式选为 bandwidth 且此负载均衡实例下存在监听器时需填入此字段，可以自定义每个监听器带宽上限。
                     * 
                     */
                    std::vector<ModifyLoadBalancerChargeModeListener> GetListenerSet() const;

                    /**
                     * 设置监听器信息，当计费方式选为 bandwidth 且此负载均衡实例下存在监听器时需填入此字段，可以自定义每个监听器带宽上限。
                     * @param _listenerSet 监听器信息，当计费方式选为 bandwidth 且此负载均衡实例下存在监听器时需填入此字段，可以自定义每个监听器带宽上限。
                     * 
                     */
                    void SetListenerSet(const std::vector<ModifyLoadBalancerChargeModeListener>& _listenerSet);

                    /**
                     * 判断参数 ListenerSet 是否已赋值
                     * @return ListenerSet 是否已赋值
                     * 
                     */
                    bool ListenerSetHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 计费方式。flow或bandwidth。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 监听器信息，当计费方式选为 bandwidth 且此负载均衡实例下存在监听器时需填入此字段，可以自定义每个监听器带宽上限。
                     */
                    std::vector<ModifyLoadBalancerChargeModeListener> m_listenerSet;
                    bool m_listenerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYLOADBALANCERCHARGEMODEREQUEST_H_
