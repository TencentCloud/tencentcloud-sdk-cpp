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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UNBINDCLUSTERRESOURCEPACKAGESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UNBINDCLUSTERRESOURCEPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * UnbindClusterResourcePackages请求参数结构体
                */
                class UnbindClusterResourcePackagesRequest : public AbstractModel
                {
                public:
                    UnbindClusterResourcePackagesRequest();
                    ~UnbindClusterResourcePackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取资源包唯一ID,如果不传，解绑该实例绑定的所有资源包
                     * @return PackageIds 资源包唯一ID,如果不传，解绑该实例绑定的所有资源包
                     * 
                     */
                    std::vector<std::string> GetPackageIds() const;

                    /**
                     * 设置资源包唯一ID,如果不传，解绑该实例绑定的所有资源包
                     * @param _packageIds 资源包唯一ID,如果不传，解绑该实例绑定的所有资源包
                     * 
                     */
                    void SetPackageIds(const std::vector<std::string>& _packageIds);

                    /**
                     * 判断参数 PackageIds 是否已赋值
                     * @return PackageIds 是否已赋值
                     * 
                     */
                    bool PackageIdsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 资源包唯一ID,如果不传，解绑该实例绑定的所有资源包
                     */
                    std::vector<std::string> m_packageIds;
                    bool m_packageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UNBINDCLUSTERRESOURCEPACKAGESREQUEST_H_
