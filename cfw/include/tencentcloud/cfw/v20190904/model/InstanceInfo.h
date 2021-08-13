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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_INSTANCEINFO_H_

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
                * // InstanceInfo 实例详情结果
type InstanceInfo struct {
	AppID        string `json:"AppId" gorm:"column:appid"`
	Region       string `json:"Region" gorm:"column:region"`
	VPCID        string `json:"VpcId" gorm:"column:vpc_id"`
	SubNetID     string `json:"SubnetId" gorm:"column:subnet_id"`
	InstanceID   string `json:"InstanceId" gorm:"column:instance_id"`
	InstanceName string `json:"InstanceName" gorm:"column:instance_name"`
	//InsType common.CVM 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA
	InsType   int    `json:"InsType" gorm:"column:instance_type"`
	PublicIP  string `json:"PublicIp" gorm:"column:public_ip"`
	PrivateIP string `json:"PrivateIp" gorm:"column:ip"`

	//规则下发无需管，前端展示用
	PortNum          string `json:"PortNum" gorm:"column:port_num"`
	LeakNum          string `json:"LeakNum" gorm:"column:leak_num"`
	ResourceGroupNum int    `json:"ResourceGroupNum"`
	VPCName          string `json:"VPCName" gorm:"column:VPCName"`
}

                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid信息
                     * @return AppId appid信息
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置appid信息
                     * @param AppId appid信息
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param Region 地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取vpcid信息
                     * @return VpcId vpcid信息
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcid信息
                     * @param VpcId vpcid信息
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取vpc名称
                     * @return VPCName vpc名称
                     */
                    std::string GetVPCName() const;

                    /**
                     * 设置vpc名称
                     * @param VPCName vpc名称
                     */
                    void SetVPCName(const std::string& _vPCName);

                    /**
                     * 判断参数 VPCName 是否已赋值
                     * @return VPCName 是否已赋值
                     */
                    bool VPCNameHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return SubnetId 子网id
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param SubnetId 子网id
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取资产id
                     * @return InstanceId 资产id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资产id
                     * @param InstanceId 资产id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取资产名
                     * @return InstanceName 资产名
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置资产名
                     * @param InstanceName 资产名
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     * @return InsType 资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     */
                    int64_t GetInsType() const;

                    /**
                     * 设置资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     * @param InsType 资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     */
                    void SetInsType(const int64_t& _insType);

                    /**
                     * 判断参数 InsType 是否已赋值
                     * @return InsType 是否已赋值
                     */
                    bool InsTypeHasBeenSet() const;

                    /**
                     * 获取公网ip
                     * @return PublicIp 公网ip
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
                     * @param PublicIp 公网ip
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取内网ip
                     * @return PrivateIp 内网ip
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip
                     * @param PrivateIp 内网ip
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取端口数
                     * @return PortNum 端口数
                     */
                    std::string GetPortNum() const;

                    /**
                     * 设置端口数
                     * @param PortNum 端口数
                     */
                    void SetPortNum(const std::string& _portNum);

                    /**
                     * 判断参数 PortNum 是否已赋值
                     * @return PortNum 是否已赋值
                     */
                    bool PortNumHasBeenSet() const;

                    /**
                     * 获取漏洞数
                     * @return LeakNum 漏洞数
                     */
                    std::string GetLeakNum() const;

                    /**
                     * 设置漏洞数
                     * @param LeakNum 漏洞数
                     */
                    void SetLeakNum(const std::string& _leakNum);

                    /**
                     * 判断参数 LeakNum 是否已赋值
                     * @return LeakNum 是否已赋值
                     */
                    bool LeakNumHasBeenSet() const;

                    /**
                     * 获取1，公网 2内网
                     * @return InsSource 1，公网 2内网
                     */
                    std::string GetInsSource() const;

                    /**
                     * 设置1，公网 2内网
                     * @param InsSource 1，公网 2内网
                     */
                    void SetInsSource(const std::string& _insSource);

                    /**
                     * 判断参数 InsSource 是否已赋值
                     * @return InsSource 是否已赋值
                     */
                    bool InsSourceHasBeenSet() const;

                    /**
                     * 获取[a,b]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePath [a,b]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetResourcePath() const;

                    /**
                     * 设置[a,b]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourcePath [a,b]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourcePath(const std::vector<std::string>& _resourcePath);

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     */
                    bool ResourcePathHasBeenSet() const;

                private:

                    /**
                     * appid信息
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * vpcid信息
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc名称
                     */
                    std::string m_vPCName;
                    bool m_vPCNameHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     */
                    int64_t m_insType;
                    bool m_insTypeHasBeenSet;

                    /**
                     * 公网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 端口数
                     */
                    std::string m_portNum;
                    bool m_portNumHasBeenSet;

                    /**
                     * 漏洞数
                     */
                    std::string m_leakNum;
                    bool m_leakNumHasBeenSet;

                    /**
                     * 1，公网 2内网
                     */
                    std::string m_insSource;
                    bool m_insSourceHasBeenSet;

                    /**
                     * [a,b]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_INSTANCEINFO_H_
