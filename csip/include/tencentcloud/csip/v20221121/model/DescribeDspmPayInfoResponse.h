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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMPAYINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMPAYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/InquireInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmPayInfo返回参数结构体
                */
                class DescribeDspmPayInfoResponse : public AbstractModel
                {
                public:
                    DescribeDspmPayInfoResponse();
                    ~DescribeDspmPayInfoResponse() = default;
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
                     * 获取已购数据库实例数量
                     * @return AssetNum 已购数据库实例数量
                     * 
                     */
                    int64_t GetAssetNum() const;

                    /**
                     * 判断参数 AssetNum 是否已赋值
                     * @return AssetNum 是否已赋值
                     * 
                     */
                    bool AssetNumHasBeenSet() const;

                    /**
                     * 获取已购审计日志量（TB）
                     * @return LogStorage 已购审计日志量（TB）
                     * 
                     */
                    double GetLogStorage() const;

                    /**
                     * 判断参数 LogStorage 是否已赋值
                     * @return LogStorage 是否已赋值
                     * 
                     */
                    bool LogStorageHasBeenSet() const;

                    /**
                     * 获取已使用数据库实例数量
                     * @return UsedAssetNum 已使用数据库实例数量
                     * 
                     */
                    int64_t GetUsedAssetNum() const;

                    /**
                     * 判断参数 UsedAssetNum 是否已赋值
                     * @return UsedAssetNum 是否已赋值
                     * 
                     */
                    bool UsedAssetNumHasBeenSet() const;

                    /**
                     * 获取已使用审计日志量（TB）
                     * @return UsedLogStorage 已使用审计日志量（TB）
                     * 
                     */
                    double GetUsedLogStorage() const;

                    /**
                     * 判断参数 UsedLogStorage 是否已赋值
                     * @return UsedLogStorage 是否已赋值
                     * 
                     */
                    bool UsedLogStorageHasBeenSet() const;

                    /**
                     * 获取已购sql存储总量（单位百万）
                     * @return SqlTotal 已购sql存储总量（单位百万）
                     * 
                     */
                    uint64_t GetSqlTotal() const;

                    /**
                     * 判断参数 SqlTotal 是否已赋值
                     * @return SqlTotal 是否已赋值
                     * 
                     */
                    bool SqlTotalHasBeenSet() const;

                    /**
                     * 获取已购sql qps
                     * @return SqlQps 已购sql qps
                     * 
                     */
                    uint64_t GetSqlQps() const;

                    /**
                     * 判断参数 SqlQps 是否已赋值
                     * @return SqlQps 是否已赋值
                     * 
                     */
                    bool SqlQpsHasBeenSet() const;

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

                    /**
                     * 获取购买信息
                     * @return InquireData 购买信息
                     * 
                     */
                    std::vector<InquireInfo> GetInquireData() const;

                    /**
                     * 判断参数 InquireData 是否已赋值
                     * @return InquireData 是否已赋值
                     * 
                     */
                    bool InquireDataHasBeenSet() const;

                    /**
                     * 获取版本(专业版：professional 试用版：trial)
                     * @return Version 版本(专业版：professional 试用版：trial)
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

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
                     * 已购数据库实例数量
                     */
                    int64_t m_assetNum;
                    bool m_assetNumHasBeenSet;

                    /**
                     * 已购审计日志量（TB）
                     */
                    double m_logStorage;
                    bool m_logStorageHasBeenSet;

                    /**
                     * 已使用数据库实例数量
                     */
                    int64_t m_usedAssetNum;
                    bool m_usedAssetNumHasBeenSet;

                    /**
                     * 已使用审计日志量（TB）
                     */
                    double m_usedLogStorage;
                    bool m_usedLogStorageHasBeenSet;

                    /**
                     * 已购sql存储总量（单位百万）
                     */
                    uint64_t m_sqlTotal;
                    bool m_sqlTotalHasBeenSet;

                    /**
                     * 已购sql qps
                     */
                    uint64_t m_sqlQps;
                    bool m_sqlQpsHasBeenSet;

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

                    /**
                     * 购买信息
                     */
                    std::vector<InquireInfo> m_inquireData;
                    bool m_inquireDataHasBeenSet;

                    /**
                     * 版本(专业版：professional 试用版：trial)
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMPAYINFORESPONSE_H_
