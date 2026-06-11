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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceParam.h>
#include <tencentcloud/tdmysql/v20211122/model/ResourceTag.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceNode.h>
#include <tencentcloud/tdmysql/v20211122/model/AutoScalingConfig.h>
#include <tencentcloud/tdmysql/v20211122/model/AnalysisRelationInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/AnalysisInstanceInfo.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 实例信息类型
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计算节点数量</p>
                     * @return ComputeNodeNum <p>计算节点数量</p>
                     * @deprecated
                     */
                    int64_t GetComputeNodeNum() const;

                    /**
                     * 设置<p>计算节点数量</p>
                     * @param _computeNodeNum <p>计算节点数量</p>
                     * @deprecated
                     */
                    void SetComputeNodeNum(const int64_t& _computeNodeNum);

                    /**
                     * 判断参数 ComputeNodeNum 是否已赋值
                     * @return ComputeNodeNum 是否已赋值
                     * @deprecated
                     */
                    bool ComputeNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>区域</p>
                     * @return Zone <p>区域</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>区域</p>
                     * @param _zone <p>区域</p>
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
                     * 获取<p>创建实例版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateVersion <p>创建实例版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateVersion() const;

                    /**
                     * 设置<p>创建实例版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createVersion <p>创建实例版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateVersion(const std::string& _createVersion);

                    /**
                     * 判断参数 CreateVersion 是否已赋值
                     * @return CreateVersion 是否已赋值
                     * 
                     */
                    bool CreateVersionHasBeenSet() const;

                    /**
                     * 获取<p>初始化实例参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitParams <p>初始化实例参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceParam> GetInitParams() const;

                    /**
                     * 设置<p>初始化实例参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _initParams <p>初始化实例参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInitParams(const std::vector<InstanceParam>& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取<p>实例状态：creating、created、initializing、running、modifying、isolating、isolated、destroying、destroyed</p>
                     * @return Status <p>实例状态：creating、created、initializing、running、modifying、isolating、isolated、destroying、destroyed</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>实例状态：creating、created、initializing、running、modifying、isolating、isolated、destroying、destroyed</p>
                     * @param _status <p>实例状态：creating、created、initializing、running、modifying、isolating、isolated、destroying、destroyed</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>存储节点数量</p>
                     * @return StorageNodeNum <p>存储节点数量</p>
                     * 
                     */
                    int64_t GetStorageNodeNum() const;

                    /**
                     * 设置<p>存储节点数量</p>
                     * @param _storageNodeNum <p>存储节点数量</p>
                     * 
                     */
                    void SetStorageNodeNum(const int64_t& _storageNodeNum);

                    /**
                     * 判断参数 StorageNodeNum 是否已赋值
                     * @return StorageNodeNum 是否已赋值
                     * 
                     */
                    bool StorageNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>实例标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTags <p>实例标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>实例标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTags <p>实例标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>计算节点cpu核数</p>
                     * @return Cpu <p>计算节点cpu核数</p>
                     * @deprecated
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>计算节点cpu核数</p>
                     * @param _cpu <p>计算节点cpu核数</p>
                     * @deprecated
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * @deprecated
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>字符型vpcid</p>
                     * @return VpcId <p>字符型vpcid</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>字符型vpcid</p>
                     * @param _vpcId <p>字符型vpcid</p>
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
                     * 获取<p>计算节点mem，单位GB</p>
                     * @return Mem <p>计算节点mem，单位GB</p>
                     * @deprecated
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>计算节点mem，单位GB</p>
                     * @param _mem <p>计算节点mem，单位GB</p>
                     * @deprecated
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * @deprecated
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取<p>子网IP</p>
                     * @return Vip <p>子网IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>子网IP</p>
                     * @param _vip <p>子网IP</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>字符型subnetid</p>
                     * @return SubnetId <p>字符型subnetid</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>字符型subnetid</p>
                     * @param _subnetId <p>字符型subnetid</p>
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
                     * 获取<p>子网端口</p>
                     * @return Vport <p>子网端口</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>子网端口</p>
                     * @param _vport <p>子网端口</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>存储节点磁盘容量，单位GB</p>
                     * @return Disk <p>存储节点磁盘容量，单位GB</p>
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置<p>存储节点磁盘容量，单位GB</p>
                     * @param _disk <p>存储节点磁盘容量，单位GB</p>
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>实例创建时间</p>
                     * @return CreateTime <p>实例创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>实例创建时间</p>
                     * @param _createTime <p>实例创建时间</p>
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
                     * 获取<p>实例所属地域</p>
                     * @return Region <p>实例所属地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>实例所属地域</p>
                     * @param _region <p>实例所属地域</p>
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
                     * 获取<p>实例状态中文描述</p>
                     * @return StatusDesc <p>实例状态中文描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>实例状态中文描述</p>
                     * @param _statusDesc <p>实例状态中文描述</p>
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>管控节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCCpu <p>管控节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetMCCpu() const;

                    /**
                     * 设置<p>管控节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mCCpu <p>管控节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetMCCpu(const int64_t& _mCCpu);

                    /**
                     * 判断参数 MCCpu 是否已赋值
                     * @return MCCpu 是否已赋值
                     * @deprecated
                     */
                    bool MCCpuHasBeenSet() const;

                    /**
                     * 获取<p>管控节点CPU大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCMem <p>管控节点CPU大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetMCMem() const;

                    /**
                     * 设置<p>管控节点CPU大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mCMem <p>管控节点CPU大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetMCMem(const int64_t& _mCMem);

                    /**
                     * 判断参数 MCMem 是否已赋值
                     * @return MCMem 是否已赋值
                     * @deprecated
                     */
                    bool MCMemHasBeenSet() const;

                    /**
                     * 获取<p>计算节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputerNodeCpu <p>计算节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetComputerNodeCpu() const;

                    /**
                     * 设置<p>计算节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computerNodeCpu <p>计算节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetComputerNodeCpu(const int64_t& _computerNodeCpu);

                    /**
                     * 判断参数 ComputerNodeCpu 是否已赋值
                     * @return ComputerNodeCpu 是否已赋值
                     * @deprecated
                     */
                    bool ComputerNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>计算节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputerNodeMem <p>计算节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetComputerNodeMem() const;

                    /**
                     * 设置<p>计算节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computerNodeMem <p>计算节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetComputerNodeMem(const int64_t& _computerNodeMem);

                    /**
                     * 判断参数 ComputerNodeMem 是否已赋值
                     * @return ComputerNodeMem 是否已赋值
                     * @deprecated
                     */
                    bool ComputerNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>存储节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageNodeCpu <p>存储节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 设置<p>存储节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageNodeCpu <p>存储节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageNodeCpu(const int64_t& _storageNodeCpu);

                    /**
                     * 判断参数 StorageNodeCpu 是否已赋值
                     * @return StorageNodeCpu 是否已赋值
                     * 
                     */
                    bool StorageNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>存储节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageNodeMem <p>存储节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 设置<p>存储节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageNodeMem <p>存储节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageNodeMem(const int64_t& _storageNodeMem);

                    /**
                     * 判断参数 StorageNodeMem 是否已赋值
                     * @return StorageNodeMem 是否已赋值
                     * 
                     */
                    bool StorageNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>管控节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCNum <p>管控节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetMCNum() const;

                    /**
                     * 设置<p>管控节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mCNum <p>管控节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetMCNum(const int64_t& _mCNum);

                    /**
                     * 判断参数 MCNum 是否已赋值
                     * @return MCNum 是否已赋值
                     * @deprecated
                     */
                    bool MCNumHasBeenSet() const;

                    /**
                     * 获取<p>续费标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag <p>续费标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>续费标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag <p>续费标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>付费模式，0按量付费；1包年包月</p>
                     * @return PayMode <p>付费模式，0按量付费；1包年包月</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费模式，0按量付费；1包年包月</p>
                     * @param _payMode <p>付费模式，0按量付费；1包年包月</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>用户标签，inner：内部用户；external：外部用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountTag <p>用户标签，inner：内部用户；external：外部用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountTag() const;

                    /**
                     * 设置<p>用户标签，inner：内部用户；external：外部用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountTag <p>用户标签，inner：内部用户；external：外部用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountTag(const std::string& _accountTag);

                    /**
                     * 判断参数 AccountTag 是否已赋值
                     * @return AccountTag 是否已赋值
                     * 
                     */
                    bool AccountTagHasBeenSet() const;

                    /**
                     * 获取<p>实例架构类型，separate:分离架构；hyper:对等架构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType <p>实例架构类型，separate:分离架构；hyper:对等架构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例架构类型，separate:分离架构；hyper:对等架构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType <p>实例架构类型，separate:分离架构；hyper:对等架构</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestroyedAt <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestroyedAt() const;

                    /**
                     * 设置<p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destroyedAt <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestroyedAt(const std::string& _destroyedAt);

                    /**
                     * 判断参数 DestroyedAt 是否已赋值
                     * @return DestroyedAt 是否已赋值
                     * 
                     */
                    bool DestroyedAtHasBeenSet() const;

                    /**
                     * 获取<p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireAt <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireAt() const;

                    /**
                     * 设置<p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireAt <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireAt(const std::string& _expireAt);

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                    /**
                     * 获取<p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedAt <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedAt() const;

                    /**
                     * 设置<p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedAt <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedAt(const std::string& _isolatedAt);

                    /**
                     * 判断参数 IsolatedAt 是否已赋值
                     * @return IsolatedAt 是否已赋值
                     * 
                     */
                    bool IsolatedAtHasBeenSet() const;

                    /**
                     * 获取<p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedFrom <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedFrom() const;

                    /**
                     * 设置<p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedFrom <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedFrom(const std::string& _isolatedFrom);

                    /**
                     * 判断参数 IsolatedFrom 是否已赋值
                     * @return IsolatedFrom 是否已赋值
                     * 
                     */
                    bool IsolatedFromHasBeenSet() const;

                    /**
                     * 获取<p>1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replications <p>1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplications() const;

                    /**
                     * 设置<p>1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replications <p>1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplications(const int64_t& _replications);

                    /**
                     * 判断参数 Replications 是否已赋值
                     * @return Replications 是否已赋值
                     * 
                     */
                    bool ReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>全能型副本数</p>
                     * @return FullReplications <p>全能型副本数</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 设置<p>全能型副本数</p>
                     * @param _fullReplications <p>全能型副本数</p>
                     * 
                     */
                    void SetFullReplications(const int64_t& _fullReplications);

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin <p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin <p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin <p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin <p>账号信息</p>
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
                     * 获取<p>AZ信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zones <p>AZ信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>AZ信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zones <p>AZ信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>实例节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nodes <p>实例节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNode> GetNodes() const;

                    /**
                     * 设置<p>实例节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodes <p>实例节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodes(const std::vector<InstanceNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取<p>binlog是否打开</p>
                     * @return BinlogStatus <p>binlog是否打开</p>
                     * 
                     */
                    int64_t GetBinlogStatus() const;

                    /**
                     * 设置<p>binlog是否打开</p>
                     * @param _binlogStatus <p>binlog是否打开</p>
                     * 
                     */
                    void SetBinlogStatus(const int64_t& _binlogStatus);

                    /**
                     * 判断参数 BinlogStatus 是否已赋值
                     * @return BinlogStatus 是否已赋值
                     * 
                     */
                    bool BinlogStatusHasBeenSet() const;

                    /**
                     * 获取<p>cdc节点核数</p>
                     * @return CdcNodeCpu <p>cdc节点核数</p>
                     * @deprecated
                     */
                    int64_t GetCdcNodeCpu() const;

                    /**
                     * 设置<p>cdc节点核数</p>
                     * @param _cdcNodeCpu <p>cdc节点核数</p>
                     * @deprecated
                     */
                    void SetCdcNodeCpu(const int64_t& _cdcNodeCpu);

                    /**
                     * 判断参数 CdcNodeCpu 是否已赋值
                     * @return CdcNodeCpu 是否已赋值
                     * @deprecated
                     */
                    bool CdcNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>cdc节点内存大小</p>
                     * @return CdcNodeMem <p>cdc节点内存大小</p>
                     * @deprecated
                     */
                    int64_t GetCdcNodeMem() const;

                    /**
                     * 设置<p>cdc节点内存大小</p>
                     * @param _cdcNodeMem <p>cdc节点内存大小</p>
                     * @deprecated
                     */
                    void SetCdcNodeMem(const int64_t& _cdcNodeMem);

                    /**
                     * 判断参数 CdcNodeMem 是否已赋值
                     * @return CdcNodeMem 是否已赋值
                     * @deprecated
                     */
                    bool CdcNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>cdc节点数</p>
                     * @return CdcNodeNum <p>cdc节点数</p>
                     * @deprecated
                     */
                    int64_t GetCdcNodeNum() const;

                    /**
                     * 设置<p>cdc节点数</p>
                     * @param _cdcNodeNum <p>cdc节点数</p>
                     * @deprecated
                     */
                    void SetCdcNodeNum(const int64_t& _cdcNodeNum);

                    /**
                     * 判断参数 CdcNodeNum 是否已赋值
                     * @return CdcNodeNum 是否已赋值
                     * @deprecated
                     */
                    bool CdcNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AZMode <p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 设置<p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aZMode <p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAZMode(const int64_t& _aZMode);

                    /**
                     * 判断参数 AZMode 是否已赋值
                     * @return AZMode 是否已赋值
                     * 
                     */
                    bool AZModeHasBeenSet() const;

                    /**
                     * 获取<p>灾备标志位，1: 无灾备关系；2: 灾备主实例；3: 灾备备实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandbyFlag <p>灾备标志位，1: 无灾备关系；2: 灾备主实例；3: 灾备备实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStandbyFlag() const;

                    /**
                     * 设置<p>灾备标志位，1: 无灾备关系；2: 灾备主实例；3: 灾备备实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standbyFlag <p>灾备标志位，1: 无灾备关系；2: 灾备主实例；3: 灾备备实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandbyFlag(const int64_t& _standbyFlag);

                    /**
                     * 判断参数 StandbyFlag 是否已赋值
                     * @return StandbyFlag 是否已赋值
                     * 
                     */
                    bool StandbyFlagHasBeenSet() const;

                    /**
                     * 获取<p>连接的备实例数量（仅当 StandbyFlag == 2 时有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandbySecondaryNum <p>连接的备实例数量（仅当 StandbyFlag == 2 时有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStandbySecondaryNum() const;

                    /**
                     * 设置<p>连接的备实例数量（仅当 StandbyFlag == 2 时有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standbySecondaryNum <p>连接的备实例数量（仅当 StandbyFlag == 2 时有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandbySecondaryNum(const int64_t& _standbySecondaryNum);

                    /**
                     * 判断参数 StandbySecondaryNum 是否已赋值
                     * @return StandbySecondaryNum 是否已赋值
                     * 
                     */
                    bool StandbySecondaryNumHasBeenSet() const;

                    /**
                     * 获取<p>列存节点 cpu 核数</p>
                     * @return ColumnarNodeCpu <p>列存节点 cpu 核数</p>
                     * 
                     */
                    int64_t GetColumnarNodeCpu() const;

                    /**
                     * 设置<p>列存节点 cpu 核数</p>
                     * @param _columnarNodeCpu <p>列存节点 cpu 核数</p>
                     * 
                     */
                    void SetColumnarNodeCpu(const int64_t& _columnarNodeCpu);

                    /**
                     * 判断参数 ColumnarNodeCpu 是否已赋值
                     * @return ColumnarNodeCpu 是否已赋值
                     * 
                     */
                    bool ColumnarNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>列存节点内存大小</p>
                     * @return ColumnarNodeMem <p>列存节点内存大小</p>
                     * 
                     */
                    int64_t GetColumnarNodeMem() const;

                    /**
                     * 设置<p>列存节点内存大小</p>
                     * @param _columnarNodeMem <p>列存节点内存大小</p>
                     * 
                     */
                    void SetColumnarNodeMem(const int64_t& _columnarNodeMem);

                    /**
                     * 判断参数 ColumnarNodeMem 是否已赋值
                     * @return ColumnarNodeMem 是否已赋值
                     * 
                     */
                    bool ColumnarNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>列存节点数</p>
                     * @return ColumnarNodeNum <p>列存节点数</p>
                     * 
                     */
                    int64_t GetColumnarNodeNum() const;

                    /**
                     * 设置<p>列存节点数</p>
                     * @param _columnarNodeNum <p>列存节点数</p>
                     * 
                     */
                    void SetColumnarNodeNum(const int64_t& _columnarNodeNum);

                    /**
                     * 判断参数 ColumnarNodeNum 是否已赋值
                     * @return ColumnarNodeNum 是否已赋值
                     * 
                     */
                    bool ColumnarNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>列存节点磁盘容量，单位GB</p>
                     * @return ColumnarNodeDisk <p>列存节点磁盘容量，单位GB</p>
                     * 
                     */
                    int64_t GetColumnarNodeDisk() const;

                    /**
                     * 设置<p>列存节点磁盘容量，单位GB</p>
                     * @param _columnarNodeDisk <p>列存节点磁盘容量，单位GB</p>
                     * 
                     */
                    void SetColumnarNodeDisk(const int64_t& _columnarNodeDisk);

                    /**
                     * 判断参数 ColumnarNodeDisk 是否已赋值
                     * @return ColumnarNodeDisk 是否已赋值
                     * 
                     */
                    bool ColumnarNodeDiskHasBeenSet() const;

                    /**
                     * 获取<p>列存节点磁盘类型</p>
                     * @return ColumnarNodeStorageType <p>列存节点磁盘类型</p>
                     * 
                     */
                    std::string GetColumnarNodeStorageType() const;

                    /**
                     * 设置<p>列存节点磁盘类型</p>
                     * @param _columnarNodeStorageType <p>列存节点磁盘类型</p>
                     * 
                     */
                    void SetColumnarNodeStorageType(const std::string& _columnarNodeStorageType);

                    /**
                     * 判断参数 ColumnarNodeStorageType 是否已赋值
                     * @return ColumnarNodeStorageType 是否已赋值
                     * 
                     */
                    bool ColumnarNodeStorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>独享标志位，1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     * @return InstanceCategory <p>独享标志位，1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     * 
                     */
                    int64_t GetInstanceCategory() const;

                    /**
                     * 设置<p>独享标志位，1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     * @param _instanceCategory <p>独享标志位，1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     * 
                     */
                    void SetInstanceCategory(const int64_t& _instanceCategory);

                    /**
                     * 判断参数 InstanceCategory 是否已赋值
                     * @return InstanceCategory 是否已赋值
                     * 
                     */
                    bool InstanceCategoryHasBeenSet() const;

                    /**
                     * 获取<p>dbdc-xxxxx</p>
                     * @return ExclusiveClusterId <p>dbdc-xxxxx</p>
                     * 
                     */
                    std::string GetExclusiveClusterId() const;

                    /**
                     * 设置<p>dbdc-xxxxx</p>
                     * @param _exclusiveClusterId <p>dbdc-xxxxx</p>
                     * 
                     */
                    void SetExclusiveClusterId(const std::string& _exclusiveClusterId);

                    /**
                     * 判断参数 ExclusiveClusterId 是否已赋值
                     * @return ExclusiveClusterId 是否已赋值
                     * 
                     */
                    bool ExclusiveClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>兼容模式</p>
                     * @return SQLMode <p>兼容模式</p>
                     * 
                     */
                    std::string GetSQLMode() const;

                    /**
                     * 设置<p>兼容模式</p>
                     * @param _sQLMode <p>兼容模式</p>
                     * 
                     */
                    void SetSQLMode(const std::string& _sQLMode);

                    /**
                     * 判断参数 SQLMode 是否已赋值
                     * @return SQLMode 是否已赋值
                     * 
                     */
                    bool SQLModeHasBeenSet() const;

                    /**
                     * 获取<p>实例模式</p>
                     * @return InstanceMode <p>实例模式</p>
                     * 
                     */
                    std::string GetInstanceMode() const;

                    /**
                     * 设置<p>实例模式</p>
                     * @param _instanceMode <p>实例模式</p>
                     * 
                     */
                    void SetInstanceMode(const std::string& _instanceMode);

                    /**
                     * 判断参数 InstanceMode 是否已赋值
                     * @return InstanceMode 是否已赋值
                     * 
                     */
                    bool InstanceModeHasBeenSet() const;

                    /**
                     * 获取<p>实例发货平台</p>
                     * @return ClusterId <p>实例发货平台</p>
                     * @deprecated
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>实例发货平台</p>
                     * @param _clusterId <p>实例发货平台</p>
                     * @deprecated
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * @deprecated
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>自动扩容配置</p>
                     * @return AutoScaleConfig <p>自动扩容配置</p>
                     * 
                     */
                    AutoScalingConfig GetAutoScaleConfig() const;

                    /**
                     * 设置<p>自动扩容配置</p>
                     * @param _autoScaleConfig <p>自动扩容配置</p>
                     * 
                     */
                    void SetAutoScaleConfig(const AutoScalingConfig& _autoScaleConfig);

                    /**
                     * 判断参数 AutoScaleConfig 是否已赋值
                     * @return AutoScaleConfig 是否已赋值
                     * 
                     */
                    bool AutoScaleConfigHasBeenSet() const;

                    /**
                     * 获取<p>分析引擎模式</p><p>枚举值：</p><ul><li>libra： LibraDB分析引擎模式</li></ul>
                     * @return AnalysisMode <p>分析引擎模式</p><p>枚举值：</p><ul><li>libra： LibraDB分析引擎模式</li></ul>
                     * 
                     */
                    std::string GetAnalysisMode() const;

                    /**
                     * 设置<p>分析引擎模式</p><p>枚举值：</p><ul><li>libra： LibraDB分析引擎模式</li></ul>
                     * @param _analysisMode <p>分析引擎模式</p><p>枚举值：</p><ul><li>libra： LibraDB分析引擎模式</li></ul>
                     * 
                     */
                    void SetAnalysisMode(const std::string& _analysisMode);

                    /**
                     * 判断参数 AnalysisMode 是否已赋值
                     * @return AnalysisMode 是否已赋值
                     * 
                     */
                    bool AnalysisModeHasBeenSet() const;

                    /**
                     * 获取<p>分析引擎关系信息</p>
                     * @return AnalysisRelationInfos <p>分析引擎关系信息</p>
                     * 
                     */
                    std::vector<AnalysisRelationInfo> GetAnalysisRelationInfos() const;

                    /**
                     * 设置<p>分析引擎关系信息</p>
                     * @param _analysisRelationInfos <p>分析引擎关系信息</p>
                     * 
                     */
                    void SetAnalysisRelationInfos(const std::vector<AnalysisRelationInfo>& _analysisRelationInfos);

                    /**
                     * 判断参数 AnalysisRelationInfos 是否已赋值
                     * @return AnalysisRelationInfos 是否已赋值
                     * 
                     */
                    bool AnalysisRelationInfosHasBeenSet() const;

                    /**
                     * 获取<p>分析引擎实例信息</p>
                     * @return AnalysisInstanceInfo <p>分析引擎实例信息</p>
                     * 
                     */
                    AnalysisInstanceInfo GetAnalysisInstanceInfo() const;

                    /**
                     * 设置<p>分析引擎实例信息</p>
                     * @param _analysisInstanceInfo <p>分析引擎实例信息</p>
                     * 
                     */
                    void SetAnalysisInstanceInfo(const AnalysisInstanceInfo& _analysisInstanceInfo);

                    /**
                     * 判断参数 AnalysisInstanceInfo 是否已赋值
                     * @return AnalysisInstanceInfo 是否已赋值
                     * 
                     */
                    bool AnalysisInstanceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>计算节点数量</p>
                     */
                    int64_t m_computeNodeNum;
                    bool m_computeNodeNumHasBeenSet;

                    /**
                     * <p>区域</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>创建实例版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createVersion;
                    bool m_createVersionHasBeenSet;

                    /**
                     * <p>初始化实例参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceParam> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * <p>实例状态：creating、created、initializing、running、modifying、isolating、isolated、destroying、destroyed</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>存储节点数量</p>
                     */
                    int64_t m_storageNodeNum;
                    bool m_storageNodeNumHasBeenSet;

                    /**
                     * <p>实例标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>计算节点cpu核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>字符型vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>计算节点mem，单位GB</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>子网IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>字符型subnetid</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>子网端口</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>存储节点磁盘容量，单位GB</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>实例创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例所属地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例状态中文描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>管控节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mCCpu;
                    bool m_mCCpuHasBeenSet;

                    /**
                     * <p>管控节点CPU大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mCMem;
                    bool m_mCMemHasBeenSet;

                    /**
                     * <p>计算节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_computerNodeCpu;
                    bool m_computerNodeCpuHasBeenSet;

                    /**
                     * <p>计算节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_computerNodeMem;
                    bool m_computerNodeMemHasBeenSet;

                    /**
                     * <p>存储节点CPU核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>存储节点内存大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>管控节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mCNum;
                    bool m_mCNumHasBeenSet;

                    /**
                     * <p>续费标志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>付费模式，0按量付费；1包年包月</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>用户标签，inner：内部用户；external：外部用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountTag;
                    bool m_accountTagHasBeenSet;

                    /**
                     * <p>实例架构类型，separate:分离架构；hyper:对等架构</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>磁盘类型，CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destroyedAt;
                    bool m_destroyedAtHasBeenSet;

                    /**
                     * <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedAt;
                    bool m_isolatedAtHasBeenSet;

                    /**
                     * <p>&quot;0000-00-00 00:00:00&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedFrom;
                    bool m_isolatedFromHasBeenSet;

                    /**
                     * <p>1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replications;
                    bool m_replicationsHasBeenSet;

                    /**
                     * <p>全能型副本数</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>账号信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>AZ信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>实例节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * <p>binlog是否打开</p>
                     */
                    int64_t m_binlogStatus;
                    bool m_binlogStatusHasBeenSet;

                    /**
                     * <p>cdc节点核数</p>
                     */
                    int64_t m_cdcNodeCpu;
                    bool m_cdcNodeCpuHasBeenSet;

                    /**
                     * <p>cdc节点内存大小</p>
                     */
                    int64_t m_cdcNodeMem;
                    bool m_cdcNodeMemHasBeenSet;

                    /**
                     * <p>cdc节点数</p>
                     */
                    int64_t m_cdcNodeNum;
                    bool m_cdcNodeNumHasBeenSet;

                    /**
                     * <p>az模式，1: 单AZ 2: 多AZ非主AZ模式 3: 多AZ主AZ模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>灾备标志位，1: 无灾备关系；2: 灾备主实例；3: 灾备备实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_standbyFlag;
                    bool m_standbyFlagHasBeenSet;

                    /**
                     * <p>连接的备实例数量（仅当 StandbyFlag == 2 时有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_standbySecondaryNum;
                    bool m_standbySecondaryNumHasBeenSet;

                    /**
                     * <p>列存节点 cpu 核数</p>
                     */
                    int64_t m_columnarNodeCpu;
                    bool m_columnarNodeCpuHasBeenSet;

                    /**
                     * <p>列存节点内存大小</p>
                     */
                    int64_t m_columnarNodeMem;
                    bool m_columnarNodeMemHasBeenSet;

                    /**
                     * <p>列存节点数</p>
                     */
                    int64_t m_columnarNodeNum;
                    bool m_columnarNodeNumHasBeenSet;

                    /**
                     * <p>列存节点磁盘容量，单位GB</p>
                     */
                    int64_t m_columnarNodeDisk;
                    bool m_columnarNodeDiskHasBeenSet;

                    /**
                     * <p>列存节点磁盘类型</p>
                     */
                    std::string m_columnarNodeStorageType;
                    bool m_columnarNodeStorageTypeHasBeenSet;

                    /**
                     * <p>独享标志位，1： 主实例（独享型）, 2: 主实例, 3： 灾备实例, 4： 灾备实例（独享型）</p>
                     */
                    int64_t m_instanceCategory;
                    bool m_instanceCategoryHasBeenSet;

                    /**
                     * <p>dbdc-xxxxx</p>
                     */
                    std::string m_exclusiveClusterId;
                    bool m_exclusiveClusterIdHasBeenSet;

                    /**
                     * <p>兼容模式</p>
                     */
                    std::string m_sQLMode;
                    bool m_sQLModeHasBeenSet;

                    /**
                     * <p>实例模式</p>
                     */
                    std::string m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>实例发货平台</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>自动扩容配置</p>
                     */
                    AutoScalingConfig m_autoScaleConfig;
                    bool m_autoScaleConfigHasBeenSet;

                    /**
                     * <p>分析引擎模式</p><p>枚举值：</p><ul><li>libra： LibraDB分析引擎模式</li></ul>
                     */
                    std::string m_analysisMode;
                    bool m_analysisModeHasBeenSet;

                    /**
                     * <p>分析引擎关系信息</p>
                     */
                    std::vector<AnalysisRelationInfo> m_analysisRelationInfos;
                    bool m_analysisRelationInfosHasBeenSet;

                    /**
                     * <p>分析引擎实例信息</p>
                     */
                    AnalysisInstanceInfo m_analysisInstanceInfo;
                    bool m_analysisInstanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_INSTANCEINFO_H_
