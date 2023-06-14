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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEIPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEIPSTRATEGYREQUEST_H_

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
                * CreateIPStrategy请求参数结构体
                */
                class CreateIPStrategyRequest : public AbstractModel
                {
                public:
                    CreateIPStrategyRequest();
                    ~CreateIPStrategyRequest() = default;
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
                     * 获取用户自定义的策略名称。
                     * @return StrategyName 用户自定义的策略名称。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置用户自定义的策略名称。
                     * @param _strategyName 用户自定义的策略名称。
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
                     * 获取策略类型。支持WHITE（白名单）和BLACK（黑名单）。
                     * @return StrategyType 策略类型。支持WHITE（白名单）和BLACK（黑名单）。
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置策略类型。支持WHITE（白名单）和BLACK（黑名单）。
                     * @param _strategyType 策略类型。支持WHITE（白名单）和BLACK（黑名单）。
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取策略详情，多个ip 使用\n 分隔符分开。
                     * @return StrategyData 策略详情，多个ip 使用\n 分隔符分开。
                     * 
                     */
                    std::string GetStrategyData() const;

                    /**
                     * 设置策略详情，多个ip 使用\n 分隔符分开。
                     * @param _strategyData 策略详情，多个ip 使用\n 分隔符分开。
                     * 
                     */
                    void SetStrategyData(const std::string& _strategyData);

                    /**
                     * 判断参数 StrategyData 是否已赋值
                     * @return StrategyData 是否已赋值
                     * 
                     */
                    bool StrategyDataHasBeenSet() const;

                private:

                    /**
                     * 服务的唯一ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 用户自定义的策略名称。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 策略类型。支持WHITE（白名单）和BLACK（黑名单）。
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 策略详情，多个ip 使用\n 分隔符分开。
                     */
                    std::string m_strategyData;
                    bool m_strategyDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEIPSTRATEGYREQUEST_H_
