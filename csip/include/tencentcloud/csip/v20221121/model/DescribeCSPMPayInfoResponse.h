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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSPMPAYINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSPMPAYINFORESPONSE_H_

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
                * DescribeCSPMPayInfo返回参数结构体
                */
                class DescribeCSPMPayInfoResponse : public AbstractModel
                {
                public:
                    DescribeCSPMPayInfoResponse();
                    ~DescribeCSPMPayInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取APPID
                     * @return AppID APPID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期
                     * @return OrderStatus 订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期
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
                     * 获取已购CSPM扫描配额
                     * @return CSPMNum 已购CSPM扫描配额
                     * 
                     */
                    int64_t GetCSPMNum() const;

                    /**
                     * 判断参数 CSPMNum 是否已赋值
                     * @return CSPMNum 是否已赋值
                     * 
                     */
                    bool CSPMNumHasBeenSet() const;

                    /**
                     * 获取已消耗CSPM扫描配额
                     * @return UsedCount 已消耗CSPM扫描配额
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
                     * 获取赠送CSPM扫描配额
                     * @return GrantedCSPMNum 赠送CSPM扫描配额
                     * 
                     */
                    int64_t GetGrantedCSPMNum() const;

                    /**
                     * 判断参数 GrantedCSPMNum 是否已赋值
                     * @return GrantedCSPMNum 是否已赋值
                     * 
                     */
                    bool GrantedCSPMNumHasBeenSet() const;

                    /**
                     * 获取支付模式，0-后付费 1-预付费
                     * @return PayMode 支付模式，0-后付费 1-预付费
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
                     * 获取是否单独购买，1-单独购买，2-被其它账号共享
                     * @return IsSelfBuy 是否单独购买，1-单独购买，2-被其它账号共享
                     * 
                     */
                    int64_t GetIsSelfBuy() const;

                    /**
                     * 判断参数 IsSelfBuy 是否已赋值
                     * @return IsSelfBuy 是否已赋值
                     * 
                     */
                    bool IsSelfBuyHasBeenSet() const;

                    /**
                     * 获取订单开始时间
                     * @return BeginTime 订单开始时间
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
                     * 获取订单到期时间
                     * @return EndTime 订单到期时间
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
                     * 获取0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费
                     * @return AutoRenew 0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取订单时长
                     * @return TimeSpan 订单时长
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
                     * 获取时长单位
                     * @return TimeUnit 时长单位
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
                     * 获取资源id
                     * @return ResourceId 资源id
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
                     * 获取公测结束时间
                     * @return BetaEndTime 公测结束时间
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
                     * 获取系统当前时间
                     * @return TimeNow 系统当前时间
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
                     * 获取是否分享给其它账号，1-是，2-否
                     * @return IsShareToOther 是否分享给其它账号，1-是，2-否
                     * 
                     */
                    int64_t GetIsShareToOther() const;

                    /**
                     * 判断参数 IsShareToOther 是否已赋值
                     * @return IsShareToOther 是否已赋值
                     * 
                     */
                    bool IsShareToOtherHasBeenSet() const;

                    /**
                     * 获取uin
                     * @return Uin uin
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
                     * 获取昵称
                     * @return NickName 昵称
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
                     * APPID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期
                     */
                    int64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 已购CSPM扫描配额
                     */
                    int64_t m_cSPMNum;
                    bool m_cSPMNumHasBeenSet;

                    /**
                     * 已消耗CSPM扫描配额
                     */
                    int64_t m_usedCount;
                    bool m_usedCountHasBeenSet;

                    /**
                     * 赠送CSPM扫描配额
                     */
                    int64_t m_grantedCSPMNum;
                    bool m_grantedCSPMNumHasBeenSet;

                    /**
                     * 支付模式，0-后付费 1-预付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 是否单独购买，1-单独购买，2-被其它账号共享
                     */
                    int64_t m_isSelfBuy;
                    bool m_isSelfBuyHasBeenSet;

                    /**
                     * 订单开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 订单到期时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 订单时长
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时长单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 公测结束时间
                     */
                    std::string m_betaEndTime;
                    bool m_betaEndTimeHasBeenSet;

                    /**
                     * 系统当前时间
                     */
                    std::string m_timeNow;
                    bool m_timeNowHasBeenSet;

                    /**
                     * 是否分享给其它账号，1-是，2-否
                     */
                    int64_t m_isShareToOther;
                    bool m_isShareToOtherHasBeenSet;

                    /**
                     * uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSPMPAYINFORESPONSE_H_
