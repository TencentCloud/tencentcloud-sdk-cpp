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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SCANCOMPLIANCEASSETSBYPOLICYITEMREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SCANCOMPLIANCEASSETSBYPOLICYITEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ScanComplianceAssetsByPolicyItem请求参数结构体
                */
                class ScanComplianceAssetsByPolicyItemRequest : public AbstractModel
                {
                public:
                    ScanComplianceAssetsByPolicyItemRequest();
                    ~ScanComplianceAssetsByPolicyItemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定的检测项的ID
                     * @return CustomerPolicyItemId 指定的检测项的ID
                     * 
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置指定的检测项的ID
                     * @param _customerPolicyItemId 指定的检测项的ID
                     * 
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                    /**
                     * 获取要重新扫描的客户资产项ID的列表。
                     * @return CustomerAssetIdSet 要重新扫描的客户资产项ID的列表。
                     * 
                     */
                    std::vector<uint64_t> GetCustomerAssetIdSet() const;

                    /**
                     * 设置要重新扫描的客户资产项ID的列表。
                     * @param _customerAssetIdSet 要重新扫描的客户资产项ID的列表。
                     * 
                     */
                    void SetCustomerAssetIdSet(const std::vector<uint64_t>& _customerAssetIdSet);

                    /**
                     * 判断参数 CustomerAssetIdSet 是否已赋值
                     * @return CustomerAssetIdSet 是否已赋值
                     * 
                     */
                    bool CustomerAssetIdSetHasBeenSet() const;

                    /**
                     * 获取扫描资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
                     * @return AssetType 扫描资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置扫描资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
                     * @param _assetType 扫描资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
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
                     * 指定的检测项的ID
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                    /**
                     * 要重新扫描的客户资产项ID的列表。
                     */
                    std::vector<uint64_t> m_customerAssetIdSet;
                    bool m_customerAssetIdSetHasBeenSet;

                    /**
                     * 扫描资产类型 <li>ASSET_CONTAINER Docker容器</li> <li>ASSET_IMAGE Docker镜像</li> <li>ASSET_HOST Docker主机</li> <li>ASSET_K8S Kubernetes</li> <li>ASSET_CONTAINERD Containerd主机</li> <li>ASSET_CONTAINERD_CONTAINER Containerd容器</li>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SCANCOMPLIANCEASSETSBYPOLICYITEMREQUEST_H_
