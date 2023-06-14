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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_UNLINKCLUSTERREQUEST_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_UNLINKCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * UnlinkCluster请求参数结构体
                */
                class UnlinkClusterRequest : public AbstractModel
                {
                public:
                    UnlinkClusterRequest();
                    ~UnlinkClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网格Id
                     * @return MeshId 网格Id
                     * 
                     */
                    std::string GetMeshId() const;

                    /**
                     * 设置网格Id
                     * @param _meshId 网格Id
                     * 
                     */
                    void SetMeshId(const std::string& _meshId);

                    /**
                     * 判断参数 MeshId 是否已赋值
                     * @return MeshId 是否已赋值
                     * 
                     */
                    bool MeshIdHasBeenSet() const;

                    /**
                     * 获取取消关联的集群Id
                     * @return ClusterId 取消关联的集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置取消关联的集群Id
                     * @param _clusterId 取消关联的集群Id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 网格Id
                     */
                    std::string m_meshId;
                    bool m_meshIdHasBeenSet;

                    /**
                     * 取消关联的集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_UNLINKCLUSTERREQUEST_H_
