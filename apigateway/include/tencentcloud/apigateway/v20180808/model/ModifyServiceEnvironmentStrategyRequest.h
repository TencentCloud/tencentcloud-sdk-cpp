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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEENVIRONMENTSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEENVIRONMENTSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifyServiceEnvironmentStrategy请求参数结构体
                */
                class ModifyServiceEnvironmentStrategyRequest : public AbstractModel
                {
                public:
                    ModifyServiceEnvironmentStrategyRequest();
                    ~ModifyServiceEnvironmentStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务的唯一ID。
                     * @return ServiceId 服务的唯一ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务的唯一ID。
                     * @param _serviceId 服务的唯一ID。
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
                     * 获取限流值。
                     * @return Strategy 限流值。
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置限流值。
                     * @param _strategy 限流值。
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取环境列表。
                     * @return EnvironmentNames 环境列表。
                     * 
                     */
                    std::vector<std::string> GetEnvironmentNames() const;

                    /**
                     * 设置环境列表。
                     * @param _environmentNames 环境列表。
                     * 
                     */
                    void SetEnvironmentNames(const std::vector<std::string>& _environmentNames);

                    /**
                     * 判断参数 EnvironmentNames 是否已赋值
                     * @return EnvironmentNames 是否已赋值
                     * 
                     */
                    bool EnvironmentNamesHasBeenSet() const;

                private:

                    /**
                     * 服务的唯一ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 限流值。
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 环境列表。
                     */
                    std::vector<std::string> m_environmentNames;
                    bool m_environmentNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEENVIRONMENTSTRATEGYREQUEST_H_
