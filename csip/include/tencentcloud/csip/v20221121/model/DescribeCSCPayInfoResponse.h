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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/OrderQuotaInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCSCPayInfo返回参数结构体
                */
                class DescribeCSCPayInfoResponse : public AbstractModel
                {
                public:
                    DescribeCSCPayInfoResponse();
                    ~DescribeCSCPayInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>租户AppID。</p>
                     * @return AppID <p>租户AppID。</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>订单状态。取值：0（未购买）、1（正常）、2（隔离）、3（销毁）、4（修改）、5（续费）、6（试用）、7（过期）、8（试用到期）。</p>
                     * @return OrderStatus <p>订单状态。取值：0（未购买）、1（正常）、2（隔离）、3（销毁）、4（修改）、5（续费）、6（试用）、7（过期）、8（试用到期）。</p>
                     * 
                     */
                    int64_t GetOrderStatus() const;

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取<p>付费模式。取值：0（后付费）、1（预付费）。</p>
                     * @return PayMode <p>付费模式。取值：0（后付费）、1（预付费）。</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>订单开始时间，格式：2006-01-02 15:04:05。</p>
                     * @return BeginTime <p>订单开始时间，格式：2006-01-02 15:04:05。</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>订单结束时间，格式：2006-01-02 15:04:05。</p>
                     * @return EndTime <p>订单结束时间，格式：2006-01-02 15:04:05。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标志。取值：0（未设置）、1（自动续费）、2（不自动续费）。</p>
                     * @return AutoRenew <p>自动续费标志。取值：0（未设置）、1（自动续费）、2（不自动续费）。</p>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>购买时长。</p>
                     * @return TimeSpan <p>购买时长。</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>时间单位，如 m（月）。</p>
                     * @return TimeUnit <p>时间单位，如 m（月）。</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>资源ID。</p>
                     * @return ResourceId <p>资源ID。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>当前服务器时间，格式：2006-01-02 15:04:05。</p>
                     * @return TimeNow <p>当前服务器时间，格式：2006-01-02 15:04:05。</p>
                     * 
                     */
                    std::string GetTimeNow() const;

                    /**
                     * 判断参数 TimeNow 是否已赋值
                     * @return TimeNow 是否已赋值
                     * 
                     */
                    bool TimeNowHasBeenSet() const;

                    /**
                     * 获取<p>账号UIN。</p>
                     * @return Uin <p>账号UIN。</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>账号昵称。</p>
                     * @return NickName <p>账号昵称。</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>是否为新用户。取值：1（新用户）、0（旧用户）。</p>
                     * @return NewUser <p>是否为新用户。取值：1（新用户）、0（旧用户）。</p>
                     * 
                     */
                    int64_t GetNewUser() const;

                    /**
                     * 判断参数 NewUser 是否已赋值
                     * @return NewUser 是否已赋值
                     * 
                     */
                    bool NewUserHasBeenSet() const;

                    /**
                     * 获取<p>用户计费信息，Key为L4</p>
                     * @return QuotaList <p>用户计费信息，Key为L4</p>
                     * 
                     */
                    std::vector<OrderQuotaInfo> GetQuotaList() const;

                    /**
                     * 判断参数 QuotaList 是否已赋值
                     * @return QuotaList 是否已赋值
                     * 
                     */
                    bool QuotaListHasBeenSet() const;

                private:

                    /**
                     * <p>租户AppID。</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>订单状态。取值：0（未购买）、1（正常）、2（隔离）、3（销毁）、4（修改）、5（续费）、6（试用）、7（过期）、8（试用到期）。</p>
                     */
                    int64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * <p>付费模式。取值：0（后付费）、1（预付费）。</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>订单开始时间，格式：2006-01-02 15:04:05。</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>订单结束时间，格式：2006-01-02 15:04:05。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>自动续费标志。取值：0（未设置）、1（自动续费）、2（不自动续费）。</p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>购买时长。</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>时间单位，如 m（月）。</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>资源ID。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>当前服务器时间，格式：2006-01-02 15:04:05。</p>
                     */
                    std::string m_timeNow;
                    bool m_timeNowHasBeenSet;

                    /**
                     * <p>账号UIN。</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>账号昵称。</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>是否为新用户。取值：1（新用户）、0（旧用户）。</p>
                     */
                    int64_t m_newUser;
                    bool m_newUserHasBeenSet;

                    /**
                     * <p>用户计费信息，Key为L4</p>
                     */
                    std::vector<OrderQuotaInfo> m_quotaList;
                    bool m_quotaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFORESPONSE_H_
