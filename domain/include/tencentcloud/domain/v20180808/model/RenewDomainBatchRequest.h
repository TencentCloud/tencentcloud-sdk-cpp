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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_RENEWDOMAINBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_RENEWDOMAINBATCHREQUEST_H_

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
                * RenewDomainBatch请求参数结构体
                */
                class RenewDomainBatchRequest : public AbstractModel
                {
                public:
                    RenewDomainBatchRequest();
                    ~RenewDomainBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名续费的年限。取值范围[1,9]
                     * @return Period 域名续费的年限。取值范围[1,9]
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置域名续费的年限。取值范围[1,9]
                     * @param _period 域名续费的年限。取值范围[1,9]
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取批量续费的域名。
一次提交不大于4000个
                     * @return Domains 批量续费的域名。
一次提交不大于4000个
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置批量续费的域名。
一次提交不大于4000个
                     * @param _domains 批量续费的域名。
一次提交不大于4000个
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取付费模式 0手动在线付费，1使用余额付费，2使用特惠包。
                     * @return PayMode 付费模式 0手动在线付费，1使用余额付费，2使用特惠包。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式 0手动在线付费，1使用余额付费，2使用特惠包。
                     * @param _payMode 付费模式 0手动在线付费，1使用余额付费，2使用特惠包。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取自动续费开关。有三个可选值：
0 表示关闭，不自动续费
1 表示开启，将自动续费
2 表示不处理，保留域名原有状态（默认值）
                     * @return AutoRenewFlag 自动续费开关。有三个可选值：
0 表示关闭，不自动续费
1 表示开启，将自动续费
2 表示不处理，保留域名原有状态（默认值）
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费开关。有三个可选值：
0 表示关闭，不自动续费
1 表示开启，将自动续费
2 表示不处理，保留域名原有状态（默认值）
                     * @param _autoRenewFlag 自动续费开关。有三个可选值：
0 表示关闭，不自动续费
1 表示开启，将自动续费
2 表示不处理，保留域名原有状态（默认值）
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取特惠包ID
                     * @return PackageResourceId 特惠包ID
                     * 
                     */
                    std::string GetPackageResourceId() const;

                    /**
                     * 设置特惠包ID
                     * @param _packageResourceId 特惠包ID
                     * 
                     */
                    void SetPackageResourceId(const std::string& _packageResourceId);

                    /**
                     * 判断参数 PackageResourceId 是否已赋值
                     * @return PackageResourceId 是否已赋值
                     * 
                     */
                    bool PackageResourceIdHasBeenSet() const;

                    /**
                     * 获取渠道来源，pc/miniprogram/h5等
                     * @return ChannelFrom 渠道来源，pc/miniprogram/h5等
                     * 
                     */
                    std::string GetChannelFrom() const;

                    /**
                     * 设置渠道来源，pc/miniprogram/h5等
                     * @param _channelFrom 渠道来源，pc/miniprogram/h5等
                     * 
                     */
                    void SetChannelFrom(const std::string& _channelFrom);

                    /**
                     * 判断参数 ChannelFrom 是否已赋值
                     * @return ChannelFrom 是否已赋值
                     * 
                     */
                    bool ChannelFromHasBeenSet() const;

                    /**
                     * 获取订单来源，common正常/dianshi_active点石活动等
                     * @return OrderFrom 订单来源，common正常/dianshi_active点石活动等
                     * 
                     */
                    std::string GetOrderFrom() const;

                    /**
                     * 设置订单来源，common正常/dianshi_active点石活动等
                     * @param _orderFrom 订单来源，common正常/dianshi_active点石活动等
                     * 
                     */
                    void SetOrderFrom(const std::string& _orderFrom);

                    /**
                     * 判断参数 OrderFrom 是否已赋值
                     * @return OrderFrom 是否已赋值
                     * 
                     */
                    bool OrderFromHasBeenSet() const;

                    /**
                     * 获取活动id
                     * @return ActivityId 活动id
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置活动id
                     * @param _activityId 活动id
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                private:

                    /**
                     * 域名续费的年限。取值范围[1,9]
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 批量续费的域名。
一次提交不大于4000个
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 付费模式 0手动在线付费，1使用余额付费，2使用特惠包。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 自动续费开关。有三个可选值：
0 表示关闭，不自动续费
1 表示开启，将自动续费
2 表示不处理，保留域名原有状态（默认值）
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 特惠包ID
                     */
                    std::string m_packageResourceId;
                    bool m_packageResourceIdHasBeenSet;

                    /**
                     * 渠道来源，pc/miniprogram/h5等
                     */
                    std::string m_channelFrom;
                    bool m_channelFromHasBeenSet;

                    /**
                     * 订单来源，common正常/dianshi_active点石活动等
                     */
                    std::string m_orderFrom;
                    bool m_orderFromHasBeenSet;

                    /**
                     * 活动id
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_RENEWDOMAINBATCHREQUEST_H_
