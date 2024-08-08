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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETPOLICYITEMLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETPOLICYITEMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeComplianceAssetPolicyItemList请求参数结构体
                */
                class DescribeComplianceAssetPolicyItemListRequest : public AbstractModel
                {
                public:
                    DescribeComplianceAssetPolicyItemListRequest();
                    ~DescribeComplianceAssetPolicyItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户资产的ID。
                     * @return CustomerAssetId 客户资产的ID。
                     * 
                     */
                    uint64_t GetCustomerAssetId() const;

                    /**
                     * 设置客户资产的ID。
                     * @param _customerAssetId 客户资产的ID。
                     * 
                     */
                    void SetCustomerAssetId(const uint64_t& _customerAssetId);

                    /**
                     * 判断参数 CustomerAssetId 是否已赋值
                     * @return CustomerAssetId 是否已赋值
                     * 
                     */
                    bool CustomerAssetIdHasBeenSet() const;

                    /**
                     * 获取起始偏移量，默认为0。
                     * @return Offset 起始偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始偏移量，默认为0。
                     * @param _offset 起始偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取要获取的数据量，默认为10，最大为100。
                     * @return Limit 要获取的数据量，默认为10，最大为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置要获取的数据量，默认为10，最大为100。
                     * @param _limit 要获取的数据量，默认为10，最大为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤器列表。Name字段支持
RiskLevel， AppId
                     * @return Filters 过滤器列表。Name字段支持
RiskLevel， AppId
                     * 
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置过滤器列表。Name字段支持
RiskLevel， AppId
                     * @param _filters 过滤器列表。Name字段支持
RiskLevel， AppId
                     * 
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
                     * @return AssetType 资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
                     * @param _assetType 资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                private:

                    /**
                     * 客户资产的ID。
                     */
                    uint64_t m_customerAssetId;
                    bool m_customerAssetIdHasBeenSet;

                    /**
                     * 起始偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 要获取的数据量，默认为10，最大为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤器列表。Name字段支持
RiskLevel， AppId
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETPOLICYITEMLISTREQUEST_H_
