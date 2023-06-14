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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKASSETSUMMARYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKASSETSUMMARYREQUEST_H_

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
                * DescribeComplianceTaskAssetSummary请求参数结构体
                */
                class DescribeComplianceTaskAssetSummaryRequest : public AbstractModel
                {
                public:
                    DescribeComplianceTaskAssetSummaryRequest();
                    ~DescribeComplianceTaskAssetSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     * @return AssetTypeSet 资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     * 
                     */
                    std::vector<std::string> GetAssetTypeSet() const;

                    /**
                     * 设置资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     * @param _assetTypeSet 资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     * 
                     */
                    void SetAssetTypeSet(const std::vector<std::string>& _assetTypeSet);

                    /**
                     * 判断参数 AssetTypeSet 是否已赋值
                     * @return AssetTypeSet 是否已赋值
                     * 
                     */
                    bool AssetTypeSetHasBeenSet() const;

                private:

                    /**
                     * 资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
                     */
                    std::vector<std::string> m_assetTypeSet;
                    bool m_assetTypeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKASSETSUMMARYREQUEST_H_
