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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATEAUTOSCALERRESOURCESTRATEGYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATEAUTOSCALERRESOURCESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyAutoScalerConfig.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyCronScalerConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateAutoScalerResourceStrategy请求参数结构体
                */
                class CreateAutoScalerResourceStrategyRequest : public AbstractModel
                {
                public:
                    CreateAutoScalerResourceStrategyRequest();
                    ~CreateAutoScalerResourceStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实例ID
                     * @return GatewayId 网关实例ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例ID
                     * @param _gatewayId 网关实例ID
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
                     * 获取策略名称
                     * @return StrategyName 策略名称
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称
                     * @param _strategyName 策略名称
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return Description 策略描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述
                     * @param _description 策略描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取指标伸缩配置
                     * @return Config 指标伸缩配置
                     * 
                     */
                    CloudNativeAPIGatewayStrategyAutoScalerConfig GetConfig() const;

                    /**
                     * 设置指标伸缩配置
                     * @param _config 指标伸缩配置
                     * 
                     */
                    void SetConfig(const CloudNativeAPIGatewayStrategyAutoScalerConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取定时伸缩配置列表
                     * @return CronScalerConfig 定时伸缩配置列表
                     * @deprecated
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig GetCronScalerConfig() const;

                    /**
                     * 设置定时伸缩配置列表
                     * @param _cronScalerConfig 定时伸缩配置列表
                     * @deprecated
                     */
                    void SetCronScalerConfig(const CloudNativeAPIGatewayStrategyCronScalerConfig& _cronScalerConfig);

                    /**
                     * 判断参数 CronScalerConfig 是否已赋值
                     * @return CronScalerConfig 是否已赋值
                     * @deprecated
                     */
                    bool CronScalerConfigHasBeenSet() const;

                    /**
                     * 获取最大节点数
                     * @return MaxReplicas 最大节点数
                     * @deprecated
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置最大节点数
                     * @param _maxReplicas 最大节点数
                     * @deprecated
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * @deprecated
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取定时伸缩配置
                     * @return CronConfig 定时伸缩配置
                     * 
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig GetCronConfig() const;

                    /**
                     * 设置定时伸缩配置
                     * @param _cronConfig 定时伸缩配置
                     * 
                     */
                    void SetCronConfig(const CloudNativeAPIGatewayStrategyCronScalerConfig& _cronConfig);

                    /**
                     * 判断参数 CronConfig 是否已赋值
                     * @return CronConfig 是否已赋值
                     * 
                     */
                    bool CronConfigHasBeenSet() const;

                private:

                    /**
                     * 网关实例ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 指标伸缩配置
                     */
                    CloudNativeAPIGatewayStrategyAutoScalerConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 定时伸缩配置列表
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig m_cronScalerConfig;
                    bool m_cronScalerConfigHasBeenSet;

                    /**
                     * 最大节点数
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 定时伸缩配置
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig m_cronConfig;
                    bool m_cronConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATEAUTOSCALERRESOURCESTRATEGYREQUEST_H_
