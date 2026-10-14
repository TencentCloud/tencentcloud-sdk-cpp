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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPIPFLOWSTAT_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPIPFLOWSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC防火墙状态监控图
                */
                class FwGroupIpFlowStat : public AbstractModel
                {
                public:
                    FwGroupIpFlowStat();
                    ~FwGroupIpFlowStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取VPCID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId VPCID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPCID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId VPCID
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
                     * 获取VPC 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcName VPC 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcName VPC 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取峰值流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowMax 峰值流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFlowMax() const;

                    /**
                     * 设置峰值流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowMax 峰值流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowMax(const int64_t& _flowMax);

                    /**
                     * 判断参数 FlowMax 是否已赋值
                     * @return FlowMax 是否已赋值
                     * 
                     */
                    bool FlowMaxHasBeenSet() const;

                    /**
                     * 获取均值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowAvg 均值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFlowAvg() const;

                    /**
                     * 设置均值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowAvg 均值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowAvg(const double& _flowAvg);

                    /**
                     * 判断参数 FlowAvg 是否已赋值
                     * @return FlowAvg 是否已赋值
                     * 
                     */
                    bool FlowAvgHasBeenSet() const;

                    /**
                     * 获取限速状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcRuleStatus 限速状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTcRuleStatus() const;

                    /**
                     * 设置限速状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tcRuleStatus 限速状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTcRuleStatus(const int64_t& _tcRuleStatus);

                    /**
                     * 判断参数 TcRuleStatus 是否已赋值
                     * @return TcRuleStatus 是否已赋值
                     * 
                     */
                    bool TcRuleStatusHasBeenSet() const;

                    /**
                     * 获取防火墙ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwInsId 防火墙ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置防火墙ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwInsId 防火墙ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                    /**
                     * 获取0 IPV4 , 1 IPV6
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpVersion 0 IPV4 , 1 IPV6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置0 IPV4 , 1 IPV6
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipVersion 0 IPV4 , 1 IPV6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * VPCID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 峰值流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_flowMax;
                    bool m_flowMaxHasBeenSet;

                    /**
                     * 均值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_flowAvg;
                    bool m_flowAvgHasBeenSet;

                    /**
                     * 限速状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tcRuleStatus;
                    bool m_tcRuleStatusHasBeenSet;

                    /**
                     * 防火墙ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * 0 IPV4 , 1 IPV6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPIPFLOWSTAT_H_
