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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_PROMETHEUSSTATUS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_PROMETHEUSSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/GrafanaInfo.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * Prometheus状态信息
                */
                class PrometheusStatus : public AbstractModel
                {
                public:
                    PrometheusStatus();
                    ~PrometheusStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prometheus Id
                     * @return PrometheusId Prometheus Id
                     * 
                     */
                    std::string GetPrometheusId() const;

                    /**
                     * 设置Prometheus Id
                     * @param _prometheusId Prometheus Id
                     * 
                     */
                    void SetPrometheusId(const std::string& _prometheusId);

                    /**
                     * 判断参数 PrometheusId 是否已赋值
                     * @return PrometheusId 是否已赋值
                     * 
                     */
                    bool PrometheusIdHasBeenSet() const;

                    /**
                     * 获取展示名称
                     * @return DisplayName 展示名称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置展示名称
                     * @param _displayName 展示名称
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
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取虚拟网络Id
                     * @return VpcId 虚拟网络Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置虚拟网络Id
                     * @param _vpcId 虚拟网络Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return State 状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
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
                     * 获取地区
                     * @return Region 地区
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地区
                     * @param _region 地区
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
                     * 获取Grafana信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grafana Grafana信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GrafanaInfo GetGrafana() const;

                    /**
                     * 设置Grafana信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafana Grafana信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrafana(const GrafanaInfo& _grafana);

                    /**
                     * 判断参数 Grafana 是否已赋值
                     * @return Grafana 是否已赋值
                     * 
                     */
                    bool GrafanaHasBeenSet() const;

                    /**
                     * 获取Prometheus 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type Prometheus 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Prometheus 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type Prometheus 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Prometheus Id
                     */
                    std::string m_prometheusId;
                    bool m_prometheusIdHasBeenSet;

                    /**
                     * 展示名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 虚拟网络Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 地区
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Grafana信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GrafanaInfo m_grafana;
                    bool m_grafanaHasBeenSet;

                    /**
                     * Prometheus 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_PROMETHEUSSTATUS_H_
