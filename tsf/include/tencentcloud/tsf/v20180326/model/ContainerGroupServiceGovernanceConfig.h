/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPSERVICEGOVERNANCECONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPSERVICEGOVERNANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ServiceConfig.h>
#include <tencentcloud/tsf/v20180326/model/ExclusiveInstance.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 服务治理相关配置项
                */
                class ContainerGroupServiceGovernanceConfig : public AbstractModel
                {
                public:
                    ContainerGroupServiceGovernanceConfig();
                    ~ContainerGroupServiceGovernanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启服务治理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableGovernance 是否开启服务治理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableGovernance() const;

                    /**
                     * 设置是否开启服务治理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableGovernance 是否开启服务治理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableGovernance(const bool& _enableGovernance);

                    /**
                     * 判断参数 EnableGovernance 是否已赋值
                     * @return EnableGovernance 是否已赋值
                     * 
                     */
                    bool EnableGovernanceHasBeenSet() const;

                    /**
                     * 获取控制台场景使用 mesh服务配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceConfigList 控制台场景使用 mesh服务配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceConfig> GetServiceConfigList() const;

                    /**
                     * 设置控制台场景使用 mesh服务配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceConfigList 控制台场景使用 mesh服务配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceConfigList(const std::vector<ServiceConfig>& _serviceConfigList);

                    /**
                     * 判断参数 ServiceConfigList 是否已赋值
                     * @return ServiceConfigList 是否已赋值
                     * 
                     */
                    bool ServiceConfigListHasBeenSet() const;

                    /**
                     * 获取注册服务治理实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExclusiveInstances 注册服务治理实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExclusiveInstance> GetExclusiveInstances() const;

                    /**
                     * 设置注册服务治理实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exclusiveInstances 注册服务治理实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExclusiveInstances(const std::vector<ExclusiveInstance>& _exclusiveInstances);

                    /**
                     * 判断参数 ExclusiveInstances 是否已赋值
                     * @return ExclusiveInstances 是否已赋值
                     * 
                     */
                    bool ExclusiveInstancesHasBeenSet() const;

                    /**
                     * 获取服务治理类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GovernanceType 服务治理类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGovernanceType() const;

                    /**
                     * 设置服务治理类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _governanceType 服务治理类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGovernanceType(const std::string& _governanceType);

                    /**
                     * 判断参数 GovernanceType 是否已赋值
                     * @return GovernanceType 是否已赋值
                     * 
                     */
                    bool GovernanceTypeHasBeenSet() const;

                private:

                    /**
                     * 是否开启服务治理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableGovernance;
                    bool m_enableGovernanceHasBeenSet;

                    /**
                     * 控制台场景使用 mesh服务配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceConfig> m_serviceConfigList;
                    bool m_serviceConfigListHasBeenSet;

                    /**
                     * 注册服务治理实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExclusiveInstance> m_exclusiveInstances;
                    bool m_exclusiveInstancesHasBeenSet;

                    /**
                     * 服务治理类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_governanceType;
                    bool m_governanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPSERVICEGOVERNANCECONFIG_H_
