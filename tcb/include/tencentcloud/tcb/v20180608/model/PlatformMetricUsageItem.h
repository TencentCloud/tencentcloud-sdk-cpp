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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMMETRICUSAGEITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMMETRICUSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/DailyUsageList.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 平台版指标用量信息
                */
                class PlatformMetricUsageItem : public AbstractModel
                {
                public:
                    PlatformMetricUsageItem();
                    ~PlatformMetricUsageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指标名称</p>
                     * @return MetricName <p>指标名称</p>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>指标名称</p>
                     * @param _metricName <p>指标名称</p>
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取<p>原始资源类型</p><p>枚举值：</p><ul><li>COS： 对象存储</li></ul>
                     * @return OriginalResourceType <p>原始资源类型</p><p>枚举值：</p><ul><li>COS： 对象存储</li></ul>
                     * 
                     */
                    std::string GetOriginalResourceType() const;

                    /**
                     * 设置<p>原始资源类型</p><p>枚举值：</p><ul><li>COS： 对象存储</li></ul>
                     * @param _originalResourceType <p>原始资源类型</p><p>枚举值：</p><ul><li>COS： 对象存储</li></ul>
                     * 
                     */
                    void SetOriginalResourceType(const std::string& _originalResourceType);

                    /**
                     * 判断参数 OriginalResourceType 是否已赋值
                     * @return OriginalResourceType 是否已赋值
                     * 
                     */
                    bool OriginalResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>原始指标</p>
                     * @return OriginalMetricName <p>原始指标</p>
                     * 
                     */
                    std::string GetOriginalMetricName() const;

                    /**
                     * 设置<p>原始指标</p>
                     * @param _originalMetricName <p>原始指标</p>
                     * 
                     */
                    void SetOriginalMetricName(const std::string& _originalMetricName);

                    /**
                     * 判断参数 OriginalMetricName 是否已赋值
                     * @return OriginalMetricName 是否已赋值
                     * 
                     */
                    bool OriginalMetricNameHasBeenSet() const;

                    /**
                     * 获取<p>资源用量</p>
                     * @return UsageValue <p>资源用量</p>
                     * 
                     */
                    uint64_t GetUsageValue() const;

                    /**
                     * 设置<p>资源用量</p>
                     * @param _usageValue <p>资源用量</p>
                     * 
                     */
                    void SetUsageValue(const uint64_t& _usageValue);

                    /**
                     * 判断参数 UsageValue 是否已赋值
                     * @return UsageValue 是否已赋值
                     * 
                     */
                    bool UsageValueHasBeenSet() const;

                    /**
                     * 获取<p>资源用量单位</p>
                     * @return UsageUnit <p>资源用量单位</p>
                     * 
                     */
                    std::string GetUsageUnit() const;

                    /**
                     * 设置<p>资源用量单位</p>
                     * @param _usageUnit <p>资源用量单位</p>
                     * 
                     */
                    void SetUsageUnit(const std::string& _usageUnit);

                    /**
                     * 判断参数 UsageUnit 是否已赋值
                     * @return UsageUnit 是否已赋值
                     * 
                     */
                    bool UsageUnitHasBeenSet() const;

                    /**
                     * 获取<p>资源点</p>
                     * @return Credits <p>资源点</p>
                     * 
                     */
                    uint64_t GetCredits() const;

                    /**
                     * 设置<p>资源点</p>
                     * @param _credits <p>资源点</p>
                     * 
                     */
                    void SetCredits(const uint64_t& _credits);

                    /**
                     * 判断参数 Credits 是否已赋值
                     * @return Credits 是否已赋值
                     * 
                     */
                    bool CreditsHasBeenSet() const;

                    /**
                     * 获取<p>用量按日明细列表</p>
                     * @return DailyUsageList <p>用量按日明细列表</p>
                     * 
                     */
                    std::vector<DailyUsageList> GetDailyUsageList() const;

                    /**
                     * 设置<p>用量按日明细列表</p>
                     * @param _dailyUsageList <p>用量按日明细列表</p>
                     * 
                     */
                    void SetDailyUsageList(const std::vector<DailyUsageList>& _dailyUsageList);

                    /**
                     * 判断参数 DailyUsageList 是否已赋值
                     * @return DailyUsageList 是否已赋值
                     * 
                     */
                    bool DailyUsageListHasBeenSet() const;

                private:

                    /**
                     * <p>指标名称</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>原始资源类型</p><p>枚举值：</p><ul><li>COS： 对象存储</li></ul>
                     */
                    std::string m_originalResourceType;
                    bool m_originalResourceTypeHasBeenSet;

                    /**
                     * <p>原始指标</p>
                     */
                    std::string m_originalMetricName;
                    bool m_originalMetricNameHasBeenSet;

                    /**
                     * <p>资源用量</p>
                     */
                    uint64_t m_usageValue;
                    bool m_usageValueHasBeenSet;

                    /**
                     * <p>资源用量单位</p>
                     */
                    std::string m_usageUnit;
                    bool m_usageUnitHasBeenSet;

                    /**
                     * <p>资源点</p>
                     */
                    uint64_t m_credits;
                    bool m_creditsHasBeenSet;

                    /**
                     * <p>用量按日明细列表</p>
                     */
                    std::vector<DailyUsageList> m_dailyUsageList;
                    bool m_dailyUsageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMMETRICUSAGEITEM_H_
