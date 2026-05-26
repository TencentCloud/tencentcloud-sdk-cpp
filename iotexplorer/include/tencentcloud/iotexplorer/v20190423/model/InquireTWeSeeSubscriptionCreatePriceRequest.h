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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INQUIRETWESEESUBSCRIPTIONCREATEPRICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INQUIRETWESEESUBSCRIPTIONCREATEPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * InquireTWeSeeSubscriptionCreatePrice请求参数结构体
                */
                class InquireTWeSeeSubscriptionCreatePriceRequest : public AbstractModel
                {
                public:
                    InquireTWeSeeSubscriptionCreatePriceRequest();
                    ~InquireTWeSeeSubscriptionCreatePriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取算法类型。可选值：

- `VID_COMP`：视频理解
                     * @return ServiceType 算法类型。可选值：

- `VID_COMP`：视频理解
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置算法类型。可选值：

- `VID_COMP`：视频理解
                     * @param _serviceType 算法类型。可选值：

- `VID_COMP`：视频理解
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取套餐规格。可选值：

- `BASIC`：包年包月基础版（适用于视频理解）
                     * @return ServiceTier 套餐规格。可选值：

- `BASIC`：包年包月基础版（适用于视频理解）
                     * 
                     */
                    std::string GetServiceTier() const;

                    /**
                     * 设置套餐规格。可选值：

- `BASIC`：包年包月基础版（适用于视频理解）
                     * @param _serviceTier 套餐规格。可选值：

- `BASIC`：包年包月基础版（适用于视频理解）
                     * 
                     */
                    void SetServiceTier(const std::string& _serviceTier);

                    /**
                     * 判断参数 ServiceTier 是否已赋值
                     * @return ServiceTier 是否已赋值
                     * 
                     */
                    bool ServiceTierHasBeenSet() const;

                    /**
                     * 获取订阅购买时长，单位：月，支持 1-60
                     * @return Period 订阅购买时长，单位：月，支持 1-60
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置订阅购买时长，单位：月，支持 1-60
                     * @param _period 订阅购买时长，单位：月，支持 1-60
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 算法类型。可选值：

- `VID_COMP`：视频理解
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 套餐规格。可选值：

- `BASIC`：包年包月基础版（适用于视频理解）
                     */
                    std::string m_serviceTier;
                    bool m_serviceTierHasBeenSet;

                    /**
                     * 订阅购买时长，单位：月，支持 1-60
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INQUIRETWESEESUBSCRIPTIONCREATEPRICEREQUEST_H_
