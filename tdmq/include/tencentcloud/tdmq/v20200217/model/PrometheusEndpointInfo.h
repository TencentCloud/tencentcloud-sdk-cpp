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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PROMETHEUSENDPOINTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PROMETHEUSENDPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * rabbitmq Prometheus信息
                */
                class PrometheusEndpointInfo : public AbstractModel
                {
                public:
                    PrometheusEndpointInfo();
                    ~PrometheusEndpointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prometheus开关的状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrometheusEndpointStatus Prometheus开关的状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrometheusEndpointStatus() const;

                    /**
                     * 设置Prometheus开关的状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prometheusEndpointStatus Prometheus开关的状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrometheusEndpointStatus(const std::string& _prometheusEndpointStatus);

                    /**
                     * 判断参数 PrometheusEndpointStatus 是否已赋值
                     * @return PrometheusEndpointStatus 是否已赋值
                     * 
                     */
                    bool PrometheusEndpointStatusHasBeenSet() const;

                    /**
                     * 获取prometheus信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcPrometheusEndpoint prometheus信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetVpcPrometheusEndpoint() const;

                    /**
                     * 设置prometheus信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcPrometheusEndpoint prometheus信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcPrometheusEndpoint(const std::vector<std::string>& _vpcPrometheusEndpoint);

                    /**
                     * 判断参数 VpcPrometheusEndpoint 是否已赋值
                     * @return VpcPrometheusEndpoint 是否已赋值
                     * 
                     */
                    bool VpcPrometheusEndpointHasBeenSet() const;

                    /**
                     * 获取节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePrometheusAddress 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNodePrometheusAddress() const;

                    /**
                     * 设置节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodePrometheusAddress 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodePrometheusAddress(const std::vector<std::string>& _nodePrometheusAddress);

                    /**
                     * 判断参数 NodePrometheusAddress 是否已赋值
                     * @return NodePrometheusAddress 是否已赋值
                     * 
                     */
                    bool NodePrometheusAddressHasBeenSet() const;

                    /**
                     * 获取vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcEndpointInfo vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VpcEndpointInfo GetVpcEndpointInfo() const;

                    /**
                     * 设置vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcEndpointInfo vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcEndpointInfo(const VpcEndpointInfo& _vpcEndpointInfo);

                    /**
                     * 判断参数 VpcEndpointInfo 是否已赋值
                     * @return VpcEndpointInfo 是否已赋值
                     * 
                     */
                    bool VpcEndpointInfoHasBeenSet() const;

                private:

                    /**
                     * Prometheus开关的状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_prometheusEndpointStatus;
                    bool m_prometheusEndpointStatusHasBeenSet;

                    /**
                     * prometheus信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_vpcPrometheusEndpoint;
                    bool m_vpcPrometheusEndpointHasBeenSet;

                    /**
                     * 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nodePrometheusAddress;
                    bool m_nodePrometheusAddressHasBeenSet;

                    /**
                     * vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VpcEndpointInfo m_vpcEndpointInfo;
                    bool m_vpcEndpointInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PROMETHEUSENDPOINTINFO_H_
