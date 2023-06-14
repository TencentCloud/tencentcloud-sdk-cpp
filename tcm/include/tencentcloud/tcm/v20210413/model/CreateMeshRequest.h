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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_CREATEMESHREQUEST_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_CREATEMESHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/MeshConfig.h>
#include <tencentcloud/tcm/v20210413/model/Cluster.h>
#include <tencentcloud/tcm/v20210413/model/Tag.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * CreateMesh请求参数结构体
                */
                class CreateMeshRequest : public AbstractModel
                {
                public:
                    CreateMeshRequest();
                    ~CreateMeshRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mesh名称
                     * @return DisplayName Mesh名称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Mesh名称
                     * @param _displayName Mesh名称
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
                     * 获取Mesh版本
                     * @return MeshVersion Mesh版本
                     * 
                     */
                    std::string GetMeshVersion() const;

                    /**
                     * 设置Mesh版本
                     * @param _meshVersion Mesh版本
                     * 
                     */
                    void SetMeshVersion(const std::string& _meshVersion);

                    /**
                     * 判断参数 MeshVersion 是否已赋值
                     * @return MeshVersion 是否已赋值
                     * 
                     */
                    bool MeshVersionHasBeenSet() const;

                    /**
                     * 获取Mesh类型，取值范围：
- HOSTED：托管网格
                     * @return Type Mesh类型，取值范围：
- HOSTED：托管网格
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Mesh类型，取值范围：
- HOSTED：托管网格
                     * @param _type Mesh类型，取值范围：
- HOSTED：托管网格
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
                     * 获取Mesh配置
                     * @return Config Mesh配置
                     * 
                     */
                    MeshConfig GetConfig() const;

                    /**
                     * 设置Mesh配置
                     * @param _config Mesh配置
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
                     * 获取关联集群
                     * @return ClusterList 关联集群
                     * 
                     */
                    std::vector<Cluster> GetClusterList() const;

                    /**
                     * 设置关联集群
                     * @param _clusterList 关联集群
                     * 
                     */
                    void SetClusterList(const std::vector<Cluster>& _clusterList);

                    /**
                     * 判断参数 ClusterList 是否已赋值
                     * @return ClusterList 是否已赋值
                     * 
                     */
                    bool ClusterListHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagList 标签列表
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置标签列表
                     * @param _tagList 标签列表
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * Mesh名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Mesh版本
                     */
                    std::string m_meshVersion;
                    bool m_meshVersionHasBeenSet;

                    /**
                     * Mesh类型，取值范围：
- HOSTED：托管网格
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Mesh配置
                     */
                    MeshConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 关联集群
                     */
                    std::vector<Cluster> m_clusterList;
                    bool m_clusterListHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_CREATEMESHREQUEST_H_
