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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEORDERRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEORDERRESPONSE_H_

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
                * DescribeCloudStorageOrder返回参数结构体
                */
                class DescribeCloudStorageOrderResponse : public AbstractModel
                {
                public:
                    DescribeCloudStorageOrderResponse();
                    ~DescribeCloudStorageOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云存套餐开始时间
                     * @return StartTime 云存套餐开始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取云存套餐过期时间
                     * @return ExpireTime 云存套餐过期时间
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取套餐id
                     * @return PackageId 套餐id
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取套餐状态
0：等待生效
1: 已过期
2:生效
                     * @return Status 套餐状态
0：等待生效
1: 已过期
2:生效
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取通道id
                     * @return ChannelId 通道id
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取订单金额，单位为分
                     * @return Price 订单金额，单位为分
                     * 
                     */
                    uint64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取支付金额，单位为分
                     * @return Amount 支付金额，单位为分
                     * 
                     */
                    uint64_t GetAmount() const;

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                private:

                    /**
                     * 云存套餐开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 云存套餐过期时间
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 套餐id
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 套餐状态
0：等待生效
1: 已过期
2:生效
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 通道id
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 订单金额，单位为分
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 支付金额，单位为分
                     */
                    uint64_t m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEORDERRESPONSE_H_
