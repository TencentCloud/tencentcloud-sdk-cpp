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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteCloudNativeAPIGatewayCanaryRule请求参数结构体
                */
                class DeleteCloudNativeAPIGatewayCanaryRuleRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayCanaryRuleRequest();
                    ~DeleteCloudNativeAPIGatewayCanaryRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关 ID
                     * @return GatewayId 网关 ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关 ID
                     * @param _gatewayId 网关 ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取服务 ID
                     * @return ServiceId 服务 ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务 ID
                     * @param _serviceId 服务 ID
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
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 网关 ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 服务 ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_
