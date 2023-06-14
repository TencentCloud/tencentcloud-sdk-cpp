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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_CLUSTERCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_CLUSTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/IngressGateway.h>
#include <tencentcloud/tcm/v20210413/model/EgressGateway.h>
#include <tencentcloud/tcm/v20210413/model/IstiodConfig.h>
#include <tencentcloud/tcm/v20210413/model/DeployConfig.h>
#include <tencentcloud/tcm/v20210413/model/AutoInjectionNamespaceState.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 集群配置
                */
                class ClusterConfig : public AbstractModel
                {
                public:
                    ClusterConfig();
                    ~ClusterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动注入SideCar的NameSpace
                     * @return AutoInjectionNamespaceList 自动注入SideCar的NameSpace
                     * 
                     */
                    std::vector<std::string> GetAutoInjectionNamespaceList() const;

                    /**
                     * 设置自动注入SideCar的NameSpace
                     * @param _autoInjectionNamespaceList 自动注入SideCar的NameSpace
                     * 
                     */
                    void SetAutoInjectionNamespaceList(const std::vector<std::string>& _autoInjectionNamespaceList);

                    /**
                     * 判断参数 AutoInjectionNamespaceList 是否已赋值
                     * @return AutoInjectionNamespaceList 是否已赋值
                     * 
                     */
                    bool AutoInjectionNamespaceListHasBeenSet() const;

                    /**
                     * 获取Ingress配置列表
                     * @return IngressGatewayList Ingress配置列表
                     * 
                     */
                    std::vector<IngressGateway> GetIngressGatewayList() const;

                    /**
                     * 设置Ingress配置列表
                     * @param _ingressGatewayList Ingress配置列表
                     * 
                     */
                    void SetIngressGatewayList(const std::vector<IngressGateway>& _ingressGatewayList);

                    /**
                     * 判断参数 IngressGatewayList 是否已赋值
                     * @return IngressGatewayList 是否已赋值
                     * 
                     */
                    bool IngressGatewayListHasBeenSet() const;

                    /**
                     * 获取Egress配置列表
                     * @return EgressGatewayList Egress配置列表
                     * 
                     */
                    std::vector<EgressGateway> GetEgressGatewayList() const;

                    /**
                     * 设置Egress配置列表
                     * @param _egressGatewayList Egress配置列表
                     * 
                     */
                    void SetEgressGatewayList(const std::vector<EgressGateway>& _egressGatewayList);

                    /**
                     * 判断参数 EgressGatewayList 是否已赋值
                     * @return EgressGatewayList 是否已赋值
                     * 
                     */
                    bool EgressGatewayListHasBeenSet() const;

                    /**
                     * 获取Istiod配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Istiod Istiod配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IstiodConfig GetIstiod() const;

                    /**
                     * 设置Istiod配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _istiod Istiod配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIstiod(const IstiodConfig& _istiod);

                    /**
                     * 判断参数 Istiod 是否已赋值
                     * @return Istiod 是否已赋值
                     * 
                     */
                    bool IstiodHasBeenSet() const;

                    /**
                     * 获取部署配置
                     * @return DeployConfig 部署配置
                     * 
                     */
                    DeployConfig GetDeployConfig() const;

                    /**
                     * 设置部署配置
                     * @param _deployConfig 部署配置
                     * 
                     */
                    void SetDeployConfig(const DeployConfig& _deployConfig);

                    /**
                     * 判断参数 DeployConfig 是否已赋值
                     * @return DeployConfig 是否已赋值
                     * 
                     */
                    bool DeployConfigHasBeenSet() const;

                    /**
                     * 获取自动注入命名空间状态列表
                     * @return AutoInjectionNamespaceStateList 自动注入命名空间状态列表
                     * 
                     */
                    std::vector<AutoInjectionNamespaceState> GetAutoInjectionNamespaceStateList() const;

                    /**
                     * 设置自动注入命名空间状态列表
                     * @param _autoInjectionNamespaceStateList 自动注入命名空间状态列表
                     * 
                     */
                    void SetAutoInjectionNamespaceStateList(const std::vector<AutoInjectionNamespaceState>& _autoInjectionNamespaceStateList);

                    /**
                     * 判断参数 AutoInjectionNamespaceStateList 是否已赋值
                     * @return AutoInjectionNamespaceStateList 是否已赋值
                     * 
                     */
                    bool AutoInjectionNamespaceStateListHasBeenSet() const;

                private:

                    /**
                     * 自动注入SideCar的NameSpace
                     */
                    std::vector<std::string> m_autoInjectionNamespaceList;
                    bool m_autoInjectionNamespaceListHasBeenSet;

                    /**
                     * Ingress配置列表
                     */
                    std::vector<IngressGateway> m_ingressGatewayList;
                    bool m_ingressGatewayListHasBeenSet;

                    /**
                     * Egress配置列表
                     */
                    std::vector<EgressGateway> m_egressGatewayList;
                    bool m_egressGatewayListHasBeenSet;

                    /**
                     * Istiod配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IstiodConfig m_istiod;
                    bool m_istiodHasBeenSet;

                    /**
                     * 部署配置
                     */
                    DeployConfig m_deployConfig;
                    bool m_deployConfigHasBeenSet;

                    /**
                     * 自动注入命名空间状态列表
                     */
                    std::vector<AutoInjectionNamespaceState> m_autoInjectionNamespaceStateList;
                    bool m_autoInjectionNamespaceStateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_CLUSTERCONFIG_H_
