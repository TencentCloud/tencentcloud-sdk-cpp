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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBERESERVEDBIDINFORESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBERESERVEDBIDINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/ReserveBidInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeReservedBidInfo返回参数结构体
                */
                class DescribeReservedBidInfoResponse : public AbstractModel
                {
                public:
                    DescribeReservedBidInfoResponse();
                    ~DescribeReservedBidInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取竞价领先价格
                     * @return UpPrice 竞价领先价格
                     * 
                     */
                    int64_t GetUpPrice() const;

                    /**
                     * 判断参数 UpPrice 是否已赋值
                     * @return UpPrice 是否已赋值
                     * 
                     */
                    bool UpPriceHasBeenSet() const;

                    /**
                     * 获取请求用户当前价格
                     * @return Price 请求用户当前价格
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取领先用户
                     * @return UpUser 领先用户
                     * 
                     */
                    std::string GetUpUser() const;

                    /**
                     * 判断参数 UpUser 是否已赋值
                     * @return UpUser 是否已赋值
                     * 
                     */
                    bool UpUserHasBeenSet() const;

                    /**
                     * 获取竞价详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BidList 竞价详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ReserveBidInfo> GetBidList() const;

                    /**
                     * 判断参数 BidList 是否已赋值
                     * @return BidList 是否已赋值
                     * 
                     */
                    bool BidListHasBeenSet() const;

                private:

                    /**
                     * 竞价领先价格
                     */
                    int64_t m_upPrice;
                    bool m_upPriceHasBeenSet;

                    /**
                     * 请求用户当前价格
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 领先用户
                     */
                    std::string m_upUser;
                    bool m_upUserHasBeenSet;

                    /**
                     * 竞价详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ReserveBidInfo> m_bidList;
                    bool m_bidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBERESERVEDBIDINFORESPONSE_H_
