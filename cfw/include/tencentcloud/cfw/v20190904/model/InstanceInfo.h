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
                * 实例详情结果
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
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置appid信息
                     * @param _appId appid信息
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取资产来源
1公网 2内网
                     * @return InsSource 资产来源
1公网 2内网
                     * 
                     */
                    std::string GetInsSource() const;

                    /**
                     * 设置资产来源
1公网 2内网
                     * @param _insSource 资产来源
1公网 2内网
                     * 
                     */
                    void SetInsSource(const std::string& _insSource);

                    /**
                     * 判断参数 InsSource 是否已赋值
                     * @return InsSource 是否已赋值
                     * 
                     */
                    bool InsSourceHasBeenSet() const;

                    /**
                     * 获取资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     * @return InsType 资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     * 
                     */
                    int64_t GetInsType() const;

                    /**
                     * 设置资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     * @param _insType 资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     * 
                     */
                    void SetInsType(const int64_t& _insType);

                    /**
                     * 判断参数 InsType 是否已赋值
                     * @return InsType 是否已赋值
                     * 
                     */
                    bool InsTypeHasBeenSet() const;

                    /**
                     * 获取资产id
                     * @return InstanceId 资产id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资产id
                     * @param _instanceId 资产id
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
                     * 获取资产名
                     * @return InstanceName 资产名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置资产名
                     * @param _instanceName 资产名
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
                     * 获取漏洞数
                     * @return LeakNum 漏洞数
                     * 
                     */
                    std::string GetLeakNum() const;

                    /**
                     * 设置漏洞数
                     * @param _leakNum 漏洞数
                     * 
                     */
                    void SetLeakNum(const std::string& _leakNum);

                    /**
                     * 判断参数 LeakNum 是否已赋值
                     * @return LeakNum 是否已赋值
                     * 
                     */
                    bool LeakNumHasBeenSet() const;

                    /**
                     * 获取端口数
                     * @return PortNum 端口数
                     * 
                     */
                    std::string GetPortNum() const;

                    /**
                     * 设置端口数
                     * @param _portNum 端口数
                     * 
                     */
                    void SetPortNum(const std::string& _portNum);

                    /**
                     * 判断参数 PortNum 是否已赋值
                     * @return PortNum 是否已赋值
                     * 
                     */
                    bool PortNumHasBeenSet() const;

                    /**
                     * 获取内网ip
                     * @return PrivateIp 内网ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip
                     * @param _privateIp 内网ip
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取公网ip
                     * @return PublicIp 公网ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
                     * @param _publicIp 公网ip
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取地域
                     * @return RegionKey 地域
                     * 
                     */
                    std::string GetRegionKey() const;

                    /**
                     * 设置地域
                     * @param _regionKey 地域
                     * 
                     */
                    void SetRegionKey(const std::string& _regionKey);

                    /**
                     * 判断参数 RegionKey 是否已赋值
                     * @return RegionKey 是否已赋值
                     * 
                     */
                    bool RegionKeyHasBeenSet() const;

                    /**
                     * 获取资产路径
                     * @return ResourcePath 资产路径
                     * 
                     */
                    std::vector<std::string> GetResourcePath() const;

                    /**
                     * 设置资产路径
                     * @param _resourcePath 资产路径
                     * 
                     */
                    void SetResourcePath(const std::vector<std::string>& _resourcePath);

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                    /**
                     * 获取扫描结果
                     * @return Server 扫描结果
                     * 
                     */
                    std::vector<std::string> GetServer() const;

                    /**
                     * 设置扫描结果
                     * @param _server 扫描结果
                     * 
                     */
                    void SetServer(const std::vector<std::string>& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return SubnetId 子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _subnetId 子网id
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
                     * 获取vpc名称
                     * @return VPCName vpc名称
                     * 
                     */
                    std::string GetVPCName() const;

                    /**
                     * 设置vpc名称
                     * @param _vPCName vpc名称
                     * 
                     */
                    void SetVPCName(const std::string& _vPCName);

                    /**
                     * 判断参数 VPCName 是否已赋值
                     * @return VPCName 是否已赋值
                     * 
                     */
                    bool VPCNameHasBeenSet() const;

                    /**
                     * 获取vpcid信息
                     * @return VpcId vpcid信息
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcid信息
                     * @param _vpcId vpcid信息
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * appid信息
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 资产来源
1公网 2内网
                     */
                    std::string m_insSource;
                    bool m_insSourceHasBeenSet;

                    /**
                     * 资产类型
 3是cvm实例,4是clb实例,5是eni实例,6是mysql,7是redis,8是NAT,9是VPN,10是ES,11是MARIADB,12是KAFKA 13 NATFW
                     */
                    int64_t m_insType;
                    bool m_insTypeHasBeenSet;

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
                     * 漏洞数
                     */
                    std::string m_leakNum;
                    bool m_leakNumHasBeenSet;

                    /**
                     * 端口数
                     */
                    std::string m_portNum;
                    bool m_portNumHasBeenSet;

                    /**
                     * 内网ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 公网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_regionKey;
                    bool m_regionKeyHasBeenSet;

                    /**
                     * 资产路径
                     */
                    std::vector<std::string> m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                    /**
                     * 扫描结果
                     */
                    std::vector<std::string> m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * vpc名称
                     */
                    std::string m_vPCName;
                    bool m_vPCNameHasBeenSet;

                    /**
                     * vpcid信息
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_INSTANCEINFO_H_
