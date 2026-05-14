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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANPAYINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANPAYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSkillScanPayInfo返回参数结构体
                */
                class DescribeSkillScanPayInfoResponse : public AbstractModel
                {
                public:
                    DescribeSkillScanPayInfoResponse();
                    ~DescribeSkillScanPayInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>订单所属租户 AppID</p>
                     * @return AppID <p>订单所属租户 AppID</p>
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
                     * 获取<p>订单状态<br>枚举值：<br>0：未购买<br>1：正常<br>2：隔离<br>6：试用中<br>7：已过期<br>8：试用到期</p>
                     * @return OrderStatus <p>订单状态<br>枚举值：<br>0：未购买<br>1：正常<br>2：隔离<br>6：试用中<br>7：已过期<br>8：试用到期</p>
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
                     * 获取<p>总配额</p>
                     * @return TotalQuota <p>总配额</p>
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取<p>已消耗配额</p>
                     * @return UsedCount <p>已消耗配额</p>
                     * 
                     */
                    int64_t GetUsedCount() const;

                    /**
                     * 判断参数 UsedCount 是否已赋值
                     * @return UsedCount 是否已赋值
                     * 
                     */
                    bool UsedCountHasBeenSet() const;

                    /**
                     * 获取<p>支付模式<br>枚举值：<br>0：后付费<br>1：预付费</p>
                     * @return PayMode <p>支付模式<br>枚举值：<br>0：后付费<br>1：预付费</p>
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
                     * 获取<p>自动续费标志<br>枚举值：<br>0：未设置<br>1：自动续费<br>2：不自动续费</p>
                     * @return AutoRenew <p>自动续费标志<br>枚举值：<br>0：未设置<br>1：自动续费<br>2：不自动续费</p>
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
                     * 获取<p>资源ID</p>
                     * @return ResourceId <p>资源ID</p>
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
                     * 获取<p>购买时长</p>
                     * @return TimeSpan <p>购买时长</p>
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
                     * 获取<p>时长单位</p>
                     * @return TimeUnit <p>时长单位</p>
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
                     * 获取<p>订单开始时间</p>
                     * @return BeginTime <p>订单开始时间</p>
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
                     * 获取<p>订单到期时间</p>
                     * @return EndTime <p>订单到期时间</p>
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
                     * 获取<p>公测结束时间，固定为 2026-06-30 23:59:59</p>
                     * @return BetaEndTime <p>公测结束时间，固定为 2026-06-30 23:59:59</p>
                     * 
                     */
                    std::string GetBetaEndTime() const;

                    /**
                     * 判断参数 BetaEndTime 是否已赋值
                     * @return BetaEndTime 是否已赋值
                     * 
                     */
                    bool BetaEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>服务器当前时间</p>
                     * @return TimeNow <p>服务器当前时间</p>
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
                     * 获取<p>租户 Uin</p>
                     * @return Uin <p>租户 Uin</p>
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
                     * 获取<p>租户昵称</p>
                     * @return NickName <p>租户昵称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                private:

                    /**
                     * <p>订单所属租户 AppID</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>订单状态<br>枚举值：<br>0：未购买<br>1：正常<br>2：隔离<br>6：试用中<br>7：已过期<br>8：试用到期</p>
                     */
                    int64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * <p>总配额</p>
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * <p>已消耗配额</p>
                     */
                    int64_t m_usedCount;
                    bool m_usedCountHasBeenSet;

                    /**
                     * <p>支付模式<br>枚举值：<br>0：后付费<br>1：预付费</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>自动续费标志<br>枚举值：<br>0：未设置<br>1：自动续费<br>2：不自动续费</p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>购买时长</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>时长单位</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>订单开始时间</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>订单到期时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>公测结束时间，固定为 2026-06-30 23:59:59</p>
                     */
                    std::string m_betaEndTime;
                    bool m_betaEndTimeHasBeenSet;

                    /**
                     * <p>服务器当前时间</p>
                     */
                    std::string m_timeNow;
                    bool m_timeNowHasBeenSet;

                    /**
                     * <p>租户 Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>租户昵称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANPAYINFORESPONSE_H_
