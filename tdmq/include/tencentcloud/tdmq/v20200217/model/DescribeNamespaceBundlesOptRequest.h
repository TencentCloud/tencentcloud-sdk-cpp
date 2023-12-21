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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBENAMESPACEBUNDLESOPTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBENAMESPACEBUNDLESOPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeNamespaceBundlesOpt请求参数结构体
                */
                class DescribeNamespaceBundlesOptRequest : public AbstractModel
                {
                public:
                    DescribeNamespaceBundlesOptRequest();
                    ~DescribeNamespaceBundlesOptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取物理集群名
                     * @return ClusterName 物理集群名
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置物理集群名
                     * @param _clusterName 物理集群名
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取虚拟集群（租户）ID
                     * @return TenantId 虚拟集群（租户）ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置虚拟集群（租户）ID
                     * @param _tenantId 虚拟集群（租户）ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取命名空间名
                     * @return NamespaceName 命名空间名
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名
                     * @param _namespaceName 命名空间名
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取是否需要监控指标，若传false，则不需要传Limit和Offset分页参数
                     * @return NeedMetrics 是否需要监控指标，若传false，则不需要传Limit和Offset分页参数
                     * 
                     */
                    bool GetNeedMetrics() const;

                    /**
                     * 设置是否需要监控指标，若传false，则不需要传Limit和Offset分页参数
                     * @param _needMetrics 是否需要监控指标，若传false，则不需要传Limit和Offset分页参数
                     * 
                     */
                    void SetNeedMetrics(const bool& _needMetrics);

                    /**
                     * 判断参数 NeedMetrics 是否已赋值
                     * @return NeedMetrics 是否已赋值
                     * 
                     */
                    bool NeedMetricsHasBeenSet() const;

                    /**
                     * 获取查询限制条数
                     * @return Limit 查询限制条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询限制条数
                     * @param _limit 查询限制条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询偏移量
                     * @return Offset 查询偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询偏移量
                     * @param _offset 查询偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取过滤的 bundle
                     * @return Bundle 过滤的 bundle
                     * 
                     */
                    std::string GetBundle() const;

                    /**
                     * 设置过滤的 bundle
                     * @param _bundle 过滤的 bundle
                     * 
                     */
                    void SetBundle(const std::string& _bundle);

                    /**
                     * 判断参数 Bundle 是否已赋值
                     * @return Bundle 是否已赋值
                     * 
                     */
                    bool BundleHasBeenSet() const;

                    /**
                     * 获取bundle 所属的 broker IP 地址，支持模糊查询
                     * @return OwnerBroker bundle 所属的 broker IP 地址，支持模糊查询
                     * 
                     */
                    std::string GetOwnerBroker() const;

                    /**
                     * 设置bundle 所属的 broker IP 地址，支持模糊查询
                     * @param _ownerBroker bundle 所属的 broker IP 地址，支持模糊查询
                     * 
                     */
                    void SetOwnerBroker(const std::string& _ownerBroker);

                    /**
                     * 判断参数 OwnerBroker 是否已赋值
                     * @return OwnerBroker 是否已赋值
                     * 
                     */
                    bool OwnerBrokerHasBeenSet() const;

                private:

                    /**
                     * 物理集群名
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 虚拟集群（租户）ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 命名空间名
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 是否需要监控指标，若传false，则不需要传Limit和Offset分页参数
                     */
                    bool m_needMetrics;
                    bool m_needMetricsHasBeenSet;

                    /**
                     * 查询限制条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤的 bundle
                     */
                    std::string m_bundle;
                    bool m_bundleHasBeenSet;

                    /**
                     * bundle 所属的 broker IP 地址，支持模糊查询
                     */
                    std::string m_ownerBroker;
                    bool m_ownerBrokerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBENAMESPACEBUNDLESOPTREQUEST_H_
