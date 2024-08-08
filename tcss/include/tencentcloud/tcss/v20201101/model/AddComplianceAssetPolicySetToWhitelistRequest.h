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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDCOMPLIANCEASSETPOLICYSETTOWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDCOMPLIANCEASSETPOLICYSETTOWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceAssetPolicySetItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddComplianceAssetPolicySetToWhitelist请求参数结构体
                */
                class AddComplianceAssetPolicySetToWhitelistRequest : public AbstractModel
                {
                public:
                    AddComplianceAssetPolicySetToWhitelistRequest();
                    ~AddComplianceAssetPolicySetToWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产ID+检查项IDs. 列表
                     * @return AssetPolicySetList 资产ID+检查项IDs. 列表
                     * 
                     */
                    std::vector<ComplianceAssetPolicySetItem> GetAssetPolicySetList() const;

                    /**
                     * 设置资产ID+检查项IDs. 列表
                     * @param _assetPolicySetList 资产ID+检查项IDs. 列表
                     * 
                     */
                    void SetAssetPolicySetList(const std::vector<ComplianceAssetPolicySetItem>& _assetPolicySetList);

                    /**
                     * 判断参数 AssetPolicySetList 是否已赋值
                     * @return AssetPolicySetList 是否已赋值
                     * 
                     */
                    bool AssetPolicySetListHasBeenSet() const;

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
                     * 资产ID+检查项IDs. 列表
                     */
                    std::vector<ComplianceAssetPolicySetItem> m_assetPolicySetList;
                    bool m_assetPolicySetListHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDCOMPLIANCEASSETPOLICYSETTOWHITELISTREQUEST_H_
