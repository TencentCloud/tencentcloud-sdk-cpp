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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYDEPLOYGROUP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYDEPLOYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * api分组已绑定的网关部署组
                */
                class GatewayDeployGroup : public AbstractModel
                {
                public:
                    GatewayDeployGroup();
                    ~GatewayDeployGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployGroupId 网关部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置网关部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployGroupId 网关部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     * 
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取网关部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployGroupName 网关部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployGroupName() const;

                    /**
                     * 设置网关部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployGroupName 网关部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployGroupName(const std::string& _deployGroupName);

                    /**
                     * 判断参数 DeployGroupName 是否已赋值
                     * @return DeployGroupName 是否已赋值
                     * 
                     */
                    bool DeployGroupNameHasBeenSet() const;

                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName 应用名称
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
                     * 获取应用分类：V：虚拟机应用，C：容器应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationType 应用分类：V：虚拟机应用，C：容器应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用分类：V：虚拟机应用，C：容器应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationType 应用分类：V：虚拟机应用，C：容器应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取部署组应用状态,取值: Running、Waiting、Paused、Updating、RollingBack、Abnormal、Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupStatus 部署组应用状态,取值: Running、Waiting、Paused、Updating、RollingBack、Abnormal、Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupStatus() const;

                    /**
                     * 设置部署组应用状态,取值: Running、Waiting、Paused、Updating、RollingBack、Abnormal、Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupStatus 部署组应用状态,取值: Running、Waiting、Paused、Updating、RollingBack、Abnormal、Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupStatus(const std::string& _groupStatus);

                    /**
                     * 判断参数 GroupStatus 是否已赋值
                     * @return GroupStatus 是否已赋值
                     * 
                     */
                    bool GroupStatusHasBeenSet() const;

                    /**
                     * 获取集群类型，C ：容器，V：虚拟机
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 集群类型，C ：容器，V：虚拟机
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型，C ：容器，V：虚拟机
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 集群类型，C ：容器，V：虚拟机
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * 网关部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * 网关部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployGroupName;
                    bool m_deployGroupNameHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 应用分类：V：虚拟机应用，C：容器应用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 部署组应用状态,取值: Running、Waiting、Paused、Updating、RollingBack、Abnormal、Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * 集群类型，C ：容器，V：虚拟机
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYDEPLOYGROUP_H_
