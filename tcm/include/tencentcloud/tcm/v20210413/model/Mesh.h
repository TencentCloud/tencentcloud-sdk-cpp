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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_MESH_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_MESH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/Cluster.h>
#include <tencentcloud/tcm/v20210413/model/MeshConfig.h>
#include <tencentcloud/tcm/v20210413/model/MeshStatus.h>
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
                * Mesh信息
                */
                class Mesh : public AbstractModel
                {
                public:
                    Mesh();
                    ~Mesh() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mesh实例Id
                     * @return MeshId Mesh实例Id
                     * 
                     */
                    std::string GetMeshId() const;

                    /**
                     * 设置Mesh实例Id
                     * @param _meshId Mesh实例Id
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
                     * 获取Mesh类型，取值范围：
- STANDALONE：独立网格
- HOSTED：托管网格
                     * @return Type Mesh类型，取值范围：
- STANDALONE：独立网格
- HOSTED：托管网格
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Mesh类型，取值范围：
- STANDALONE：独立网格
- HOSTED：托管网格
                     * @param _type Mesh类型，取值范围：
- STANDALONE：独立网格
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
                     * @param _version 版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Mesh状态，取值范围：
- PENDING：等待中
- CREATING：创建中
- RUNNING：运行中
- ABNORMAL：异常
- UPGRADING：升级中
- CANARY_UPGRADED：升级灰度完成
- ROLLBACKING：升级回滚
- DELETING：删除中
- CREATE_FAILED：安装失败
- DELETE_FAILED：删除失败
- UPGRADE_FAILED：升级失败
- ROLLBACK_FAILED：回滚失败
                     * @return State Mesh状态，取值范围：
- PENDING：等待中
- CREATING：创建中
- RUNNING：运行中
- ABNORMAL：异常
- UPGRADING：升级中
- CANARY_UPGRADED：升级灰度完成
- ROLLBACKING：升级回滚
- DELETING：删除中
- CREATE_FAILED：安装失败
- DELETE_FAILED：删除失败
- UPGRADE_FAILED：升级失败
- ROLLBACK_FAILED：回滚失败
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Mesh状态，取值范围：
- PENDING：等待中
- CREATING：创建中
- RUNNING：运行中
- ABNORMAL：异常
- UPGRADING：升级中
- CANARY_UPGRADED：升级灰度完成
- ROLLBACKING：升级回滚
- DELETING：删除中
- CREATE_FAILED：安装失败
- DELETE_FAILED：删除失败
- UPGRADE_FAILED：升级失败
- ROLLBACK_FAILED：回滚失败
                     * @param _state Mesh状态，取值范围：
- PENDING：等待中
- CREATING：创建中
- RUNNING：运行中
- ABNORMAL：异常
- UPGRADING：升级中
- CANARY_UPGRADED：升级灰度完成
- ROLLBACKING：升级回滚
- DELETING：删除中
- CREATE_FAILED：安装失败
- DELETE_FAILED：删除失败
- UPGRADE_FAILED：升级失败
- ROLLBACK_FAILED：回滚失败
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取集群列表
                     * @return ClusterList 集群列表
                     * 
                     */
                    std::vector<Cluster> GetClusterList() const;

                    /**
                     * 设置集群列表
                     * @param _clusterList 集群列表
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
                     * 获取Mesh详细状态
                     * @return Status Mesh详细状态
                     * 
                     */
                    MeshStatus GetStatus() const;

                    /**
                     * 设置Mesh详细状态
                     * @param _status Mesh详细状态
                     * 
                     */
                    void SetStatus(const MeshStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * Mesh实例Id
                     */
                    std::string m_meshId;
                    bool m_meshIdHasBeenSet;

                    /**
                     * Mesh名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Mesh类型，取值范围：
- STANDALONE：独立网格
- HOSTED：托管网格
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Mesh状态，取值范围：
- PENDING：等待中
- CREATING：创建中
- RUNNING：运行中
- ABNORMAL：异常
- UPGRADING：升级中
- CANARY_UPGRADED：升级灰度完成
- ROLLBACKING：升级回滚
- DELETING：删除中
- CREATE_FAILED：安装失败
- DELETE_FAILED：删除失败
- UPGRADE_FAILED：升级失败
- ROLLBACK_FAILED：回滚失败
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 集群列表
                     */
                    std::vector<Cluster> m_clusterList;
                    bool m_clusterListHasBeenSet;

                    /**
                     * Mesh配置
                     */
                    MeshConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Mesh详细状态
                     */
                    MeshStatus m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_MESH_H_
