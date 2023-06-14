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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACESTATUSINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACESTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/TemEnvironmentStartingStatus.h>
#include <tencentcloud/tem/v20210701/model/TemEnvironmentStoppingStatus.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 命名空间状态
                */
                class NamespaceStatusInfo : public AbstractModel
                {
                public:
                    NamespaceStatusInfo();
                    ~NamespaceStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间id
                     * @return EnvironmentId 命名空间id
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间id
                     * @param _environmentId 命名空间id
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return EnvironmentName 命名空间名称
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置命名空间名称
                     * @param _environmentName 命名空间名称
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取TCB envId | EKS clusterId
                     * @return ClusterId TCB envId | EKS clusterId
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置TCB envId | EKS clusterId
                     * @param _clusterId TCB envId | EKS clusterId
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
                     * 获取环境状态
                     * @return ClusterStatus 环境状态
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置环境状态
                     * @param _clusterStatus 环境状态
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取环境启动状态（不在启动中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentStartingStatus 环境启动状态（不在启动中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TemEnvironmentStartingStatus GetEnvironmentStartingStatus() const;

                    /**
                     * 设置环境启动状态（不在启动中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environmentStartingStatus 环境启动状态（不在启动中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironmentStartingStatus(const TemEnvironmentStartingStatus& _environmentStartingStatus);

                    /**
                     * 判断参数 EnvironmentStartingStatus 是否已赋值
                     * @return EnvironmentStartingStatus 是否已赋值
                     * 
                     */
                    bool EnvironmentStartingStatusHasBeenSet() const;

                    /**
                     * 获取环境停止状态（不在停止中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentStoppingStatus 环境停止状态（不在停止中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TemEnvironmentStoppingStatus GetEnvironmentStoppingStatus() const;

                    /**
                     * 设置环境停止状态（不在停止中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environmentStoppingStatus 环境停止状态（不在停止中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironmentStoppingStatus(const TemEnvironmentStoppingStatus& _environmentStoppingStatus);

                    /**
                     * 判断参数 EnvironmentStoppingStatus 是否已赋值
                     * @return EnvironmentStoppingStatus 是否已赋值
                     * 
                     */
                    bool EnvironmentStoppingStatusHasBeenSet() const;

                private:

                    /**
                     * 命名空间id
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * TCB envId | EKS clusterId
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 环境状态
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 环境启动状态（不在启动中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TemEnvironmentStartingStatus m_environmentStartingStatus;
                    bool m_environmentStartingStatusHasBeenSet;

                    /**
                     * 环境停止状态（不在停止中为null）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TemEnvironmentStoppingStatus m_environmentStoppingStatus;
                    bool m_environmentStoppingStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACESTATUSINFO_H_
