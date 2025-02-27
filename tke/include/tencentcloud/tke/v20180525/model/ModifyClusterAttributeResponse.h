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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/AutoUpgradeClusterLevel.h>
#include <tencentcloud/tke/v20180525/model/ClusterProperty.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterAttribute返回参数结构体
                */
                class ModifyClusterAttributeResponse : public AbstractModel
                {
                public:
                    ModifyClusterAttributeResponse();
                    ~ModifyClusterAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群所属项目
                     * @return ProjectId 集群所属项目
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群描述
                     * @return ClusterDesc 集群描述
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     * 
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取集群等级
                     * @return ClusterLevel 集群等级
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取自动变配集群等级
                     * @return AutoUpgradeClusterLevel 自动变配集群等级
                     * 
                     */
                    AutoUpgradeClusterLevel GetAutoUpgradeClusterLevel() const;

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     * 
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                    /**
                     * 获取是否开启QGPU共享
                     * @return QGPUShareEnable 是否开启QGPU共享
                     * 
                     */
                    bool GetQGPUShareEnable() const;

                    /**
                     * 判断参数 QGPUShareEnable 是否已赋值
                     * @return QGPUShareEnable 是否已赋值
                     * 
                     */
                    bool QGPUShareEnableHasBeenSet() const;

                    /**
                     * 获取集群属性
                     * @return ClusterProperty 集群属性
                     * 
                     */
                    ClusterProperty GetClusterProperty() const;

                    /**
                     * 判断参数 ClusterProperty 是否已赋值
                     * @return ClusterProperty 是否已赋值
                     * 
                     */
                    bool ClusterPropertyHasBeenSet() const;

                private:

                    /**
                     * 集群所属项目
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群描述
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * 集群等级
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * 自动变配集群等级
                     */
                    AutoUpgradeClusterLevel m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                    /**
                     * 是否开启QGPU共享
                     */
                    bool m_qGPUShareEnable;
                    bool m_qGPUShareEnableHasBeenSet;

                    /**
                     * 集群属性
                     */
                    ClusterProperty m_clusterProperty;
                    bool m_clusterPropertyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTERESPONSE_H_
