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
                     * 获取<p>计算集群可用区。</p>
                     * @return Zone <p>计算集群可用区。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>计算集群可用区。</p>
                     * @param _zone <p>计算集群可用区。</p>
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
                     * 获取<p>计算集群类型，取值范围：</p><ul><li>KUBERNETES</li></ul>
                     * @return Type <p>计算集群类型，取值范围：</p><ul><li>KUBERNETES</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>计算集群类型，取值范围：</p><ul><li>KUBERNETES</li></ul>
                     * @param _type <p>计算集群类型，取值范围：</p><ul><li>KUBERNETES</li></ul>
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
                     * 获取<p>计算集群Service CIDR，不能与VPC网段重合。</p>
                     * @return ServiceCidr <p>计算集群Service CIDR，不能与VPC网段重合。</p>
                     * 
                     */
                    std::string GetServiceCidr() const;

                    /**
                     * 设置<p>计算集群Service CIDR，不能与VPC网段重合。</p>
                     * @param _serviceCidr <p>计算集群Service CIDR，不能与VPC网段重合。</p>
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
                     * 获取<p>资源配额。</p>
                     * @return ResourceQuota <p>资源配额。</p>
                     * 
                     */
                    ResourceQuota GetResourceQuota() const;

                    /**
                     * 设置<p>资源配额。</p>
                     * @param _resourceQuota <p>资源配额。</p>
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
                     * 获取<p>限制范围。</p>
                     * @return LimitRange <p>限制范围。</p>
                     * 
                     */
                    LimitRange GetLimitRange() const;

                    /**
                     * 设置<p>限制范围。</p>
                     * @param _limitRange <p>限制范围。</p>
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
                     * 获取<p>系统节点池实例规格。详情参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述</p>
                     * @return SystemNodeInstanceType <p>系统节点池实例规格。详情参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述</p>
                     * 
                     */
                    std::string GetSystemNodeInstanceType() const;

                    /**
                     * 设置<p>系统节点池实例规格。详情参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述</p>
                     * @param _systemNodeInstanceType <p>系统节点池实例规格。详情参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述</p>
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
                     * 获取<p>系统节点池实例数量。</p>
                     * @return SystemNodeCount <p>系统节点池实例数量。</p>
                     * 
                     */
                    uint64_t GetSystemNodeCount() const;

                    /**
                     * 设置<p>系统节点池实例数量。</p>
                     * @param _systemNodeCount <p>系统节点池实例数量。</p>
                     * 
                     */
                    void SetSystemNodeCount(const uint64_t& _systemNodeCount);

                    /**
                     * 判断参数 SystemNodeCount 是否已赋值
                     * @return SystemNodeCount 是否已赋值
                     * 
                     */
                    bool SystemNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>纳管环境自动升配</p>
                     * @return AutoUpgradeClusterLevel <p>纳管环境自动升配</p>
                     * 
                     */
                    bool GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置<p>纳管环境自动升配</p>
                     * @param _autoUpgradeClusterLevel <p>纳管环境自动升配</p>
                     * 
                     */
                    void SetAutoUpgradeClusterLevel(const bool& _autoUpgradeClusterLevel);

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     * 
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                private:

                    /**
                     * <p>计算集群可用区。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>计算集群类型，取值范围：</p><ul><li>KUBERNETES</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>计算集群Service CIDR，不能与VPC网段重合。</p>
                     */
                    std::string m_serviceCidr;
                    bool m_serviceCidrHasBeenSet;

                    /**
                     * <p>资源配额。</p>
                     */
                    ResourceQuota m_resourceQuota;
                    bool m_resourceQuotaHasBeenSet;

                    /**
                     * <p>限制范围。</p>
                     */
                    LimitRange m_limitRange;
                    bool m_limitRangeHasBeenSet;

                    /**
                     * <p>系统节点池实例规格。详情参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述</p>
                     */
                    std::string m_systemNodeInstanceType;
                    bool m_systemNodeInstanceTypeHasBeenSet;

                    /**
                     * <p>系统节点池实例数量。</p>
                     */
                    uint64_t m_systemNodeCount;
                    bool m_systemNodeCountHasBeenSet;

                    /**
                     * <p>纳管环境自动升配</p>
                     */
                    bool m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CLUSTEROPTION_H_
