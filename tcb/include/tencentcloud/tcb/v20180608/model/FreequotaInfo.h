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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_FREEQUOTAINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_FREEQUOTAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 后付费资源免费量信息
                */
                class FreequotaInfo : public AbstractModel
                {
                public:
                    FreequotaInfo();
                    ~FreequotaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型
<li>COS</li>
<li>CDN</li>
<li>FLEXDB</li>
<li>SCF</li>
                     * @return ResourceType 资源类型
<li>COS</li>
<li>CDN</li>
<li>FLEXDB</li>
<li>SCF</li>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
<li>COS</li>
<li>CDN</li>
<li>FLEXDB</li>
<li>SCF</li>
                     * @param _resourceType 资源类型
<li>COS</li>
<li>CDN</li>
<li>FLEXDB</li>
<li>SCF</li>
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
                     * 获取资源指标名称
                     * @return ResourceMetric 资源指标名称
                     * 
                     */
                    std::string GetResourceMetric() const;

                    /**
                     * 设置资源指标名称
                     * @param _resourceMetric 资源指标名称
                     * 
                     */
                    void SetResourceMetric(const std::string& _resourceMetric);

                    /**
                     * 判断参数 ResourceMetric 是否已赋值
                     * @return ResourceMetric 是否已赋值
                     * 
                     */
                    bool ResourceMetricHasBeenSet() const;

                    /**
                     * 获取资源指标免费量
                     * @return FreeQuota 资源指标免费量
                     * 
                     */
                    int64_t GetFreeQuota() const;

                    /**
                     * 设置资源指标免费量
                     * @param _freeQuota 资源指标免费量
                     * 
                     */
                    void SetFreeQuota(const int64_t& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     * 
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取指标单位
                     * @return MetricUnit 指标单位
                     * 
                     */
                    std::string GetMetricUnit() const;

                    /**
                     * 设置指标单位
                     * @param _metricUnit 指标单位
                     * 
                     */
                    void SetMetricUnit(const std::string& _metricUnit);

                    /**
                     * 判断参数 MetricUnit 是否已赋值
                     * @return MetricUnit 是否已赋值
                     * 
                     */
                    bool MetricUnitHasBeenSet() const;

                    /**
                     * 获取免费量抵扣周期
<li>sum-month:以月为单位抵扣</li>
<li>sum-day:以天为单位抵扣</li>
<li>totalize:总容量抵扣</li>
                     * @return DeductType 免费量抵扣周期
<li>sum-month:以月为单位抵扣</li>
<li>sum-day:以天为单位抵扣</li>
<li>totalize:总容量抵扣</li>
                     * 
                     */
                    std::string GetDeductType() const;

                    /**
                     * 设置免费量抵扣周期
<li>sum-month:以月为单位抵扣</li>
<li>sum-day:以天为单位抵扣</li>
<li>totalize:总容量抵扣</li>
                     * @param _deductType 免费量抵扣周期
<li>sum-month:以月为单位抵扣</li>
<li>sum-day:以天为单位抵扣</li>
<li>totalize:总容量抵扣</li>
                     * 
                     */
                    void SetDeductType(const std::string& _deductType);

                    /**
                     * 判断参数 DeductType 是否已赋值
                     * @return DeductType 是否已赋值
                     * 
                     */
                    bool DeductTypeHasBeenSet() const;

                    /**
                     * 获取免费量类型
<li>basic:通用量抵扣</li>
                     * @return FreeQuotaType 免费量类型
<li>basic:通用量抵扣</li>
                     * 
                     */
                    std::string GetFreeQuotaType() const;

                    /**
                     * 设置免费量类型
<li>basic:通用量抵扣</li>
                     * @param _freeQuotaType 免费量类型
<li>basic:通用量抵扣</li>
                     * 
                     */
                    void SetFreeQuotaType(const std::string& _freeQuotaType);

                    /**
                     * 判断参数 FreeQuotaType 是否已赋值
                     * @return FreeQuotaType 是否已赋值
                     * 
                     */
                    bool FreeQuotaTypeHasBeenSet() const;

                private:

                    /**
                     * 资源类型
<li>COS</li>
<li>CDN</li>
<li>FLEXDB</li>
<li>SCF</li>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源指标名称
                     */
                    std::string m_resourceMetric;
                    bool m_resourceMetricHasBeenSet;

                    /**
                     * 资源指标免费量
                     */
                    int64_t m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * 指标单位
                     */
                    std::string m_metricUnit;
                    bool m_metricUnitHasBeenSet;

                    /**
                     * 免费量抵扣周期
<li>sum-month:以月为单位抵扣</li>
<li>sum-day:以天为单位抵扣</li>
<li>totalize:总容量抵扣</li>
                     */
                    std::string m_deductType;
                    bool m_deductTypeHasBeenSet;

                    /**
                     * 免费量类型
<li>basic:通用量抵扣</li>
                     */
                    std::string m_freeQuotaType;
                    bool m_freeQuotaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_FREEQUOTAINFO_H_
