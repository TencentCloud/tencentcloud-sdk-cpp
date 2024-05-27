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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGSUCCESSFULDETAILRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGSUCCESSFULDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeBiddingSuccessfulDetail返回参数结构体
                */
                class DescribeBiddingSuccessfulDetailResponse : public AbstractModel
                {
                public:
                    DescribeBiddingSuccessfulDetailResponse();
                    ~DescribeBiddingSuccessfulDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取保证金，是否退款，yes表示退款，no表示不退款
                     * @return BiddingBondRefund 保证金，是否退款，yes表示退款，no表示不退款
                     * 
                     */
                    std::string GetBiddingBondRefund() const;

                    /**
                     * 判断参数 BiddingBondRefund 是否已赋值
                     * @return BiddingBondRefund 是否已赋值
                     * 
                     */
                    bool BiddingBondRefundHasBeenSet() const;

                    /**
                     * 获取状态：1 竞价中，2 待出价，3 竞价失败， 4 等待支付 5 等待转移， 6 转移中，7 交易成功，8 持有者索回，9 已违约
                     * @return Status 状态：1 竞价中，2 待出价，3 竞价失败， 4 等待支付 5 等待转移， 6 转移中，7 交易成功，8 持有者索回，9 已违约
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 保证金，是否退款，yes表示退款，no表示不退款
                     */
                    std::string m_biddingBondRefund;
                    bool m_biddingBondRefundHasBeenSet;

                    /**
                     * 状态：1 竞价中，2 待出价，3 竞价失败， 4 等待支付 5 等待转移， 6 转移中，7 交易成功，8 持有者索回，9 已违约
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGSUCCESSFULDETAILRESPONSE_H_
