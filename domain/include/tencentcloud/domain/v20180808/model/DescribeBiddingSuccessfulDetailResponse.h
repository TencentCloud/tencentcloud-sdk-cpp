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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取得标时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return SuccessfulTime 得标时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetSuccessfulTime() const;

                    /**
                     * 判断参数 SuccessfulTime 是否已赋值
                     * @return SuccessfulTime 是否已赋值
                     * 
                     */
                    bool SuccessfulTimeHasBeenSet() const;

                    /**
                     * 获取得标价格 单位元
                     * @return SuccessfulPrice 得标价格 单位元
                     * 
                     */
                    double GetSuccessfulPrice() const;

                    /**
                     * 判断参数 SuccessfulPrice 是否已赋值
                     * @return SuccessfulPrice 是否已赋值
                     * 
                     */
                    bool SuccessfulPriceHasBeenSet() const;

                    /**
                     * 获取 注册时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return RegTime  注册时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetRegTime() const;

                    /**
                     * 判断参数 RegTime 是否已赋值
                     * @return RegTime 是否已赋值
                     * 
                     */
                    bool RegTimeHasBeenSet() const;

                    /**
                     * 获取过期时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return ExpireTime 过期时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取删除时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return DeleteTime 删除时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取付款结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return PayEndTime 付款结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetPayEndTime() const;

                    /**
                     * 判断参数 PayEndTime 是否已赋值
                     * @return PayEndTime 是否已赋值
                     * 
                     */
                    bool PayEndTimeHasBeenSet() const;

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
                     * 获取保证金 单位元
                     * @return BiddingBondPrice 保证金 单位元
                     * 
                     */
                    double GetBiddingBondPrice() const;

                    /**
                     * 判断参数 BiddingBondPrice 是否已赋值
                     * @return BiddingBondPrice 是否已赋值
                     * 
                     */
                    bool BiddingBondPriceHasBeenSet() const;

                    /**
                     * 获取状态：5 等待支付 6 等待转移， 7 转移中，8 交易成功，11 尾款阶段持有者索回，12 已违约
                     * @return Status 状态：5 等待支付 6 等待转移， 7 转移中，8 交易成功，11 尾款阶段持有者索回，12 已违约
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
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 得标时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_successfulTime;
                    bool m_successfulTimeHasBeenSet;

                    /**
                     * 得标价格 单位元
                     */
                    double m_successfulPrice;
                    bool m_successfulPriceHasBeenSet;

                    /**
                     *  注册时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_regTime;
                    bool m_regTimeHasBeenSet;

                    /**
                     * 过期时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 删除时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * 付款结束时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_payEndTime;
                    bool m_payEndTimeHasBeenSet;

                    /**
                     * 保证金，是否退款，yes表示退款，no表示不退款
                     */
                    std::string m_biddingBondRefund;
                    bool m_biddingBondRefundHasBeenSet;

                    /**
                     * 保证金 单位元
                     */
                    double m_biddingBondPrice;
                    bool m_biddingBondPriceHasBeenSet;

                    /**
                     * 状态：5 等待支付 6 等待转移， 7 转移中，8 交易成功，11 尾款阶段持有者索回，12 已违约
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGSUCCESSFULDETAILRESPONSE_H_
