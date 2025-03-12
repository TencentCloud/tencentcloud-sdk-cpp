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
                     * 获取交易订单号
                     * @return DealName 交易订单号
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置交易订单号
                     * @param _dealName 交易订单号
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
                     * 获取上一次交易订单号
                     * @return LastDealName 上一次交易订单号
                     * 
                     */
                    std::string GetLastDealName() const;

                    /**
                     * 设置上一次交易订单号
                     * @param _lastDealName 上一次交易订单号
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
                     * 获取实例规格，包括：micro、small、medium、large、xlarge、2xlarge等
                     * @return InstanceClass 实例规格，包括：micro、small、medium、large、xlarge、2xlarge等
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置实例规格，包括：micro、small、medium、large、xlarge、2xlarge等
                     * @param _instanceClass 实例规格，包括：micro、small、medium、large、xlarge、2xlarge等
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
                     * 获取计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)
                     * @return TradeStatus 计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)
                     * 
                     */
                    std::string GetTradeStatus() const;

                    /**
                     * 设置计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)
                     * @param _tradeStatus 计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)
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
                     * 获取到期时间，格式为"yyyy-mm-dd hh:mm:ss"
                     * @return ExpireTime 到期时间，格式为"yyyy-mm-dd hh:mm:ss"
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间，格式为"yyyy-mm-dd hh:mm:ss"
                     * @param _expireTime 到期时间，格式为"yyyy-mm-dd hh:mm:ss"
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
                     * 获取下线时间，格式为"yyyy-mm-dd hh:mm:ss"
                     * @return OfflineTime 下线时间，格式为"yyyy-mm-dd hh:mm:ss"
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置下线时间，格式为"yyyy-mm-dd hh:mm:ss"
                     * @param _offlineTime 下线时间，格式为"yyyy-mm-dd hh:mm:ss"
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
                     * 获取隔离时间，格式为"yyyy-mm-dd hh:mm:ss"
                     * @return IsolateTime 隔离时间，格式为"yyyy-mm-dd hh:mm:ss"
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置隔离时间，格式为"yyyy-mm-dd hh:mm:ss"
                     * @param _isolateTime 隔离时间，格式为"yyyy-mm-dd hh:mm:ss"
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
                     * 获取下线原因
                     * @return OfflineReason 下线原因
                     * 
                     */
                    std::string GetOfflineReason() const;

                    /**
                     * 设置下线原因
                     * @param _offlineReason 下线原因
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
                     * 获取隔离原因
                     * @return IsolateReason 隔离原因
                     * 
                     */
                    std::string GetIsolateReason() const;

                    /**
                     * 设置隔离原因
                     * @param _isolateReason 隔离原因
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
                     * 获取付费类型，包括：postpay(后付费)、prepay(预付费)
                     * @return PayType 付费类型，包括：postpay(后付费)、prepay(预付费)
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置付费类型，包括：postpay(后付费)、prepay(预付费)
                     * @param _payType 付费类型，包括：postpay(后付费)、prepay(预付费)
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
                     * 获取任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)
                     * @return BillingType 任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)
                     * 
                     */
                    std::string GetBillingType() const;

                    /**
                     * 设置任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)
                     * @param _billingType 任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)
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
                     * 交易订单号
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 上一次交易订单号
                     */
                    std::string m_lastDealName;
                    bool m_lastDealNameHasBeenSet;

                    /**
                     * 实例规格，包括：micro、small、medium、large、xlarge、2xlarge等
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * 计费任务状态， normal(计费或待计费)、resizing(变配中)、reversing(冲正中，比较短暂的状态)、isolating(隔离中，比较短暂的状态)、isolated(已隔离)、offlining(下线中)、offlined(已下线)、notBilled(未计费)
                     */
                    std::string m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * 到期时间，格式为"yyyy-mm-dd hh:mm:ss"
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 下线时间，格式为"yyyy-mm-dd hh:mm:ss"
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 隔离时间，格式为"yyyy-mm-dd hh:mm:ss"
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 下线原因
                     */
                    std::string m_offlineReason;
                    bool m_offlineReasonHasBeenSet;

                    /**
                     * 隔离原因
                     */
                    std::string m_isolateReason;
                    bool m_isolateReasonHasBeenSet;

                    /**
                     * 付费类型，包括：postpay(后付费)、prepay(预付费)
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 任务计费类型，包括：billing(计费)、notBilling(不计费)、 promotions(促销活动中)
                     */
                    std::string m_billingType;
                    bool m_billingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TRADEINFO_H_
