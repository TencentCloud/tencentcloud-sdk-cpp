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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINERINSTANCE_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINERINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cis/v20180408/model/Container.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 容器实例的具体信息
                */
                class ContainerInstance : public AbstractModel
                {
                public:
                    ContainerInstance();
                    ~ContainerInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器实例ID
                     * @return InstanceId 容器实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置容器实例ID
                     * @param _instanceId 容器实例ID
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
                     * 获取容器实例名称
                     * @return InstanceName 容器实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置容器实例名称
                     * @param _instanceName 容器实例名称
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
                     * 获取容器实例所属VpcId
                     * @return VpcId 容器实例所属VpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置容器实例所属VpcId
                     * @param _vpcId 容器实例所属VpcId
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
                     * 获取容器实例所属SubnetId
                     * @return SubnetId 容器实例所属SubnetId
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置容器实例所属SubnetId
                     * @param _subnetId 容器实例所属SubnetId
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
                     * 获取容器实例状态
                     * @return State 容器实例状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置容器实例状态
                     * @param _state 容器实例状态
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
                     * 获取容器列表
                     * @return Containers 容器列表
                     * 
                     */
                    std::vector<Container> GetContainers() const;

                    /**
                     * 设置容器列表
                     * @param _containers 容器列表
                     * 
                     */
                    void SetContainers(const std::vector<Container>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取重启策略
                     * @return RestartPolicy 重启策略
                     * 
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置重启策略
                     * @param _restartPolicy 重启策略
                     * 
                     */
                    void SetRestartPolicy(const std::string& _restartPolicy);

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     * 
                     */
                    bool RestartPolicyHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取启动时间
                     * @return StartTime 启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
                     * @param _startTime 启动时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

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
                     * 获取Vpc名称
                     * @return VpcName Vpc名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置Vpc名称
                     * @param _vpcName Vpc名称
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
                     * 获取VpcCidr
                     * @return VpcCidr VpcCidr
                     * 
                     */
                    std::string GetVpcCidr() const;

                    /**
                     * 设置VpcCidr
                     * @param _vpcCidr VpcCidr
                     * 
                     */
                    void SetVpcCidr(const std::string& _vpcCidr);

                    /**
                     * 判断参数 VpcCidr 是否已赋值
                     * @return VpcCidr 是否已赋值
                     * 
                     */
                    bool VpcCidrHasBeenSet() const;

                    /**
                     * 获取SubnetName
                     * @return SubnetName SubnetName
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置SubnetName
                     * @param _subnetName SubnetName
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
                     * 获取子网Cidr
                     * @return SubnetCidr 子网Cidr
                     * 
                     */
                    std::string GetSubnetCidr() const;

                    /**
                     * 设置子网Cidr
                     * @param _subnetCidr 子网Cidr
                     * 
                     */
                    void SetSubnetCidr(const std::string& _subnetCidr);

                    /**
                     * 判断参数 SubnetCidr 是否已赋值
                     * @return SubnetCidr 是否已赋值
                     * 
                     */
                    bool SubnetCidrHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return LanIp 内网IP
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置内网IP
                     * @param _lanIp 内网IP
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                private:

                    /**
                     * 容器实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 容器实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 容器实例所属VpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 容器实例所属SubnetId
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 容器实例状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 容器列表
                     */
                    std::vector<Container> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * 重启策略
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Vpc名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VpcCidr
                     */
                    std::string m_vpcCidr;
                    bool m_vpcCidrHasBeenSet;

                    /**
                     * SubnetName
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网Cidr
                     */
                    std::string m_subnetCidr;
                    bool m_subnetCidrHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINERINSTANCE_H_
