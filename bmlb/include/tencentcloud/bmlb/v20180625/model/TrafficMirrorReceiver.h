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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRRORRECEIVER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRRORRECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取与流量镜像绑定的接收机信息时返回的接收机信息。
                */
                class TrafficMirrorReceiver : public AbstractModel
                {
                public:
                    TrafficMirrorReceiver();
                    ~TrafficMirrorReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接收机实例ID。
                     * @return InstanceId 接收机实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置接收机实例ID。
                     * @param _instanceId 接收机实例ID。
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
                     * 获取接收机接收端口。
                     * @return Port 接收机接收端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置接收机接收端口。
                     * @param _port 接收机接收端口。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取接收机权重。
                     * @return Weight 接收机权重。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置接收机权重。
                     * @param _weight 接收机权重。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取流量镜像ID。
                     * @return TrafficMirrorId 流量镜像ID。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像ID。
                     * @param _trafficMirrorId 流量镜像ID。
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取接收机别名。
                     * @return Alias 接收机别名。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置接收机别名。
                     * @param _alias 接收机别名。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取接收机内网IP地址。
                     * @return LanIp 接收机内网IP地址。
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置接收机内网IP地址。
                     * @param _lanIp 接收机内网IP地址。
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取接收机所在的子网的ID。
                     * @return SubnetId 接收机所在的子网的ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置接收机所在的子网的ID。
                     * @param _subnetId 接收机所在的子网的ID。
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
                     * 获取接收机所在的子网的名称。
                     * @return SubnetName 接收机所在的子网的名称。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置接收机所在的子网的名称。
                     * @param _subnetName 接收机所在的子网的名称。
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取接收机所在的子网的Cidr。
                     * @return SubnetCidrBlock 接收机所在的子网的Cidr。
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 设置接收机所在的子网的Cidr。
                     * @param _subnetCidrBlock 接收机所在的子网的Cidr。
                     * 
                     */
                    void SetSubnetCidrBlock(const std::string& _subnetCidrBlock);

                    /**
                     * 判断参数 SubnetCidrBlock 是否已赋值
                     * @return SubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool SubnetCidrBlockHasBeenSet() const;

                    /**
                     * 获取接收机所在的私有网络的ID。
                     * @return VpcId 接收机所在的私有网络的ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置接收机所在的私有网络的ID。
                     * @param _vpcId 接收机所在的私有网络的ID。
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
                     * 获取接收机所在的私有网络的名称。
                     * @return VpcName 接收机所在的私有网络的名称。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置接收机所在的私有网络的名称。
                     * @param _vpcName 接收机所在的私有网络的名称。
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
                     * 获取接收机所在的私有网络的Cidr。
                     * @return VpcCidrBlock 接收机所在的私有网络的Cidr。
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置接收机所在的私有网络的Cidr。
                     * @param _vpcCidrBlock 接收机所在的私有网络的Cidr。
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取接收机的健康状态。
                     * @return HealthStatus 接收机的健康状态。
                     * 
                     */
                    std::string GetHealthStatus() const;

                    /**
                     * 设置接收机的健康状态。
                     * @param _healthStatus 接收机的健康状态。
                     * 
                     */
                    void SetHealthStatus(const std::string& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取接收机的可以执行的操作集合。
                     * @return Operates 接收机的可以执行的操作集合。
                     * 
                     */
                    std::vector<std::string> GetOperates() const;

                    /**
                     * 设置接收机的可以执行的操作集合。
                     * @param _operates 接收机的可以执行的操作集合。
                     * 
                     */
                    void SetOperates(const std::vector<std::string>& _operates);

                    /**
                     * 判断参数 Operates 是否已赋值
                     * @return Operates 是否已赋值
                     * 
                     */
                    bool OperatesHasBeenSet() const;

                private:

                    /**
                     * 接收机实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 接收机接收端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 接收机权重。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 流量镜像ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 接收机别名。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 接收机内网IP地址。
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 接收机所在的子网的ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 接收机所在的子网的名称。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 接收机所在的子网的Cidr。
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                    /**
                     * 接收机所在的私有网络的ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 接收机所在的私有网络的名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 接收机所在的私有网络的Cidr。
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 接收机的健康状态。
                     */
                    std::string m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * 接收机的可以执行的操作集合。
                     */
                    std::vector<std::string> m_operates;
                    bool m_operatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRRORRECEIVER_H_
