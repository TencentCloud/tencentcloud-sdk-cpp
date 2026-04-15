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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NDRASSETSERVICEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NDRASSETSERVICEINFO_H_

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
                * NDR资产识别信息
                */
                class NDRAssetServiceInfo : public AbstractModel
                {
                public:
                    NDRAssetServiceInfo();
                    ~NDRAssetServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产ID
                     * @return AssetId 资产ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产ID
                     * @param _assetId 资产ID
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
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
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取私有网络名称
                     * @return VpcName 私有网络名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpcName 私有网络名称
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
                     * 获取服务IP
                     * @return Ip 服务IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置服务IP
                     * @param _ip 服务IP
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
                     * 获取服务端口
                     * @return Port 服务端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置服务端口
                     * @param _port 服务端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取IP版本 
"0": IPv4
"1": IPv6
                     * @return IpVersion IP版本 
"0": IPv4
"1": IPv6
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置IP版本 
"0": IPv4
"1": IPv6
                     * @param _ipVersion IP版本 
"0": IPv4
"1": IPv6
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取IP类型
"0": 公网IP
"1": EIP
"-1": 内网IP
                     * @return IpType IP类型
"0": 公网IP
"1": EIP
"-1": 内网IP
                     * 
                     */
                    std::string GetIpType() const;

                    /**
                     * 设置IP类型
"0": 公网IP
"1": EIP
"-1": 内网IP
                     * @param _ipType IP类型
"0": 公网IP
"1": EIP
"-1": 内网IP
                     * 
                     */
                    void SetIpType(const std::string& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     * 
                     */
                    bool IpTypeHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return AssetService 服务名称
                     * 
                     */
                    std::string GetAssetService() const;

                    /**
                     * 设置服务名称
                     * @param _assetService 服务名称
                     * 
                     */
                    void SetAssetService(const std::string& _assetService);

                    /**
                     * 判断参数 AssetService 是否已赋值
                     * @return AssetService 是否已赋值
                     * 
                     */
                    bool AssetServiceHasBeenSet() const;

                    /**
                     * 获取服务版本
                     * @return AssetVersion 服务版本
                     * 
                     */
                    std::string GetAssetVersion() const;

                    /**
                     * 设置服务版本
                     * @param _assetVersion 服务版本
                     * 
                     */
                    void SetAssetVersion(const std::string& _assetVersion);

                    /**
                     * 判断参数 AssetVersion 是否已赋值
                     * @return AssetVersion 是否已赋值
                     * 
                     */
                    bool AssetVersionHasBeenSet() const;

                    /**
                     * 获取服务类型
                     * @return AssetCategory 服务类型
                     * 
                     */
                    std::string GetAssetCategory() const;

                    /**
                     * 设置服务类型
                     * @param _assetCategory 服务类型
                     * 
                     */
                    void SetAssetCategory(const std::string& _assetCategory);

                    /**
                     * 判断参数 AssetCategory 是否已赋值
                     * @return AssetCategory 是否已赋值
                     * 
                     */
                    bool AssetCategoryHasBeenSet() const;

                    /**
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取识别来源
"0": 流量识别
"1": 云资产实例
                     * @return IdentificationSource 识别来源
"0": 流量识别
"1": 云资产实例
                     * 
                     */
                    std::string GetIdentificationSource() const;

                    /**
                     * 设置识别来源
"0": 流量识别
"1": 云资产实例
                     * @param _identificationSource 识别来源
"0": 流量识别
"1": 云资产实例
                     * 
                     */
                    void SetIdentificationSource(const std::string& _identificationSource);

                    /**
                     * 判断参数 IdentificationSource 是否已赋值
                     * @return IdentificationSource 是否已赋值
                     * 
                     */
                    bool IdentificationSourceHasBeenSet() const;

                    /**
                     * 获取首次识别时间
                     * @return FirstIdentificationTime 首次识别时间
                     * 
                     */
                    std::string GetFirstIdentificationTime() const;

                    /**
                     * 设置首次识别时间
                     * @param _firstIdentificationTime 首次识别时间
                     * 
                     */
                    void SetFirstIdentificationTime(const std::string& _firstIdentificationTime);

                    /**
                     * 判断参数 FirstIdentificationTime 是否已赋值
                     * @return FirstIdentificationTime 是否已赋值
                     * 
                     */
                    bool FirstIdentificationTimeHasBeenSet() const;

                    /**
                     * 获取最近识别时间
                     * @return LatestIdentificationTime 最近识别时间
                     * 
                     */
                    std::string GetLatestIdentificationTime() const;

                    /**
                     * 设置最近识别时间
                     * @param _latestIdentificationTime 最近识别时间
                     * 
                     */
                    void SetLatestIdentificationTime(const std::string& _latestIdentificationTime);

                    /**
                     * 判断参数 LatestIdentificationTime 是否已赋值
                     * @return LatestIdentificationTime 是否已赋值
                     * 
                     */
                    bool LatestIdentificationTimeHasBeenSet() const;

                    /**
                     * 获取服务地址
                     * @return ServerAddr 服务地址
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置服务地址
                     * @param _serverAddr 服务地址
                     * 
                     */
                    void SetServerAddr(const std::string& _serverAddr);

                    /**
                     * 判断参数 ServerAddr 是否已赋值
                     * @return ServerAddr 是否已赋值
                     * 
                     */
                    bool ServerAddrHasBeenSet() const;

                private:

                    /**
                     * 资产ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 服务IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 服务端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * IP版本 
"0": IPv4
"1": IPv6
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * IP类型
"0": 公网IP
"1": EIP
"-1": 内网IP
                     */
                    std::string m_ipType;
                    bool m_ipTypeHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_assetService;
                    bool m_assetServiceHasBeenSet;

                    /**
                     * 服务版本
                     */
                    std::string m_assetVersion;
                    bool m_assetVersionHasBeenSet;

                    /**
                     * 服务类型
                     */
                    std::string m_assetCategory;
                    bool m_assetCategoryHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 识别来源
"0": 流量识别
"1": 云资产实例
                     */
                    std::string m_identificationSource;
                    bool m_identificationSourceHasBeenSet;

                    /**
                     * 首次识别时间
                     */
                    std::string m_firstIdentificationTime;
                    bool m_firstIdentificationTimeHasBeenSet;

                    /**
                     * 最近识别时间
                     */
                    std::string m_latestIdentificationTime;
                    bool m_latestIdentificationTimeHasBeenSet;

                    /**
                     * 服务地址
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NDRASSETSERVICEINFO_H_
