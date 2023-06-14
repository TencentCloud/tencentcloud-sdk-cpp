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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_WORKLOADINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_WORKLOADINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 工作负载详情
                */
                class WorkloadInfo : public AbstractModel
                {
                public:
                    WorkloadInfo();
                    ~WorkloadInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 资源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置资源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 资源 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName 应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionName 版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionName 版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Ready实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadyReplicas Ready实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReadyReplicas() const;

                    /**
                     * 设置Ready实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readyReplicas Ready实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadyReplicas(const int64_t& _readyReplicas);

                    /**
                     * 判断参数 ReadyReplicas 是否已赋值
                     * @return ReadyReplicas 是否已赋值
                     * 
                     */
                    bool ReadyReplicasHasBeenSet() const;

                    /**
                     * 获取实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas 实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas 实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取Updated实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedReplicas Updated实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdatedReplicas() const;

                    /**
                     * 设置Updated实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedReplicas Updated实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedReplicas(const int64_t& _updatedReplicas);

                    /**
                     * 判断参数 UpdatedReplicas 是否已赋值
                     * @return UpdatedReplicas 是否已赋值
                     * 
                     */
                    bool UpdatedReplicasHasBeenSet() const;

                    /**
                     * 获取UpdatedReady实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedReadyReplicas UpdatedReady实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdatedReadyReplicas() const;

                    /**
                     * 设置UpdatedReady实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedReadyReplicas UpdatedReady实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedReadyReplicas(const int64_t& _updatedReadyReplicas);

                    /**
                     * 判断参数 UpdatedReadyReplicas 是否已赋值
                     * @return UpdatedReadyReplicas 是否已赋值
                     * 
                     */
                    bool UpdatedReadyReplicasHasBeenSet() const;

                    /**
                     * 获取更新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateRevision 更新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateRevision() const;

                    /**
                     * 设置更新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateRevision 更新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateRevision(const std::string& _updateRevision);

                    /**
                     * 判断参数 UpdateRevision 是否已赋值
                     * @return UpdateRevision 是否已赋值
                     * 
                     */
                    bool UpdateRevisionHasBeenSet() const;

                    /**
                     * 获取当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentRevision 当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurrentRevision() const;

                    /**
                     * 设置当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentRevision 当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentRevision(const std::string& _currentRevision);

                    /**
                     * 判断参数 CurrentRevision 是否已赋值
                     * @return CurrentRevision 是否已赋值
                     * 
                     */
                    bool CurrentRevisionHasBeenSet() const;

                private:

                    /**
                     * 资源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 应用名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Ready实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readyReplicas;
                    bool m_readyReplicasHasBeenSet;

                    /**
                     * 实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Updated实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updatedReplicas;
                    bool m_updatedReplicasHasBeenSet;

                    /**
                     * UpdatedReady实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updatedReadyReplicas;
                    bool m_updatedReadyReplicasHasBeenSet;

                    /**
                     * 更新版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateRevision;
                    bool m_updateRevisionHasBeenSet;

                    /**
                     * 当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currentRevision;
                    bool m_currentRevisionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_WORKLOADINFO_H_
