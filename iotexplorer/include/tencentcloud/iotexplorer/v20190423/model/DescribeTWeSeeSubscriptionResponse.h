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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEESUBSCRIPTIONRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEESUBSCRIPTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeComprehensionConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeCompHighlightConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeEventIdFilterConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeSummarizeConfig.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeTWeSeeSubscription返回参数结构体
                */
                class DescribeTWeSeeSubscriptionResponse : public AbstractModel
                {
                public:
                    DescribeTWeSeeSubscriptionResponse();
                    ~DescribeTWeSeeSubscriptionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源 ID</p>
                     * @return ResourceId <p>资源 ID</p>
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
                     * 获取<p>套餐规格。可能取值：</p><ul><li><code>BASIC</code>：包年包月基础版（适用于视频理解）</li></ul>
                     * @return ServiceTier <p>套餐规格。可能取值：</p><ul><li><code>BASIC</code>：包年包月基础版（适用于视频理解）</li></ul>
                     * 
                     */
                    std::string GetServiceTier() const;

                    /**
                     * 判断参数 ServiceTier 是否已赋值
                     * @return ServiceTier 是否已赋值
                     * 
                     */
                    bool ServiceTierHasBeenSet() const;

                    /**
                     * 获取<p>到期时间，秒级时间戳</p>
                     * @return ExpireTime <p>到期时间，秒级时间戳</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>启用状态，<code>true</code> 为开启，<code>false</code> 为关闭</p>
                     * @return Enabled <p>启用状态，<code>true</code> 为开启，<code>false</code> 为关闭</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>订阅状态。可能取值：</p><ul><li><code>NORMAL</code>：正常</li><li><code>ISOLATED</code>：隔离</li></ul>
                     * @return Status <p>订阅状态。可能取值：</p><ul><li><code>NORMAL</code>：正常</li><li><code>ISOLATED</code>：隔离</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>视觉理解配置（适用于视频理解、图片理解）</p>
                     * @return ComprehensionConfig <p>视觉理解配置（适用于视频理解、图片理解）</p>
                     * 
                     */
                    SeeComprehensionConfig GetComprehensionConfig() const;

                    /**
                     * 判断参数 ComprehensionConfig 是否已赋值
                     * @return ComprehensionConfig 是否已赋值
                     * 
                     */
                    bool ComprehensionConfigHasBeenSet() const;

                    /**
                     * 获取<p>视频语义浓缩配置（适用于视频语义浓缩）</p>
                     * @return CompHighlightConfig <p>视频语义浓缩配置（适用于视频语义浓缩）</p>
                     * 
                     */
                    SeeCompHighlightConfig GetCompHighlightConfig() const;

                    /**
                     * 判断参数 CompHighlightConfig 是否已赋值
                     * @return CompHighlightConfig 是否已赋值
                     * 
                     */
                    bool CompHighlightConfigHasBeenSet() const;

                    /**
                     * 获取<p>云存事件 ID 过滤规则配置项</p>
                     * @return EventIdFilterConfig <p>云存事件 ID 过滤规则配置项</p>
                     * 
                     */
                    SeeEventIdFilterConfig GetEventIdFilterConfig() const;

                    /**
                     * 判断参数 EventIdFilterConfig 是否已赋值
                     * @return EventIdFilterConfig 是否已赋值
                     * 
                     */
                    bool EventIdFilterConfigHasBeenSet() const;

                    /**
                     * 获取<p>每日与每周总结配置</p>
                     * @return SummarizeConfig <p>每日与每周总结配置</p>
                     * 
                     */
                    SeeSummarizeConfig GetSummarizeConfig() const;

                    /**
                     * 判断参数 SummarizeConfig 是否已赋值
                     * @return SummarizeConfig 是否已赋值
                     * 
                     */
                    bool SummarizeConfigHasBeenSet() const;

                    /**
                     * 获取<p>当前周期基础能力总额度</p>
                     * @return QuotaBasic <p>当前周期基础能力总额度</p>
                     * 
                     */
                    int64_t GetQuotaBasic() const;

                    /**
                     * 判断参数 QuotaBasic 是否已赋值
                     * @return QuotaBasic 是否已赋值
                     * 
                     */
                    bool QuotaBasicHasBeenSet() const;

                    /**
                     * 获取<p>当前周期基础能力已用额度</p>
                     * @return QuotaUsedBasic <p>当前周期基础能力已用额度</p>
                     * 
                     */
                    int64_t GetQuotaUsedBasic() const;

                    /**
                     * 判断参数 QuotaUsedBasic 是否已赋值
                     * @return QuotaUsedBasic 是否已赋值
                     * 
                     */
                    bool QuotaUsedBasicHasBeenSet() const;

                    /**
                     * 获取<p>当前周期高级能力总额度</p>
                     * @return QuotaAdvanced <p>当前周期高级能力总额度</p>
                     * 
                     */
                    int64_t GetQuotaAdvanced() const;

                    /**
                     * 判断参数 QuotaAdvanced 是否已赋值
                     * @return QuotaAdvanced 是否已赋值
                     * 
                     */
                    bool QuotaAdvancedHasBeenSet() const;

                    /**
                     * 获取<p>当前周期高级能力已用额度</p>
                     * @return QuotaUsedAdvanced <p>当前周期高级能力已用额度</p>
                     * 
                     */
                    int64_t GetQuotaUsedAdvanced() const;

                    /**
                     * 判断参数 QuotaUsedAdvanced 是否已赋值
                     * @return QuotaUsedAdvanced 是否已赋值
                     * 
                     */
                    bool QuotaUsedAdvancedHasBeenSet() const;

                    /**
                     * 获取<p>额度刷新时间</p>
                     * @return QuotaRefreshTime <p>额度刷新时间</p>
                     * 
                     */
                    int64_t GetQuotaRefreshTime() const;

                    /**
                     * 判断参数 QuotaRefreshTime 是否已赋值
                     * @return QuotaRefreshTime 是否已赋值
                     * 
                     */
                    bool QuotaRefreshTimeHasBeenSet() const;

                private:

                    /**
                     * <p>资源 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>套餐规格。可能取值：</p><ul><li><code>BASIC</code>：包年包月基础版（适用于视频理解）</li></ul>
                     */
                    std::string m_serviceTier;
                    bool m_serviceTierHasBeenSet;

                    /**
                     * <p>到期时间，秒级时间戳</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>启用状态，<code>true</code> 为开启，<code>false</code> 为关闭</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>订阅状态。可能取值：</p><ul><li><code>NORMAL</code>：正常</li><li><code>ISOLATED</code>：隔离</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>视觉理解配置（适用于视频理解、图片理解）</p>
                     */
                    SeeComprehensionConfig m_comprehensionConfig;
                    bool m_comprehensionConfigHasBeenSet;

                    /**
                     * <p>视频语义浓缩配置（适用于视频语义浓缩）</p>
                     */
                    SeeCompHighlightConfig m_compHighlightConfig;
                    bool m_compHighlightConfigHasBeenSet;

                    /**
                     * <p>云存事件 ID 过滤规则配置项</p>
                     */
                    SeeEventIdFilterConfig m_eventIdFilterConfig;
                    bool m_eventIdFilterConfigHasBeenSet;

                    /**
                     * <p>每日与每周总结配置</p>
                     */
                    SeeSummarizeConfig m_summarizeConfig;
                    bool m_summarizeConfigHasBeenSet;

                    /**
                     * <p>当前周期基础能力总额度</p>
                     */
                    int64_t m_quotaBasic;
                    bool m_quotaBasicHasBeenSet;

                    /**
                     * <p>当前周期基础能力已用额度</p>
                     */
                    int64_t m_quotaUsedBasic;
                    bool m_quotaUsedBasicHasBeenSet;

                    /**
                     * <p>当前周期高级能力总额度</p>
                     */
                    int64_t m_quotaAdvanced;
                    bool m_quotaAdvancedHasBeenSet;

                    /**
                     * <p>当前周期高级能力已用额度</p>
                     */
                    int64_t m_quotaUsedAdvanced;
                    bool m_quotaUsedAdvancedHasBeenSet;

                    /**
                     * <p>额度刷新时间</p>
                     */
                    int64_t m_quotaRefreshTime;
                    bool m_quotaRefreshTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEESUBSCRIPTIONRESPONSE_H_
