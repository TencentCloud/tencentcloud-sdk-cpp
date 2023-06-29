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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/InstanceChargePrepaid.h>
#include <tencentcloud/apigateway/v20180808/model/NetworkConfig.h>
#include <tencentcloud/apigateway/v20180808/model/VpcConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ParameterInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 独享实例详情
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取独享实例唯一id
                     * @return InstanceId 独享实例唯一id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置独享实例唯一id
                     * @param _instanceId 独享实例唯一id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取独享实例名字
                     * @return InstanceName 独享实例名字
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置独享实例名字
                     * @param _instanceName 独享实例名字
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取独享实例描述
                     * @return InstanceDescription 独享实例描述
                     * 
                     */
                    std::string GetInstanceDescription() const;

                    /**
                     * 设置独享实例描述
                     * @param _instanceDescription 独享实例描述
                     * 
                     */
                    void SetInstanceDescription(const std::string& _instanceDescription);

                    /**
                     * 判断参数 InstanceDescription 是否已赋值
                     * @return InstanceDescription 是否已赋值
                     * 
                     */
                    bool InstanceDescriptionHasBeenSet() const;

                    /**
                     * 获取独享实例计费类型
                     * @return InstanceChargeType 独享实例计费类型
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置独享实例计费类型
                     * @param _instanceChargeType 独享实例计费类型
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取独享实例状态
                     * @return InstanceState 独享实例状态
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置独享实例状态
                     * @param _instanceState 独享实例状态
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取独享实例预付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceChargePrepaid 独享实例预付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置独享实例预付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceChargePrepaid 独享实例预付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取独享实例类型
                     * @return InstanceType 独享实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置独享实例类型
                     * @param _instanceType 独享实例类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取独享实例网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkConfig 独享实例网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NetworkConfig GetNetworkConfig() const;

                    /**
                     * 设置独享实例网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkConfig 独享实例网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkConfig(const NetworkConfig& _networkConfig);

                    /**
                     * 判断参数 NetworkConfig 是否已赋值
                     * @return NetworkConfig 是否已赋值
                     * 
                     */
                    bool NetworkConfigHasBeenSet() const;

                    /**
                     * 获取独享实例vpc配置
                     * @return VpcConfig 独享实例vpc配置
                     * 
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 设置独享实例vpc配置
                     * @param _vpcConfig 独享实例vpc配置
                     * 
                     */
                    void SetVpcConfig(const VpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取独享实例参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Parameters 独享实例参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterInfo> GetParameters() const;

                    /**
                     * 设置独享实例参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parameters 独享实例参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParameters(const std::vector<ParameterInfo>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取独享实例隔离时间
                     * @return IsolationStartedTime 独享实例隔离时间
                     * 
                     */
                    std::string GetIsolationStartedTime() const;

                    /**
                     * 设置独享实例隔离时间
                     * @param _isolationStartedTime 独享实例隔离时间
                     * 
                     */
                    void SetIsolationStartedTime(const std::string& _isolationStartedTime);

                    /**
                     * 判断参数 IsolationStartedTime 是否已赋值
                     * @return IsolationStartedTime 是否已赋值
                     * 
                     */
                    bool IsolationStartedTimeHasBeenSet() const;

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
                     * 获取可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zones 可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zones 可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * 独享实例唯一id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 独享实例名字
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 独享实例描述
                     */
                    std::string m_instanceDescription;
                    bool m_instanceDescriptionHasBeenSet;

                    /**
                     * 独享实例计费类型
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 独享实例状态
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 独享实例预付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 独享实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 独享实例网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NetworkConfig m_networkConfig;
                    bool m_networkConfigHasBeenSet;

                    /**
                     * 独享实例vpc配置
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * 独享实例参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterInfo> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 独享实例隔离时间
                     */
                    std::string m_isolationStartedTime;
                    bool m_isolationStartedTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_INSTANCEDETAIL_H_
