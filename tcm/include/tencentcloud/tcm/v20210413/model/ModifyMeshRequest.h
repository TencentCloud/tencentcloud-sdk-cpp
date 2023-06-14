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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_MODIFYMESHREQUEST_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_MODIFYMESHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/MeshConfig.h>
#include <tencentcloud/tcm/v20210413/model/Cluster.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * ModifyMesh请求参数结构体
                */
                class ModifyMeshRequest : public AbstractModel
                {
                public:
                    ModifyMeshRequest();
                    ~ModifyMeshRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的网格Id
                     * @return MeshId 需要修改的网格Id
                     * 
                     */
                    std::string GetMeshId() const;

                    /**
                     * 设置需要修改的网格Id
                     * @param _meshId 需要修改的网格Id
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
                     * 获取修改的网格名称
                     * @return DisplayName 修改的网格名称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置修改的网格名称
                     * @param _displayName 修改的网格名称
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取修改的网格配置
                     * @return Config 修改的网格配置
                     * 
                     */
                    MeshConfig GetConfig() const;

                    /**
                     * 设置修改的网格配置
                     * @param _config 修改的网格配置
                     * 
                     */
                    void SetConfig(const MeshConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取修改的集群配置
                     * @return ClusterList 修改的集群配置
                     * 
                     */
                    std::vector<Cluster> GetClusterList() const;

                    /**
                     * 设置修改的集群配置
                     * @param _clusterList 修改的集群配置
                     * 
                     */
                    void SetClusterList(const std::vector<Cluster>& _clusterList);

                    /**
                     * 判断参数 ClusterList 是否已赋值
                     * @return ClusterList 是否已赋值
                     * 
                     */
                    bool ClusterListHasBeenSet() const;

                private:

                    /**
                     * 需要修改的网格Id
                     */
                    std::string m_meshId;
                    bool m_meshIdHasBeenSet;

                    /**
                     * 修改的网格名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 修改的网格配置
                     */
                    MeshConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 修改的集群配置
                     */
                    std::vector<Cluster> m_clusterList;
                    bool m_clusterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_MODIFYMESHREQUEST_H_
