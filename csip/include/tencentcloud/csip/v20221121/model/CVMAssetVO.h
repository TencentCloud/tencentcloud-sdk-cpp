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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机资产信息
                */
                class CVMAssetVO : public AbstractModel
                {
                public:
                    CVMAssetVO();
                    ~CVMAssetVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CWPStatus 防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCWPStatus() const;

                    /**
                     * 设置防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cWPStatus 防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCWPStatus(const uint64_t& _cWPStatus);

                    /**
                     * 判断参数 CWPStatus 是否已赋值
                     * @return CWPStatus 是否已赋值
                     * 
                     */
                    bool CWPStatusHasBeenSet() const;

                    /**
                     * 获取资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetCreateTime 资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetCreateTime 资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetCreateTime(const std::string& _assetCreateTime);

                    /**
                     * 判断参数 AssetCreateTime 是否已赋值
                     * @return AssetCreateTime 是否已赋值
                     * 
                     */
                    bool AssetCreateTimeHasBeenSet() const;

                    /**
                     * 获取公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIp 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIp 公网ip
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取私网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIp 私网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置私网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIp 私网ip
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId vpc id
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
                     * 获取vpc 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcName vpc 名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcName vpc 名
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
                     * 获取appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NickName 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nickName 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableArea 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvailableArea() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableArea 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableArea(const std::string& _availableArea);

                    /**
                     * 判断参数 AvailableArea 是否已赋值
                     * @return AvailableArea 是否已赋值
                     * 
                     */
                    bool AvailableAreaHasBeenSet() const;

                    /**
                     * 获取是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCore 是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCore 是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网id
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
                     * 获取子网名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetName 子网名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetName 子网名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceUuid uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceUuid() const;

                    /**
                     * 设置uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceUuid uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceUuid(const std::string& _instanceUuid);

                    /**
                     * 判断参数 InstanceUuid 是否已赋值
                     * @return InstanceUuid 是否已赋值
                     * 
                     */
                    bool InstanceUuidHasBeenSet() const;

                    /**
                     * 获取qquid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceQUuid qquid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceQUuid() const;

                    /**
                     * 设置qquid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceQUuid qquid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceQUuid(const std::string& _instanceQUuid);

                    /**
                     * 判断参数 InstanceQUuid 是否已赋值
                     * @return InstanceQUuid 是否已赋值
                     * 
                     */
                    bool InstanceQUuidHasBeenSet() const;

                    /**
                     * 获取os名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsName os名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置os名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osName os名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionCount 分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionCount 分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionCount(const uint64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取cpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPUInfo cpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCPUInfo() const;

                    /**
                     * 设置cpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cPUInfo cpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCPUInfo(const std::string& _cPUInfo);

                    /**
                     * 判断参数 CPUInfo 是否已赋值
                     * @return CPUInfo 是否已赋值
                     * 
                     */
                    bool CPUInfoHasBeenSet() const;

                    /**
                     * 获取cpu大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPUSize cpu大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCPUSize() const;

                    /**
                     * 设置cpu大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cPUSize cpu大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCPUSize(const uint64_t& _cPUSize);

                    /**
                     * 判断参数 CPUSize 是否已赋值
                     * @return CPUSize 是否已赋值
                     * 
                     */
                    bool CPUSizeHasBeenSet() const;

                    /**
                     * 获取cpu负载
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPULoad cpu负载
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCPULoad() const;

                    /**
                     * 设置cpu负载
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cPULoad cpu负载
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCPULoad(const std::string& _cPULoad);

                    /**
                     * 判断参数 CPULoad 是否已赋值
                     * @return CPULoad 是否已赋值
                     * 
                     */
                    bool CPULoadHasBeenSet() const;

                    /**
                     * 获取内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemorySize 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemorySize() const;

                    /**
                     * 设置内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memorySize 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemorySize(const std::string& _memorySize);

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取内存负载
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemoryLoad 内存负载
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemoryLoad() const;

                    /**
                     * 设置内存负载
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memoryLoad 内存负载
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemoryLoad(const std::string& _memoryLoad);

                    /**
                     * 判断参数 MemoryLoad 是否已赋值
                     * @return MemoryLoad 是否已赋值
                     * 
                     */
                    bool MemoryLoadHasBeenSet() const;

                    /**
                     * 获取硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskSize 硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskSize(const std::string& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取硬盘负载
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskLoad 硬盘负载
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskLoad() const;

                    /**
                     * 设置硬盘负载
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskLoad 硬盘负载
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskLoad(const std::string& _diskLoad);

                    /**
                     * 判断参数 DiskLoad 是否已赋值
                     * @return DiskLoad 是否已赋值
                     * 
                     */
                    bool DiskLoadHasBeenSet() const;

                    /**
                     * 获取账号数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountCount 账号数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountCount() const;

                    /**
                     * 设置账号数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountCount 账号数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountCount(const std::string& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessCount 进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessCount() const;

                    /**
                     * 设置进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processCount 进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessCount(const std::string& _processCount);

                    /**
                     * 判断参数 ProcessCount 是否已赋值
                     * @return ProcessCount 是否已赋值
                     * 
                     */
                    bool ProcessCountHasBeenSet() const;

                    /**
                     * 获取软件应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppCount 软件应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppCount() const;

                    /**
                     * 设置软件应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appCount 软件应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppCount(const std::string& _appCount);

                    /**
                     * 判断参数 AppCount 是否已赋值
                     * @return AppCount 是否已赋值
                     * 
                     */
                    bool AppCountHasBeenSet() const;

                    /**
                     * 获取监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PortCount 监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPortCount() const;

                    /**
                     * 设置监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _portCount 监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPortCount(const uint64_t& _portCount);

                    /**
                     * 判断参数 PortCount 是否已赋值
                     * @return PortCount 是否已赋值
                     * 
                     */
                    bool PortCountHasBeenSet() const;

                    /**
                     * 获取网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attack 网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attack 网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Access 网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _access 网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Intercept 网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntercept() const;

                    /**
                     * 设置网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intercept 网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntercept(const uint64_t& _intercept);

                    /**
                     * 判断参数 Intercept 是否已赋值
                     * @return Intercept 是否已赋值
                     * 
                     */
                    bool InterceptHasBeenSet() const;

                    /**
                     * 获取入向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InBandwidth 入向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置入向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inBandwidth 入向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInBandwidth(const std::string& _inBandwidth);

                    /**
                     * 判断参数 InBandwidth 是否已赋值
                     * @return InBandwidth 是否已赋值
                     * 
                     */
                    bool InBandwidthHasBeenSet() const;

                    /**
                     * 获取出向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutBandwidth 出向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置出向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outBandwidth 出向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutBandwidth(const std::string& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取入向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InFlow 入向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置入向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inFlow 入向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInFlow(const std::string& _inFlow);

                    /**
                     * 判断参数 InFlow 是否已赋值
                     * @return InFlow 是否已赋值
                     * 
                     */
                    bool InFlowHasBeenSet() const;

                    /**
                     * 获取出向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutFlow 出向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置出向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outFlow 出向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutFlow(const std::string& _outFlow);

                    /**
                     * 判断参数 OutFlow 是否已赋值
                     * @return OutFlow 是否已赋值
                     * 
                     */
                    bool OutFlowHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastScanTime 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastScanTime 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取恶意主动外联
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetWorkOut 恶意主动外联
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNetWorkOut() const;

                    /**
                     * 设置恶意主动外联
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netWorkOut 恶意主动外联
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetWorkOut(const uint64_t& _netWorkOut);

                    /**
                     * 判断参数 NetWorkOut 是否已赋值
                     * @return NetWorkOut 是否已赋值
                     * 
                     */
                    bool NetWorkOutHasBeenSet() const;

                    /**
                     * 获取端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PortRisk 端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _portRisk 端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPortRisk(const uint64_t& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     * 
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulnerabilityRisk 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVulnerabilityRisk() const;

                    /**
                     * 设置漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulnerabilityRisk 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk);

                    /**
                     * 判断参数 VulnerabilityRisk 是否已赋值
                     * @return VulnerabilityRisk 是否已赋值
                     * 
                     */
                    bool VulnerabilityRiskHasBeenSet() const;

                    /**
                     * 获取配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigurationRisk 配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConfigurationRisk() const;

                    /**
                     * 设置配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configurationRisk 配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigurationRisk(const uint64_t& _configurationRisk);

                    /**
                     * 判断参数 ConfigurationRisk 是否已赋值
                     * @return ConfigurationRisk 是否已赋值
                     * 
                     */
                    bool ConfigurationRiskHasBeenSet() const;

                    /**
                     * 获取扫描任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanTask 扫描任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScanTask() const;

                    /**
                     * 设置扫描任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scanTask 扫描任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScanTask(const uint64_t& _scanTask);

                    /**
                     * 判断参数 ScanTask 是否已赋值
                     * @return ScanTask 是否已赋值
                     * 
                     */
                    bool ScanTaskHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取memberId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberId memberId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置memberId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberId memberId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取os全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Os os全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置os全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _os os全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取风险服务暴露
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskExposure 风险服务暴露
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRiskExposure() const;

                    /**
                     * 设置风险服务暴露
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskExposure 风险服务暴露
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskExposure(const int64_t& _riskExposure);

                    /**
                     * 判断参数 RiskExposure 是否已赋值
                     * @return RiskExposure 是否已赋值
                     * 
                     */
                    bool RiskExposureHasBeenSet() const;

                private:

                    /**
                     * 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cWPStatus;
                    bool m_cWPStatusHasBeenSet;

                    /**
                     * 资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * 公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 私网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc 名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * appid信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_availableArea;
                    bool m_availableAreaHasBeenSet;

                    /**
                     * 是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceUuid;
                    bool m_instanceUuidHasBeenSet;

                    /**
                     * qquid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceQUuid;
                    bool m_instanceQUuidHasBeenSet;

                    /**
                     * os名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 分区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * cpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cPUInfo;
                    bool m_cPUInfoHasBeenSet;

                    /**
                     * cpu大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cPUSize;
                    bool m_cPUSizeHasBeenSet;

                    /**
                     * cpu负载
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cPULoad;
                    bool m_cPULoadHasBeenSet;

                    /**
                     * 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * 内存负载
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memoryLoad;
                    bool m_memoryLoadHasBeenSet;

                    /**
                     * 硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 硬盘负载
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                    /**
                     * 账号数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * 进程数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processCount;
                    bool m_processCountHasBeenSet;

                    /**
                     * 软件应用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appCount;
                    bool m_appCountHasBeenSet;

                    /**
                     * 监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_portCount;
                    bool m_portCountHasBeenSet;

                    /**
                     * 网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * 网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * 网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intercept;
                    bool m_interceptHasBeenSet;

                    /**
                     * 入向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * 出向峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * 入向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * 出向累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outFlow;
                    bool m_outFlowHasBeenSet;

                    /**
                     * 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 恶意主动外联
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_netWorkOut;
                    bool m_netWorkOutHasBeenSet;

                    /**
                     * 端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_vulnerabilityRisk;
                    bool m_vulnerabilityRiskHasBeenSet;

                    /**
                     * 配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * 扫描任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * memberId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * os全称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * 风险服务暴露
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskExposure;
                    bool m_riskExposureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CVMASSETVO_H_
