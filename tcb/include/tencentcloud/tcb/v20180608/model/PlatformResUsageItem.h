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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMRESUSAGEITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMRESUSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/PlatformMetricUsageItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 平台版资源用量信息
                */
                class PlatformResUsageItem : public AbstractModel
                {
                public:
                    PlatformResUsageItem();
                    ~PlatformResUsageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li></ul>
                     * @return ResourceType <p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li></ul>
                     * @param _resourceType <p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li></ul>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源点</p>
                     * @return TotalCredits <p>资源点</p>
                     * 
                     */
                    uint64_t GetTotalCredits() const;

                    /**
                     * 设置<p>资源点</p>
                     * @param _totalCredits <p>资源点</p>
                     * 
                     */
                    void SetTotalCredits(const uint64_t& _totalCredits);

                    /**
                     * 判断参数 TotalCredits 是否已赋值
                     * @return TotalCredits 是否已赋值
                     * 
                     */
                    bool TotalCreditsHasBeenSet() const;

                    /**
                     * 获取<p>指标用量信息</p>
                     * @return Metrics <p>指标用量信息</p>
                     * 
                     */
                    std::vector<PlatformMetricUsageItem> GetMetrics() const;

                    /**
                     * 设置<p>指标用量信息</p>
                     * @param _metrics <p>指标用量信息</p>
                     * 
                     */
                    void SetMetrics(const std::vector<PlatformMetricUsageItem>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源点</p>
                     */
                    uint64_t m_totalCredits;
                    bool m_totalCreditsHasBeenSet;

                    /**
                     * <p>指标用量信息</p>
                     */
                    std::vector<PlatformMetricUsageItem> m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMRESUSAGEITEM_H_
