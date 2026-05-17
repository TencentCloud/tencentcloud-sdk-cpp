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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSAUDITPAYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSAUDITPAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketId.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos审计支付信息
                */
                class CosAuditPayInfo : public AbstractModel
                {
                public:
                    CosAuditPayInfo();
                    ~CosAuditPayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取APPID
                     * @return AppId APPID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置APPID
                     * @param _appId APPID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期
                     * @return OrderStatus 订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期
                     * 
                     */
                    uint64_t GetOrderStatus() const;

                    /**
                     * 设置订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期
                     * @param _orderStatus 订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期
                     * 
                     */
                    void SetOrderStatus(const uint64_t& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取已购对象存储数量
                     * @return BucketNum 已购对象存储数量
                     * 
                     */
                    uint64_t GetBucketNum() const;

                    /**
                     * 设置已购对象存储数量
                     * @param _bucketNum 已购对象存储数量
                     * 
                     */
                    void SetBucketNum(const uint64_t& _bucketNum);

                    /**
                     * 判断参数 BucketNum 是否已赋值
                     * @return BucketNum 是否已赋值
                     * 
                     */
                    bool BucketNumHasBeenSet() const;

                    /**
                     * 获取支付模式，0-后付费 1-预付费
                     * @return PayMode 支付模式，0-后付费 1-预付费
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置支付模式，0-后付费 1-预付费
                     * @param _payMode 支付模式，0-后付费 1-预付费
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

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
                    uint64_t GetIsSelfBuy() const;

                    /**
                     * 设置是否单独购买，1-单独购买，2-被其它账号共享
                     * @param _isSelfBuy 是否单独购买，1-单独购买，2-被其它账号共享
                     * 
                     */
                    void SetIsSelfBuy(const uint64_t& _isSelfBuy);

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
                     * 设置订单开始时间
                     * @param _beginTime 订单开始时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

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
                     * 设置订单到期时间
                     * @param _endTime 订单到期时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

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
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费
                     * @param _autoRenew 0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

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
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置订单时长
                     * @param _timeSpan 订单时长
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

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
                     * 设置时长单位
                     * @param _timeUnit 时长单位
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

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
                     * 设置资源id 
                     * @param _resourceId 资源id 
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

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
                     * 设置公测结束时间
                     * @param _betaEndTime 公测结束时间
                     * 
                     */
                    void SetBetaEndTime(const std::string& _betaEndTime);

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
                     * 设置系统当前时间
                     * @param _timeNow 系统当前时间
                     * 
                     */
                    void SetTimeNow(const std::string& _timeNow);

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
                    uint64_t GetIsShareToOther() const;

                    /**
                     * 设置是否分享给其它账号，1-是，2-否
                     * @param _isShareToOther 是否分享给其它账号，1-是，2-否
                     * 
                     */
                    void SetIsShareToOther(const uint64_t& _isShareToOther);

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
                     * 设置uin
                     * @param _uin uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

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
                     * 设置昵称
                     * @param _nickName 昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取共享的bucketIdSet 
                     * @return BindBucket 共享的bucketIdSet 
                     * 
                     */
                    std::vector<CosBucketId> GetBindBucket() const;

                    /**
                     * 设置共享的bucketIdSet 
                     * @param _bindBucket 共享的bucketIdSet 
                     * 
                     */
                    void SetBindBucket(const std::vector<CosBucketId>& _bindBucket);

                    /**
                     * 判断参数 BindBucket 是否已赋值
                     * @return BindBucket 是否已赋值
                     * 
                     */
                    bool BindBucketHasBeenSet() const;

                    /**
                     * 获取共享的appid
                     * @return SharedAppIdSet 共享的appid
                     * 
                     */
                    std::vector<uint64_t> GetSharedAppIdSet() const;

                    /**
                     * 设置共享的appid
                     * @param _sharedAppIdSet 共享的appid
                     * 
                     */
                    void SetSharedAppIdSet(const std::vector<uint64_t>& _sharedAppIdSet);

                    /**
                     * 判断参数 SharedAppIdSet 是否已赋值
                     * @return SharedAppIdSet 是否已赋值
                     * 
                     */
                    bool SharedAppIdSetHasBeenSet() const;

                    /**
                     * 获取是否已经开启后付费
                     * @return PostPayStatus 是否已经开启后付费
                     * 
                     */
                    uint64_t GetPostPayStatus() const;

                    /**
                     * 设置是否已经开启后付费
                     * @param _postPayStatus 是否已经开启后付费
                     * 
                     */
                    void SetPostPayStatus(const uint64_t& _postPayStatus);

                    /**
                     * 判断参数 PostPayStatus 是否已赋值
                     * @return PostPayStatus 是否已赋值
                     * 
                     */
                    bool PostPayStatusHasBeenSet() const;

                    /**
                     * 获取0：未做过试用期试用   1 ：做过试用期试用
                     * @return IsTestUser 0：未做过试用期试用   1 ：做过试用期试用
                     * 
                     */
                    uint64_t GetIsTestUser() const;

                    /**
                     * 设置0：未做过试用期试用   1 ：做过试用期试用
                     * @param _isTestUser 0：未做过试用期试用   1 ：做过试用期试用
                     * 
                     */
                    void SetIsTestUser(const uint64_t& _isTestUser);

                    /**
                     * 判断参数 IsTestUser 是否已赋值
                     * @return IsTestUser 是否已赋值
                     * 
                     */
                    bool IsTestUserHasBeenSet() const;

                    /**
                     * 获取剩余可用数
                     * @return AvailableBucketNum 剩余可用数
                     * 
                     */
                    uint64_t GetAvailableBucketNum() const;

                    /**
                     * 设置剩余可用数
                     * @param _availableBucketNum 剩余可用数
                     * 
                     */
                    void SetAvailableBucketNum(const uint64_t& _availableBucketNum);

                    /**
                     * 判断参数 AvailableBucketNum 是否已赋值
                     * @return AvailableBucketNum 是否已赋值
                     * 
                     */
                    bool AvailableBucketNumHasBeenSet() const;

                    /**
                     * 获取已开启的监测存储桶数
                     * @return MonitorBucketNum 已开启的监测存储桶数
                     * 
                     */
                    uint64_t GetMonitorBucketNum() const;

                    /**
                     * 设置已开启的监测存储桶数
                     * @param _monitorBucketNum 已开启的监测存储桶数
                     * 
                     */
                    void SetMonitorBucketNum(const uint64_t& _monitorBucketNum);

                    /**
                     * 判断参数 MonitorBucketNum 是否已赋值
                     * @return MonitorBucketNum 是否已赋值
                     * 
                     */
                    bool MonitorBucketNumHasBeenSet() const;

                    /**
                     * 获取总的存储桶数
                     * @return TotalBucketNum 总的存储桶数
                     * 
                     */
                    uint64_t GetTotalBucketNum() const;

                    /**
                     * 设置总的存储桶数
                     * @param _totalBucketNum 总的存储桶数
                     * 
                     */
                    void SetTotalBucketNum(const uint64_t& _totalBucketNum);

                    /**
                     * 判断参数 TotalBucketNum 是否已赋值
                     * @return TotalBucketNum 是否已赋值
                     * 
                     */
                    bool TotalBucketNumHasBeenSet() const;

                private:

                    /**
                     * APPID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期
                     */
                    uint64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 已购对象存储数量
                     */
                    uint64_t m_bucketNum;
                    bool m_bucketNumHasBeenSet;

                    /**
                     * 支付模式，0-后付费 1-预付费
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 是否单独购买，1-单独购买，2-被其它账号共享
                     */
                    uint64_t m_isSelfBuy;
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
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 订单时长
                     */
                    uint64_t m_timeSpan;
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
                    uint64_t m_isShareToOther;
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
                     * 共享的bucketIdSet 
                     */
                    std::vector<CosBucketId> m_bindBucket;
                    bool m_bindBucketHasBeenSet;

                    /**
                     * 共享的appid
                     */
                    std::vector<uint64_t> m_sharedAppIdSet;
                    bool m_sharedAppIdSetHasBeenSet;

                    /**
                     * 是否已经开启后付费
                     */
                    uint64_t m_postPayStatus;
                    bool m_postPayStatusHasBeenSet;

                    /**
                     * 0：未做过试用期试用   1 ：做过试用期试用
                     */
                    uint64_t m_isTestUser;
                    bool m_isTestUserHasBeenSet;

                    /**
                     * 剩余可用数
                     */
                    uint64_t m_availableBucketNum;
                    bool m_availableBucketNumHasBeenSet;

                    /**
                     * 已开启的监测存储桶数
                     */
                    uint64_t m_monitorBucketNum;
                    bool m_monitorBucketNumHasBeenSet;

                    /**
                     * 总的存储桶数
                     */
                    uint64_t m_totalBucketNum;
                    bool m_totalBucketNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSAUDITPAYINFO_H_
