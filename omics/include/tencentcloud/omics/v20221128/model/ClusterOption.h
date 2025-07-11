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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CLUSTEROPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CLUSTEROPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/ResourceQuota.h>
#include <tencentcloud/omics/v20221128/model/LimitRange.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 计算集群配置。
                */
                class ClusterOption : public AbstractModel
                {
                public:
                    ClusterOption();
                    ~ClusterOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算集群可用区。
                     * @return Zone 计算集群可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置计算集群可用区。
                     * @param _zone 计算集群可用区。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取计算集群类型，取值范围：
- KUBERNETES
                     * @return Type 计算集群类型，取值范围：
- KUBERNETES
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置计算集群类型，取值范围：
- KUBERNETES
                     * @param _type 计算集群类型，取值范围：
- KUBERNETES
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取计算集群Service CIDR，不能与VPC网段重合。
                     * @return ServiceCidr 计算集群Service CIDR，不能与VPC网段重合。
                     * 
                     */
                    std::string GetServiceCidr() const;

                    /**
                     * 设置计算集群Service CIDR，不能与VPC网段重合。
                     * @param _serviceCidr 计算集群Service CIDR，不能与VPC网段重合。
                     * 
                     */
                    void SetServiceCidr(const std::string& _serviceCidr);

                    /**
                     * 判断参数 ServiceCidr 是否已赋值
                     * @return ServiceCidr 是否已赋值
                     * 
                     */
                    bool ServiceCidrHasBeenSet() const;

                    /**
                     * 获取资源配额。
                     * @return ResourceQuota 资源配额。
                     * 
                     */
                    ResourceQuota GetResourceQuota() const;

                    /**
                     * 设置资源配额。
                     * @param _resourceQuota 资源配额。
                     * 
                     */
                    void SetResourceQuota(const ResourceQuota& _resourceQuota);

                    /**
                     * 判断参数 ResourceQuota 是否已赋值
                     * @return ResourceQuota 是否已赋值
                     * 
                     */
                    bool ResourceQuotaHasBeenSet() const;

                    /**
                     * 获取限制范围。
                     * @return LimitRange 限制范围。
                     * 
                     */
                    LimitRange GetLimitRange() const;

                    /**
                     * 设置限制范围。
                     * @param _limitRange 限制范围。
                     * 
                     */
                    void SetLimitRange(const LimitRange& _limitRange);

                    /**
                     * 判断参数 LimitRange 是否已赋值
                     * @return LimitRange 是否已赋值
                     * 
                     */
                    bool LimitRangeHasBeenSet() const;

                    /**
                     * 获取系统节点池实例规格。
                     * @return SystemNodeInstanceType 系统节点池实例规格。
                     * 
                     */
                    std::string GetSystemNodeInstanceType() const;

                    /**
                     * 设置系统节点池实例规格。
                     * @param _systemNodeInstanceType 系统节点池实例规格。
                     * 
                     */
                    void SetSystemNodeInstanceType(const std::string& _systemNodeInstanceType);

                    /**
                     * 判断参数 SystemNodeInstanceType 是否已赋值
                     * @return SystemNodeInstanceType 是否已赋值
                     * 
                     */
                    bool SystemNodeInstanceTypeHasBeenSet() const;

                    /**
                     * 获取系统节点池实例数量。
                     * @return SystemNodeCount 系统节点池实例数量。
                     * 
                     */
                    uint64_t GetSystemNodeCount() const;

                    /**
                     * 设置系统节点池实例数量。
                     * @param _systemNodeCount 系统节点池实例数量。
                     * 
                     */
                    void SetSystemNodeCount(const uint64_t& _systemNodeCount);

                    /**
                     * 判断参数 SystemNodeCount 是否已赋值
                     * @return SystemNodeCount 是否已赋值
                     * 
                     */
                    bool SystemNodeCountHasBeenSet() const;

                private:

                    /**
                     * 计算集群可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 计算集群类型，取值范围：
- KUBERNETES
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 计算集群Service CIDR，不能与VPC网段重合。
                     */
                    std::string m_serviceCidr;
                    bool m_serviceCidrHasBeenSet;

                    /**
                     * 资源配额。
                     */
                    ResourceQuota m_resourceQuota;
                    bool m_resourceQuotaHasBeenSet;

                    /**
                     * 限制范围。
                     */
                    LimitRange m_limitRange;
                    bool m_limitRangeHasBeenSet;

                    /**
                     * 系统节点池实例规格。
                     */
                    std::string m_systemNodeInstanceType;
                    bool m_systemNodeInstanceTypeHasBeenSet;

                    /**
                     * 系统节点池实例数量。
                     */
                    uint64_t m_systemNodeCount;
                    bool m_systemNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CLUSTEROPTION_H_
