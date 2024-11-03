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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_EDGEIPINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_EDGEIPINFO_H_

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
                * 边界防火墙公网IP开关列表
                */
                class EdgeIpInfo : public AbstractModel
                {
                public:
                    EdgeIpInfo();
                    ~EdgeIpInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
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
                     * 获取公网 IP 类型 1 公网,2 弹性,3 弹性ipv6,4 anycastIP, 6 HighQualityEIP
                     * @return PublicIpType 公网 IP 类型 1 公网,2 弹性,3 弹性ipv6,4 anycastIP, 6 HighQualityEIP
                     * 
                     */
                    int64_t GetPublicIpType() const;

                    /**
                     * 设置公网 IP 类型 1 公网,2 弹性,3 弹性ipv6,4 anycastIP, 6 HighQualityEIP
                     * @param _publicIpType 公网 IP 类型 1 公网,2 弹性,3 弹性ipv6,4 anycastIP, 6 HighQualityEIP
                     * 
                     */
                    void SetPublicIpType(const int64_t& _publicIpType);

                    /**
                     * 判断参数 PublicIpType 是否已赋值
                     * @return PublicIpType 是否已赋值
                     * 
                     */
                    bool PublicIpTypeHasBeenSet() const;

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
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取内网IP
                     * @return IntranetIp 内网IP
                     * 
                     */
                    std::string GetIntranetIp() const;

                    /**
                     * 设置内网IP
                     * @param _intranetIp 内网IP
                     * 
                     */
                    void SetIntranetIp(const std::string& _intranetIp);

                    /**
                     * 判断参数 IntranetIp 是否已赋值
                     * @return IntranetIp 是否已赋值
                     * 
                     */
                    bool IntranetIpHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

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
                     * 获取风险端口数
                     * @return PortRiskCount 风险端口数
                     * 
                     */
                    int64_t GetPortRiskCount() const;

                    /**
                     * 设置风险端口数
                     * @param _portRiskCount 风险端口数
                     * 
                     */
                    void SetPortRiskCount(const int64_t& _portRiskCount);

                    /**
                     * 判断参数 PortRiskCount 是否已赋值
                     * @return PortRiskCount 是否已赋值
                     * 
                     */
                    bool PortRiskCountHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
                     * @return LastScanTime 最近扫描时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最近扫描时间
                     * @param _lastScanTime 最近扫描时间
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取是否为region eip
0 不为region eip，不能选择串行
1 为region eip 可以选择串行
                     * @return IsRegionEip 是否为region eip
0 不为region eip，不能选择串行
1 为region eip 可以选择串行
                     * 
                     */
                    int64_t GetIsRegionEip() const;

                    /**
                     * 设置是否为region eip
0 不为region eip，不能选择串行
1 为region eip 可以选择串行
                     * @param _isRegionEip 是否为region eip
0 不为region eip，不能选择串行
1 为region eip 可以选择串行
                     * 
                     */
                    void SetIsRegionEip(const int64_t& _isRegionEip);

                    /**
                     * 判断参数 IsRegionEip 是否已赋值
                     * @return IsRegionEip 是否已赋值
                     * 
                     */
                    bool IsRegionEipHasBeenSet() const;

                    /**
                     * 获取EIP 所关联的VPC
                     * @return VpcId EIP 所关联的VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置EIP 所关联的VPC
                     * @param _vpcId EIP 所关联的VPC
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
                     * 获取0: 该地域暂未支持串行
1: 该用户未在该地域配置串行带宽
2: 该用户已在该地域配置串行带宽，可以开启串行开关
                     * @return IsSerialRegion 0: 该地域暂未支持串行
1: 该用户未在该地域配置串行带宽
2: 该用户已在该地域配置串行带宽，可以开启串行开关
                     * 
                     */
                    int64_t GetIsSerialRegion() const;

                    /**
                     * 设置0: 该地域暂未支持串行
1: 该用户未在该地域配置串行带宽
2: 该用户已在该地域配置串行带宽，可以开启串行开关
                     * @param _isSerialRegion 0: 该地域暂未支持串行
1: 该用户未在该地域配置串行带宽
2: 该用户已在该地域配置串行带宽，可以开启串行开关
                     * 
                     */
                    void SetIsSerialRegion(const int64_t& _isSerialRegion);

                    /**
                     * 判断参数 IsSerialRegion 是否已赋值
                     * @return IsSerialRegion 是否已赋值
                     * 
                     */
                    bool IsSerialRegionHasBeenSet() const;

                    /**
                     * 获取0: 不是公网CLB 可以开启串行开关
1: 是公网CLB 不可以开启串行开关

                     * @return IsPublicClb 0: 不是公网CLB 可以开启串行开关
1: 是公网CLB 不可以开启串行开关

                     * 
                     */
                    int64_t GetIsPublicClb() const;

                    /**
                     * 设置0: 不是公网CLB 可以开启串行开关
1: 是公网CLB 不可以开启串行开关

                     * @param _isPublicClb 0: 不是公网CLB 可以开启串行开关
1: 是公网CLB 不可以开启串行开关

                     * 
                     */
                    void SetIsPublicClb(const int64_t& _isPublicClb);

                    /**
                     * 判断参数 IsPublicClb 是否已赋值
                     * @return IsPublicClb 是否已赋值
                     * 
                     */
                    bool IsPublicClbHasBeenSet() const;

                    /**
                     * 获取0: 开启开关时提示要创建私有连接。
1: 关闭该开关是提示删除私有连接。
如果大于 1: 关闭开关 、开启开关不需提示创建删除私有连接。
                     * @return EndpointBindEipNum 0: 开启开关时提示要创建私有连接。
1: 关闭该开关是提示删除私有连接。
如果大于 1: 关闭开关 、开启开关不需提示创建删除私有连接。
                     * 
                     */
                    int64_t GetEndpointBindEipNum() const;

                    /**
                     * 设置0: 开启开关时提示要创建私有连接。
1: 关闭该开关是提示删除私有连接。
如果大于 1: 关闭开关 、开启开关不需提示创建删除私有连接。
                     * @param _endpointBindEipNum 0: 开启开关时提示要创建私有连接。
1: 关闭该开关是提示删除私有连接。
如果大于 1: 关闭开关 、开启开关不需提示创建删除私有连接。
                     * 
                     */
                    void SetEndpointBindEipNum(const int64_t& _endpointBindEipNum);

                    /**
                     * 判断参数 EndpointBindEipNum 是否已赋值
                     * @return EndpointBindEipNum 是否已赋值
                     * 
                     */
                    bool EndpointBindEipNumHasBeenSet() const;

                    /**
                     * 获取扫描深度
                     * @return ScanMode 扫描深度
                     * 
                     */
                    std::string GetScanMode() const;

                    /**
                     * 设置扫描深度
                     * @param _scanMode 扫描深度
                     * 
                     */
                    void SetScanMode(const std::string& _scanMode);

                    /**
                     * 判断参数 ScanMode 是否已赋值
                     * @return ScanMode 是否已赋值
                     * 
                     */
                    bool ScanModeHasBeenSet() const;

                    /**
                     * 获取扫描状态
                     * @return ScanStatus 扫描状态
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置扫描状态
                     * @param _scanStatus 扫描状态
                     * 
                     */
                    void SetScanStatus(const int64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     * @return Status 开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     * @param _status 开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取私有连接ID
                     * @return EndpointId 私有连接ID
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置私有连接ID
                     * @param _endpointId 私有连接ID
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取私有连接IP
                     * @return EndpointIp 私有连接IP
                     * 
                     */
                    std::string GetEndpointIp() const;

                    /**
                     * 设置私有连接IP
                     * @param _endpointIp 私有连接IP
                     * 
                     */
                    void SetEndpointIp(const std::string& _endpointIp);

                    /**
                     * 判断参数 EndpointIp 是否已赋值
                     * @return EndpointIp 是否已赋值
                     * 
                     */
                    bool EndpointIpHasBeenSet() const;

                    /**
                     * 获取0 : 旁路
1 : 串行
2 : 正在模式切换
                     * @return SwitchMode 0 : 旁路
1 : 串行
2 : 正在模式切换
                     * 
                     */
                    uint64_t GetSwitchMode() const;

                    /**
                     * 设置0 : 旁路
1 : 串行
2 : 正在模式切换
                     * @param _switchMode 0 : 旁路
1 : 串行
2 : 正在模式切换
                     * 
                     */
                    void SetSwitchMode(const uint64_t& _switchMode);

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                    /**
                     * 获取开关权重
                     * @return SwitchWeight 开关权重
                     * 
                     */
                    int64_t GetSwitchWeight() const;

                    /**
                     * 设置开关权重
                     * @param _switchWeight 开关权重
                     * 
                     */
                    void SetSwitchWeight(const int64_t& _switchWeight);

                    /**
                     * 判断参数 SwitchWeight 是否已赋值
                     * @return SwitchWeight 是否已赋值
                     * 
                     */
                    bool SwitchWeightHasBeenSet() const;

                    /**
                     * 获取域名化CLB的域名
                     * @return Domain 域名化CLB的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名化CLB的域名
                     * @param _domain 域名化CLB的域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取IP超量状态
                     * @return OverUsedStatus IP超量状态
                     * 
                     */
                    int64_t GetOverUsedStatus() const;

                    /**
                     * 设置IP超量状态
                     * @param _overUsedStatus IP超量状态
                     * 
                     */
                    void SetOverUsedStatus(const int64_t& _overUsedStatus);

                    /**
                     * 判断参数 OverUsedStatus 是否已赋值
                     * @return OverUsedStatus 是否已赋值
                     * 
                     */
                    bool OverUsedStatusHasBeenSet() const;

                private:

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 公网 IP 类型 1 公网,2 弹性,3 弹性ipv6,4 anycastIP, 6 HighQualityEIP
                     */
                    int64_t m_publicIpType;
                    bool m_publicIpTypeHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_intranetIp;
                    bool m_intranetIpHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 风险端口数
                     */
                    int64_t m_portRiskCount;
                    bool m_portRiskCountHasBeenSet;

                    /**
                     * 最近扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 是否为region eip
0 不为region eip，不能选择串行
1 为region eip 可以选择串行
                     */
                    int64_t m_isRegionEip;
                    bool m_isRegionEipHasBeenSet;

                    /**
                     * EIP 所关联的VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 0: 该地域暂未支持串行
1: 该用户未在该地域配置串行带宽
2: 该用户已在该地域配置串行带宽，可以开启串行开关
                     */
                    int64_t m_isSerialRegion;
                    bool m_isSerialRegionHasBeenSet;

                    /**
                     * 0: 不是公网CLB 可以开启串行开关
1: 是公网CLB 不可以开启串行开关

                     */
                    int64_t m_isPublicClb;
                    bool m_isPublicClbHasBeenSet;

                    /**
                     * 0: 开启开关时提示要创建私有连接。
1: 关闭该开关是提示删除私有连接。
如果大于 1: 关闭开关 、开启开关不需提示创建删除私有连接。
                     */
                    int64_t m_endpointBindEipNum;
                    bool m_endpointBindEipNumHasBeenSet;

                    /**
                     * 扫描深度
                     */
                    std::string m_scanMode;
                    bool m_scanModeHasBeenSet;

                    /**
                     * 扫描状态
                     */
                    int64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 开关状态
0 : 关闭
1 : 开启
2 : 开启中
3 : 关闭中
4 : 异常
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 私有连接ID
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * 私有连接IP
                     */
                    std::string m_endpointIp;
                    bool m_endpointIpHasBeenSet;

                    /**
                     * 0 : 旁路
1 : 串行
2 : 正在模式切换
                     */
                    uint64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * 开关权重
                     */
                    int64_t m_switchWeight;
                    bool m_switchWeightHasBeenSet;

                    /**
                     * 域名化CLB的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * IP超量状态
                     */
                    int64_t m_overUsedStatus;
                    bool m_overUsedStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_EDGEIPINFO_H_
