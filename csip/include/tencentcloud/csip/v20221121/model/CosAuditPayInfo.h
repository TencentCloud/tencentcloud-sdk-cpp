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
                     * 获取<p>APPID</p>
                     * @return AppId <p>APPID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>APPID</p>
                     * @param _appId <p>APPID</p>
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
                     * 获取<p>订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期</p>
                     * @return OrderStatus <p>订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期</p>
                     * 
                     */
                    uint64_t GetOrderStatus() const;

                    /**
                     * 设置<p>订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期</p>
                     * @param _orderStatus <p>订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期</p>
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
                     * 获取<p>已购对象存储数量</p>
                     * @return BucketNum <p>已购对象存储数量</p>
                     * 
                     */
                    uint64_t GetBucketNum() const;

                    /**
                     * 设置<p>已购对象存储数量</p>
                     * @param _bucketNum <p>已购对象存储数量</p>
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
                     * 获取<p>支付模式，0-后付费 1-预付费</p>
                     * @return PayMode <p>支付模式，0-后付费 1-预付费</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>支付模式，0-后付费 1-预付费</p>
                     * @param _payMode <p>支付模式，0-后付费 1-预付费</p>
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
                     * 获取<p>是否单独购买，1-单独购买，2-被其它账号共享</p>
                     * @return IsSelfBuy <p>是否单独购买，1-单独购买，2-被其它账号共享</p>
                     * 
                     */
                    uint64_t GetIsSelfBuy() const;

                    /**
                     * 设置<p>是否单独购买，1-单独购买，2-被其它账号共享</p>
                     * @param _isSelfBuy <p>是否单独购买，1-单独购买，2-被其它账号共享</p>
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
                     * 获取<p>订单开始时间</p>
                     * @return BeginTime <p>订单开始时间</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>订单开始时间</p>
                     * @param _beginTime <p>订单开始时间</p>
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
                     * 获取<p>订单到期时间</p>
                     * @return EndTime <p>订单到期时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>订单到期时间</p>
                     * @param _endTime <p>订单到期时间</p>
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
                     * 获取<p>0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费</p>
                     * @return AutoRenew <p>0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费</p>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费</p>
                     * @param _autoRenew <p>0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费</p>
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
                     * 获取<p>订单时长</p>
                     * @return TimeSpan <p>订单时长</p>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>订单时长</p>
                     * @param _timeSpan <p>订单时长</p>
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
                     * 获取<p>时长单位</p>
                     * @return TimeUnit <p>时长单位</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>时长单位</p>
                     * @param _timeUnit <p>时长单位</p>
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
                     * 获取<p>资源id</p>
                     * @return ResourceId <p>资源id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源id</p>
                     * @param _resourceId <p>资源id</p>
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
                     * 获取<p>公测结束时间</p>
                     * @return BetaEndTime <p>公测结束时间</p>
                     * 
                     */
                    std::string GetBetaEndTime() const;

                    /**
                     * 设置<p>公测结束时间</p>
                     * @param _betaEndTime <p>公测结束时间</p>
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
                     * 获取<p>系统当前时间</p>
                     * @return TimeNow <p>系统当前时间</p>
                     * 
                     */
                    std::string GetTimeNow() const;

                    /**
                     * 设置<p>系统当前时间</p>
                     * @param _timeNow <p>系统当前时间</p>
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
                     * 获取<p>是否分享给其它账号，1-是，2-否</p>
                     * @return IsShareToOther <p>是否分享给其它账号，1-是，2-否</p>
                     * 
                     */
                    uint64_t GetIsShareToOther() const;

                    /**
                     * 设置<p>是否分享给其它账号，1-是，2-否</p>
                     * @param _isShareToOther <p>是否分享给其它账号，1-是，2-否</p>
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
                     * 获取<p>uin</p>
                     * @return Uin <p>uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>uin</p>
                     * @param _uin <p>uin</p>
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
                     * 获取<p>昵称</p>
                     * @return NickName <p>昵称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>昵称</p>
                     * @param _nickName <p>昵称</p>
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
                     * 获取<p>共享的bucketIdSet</p>
                     * @return BindBucket <p>共享的bucketIdSet</p>
                     * 
                     */
                    std::vector<CosBucketId> GetBindBucket() const;

                    /**
                     * 设置<p>共享的bucketIdSet</p>
                     * @param _bindBucket <p>共享的bucketIdSet</p>
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
                     * 获取<p>共享的appid</p>
                     * @return SharedAppIdSet <p>共享的appid</p>
                     * 
                     */
                    std::vector<uint64_t> GetSharedAppIdSet() const;

                    /**
                     * 设置<p>共享的appid</p>
                     * @param _sharedAppIdSet <p>共享的appid</p>
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
                     * 获取<p>是否已经开启后付费</p>
                     * @return PostPayStatus <p>是否已经开启后付费</p>
                     * 
                     */
                    uint64_t GetPostPayStatus() const;

                    /**
                     * 设置<p>是否已经开启后付费</p>
                     * @param _postPayStatus <p>是否已经开启后付费</p>
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
                     * 获取<p>0：未做过试用期试用   1 ：做过试用期试用</p>
                     * @return IsTestUser <p>0：未做过试用期试用   1 ：做过试用期试用</p>
                     * 
                     */
                    uint64_t GetIsTestUser() const;

                    /**
                     * 设置<p>0：未做过试用期试用   1 ：做过试用期试用</p>
                     * @param _isTestUser <p>0：未做过试用期试用   1 ：做过试用期试用</p>
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
                     * 获取<p>剩余可用数</p>
                     * @return AvailableBucketNum <p>剩余可用数</p>
                     * 
                     */
                    uint64_t GetAvailableBucketNum() const;

                    /**
                     * 设置<p>剩余可用数</p>
                     * @param _availableBucketNum <p>剩余可用数</p>
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
                     * 获取<p>已开启的监测存储桶数</p>
                     * @return MonitorBucketNum <p>已开启的监测存储桶数</p>
                     * 
                     */
                    uint64_t GetMonitorBucketNum() const;

                    /**
                     * 设置<p>已开启的监测存储桶数</p>
                     * @param _monitorBucketNum <p>已开启的监测存储桶数</p>
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
                     * 获取<p>总的存储桶数</p>
                     * @return TotalBucketNum <p>总的存储桶数</p>
                     * 
                     */
                    uint64_t GetTotalBucketNum() const;

                    /**
                     * 设置<p>总的存储桶数</p>
                     * @param _totalBucketNum <p>总的存储桶数</p>
                     * 
                     */
                    void SetTotalBucketNum(const uint64_t& _totalBucketNum);

                    /**
                     * 判断参数 TotalBucketNum 是否已赋值
                     * @return TotalBucketNum 是否已赋值
                     * 
                     */
                    bool TotalBucketNumHasBeenSet() const;

                    /**
                     * 获取<p>后付费产品开关状态</p>
                     * @return PostProductStatusList <p>后付费产品开关状态</p>
                     * 
                     */
                    std::vector<uint64_t> GetPostProductStatusList() const;

                    /**
                     * 设置<p>后付费产品开关状态</p>
                     * @param _postProductStatusList <p>后付费产品开关状态</p>
                     * 
                     */
                    void SetPostProductStatusList(const std::vector<uint64_t>& _postProductStatusList);

                    /**
                     * 判断参数 PostProductStatusList 是否已赋值
                     * @return PostProductStatusList 是否已赋值
                     * 
                     */
                    bool PostProductStatusListHasBeenSet() const;

                    /**
                     * 获取<p>后付费产品购买状态</p>
                     * @return PostProductBuyStatusList <p>后付费产品购买状态</p>
                     * 
                     */
                    std::vector<uint64_t> GetPostProductBuyStatusList() const;

                    /**
                     * 设置<p>后付费产品购买状态</p>
                     * @param _postProductBuyStatusList <p>后付费产品购买状态</p>
                     * 
                     */
                    void SetPostProductBuyStatusList(const std::vector<uint64_t>& _postProductBuyStatusList);

                    /**
                     * 判断参数 PostProductBuyStatusList 是否已赋值
                     * @return PostProductBuyStatusList 是否已赋值
                     * 
                     */
                    bool PostProductBuyStatusListHasBeenSet() const;

                    /**
                     * 获取<p>新后付费资源id</p>
                     * @return NewPostPayResourceId <p>新后付费资源id</p>
                     * 
                     */
                    std::string GetNewPostPayResourceId() const;

                    /**
                     * 设置<p>新后付费资源id</p>
                     * @param _newPostPayResourceId <p>新后付费资源id</p>
                     * 
                     */
                    void SetNewPostPayResourceId(const std::string& _newPostPayResourceId);

                    /**
                     * 判断参数 NewPostPayResourceId 是否已赋值
                     * @return NewPostPayResourceId 是否已赋值
                     * 
                     */
                    bool NewPostPayResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>APPID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>订单状态 0未购买 1正常，2隔离，3销毁，6试用中，7到期</p>
                     */
                    uint64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * <p>已购对象存储数量</p>
                     */
                    uint64_t m_bucketNum;
                    bool m_bucketNumHasBeenSet;

                    /**
                     * <p>支付模式，0-后付费 1-预付费</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>是否单独购买，1-单独购买，2-被其它账号共享</p>
                     */
                    uint64_t m_isSelfBuy;
                    bool m_isSelfBuyHasBeenSet;

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
                     * <p>0-用户未设置,1-用户设置自动续费,2-用户设置不自动续费</p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>订单时长</p>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>时长单位</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>资源id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>公测结束时间</p>
                     */
                    std::string m_betaEndTime;
                    bool m_betaEndTimeHasBeenSet;

                    /**
                     * <p>系统当前时间</p>
                     */
                    std::string m_timeNow;
                    bool m_timeNowHasBeenSet;

                    /**
                     * <p>是否分享给其它账号，1-是，2-否</p>
                     */
                    uint64_t m_isShareToOther;
                    bool m_isShareToOtherHasBeenSet;

                    /**
                     * <p>uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>昵称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>共享的bucketIdSet</p>
                     */
                    std::vector<CosBucketId> m_bindBucket;
                    bool m_bindBucketHasBeenSet;

                    /**
                     * <p>共享的appid</p>
                     */
                    std::vector<uint64_t> m_sharedAppIdSet;
                    bool m_sharedAppIdSetHasBeenSet;

                    /**
                     * <p>是否已经开启后付费</p>
                     */
                    uint64_t m_postPayStatus;
                    bool m_postPayStatusHasBeenSet;

                    /**
                     * <p>0：未做过试用期试用   1 ：做过试用期试用</p>
                     */
                    uint64_t m_isTestUser;
                    bool m_isTestUserHasBeenSet;

                    /**
                     * <p>剩余可用数</p>
                     */
                    uint64_t m_availableBucketNum;
                    bool m_availableBucketNumHasBeenSet;

                    /**
                     * <p>已开启的监测存储桶数</p>
                     */
                    uint64_t m_monitorBucketNum;
                    bool m_monitorBucketNumHasBeenSet;

                    /**
                     * <p>总的存储桶数</p>
                     */
                    uint64_t m_totalBucketNum;
                    bool m_totalBucketNumHasBeenSet;

                    /**
                     * <p>后付费产品开关状态</p>
                     */
                    std::vector<uint64_t> m_postProductStatusList;
                    bool m_postProductStatusListHasBeenSet;

                    /**
                     * <p>后付费产品购买状态</p>
                     */
                    std::vector<uint64_t> m_postProductBuyStatusList;
                    bool m_postProductBuyStatusListHasBeenSet;

                    /**
                     * <p>新后付费资源id</p>
                     */
                    std::string m_newPostPayResourceId;
                    bool m_newPostPayResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSAUDITPAYINFO_H_
