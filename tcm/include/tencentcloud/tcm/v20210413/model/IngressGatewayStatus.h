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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_INGRESSGATEWAYSTATUS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_INGRESSGATEWAYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/LoadBalancerStatus.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * IngressGateway状态
                */
                class IngressGatewayStatus : public AbstractModel
                {
                public:
                    IngressGatewayStatus();
                    ~IngressGatewayStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡实例状态
                     * @return LoadBalancer 负载均衡实例状态
                     * 
                     */
                    LoadBalancerStatus GetLoadBalancer() const;

                    /**
                     * 设置负载均衡实例状态
                     * @param _loadBalancer 负载均衡实例状态
                     * 
                     */
                    void SetLoadBalancer(const LoadBalancerStatus& _loadBalancer);

                    /**
                     * 判断参数 LoadBalancer 是否已赋值
                     * @return LoadBalancer 是否已赋值
                     * 
                     */
                    bool LoadBalancerHasBeenSet() const;

                    /**
                     * 获取ingress gateway 当前的版本
                     * @return CurrentVersion ingress gateway 当前的版本
                     * 
                     */
                    std::string GetCurrentVersion() const;

                    /**
                     * 设置ingress gateway 当前的版本
                     * @param _currentVersion ingress gateway 当前的版本
                     * 
                     */
                    void SetCurrentVersion(const std::string& _currentVersion);

                    /**
                     * 判断参数 CurrentVersion 是否已赋值
                     * @return CurrentVersion 是否已赋值
                     * 
                     */
                    bool CurrentVersionHasBeenSet() const;

                    /**
                     * 获取ingress gateway 目标的版本
                     * @return DesiredVersion ingress gateway 目标的版本
                     * 
                     */
                    std::string GetDesiredVersion() const;

                    /**
                     * 设置ingress gateway 目标的版本
                     * @param _desiredVersion ingress gateway 目标的版本
                     * 
                     */
                    void SetDesiredVersion(const std::string& _desiredVersion);

                    /**
                     * 判断参数 DesiredVersion 是否已赋值
                     * @return DesiredVersion 是否已赋值
                     * 
                     */
                    bool DesiredVersionHasBeenSet() const;

                    /**
                     * 获取ingress gateway的状态，取值running, upgrading, rollbacking
                     * @return State ingress gateway的状态，取值running, upgrading, rollbacking
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置ingress gateway的状态，取值running, upgrading, rollbacking
                     * @param _state ingress gateway的状态，取值running, upgrading, rollbacking
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例状态
                     */
                    LoadBalancerStatus m_loadBalancer;
                    bool m_loadBalancerHasBeenSet;

                    /**
                     * ingress gateway 当前的版本
                     */
                    std::string m_currentVersion;
                    bool m_currentVersionHasBeenSet;

                    /**
                     * ingress gateway 目标的版本
                     */
                    std::string m_desiredVersion;
                    bool m_desiredVersionHasBeenSet;

                    /**
                     * ingress gateway的状态，取值running, upgrading, rollbacking
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_INGRESSGATEWAYSTATUS_H_
