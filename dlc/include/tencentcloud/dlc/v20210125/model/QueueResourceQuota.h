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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUEUERESOURCEQUOTA_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUEUERESOURCEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 队列维度单条资源配额数据（含总量、已用量、可用量）
                */
                class QueueResourceQuota : public AbstractModel
                {
                public:
                    QueueResourceQuota();
                    ~QueueResourceQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源类型标识。CPU / HM_CPU 类计费项统一映射为 "CU"；GPU 类计费项取卡型简称（如 "T4"、"H20"）</p>
                     * @return ResourceType <p>资源类型标识。CPU / HM_CPU 类计费项统一映射为 "CU"；GPU 类计费项取卡型简称（如 "T4"、"H20"）</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型标识。CPU / HM_CPU 类计费项统一映射为 "CU"；GPU 类计费项取卡型简称（如 "T4"、"H20"）</p>
                     * @param _resourceType <p>资源类型标识。CPU / HM_CPU 类计费项统一映射为 "CU"；GPU 类计费项取卡型简称（如 "T4"、"H20"）</p>
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
                     * 获取<p>资源单位。CU 类为 "core"；GPU 类为 "card"</p>
                     * @return Unit <p>资源单位。CU 类为 "core"；GPU 类为 "card"</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>资源单位。CU 类为 "core"；GPU 类为 "card"</p>
                     * @param _unit <p>资源单位。CU 类为 "core"；GPU 类为 "card"</p>
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>配额总量，由 resource_usage 最大值（index 1）× spec 折算得出</p>
                     * @return Total <p>配额总量，由 resource_usage 最大值（index 1）× spec 折算得出</p>
                     * 
                     */
                    double GetTotal() const;

                    /**
                     * 设置<p>配额总量，由 resource_usage 最大值（index 1）× spec 折算得出</p>
                     * @param _total <p>配额总量，由 resource_usage 最大值（index 1）× spec 折算得出</p>
                     * 
                     */
                    void SetTotal(const double& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取当前已使用量，计费 spec 口径：队列内业务容器（ray-head/ray-worker）的 Pod limits 之和，经 kube_pod_labels 按 local queue 过滤。依赖 kube_pod_labels 指标采集，未开启时恒为 0
                     * @return Used 当前已使用量，计费 spec 口径：队列内业务容器（ray-head/ray-worker）的 Pod limits 之和，经 kube_pod_labels 按 local queue 过滤。依赖 kube_pod_labels 指标采集，未开启时恒为 0
                     * 
                     */
                    double GetUsed() const;

                    /**
                     * 设置当前已使用量，计费 spec 口径：队列内业务容器（ray-head/ray-worker）的 Pod limits 之和，经 kube_pod_labels 按 local queue 过滤。依赖 kube_pod_labels 指标采集，未开启时恒为 0
                     * @param _used 当前已使用量，计费 spec 口径：队列内业务容器（ray-head/ray-worker）的 Pod limits 之和，经 kube_pod_labels 按 local queue 过滤。依赖 kube_pod_labels 指标采集，未开启时恒为 0
                     * 
                     */
                    void SetUsed(const double& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取<p>可用量（总量 - 已使用量，截断至 0）。当 used 超出 total 时（例如配额尚未生效或数据短暂不一致），返回 0 而非负数</p>
                     * @return Available <p>可用量（总量 - 已使用量，截断至 0）。当 used 超出 total 时（例如配额尚未生效或数据短暂不一致），返回 0 而非负数</p>
                     * 
                     */
                    double GetAvailable() const;

                    /**
                     * 设置<p>可用量（总量 - 已使用量，截断至 0）。当 used 超出 total 时（例如配额尚未生效或数据短暂不一致），返回 0 而非负数</p>
                     * @param _available <p>可用量（总量 - 已使用量，截断至 0）。当 used 超出 total 时（例如配额尚未生效或数据短暂不一致），返回 0 而非负数</p>
                     * 
                     */
                    void SetAvailable(const double& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * <p>资源类型标识。CPU / HM_CPU 类计费项统一映射为 "CU"；GPU 类计费项取卡型简称（如 "T4"、"H20"）</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源单位。CU 类为 "core"；GPU 类为 "card"</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>配额总量，由 resource_usage 最大值（index 1）× spec 折算得出</p>
                     */
                    double m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 当前已使用量，计费 spec 口径：队列内业务容器（ray-head/ray-worker）的 Pod limits 之和，经 kube_pod_labels 按 local queue 过滤。依赖 kube_pod_labels 指标采集，未开启时恒为 0
                     */
                    double m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * <p>可用量（总量 - 已使用量，截断至 0）。当 used 超出 total 时（例如配额尚未生效或数据短暂不一致），返回 0 而非负数</p>
                     */
                    double m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUEUERESOURCEQUOTA_H_
