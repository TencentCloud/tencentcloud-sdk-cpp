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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIENVIRONMENTSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIENVIRONMENTSTRATEGYREQUEST_H_

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
                * ModifyApiEnvironmentStrategy请求参数结构体
                */
                class ModifyApiEnvironmentStrategyRequest : public AbstractModel
                {
                public:
                    ModifyApiEnvironmentStrategyRequest();
                    ~ModifyApiEnvironmentStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务唯一ID。
                     * @return ServiceId 服务唯一ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务唯一ID。
                     * @param _serviceId 服务唯一ID。
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
                     * 获取环境名。
                     * @return EnvironmentName 环境名。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名。
                     * @param _environmentName 环境名。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取API列表。
                     * @return ApiIds API列表。
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置API列表。
                     * @param _apiIds API列表。
                     * 
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     * 
                     */
                    bool ApiIdsHasBeenSet() const;

                private:

                    /**
                     * 服务唯一ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 限流值。
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 环境名。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * API列表。
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIENVIRONMENTSTRATEGYREQUEST_H_
