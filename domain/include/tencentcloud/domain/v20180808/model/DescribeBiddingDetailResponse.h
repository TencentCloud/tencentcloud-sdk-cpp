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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGDETAILRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGDETAILRESPONSE_H_

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
                * DescribeBiddingDetail返回参数结构体
                */
                class DescribeBiddingDetailResponse : public AbstractModel
                {
                public:
                    DescribeBiddingDetailResponse();
                    ~DescribeBiddingDetailResponse() = default;
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
                     * 获取出价次数
                     * @return BiddingNum 出价次数
                     * 
                     */
                    uint64_t GetBiddingNum() const;

                    /**
                     * 判断参数 BiddingNum 是否已赋值
                     * @return BiddingNum 是否已赋值
                     * 
                     */
                    bool BiddingNumHasBeenSet() const;

                    /**
                     * 获取竞价开始时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return BiddingStartTime 竞价开始时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetBiddingStartTime() const;

                    /**
                     * 判断参数 BiddingStartTime 是否已赋值
                     * @return BiddingStartTime 是否已赋值
                     * 
                     */
                    bool BiddingStartTimeHasBeenSet() const;

                    /**
                     * 获取竞价结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return BiddingEndTime 竞价结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetBiddingEndTime() const;

                    /**
                     * 判断参数 BiddingEndTime 是否已赋值
                     * @return BiddingEndTime 是否已赋值
                     * 
                     */
                    bool BiddingEndTimeHasBeenSet() const;

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
                     * 获取当前价格 单位元
                     * @return CurrentPrice 当前价格 单位元
                     * 
                     */
                    uint64_t GetCurrentPrice() const;

                    /**
                     * 判断参数 CurrentPrice 是否已赋值
                     * @return CurrentPrice 是否已赋值
                     * 
                     */
                    bool CurrentPriceHasBeenSet() const;

                    /**
                     * 获取当前用户昵称
                     * @return CurrentNickname 当前用户昵称
                     * 
                     */
                    std::string GetCurrentNickname() const;

                    /**
                     * 判断参数 CurrentNickname 是否已赋值
                     * @return CurrentNickname 是否已赋值
                     * 
                     */
                    bool CurrentNicknameHasBeenSet() const;

                    /**
                     * 获取竞价保证金 单位元
                     * @return BiddingBondPrice 竞价保证金 单位元
                     * 
                     */
                    uint64_t GetBiddingBondPrice() const;

                    /**
                     * 判断参数 BiddingBondPrice 是否已赋值
                     * @return BiddingBondPrice 是否已赋值
                     * 
                     */
                    bool BiddingBondPriceHasBeenSet() const;

                    /**
                     * 获取2 竞价中  3 等待出价 4 竞价失败 10 竞价持有者赎回
                     * @return Status 2 竞价中  3 等待出价 4 竞价失败 10 竞价持有者赎回
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
                     * 获取竞价标识，1 领先，2 落后
                     * @return BiddingFlag 竞价标识，1 领先，2 落后
                     * 
                     */
                    uint64_t GetBiddingFlag() const;

                    /**
                     * 判断参数 BiddingFlag 是否已赋值
                     * @return BiddingFlag 是否已赋值
                     * 
                     */
                    bool BiddingFlagHasBeenSet() const;

                    /**
                     * 获取是否退款，yes表示退款，no表示不退款
                     * @return BiddingBondRefund 是否退款，yes表示退款，no表示不退款
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
                     * 获取我的出价 单位元
                     * @return BiddingPrice 我的出价 单位元
                     * 
                     */
                    uint64_t GetBiddingPrice() const;

                    /**
                     * 判断参数 BiddingPrice 是否已赋值
                     * @return BiddingPrice 是否已赋值
                     * 
                     */
                    bool BiddingPriceHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 出价次数
                     */
                    uint64_t m_biddingNum;
                    bool m_biddingNumHasBeenSet;

                    /**
                     * 竞价开始时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_biddingStartTime;
                    bool m_biddingStartTimeHasBeenSet;

                    /**
                     * 竞价结束时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_biddingEndTime;
                    bool m_biddingEndTimeHasBeenSet;

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
                     * 当前价格 单位元
                     */
                    uint64_t m_currentPrice;
                    bool m_currentPriceHasBeenSet;

                    /**
                     * 当前用户昵称
                     */
                    std::string m_currentNickname;
                    bool m_currentNicknameHasBeenSet;

                    /**
                     * 竞价保证金 单位元
                     */
                    uint64_t m_biddingBondPrice;
                    bool m_biddingBondPriceHasBeenSet;

                    /**
                     * 2 竞价中  3 等待出价 4 竞价失败 10 竞价持有者赎回
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 竞价标识，1 领先，2 落后
                     */
                    uint64_t m_biddingFlag;
                    bool m_biddingFlagHasBeenSet;

                    /**
                     * 是否退款，yes表示退款，no表示不退款
                     */
                    std::string m_biddingBondRefund;
                    bool m_biddingBondRefundHasBeenSet;

                    /**
                     * 我的出价 单位元
                     */
                    uint64_t m_biddingPrice;
                    bool m_biddingPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGDETAILRESPONSE_H_
