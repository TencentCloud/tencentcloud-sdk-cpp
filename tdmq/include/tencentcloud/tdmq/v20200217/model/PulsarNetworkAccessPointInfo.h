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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARNETWORKACCESSPOINTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARNETWORKACCESSPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/SecurityPolicy.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Pulsar 网络接入点信息
                */
                class PulsarNetworkAccessPointInfo : public AbstractModel
                {
                public:
                    PulsarNetworkAccessPointInfo();
                    ~PulsarNetworkAccessPointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc的id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpc的id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc的id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId vpc的id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取子网id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取接入地址
                     * @return Endpoint 接入地址
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置接入地址
                     * @param _endpoint 接入地址
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取接入点类型：
0：支撑网接入点 
1：VPC接入点 
2：公网接入点
                     * @return RouteType 接入点类型：
0：支撑网接入点 
1：VPC接入点 
2：公网接入点
                     * 
                     */
                    uint64_t GetRouteType() const;

                    /**
                     * 设置接入点类型：
0：支撑网接入点 
1：VPC接入点 
2：公网接入点
                     * @param _routeType 接入点类型：
0：支撑网接入点 
1：VPC接入点 
2：公网接入点
                     * 
                     */
                    void SetRouteType(const uint64_t& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     * 
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取0：本地域访问，由于并没有配置跨地域容灾，所该类型的接入点，无法进行异地切换、异地访问切回；
1：本地域访问，由于配置了跨地域容灾，随时可以进行异地切换，该状态用于主集群的接入点
2：跨地域访问，已经完成了异地切换，该状态用于源集群的接入点，该状态下的接入点不可删除
3：跨地域访问，随时可以进行异地访问切回，该状态用于目标集群的接入点，该状态下的接入点不可删除
4:跨地域访问，目标集群已经完成异地切回，等待删除状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationType 0：本地域访问，由于并没有配置跨地域容灾，所该类型的接入点，无法进行异地切换、异地访问切回；
1：本地域访问，由于配置了跨地域容灾，随时可以进行异地切换，该状态用于主集群的接入点
2：跨地域访问，已经完成了异地切换，该状态用于源集群的接入点，该状态下的接入点不可删除
3：跨地域访问，随时可以进行异地访问切回，该状态用于目标集群的接入点，该状态下的接入点不可删除
4:跨地域访问，目标集群已经完成异地切回，等待删除状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOperationType() const;

                    /**
                     * 设置0：本地域访问，由于并没有配置跨地域容灾，所该类型的接入点，无法进行异地切换、异地访问切回；
1：本地域访问，由于配置了跨地域容灾，随时可以进行异地切换，该状态用于主集群的接入点
2：跨地域访问，已经完成了异地切换，该状态用于源集群的接入点，该状态下的接入点不可删除
3：跨地域访问，随时可以进行异地访问切回，该状态用于目标集群的接入点，该状态下的接入点不可删除
4:跨地域访问，目标集群已经完成异地切回，等待删除状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operationType 0：本地域访问，由于并没有配置跨地域容灾，所该类型的接入点，无法进行异地切换、异地访问切回；
1：本地域访问，由于配置了跨地域容灾，随时可以进行异地切换，该状态用于主集群的接入点
2：跨地域访问，已经完成了异地切换，该状态用于源集群的接入点，该状态下的接入点不可删除
3：跨地域访问，随时可以进行异地访问切回，该状态用于目标集群的接入点，该状态下的接入点不可删除
4:跨地域访问，目标集群已经完成异地切回，等待删除状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperationType(const uint64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取接入点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessPointsType 接入点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessPointsType() const;

                    /**
                     * 设置接入点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessPointsType 接入点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessPointsType(const std::string& _accessPointsType);

                    /**
                     * 判断参数 AccessPointsType 是否已赋值
                     * @return AccessPointsType 是否已赋值
                     * 
                     */
                    bool AccessPointsTypeHasBeenSet() const;

                    /**
                     * 获取带宽，目前只有公网会有这个值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth 带宽，目前只有公网会有这个值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置带宽，目前只有公网会有这个值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidth 带宽，目前只有公网会有这个值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityPolicy 类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SecurityPolicy> GetSecurityPolicy() const;

                    /**
                     * 设置类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityPolicy 类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityPolicy(const std::vector<SecurityPolicy>& _securityPolicy);

                    /**
                     * 判断参数 SecurityPolicy 是否已赋值
                     * @return SecurityPolicy 是否已赋值
                     * 
                     */
                    bool SecurityPolicyHasBeenSet() const;

                    /**
                     * 获取是否是标准的接入点 true是标准的 false不是标准的
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandardAccessPoint 是否是标准的接入点 true是标准的 false不是标准的
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStandardAccessPoint() const;

                    /**
                     * 设置是否是标准的接入点 true是标准的 false不是标准的
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standardAccessPoint 是否是标准的接入点 true是标准的 false不是标准的
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandardAccessPoint(const bool& _standardAccessPoint);

                    /**
                     * 判断参数 StandardAccessPoint 是否已赋值
                     * @return StandardAccessPoint 是否已赋值
                     * 
                     */
                    bool StandardAccessPointHasBeenSet() const;

                    /**
                     * 获取可用区信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneName 可用区信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneName 可用区信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                private:

                    /**
                     * vpc的id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id，支撑网和公网接入点，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 接入地址
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 接入点类型：
0：支撑网接入点 
1：VPC接入点 
2：公网接入点
                     */
                    uint64_t m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * 0：本地域访问，由于并没有配置跨地域容灾，所该类型的接入点，无法进行异地切换、异地访问切回；
1：本地域访问，由于配置了跨地域容灾，随时可以进行异地切换，该状态用于主集群的接入点
2：跨地域访问，已经完成了异地切换，该状态用于源集群的接入点，该状态下的接入点不可删除
3：跨地域访问，随时可以进行异地访问切回，该状态用于目标集群的接入点，该状态下的接入点不可删除
4:跨地域访问，目标集群已经完成异地切回，等待删除状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 接入点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessPointsType;
                    bool m_accessPointsTypeHasBeenSet;

                    /**
                     * 带宽，目前只有公网会有这个值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecurityPolicy> m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                    /**
                     * 是否是标准的接入点 true是标准的 false不是标准的
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_standardAccessPoint;
                    bool m_standardAccessPointHasBeenSet;

                    /**
                     * 可用区信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARNETWORKACCESSPOINTINFO_H_
