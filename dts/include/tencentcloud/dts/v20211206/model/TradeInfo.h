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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TRADEINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TRADEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 计费状态信息
                */
                class TradeInfo : public AbstractModel
                {
                public:
                    TradeInfo();
                    ~TradeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>交易订单号</p>
                     * @return DealName <p>交易订单号</p>
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置<p>交易订单号</p>
                     * @param _dealName <p>交易订单号</p>
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取<p>上一次交易订单号</p>
                     * @return LastDealName <p>上一次交易订单号</p>
                     * 
                     */
                    std::string GetLastDealName() const;

                    /**
                     * 设置<p>上一次交易订单号</p>
                     * @param _lastDealName <p>上一次交易订单号</p>
                     * 
                     */
                    void SetLastDealName(const std::string& _lastDealName);

                    /**
                     * 判断参数 LastDealName 是否已赋值
                     * @return LastDealName 是否已赋值
                     * 
                     */
                    bool LastDealNameHasBeenSet() const;

                    /**
                     * 获取<p>实例规格，包括：micro、small、medium、large、xlarge、2xlarge等</p>
                     * @return InstanceClass <p>实例规格，包括：micro、small、medium、large、xlarge、2xlarge等</p>
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置<p>实例规格，包括：micro、small、medium、large、xlarge、2xlarge等</p>
                     * @param _instanceClass <p>实例规格，包括：micro、small、medium、large、xlarge、2xlarge等</p>
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取<p>计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)</p>
                     * @return TradeStatus <p>计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)</p>
                     * 
                     */
                    std::string GetTradeStatus() const;

                    /**
                     * 设置<p>计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)</p>
                     * @param _tradeStatus <p>计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)</p>
                     * 
                     */
                    void SetTradeStatus(const std::string& _tradeStatus);

                    /**
                     * 判断参数 TradeStatus 是否已赋值
                     * @return TradeStatus 是否已赋值
                     * 
                     */
                    bool TradeStatusHasBeenSet() const;

                    /**
                     * 获取<p>到期时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return ExpireTime <p>到期时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>到期时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _expireTime <p>到期时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>下线时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return OfflineTime <p>下线时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置<p>下线时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _offlineTime <p>下线时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>隔离时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return IsolateTime <p>隔离时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置<p>隔离时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _isolateTime <p>隔离时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取<p>下线原因</p>
                     * @return OfflineReason <p>下线原因</p>
                     * 
                     */
                    std::string GetOfflineReason() const;

                    /**
                     * 设置<p>下线原因</p>
                     * @param _offlineReason <p>下线原因</p>
                     * 
                     */
                    void SetOfflineReason(const std::string& _offlineReason);

                    /**
                     * 判断参数 OfflineReason 是否已赋值
                     * @return OfflineReason 是否已赋值
                     * 
                     */
                    bool OfflineReasonHasBeenSet() const;

                    /**
                     * 获取<p>隔离原因</p>
                     * @return IsolateReason <p>隔离原因</p>
                     * 
                     */
                    std::string GetIsolateReason() const;

                    /**
                     * 设置<p>隔离原因</p>
                     * @param _isolateReason <p>隔离原因</p>
                     * 
                     */
                    void SetIsolateReason(const std::string& _isolateReason);

                    /**
                     * 判断参数 IsolateReason 是否已赋值
                     * @return IsolateReason 是否已赋值
                     * 
                     */
                    bool IsolateReasonHasBeenSet() const;

                    /**
                     * 获取<p>付费类型，包括：postpay(后付费)、prepay(预付费)</p>
                     * @return PayType <p>付费类型，包括：postpay(后付费)、prepay(预付费)</p>
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置<p>付费类型，包括：postpay(后付费)、prepay(预付费)</p>
                     * @param _payType <p>付费类型，包括：postpay(后付费)、prepay(预付费)</p>
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)</p>
                     * @return BillingType <p>任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)</p>
                     * 
                     */
                    std::string GetBillingType() const;

                    /**
                     * 设置<p>任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)</p>
                     * @param _billingType <p>任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)</p>
                     * 
                     */
                    void SetBillingType(const std::string& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                private:

                    /**
                     * <p>交易订单号</p>
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * <p>上一次交易订单号</p>
                     */
                    std::string m_lastDealName;
                    bool m_lastDealNameHasBeenSet;

                    /**
                     * <p>实例规格，包括：micro、small、medium、large、xlarge、2xlarge等</p>
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * <p>计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)</p>
                     */
                    std::string m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * <p>到期时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>下线时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>隔离时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>下线原因</p>
                     */
                    std::string m_offlineReason;
                    bool m_offlineReasonHasBeenSet;

                    /**
                     * <p>隔离原因</p>
                     */
                    std::string m_isolateReason;
                    bool m_isolateReasonHasBeenSet;

                    /**
                     * <p>付费类型，包括：postpay(后付费)、prepay(预付费)</p>
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)</p>
                     */
                    std::string m_billingType;
                    bool m_billingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TRADEINFO_H_
