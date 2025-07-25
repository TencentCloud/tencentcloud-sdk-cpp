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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGAPPOINTDETAILRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGAPPOINTDETAILRESPONSE_H_

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
                * DescribeBiddingAppointDetail返回参数结构体
                */
                class DescribeBiddingAppointDetailResponse : public AbstractModel
                {
                public:
                    DescribeBiddingAppointDetailResponse();
                    ~DescribeBiddingAppointDetailResponse() = default;
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
                     * 获取预约人数
                     * @return AppointNum 预约人数
                     * 
                     */
                    uint64_t GetAppointNum() const;

                    /**
                     * 判断参数 AppointNum 是否已赋值
                     * @return AppointNum 是否已赋值
                     * 
                     */
                    bool AppointNumHasBeenSet() const;

                    /**
                     * 获取预约开始时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return AppointStartTime 预约开始时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetAppointStartTime() const;

                    /**
                     * 判断参数 AppointStartTime 是否已赋值
                     * @return AppointStartTime 是否已赋值
                     * 
                     */
                    bool AppointStartTimeHasBeenSet() const;

                    /**
                     * 获取预约结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return AppointEndTime 预约结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetAppointEndTime() const;

                    /**
                     * 判断参数 AppointEndTime 是否已赋值
                     * @return AppointEndTime 是否已赋值
                     * 
                     */
                    bool AppointEndTimeHasBeenSet() const;

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
                     * @return AppointPrice 当前价格 单位元
                     * 
                     */
                    uint64_t GetAppointPrice() const;

                    /**
                     * 判断参数 AppointPrice 是否已赋值
                     * @return AppointPrice 是否已赋值
                     * 
                     */
                    bool AppointPriceHasBeenSet() const;

                    /**
                     * 获取预约保证金 单位元
                     * @return AppointBondPrice 预约保证金 单位元
                     * 
                     */
                    uint64_t GetAppointBondPrice() const;

                    /**
                     * 判断参数 AppointBondPrice 是否已赋值
                     * @return AppointBondPrice 是否已赋值
                     * 
                     */
                    bool AppointBondPriceHasBeenSet() const;

                    /**
                     * 获取1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     * @return Status 1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
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
                     * 获取预约保证金是否已经退回
yes：退回 no: 未退回
                     * @return BiddingBondRefund 预约保证金是否已经退回
yes：退回 no: 未退回
                     * 
                     */
                    std::string GetBiddingBondRefund() const;

                    /**
                     * 判断参数 BiddingBondRefund 是否已赋值
                     * @return BiddingBondRefund 是否已赋值
                     * 
                     */
                    bool BiddingBondRefundHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 预约人数
                     */
                    uint64_t m_appointNum;
                    bool m_appointNumHasBeenSet;

                    /**
                     * 预约开始时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_appointStartTime;
                    bool m_appointStartTimeHasBeenSet;

                    /**
                     * 预约结束时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_appointEndTime;
                    bool m_appointEndTimeHasBeenSet;

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
                    uint64_t m_appointPrice;
                    bool m_appointPriceHasBeenSet;

                    /**
                     * 预约保证金 单位元
                     */
                    uint64_t m_appointBondPrice;
                    bool m_appointBondPriceHasBeenSet;

                    /**
                     * 1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 预约保证金是否已经退回
yes：退回 no: 未退回
                     */
                    std::string m_biddingBondRefund;
                    bool m_biddingBondRefundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGAPPOINTDETAILRESPONSE_H_
