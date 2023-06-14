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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_WORKSPACECLUSTERITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_WORKSPACECLUSTERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 空间和集群绑定关系
                */
                class WorkSpaceClusterItem : public AbstractModel
                {
                public:
                    WorkSpaceClusterItem();
                    ~WorkSpaceClusterItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群 ID
                     * @return ClusterGroupId 集群 ID
                     * 
                     */
                    int64_t GetClusterGroupId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterGroupId 集群 ID
                     * 
                     */
                    void SetClusterGroupId(const int64_t& _clusterGroupId);

                    /**
                     * 判断参数 ClusterGroupId 是否已赋值
                     * @return ClusterGroupId 是否已赋值
                     * 
                     */
                    bool ClusterGroupIdHasBeenSet() const;

                    /**
                     * 获取集群 SerialId
                     * @return ClusterGroupSerialId 集群 SerialId
                     * 
                     */
                    std::string GetClusterGroupSerialId() const;

                    /**
                     * 设置集群 SerialId
                     * @param _clusterGroupSerialId 集群 SerialId
                     * 
                     */
                    void SetClusterGroupSerialId(const std::string& _clusterGroupSerialId);

                    /**
                     * 判断参数 ClusterGroupSerialId 是否已赋值
                     * @return ClusterGroupSerialId 是否已赋值
                     * 
                     */
                    bool ClusterGroupSerialIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取工作空间名称
                     * @return WorkSpaceName 工作空间名称
                     * 
                     */
                    std::string GetWorkSpaceName() const;

                    /**
                     * 设置工作空间名称
                     * @param _workSpaceName 工作空间名称
                     * 
                     */
                    void SetWorkSpaceName(const std::string& _workSpaceName);

                    /**
                     * 判断参数 WorkSpaceName 是否已赋值
                     * @return WorkSpaceName 是否已赋值
                     * 
                     */
                    bool WorkSpaceNameHasBeenSet() const;

                    /**
                     * 获取绑定状态  2 绑定 1  解除绑定
                     * @return Status 绑定状态  2 绑定 1  解除绑定
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置绑定状态  2 绑定 1  解除绑定
                     * @param _status 绑定状态  2 绑定 1  解除绑定
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目ID string类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectIdStr 项目ID string类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectIdStr() const;

                    /**
                     * 设置项目ID string类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectIdStr 项目ID string类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectIdStr(const std::string& _projectIdStr);

                    /**
                     * 判断参数 ProjectIdStr 是否已赋值
                     * @return ProjectIdStr 是否已赋值
                     * 
                     */
                    bool ProjectIdStrHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    int64_t m_clusterGroupId;
                    bool m_clusterGroupIdHasBeenSet;

                    /**
                     * 集群 SerialId
                     */
                    std::string m_clusterGroupSerialId;
                    bool m_clusterGroupSerialIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 工作空间名称
                     */
                    std::string m_workSpaceName;
                    bool m_workSpaceNameHasBeenSet;

                    /**
                     * 绑定状态  2 绑定 1  解除绑定
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目ID string类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectIdStr;
                    bool m_projectIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_WORKSPACECLUSTERITEM_H_
