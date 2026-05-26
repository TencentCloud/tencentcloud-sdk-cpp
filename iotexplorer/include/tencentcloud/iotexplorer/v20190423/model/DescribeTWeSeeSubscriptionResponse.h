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
                     * 获取资源 ID
                     * @return ResourceId 资源 ID
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
                     * 获取套餐规格。可能取值：

- `BASIC`：包年包月基础版（适用于视频理解）
                     * @return ServiceTier 套餐规格。可能取值：

- `BASIC`：包年包月基础版（适用于视频理解）
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
                     * 获取到期时间，秒级时间戳
                     * @return ExpireTime 到期时间，秒级时间戳
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
                     * 获取启用状态，`true` 为开启，`false` 为关闭
                     * @return Enabled 启用状态，`true` 为开启，`false` 为关闭
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
                     * 获取订阅状态。可能取值：

- `NORMAL`：正常
- `ISOLATED`：隔离
                     * @return Status 订阅状态。可能取值：

- `NORMAL`：正常
- `ISOLATED`：隔离
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
                     * 获取视觉理解配置（适用于视频理解、图片理解）
                     * @return ComprehensionConfig 视觉理解配置（适用于视频理解、图片理解）
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
                     * 获取视频语义浓缩配置（适用于视频语义浓缩）
                     * @return CompHighlightConfig 视频语义浓缩配置（适用于视频语义浓缩）
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
                     * 获取云存事件 ID 过滤规则配置项
                     * @return EventIdFilterConfig 云存事件 ID 过滤规则配置项
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
                     * 获取当前周期基础能力总额度
                     * @return QuotaBasic 当前周期基础能力总额度
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
                     * 获取当前周期基础能力已用额度
                     * @return QuotaUsedBasic 当前周期基础能力已用额度
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
                     * 获取当前周期高级能力总额度
                     * @return QuotaAdvanced 当前周期高级能力总额度
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
                     * 获取当前周期高级能力已用额度
                     * @return QuotaUsedAdvanced 当前周期高级能力已用额度
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
                     * 获取额度刷新时间
                     * @return QuotaRefreshTime 额度刷新时间
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
                     * 资源 ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 套餐规格。可能取值：

- `BASIC`：包年包月基础版（适用于视频理解）
                     */
                    std::string m_serviceTier;
                    bool m_serviceTierHasBeenSet;

                    /**
                     * 到期时间，秒级时间戳
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 启用状态，`true` 为开启，`false` 为关闭
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 订阅状态。可能取值：

- `NORMAL`：正常
- `ISOLATED`：隔离
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 视觉理解配置（适用于视频理解、图片理解）
                     */
                    SeeComprehensionConfig m_comprehensionConfig;
                    bool m_comprehensionConfigHasBeenSet;

                    /**
                     * 视频语义浓缩配置（适用于视频语义浓缩）
                     */
                    SeeCompHighlightConfig m_compHighlightConfig;
                    bool m_compHighlightConfigHasBeenSet;

                    /**
                     * 云存事件 ID 过滤规则配置项
                     */
                    SeeEventIdFilterConfig m_eventIdFilterConfig;
                    bool m_eventIdFilterConfigHasBeenSet;

                    /**
                     * 当前周期基础能力总额度
                     */
                    int64_t m_quotaBasic;
                    bool m_quotaBasicHasBeenSet;

                    /**
                     * 当前周期基础能力已用额度
                     */
                    int64_t m_quotaUsedBasic;
                    bool m_quotaUsedBasicHasBeenSet;

                    /**
                     * 当前周期高级能力总额度
                     */
                    int64_t m_quotaAdvanced;
                    bool m_quotaAdvancedHasBeenSet;

                    /**
                     * 当前周期高级能力已用额度
                     */
                    int64_t m_quotaUsedAdvanced;
                    bool m_quotaUsedAdvancedHasBeenSet;

                    /**
                     * 额度刷新时间
                     */
                    int64_t m_quotaRefreshTime;
                    bool m_quotaRefreshTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEESUBSCRIPTIONRESPONSE_H_
