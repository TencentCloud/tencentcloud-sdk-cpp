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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRule.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayCanaryRule请求参数结构体
                */
                class CreateCloudNativeAPIGatewayCanaryRuleRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayCanaryRuleRequest();
                    ~CreateCloudNativeAPIGatewayCanaryRuleRequest() = default;
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
                     * 获取灰度规则配置
                     * @return CanaryRule 灰度规则配置
                     * 
                     */
                    CloudNativeAPIGatewayCanaryRule GetCanaryRule() const;

                    /**
                     * 设置灰度规则配置
                     * @param _canaryRule 灰度规则配置
                     * 
                     */
                    void SetCanaryRule(const CloudNativeAPIGatewayCanaryRule& _canaryRule);

                    /**
                     * 判断参数 CanaryRule 是否已赋值
                     * @return CanaryRule 是否已赋值
                     * 
                     */
                    bool CanaryRuleHasBeenSet() const;

                    /**
                     * 获取灰度规则配置列表，如果配置了此参数，将以此参数为准，忽略CanaryRule参数
                     * @return CanaryRuleList 灰度规则配置列表，如果配置了此参数，将以此参数为准，忽略CanaryRule参数
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRule> GetCanaryRuleList() const;

                    /**
                     * 设置灰度规则配置列表，如果配置了此参数，将以此参数为准，忽略CanaryRule参数
                     * @param _canaryRuleList 灰度规则配置列表，如果配置了此参数，将以此参数为准，忽略CanaryRule参数
                     * 
                     */
                    void SetCanaryRuleList(const std::vector<CloudNativeAPIGatewayCanaryRule>& _canaryRuleList);

                    /**
                     * 判断参数 CanaryRuleList 是否已赋值
                     * @return CanaryRuleList 是否已赋值
                     * 
                     */
                    bool CanaryRuleListHasBeenSet() const;

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
                     * 灰度规则配置
                     */
                    CloudNativeAPIGatewayCanaryRule m_canaryRule;
                    bool m_canaryRuleHasBeenSet;

                    /**
                     * 灰度规则配置列表，如果配置了此参数，将以此参数为准，忽略CanaryRule参数
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRule> m_canaryRuleList;
                    bool m_canaryRuleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCANARYRULEREQUEST_H_
