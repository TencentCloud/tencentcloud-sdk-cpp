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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/ResourceTag.h>
#include <tencentcloud/tdmysql/v20211122/model/InstanceParam.h>
#include <tencentcloud/tdmysql/v20211122/model/AutoScalingConfig.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * CreateDBInstances请求参数结构体
                */
                class CreateDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateDBInstancesRequest();
                    ~CreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>创建实例区域</p>
                     * @return Zone <p>创建实例区域</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>创建实例区域</p>
                     * @param _zone <p>创建实例区域</p>
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
                     * 获取<p>购买规格</p>
                     * @return SpecCode <p>购买规格</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>购买规格</p>
                     * @param _specCode <p>购买规格</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

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
                     * 获取<p>存储节点副本数量，最大为5，要求为奇数</p>
                     * @return Replications <p>存储节点副本数量，最大为5，要求为奇数</p>
                     * 
                     */
                    int64_t GetReplications() const;

                    /**
                     * 设置<p>存储节点副本数量，最大为5，要求为奇数</p>
                     * @param _replications <p>存储节点副本数量，最大为5，要求为奇数</p>
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
                     * 获取<p>创建实例个数，上限为10</p>
                     * @return InstanceCount <p>创建实例个数，上限为10</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>创建实例个数，上限为10</p>
                     * @param _instanceCount <p>创建实例个数，上限为10</p>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>全能型副本数量</p>
                     * @return FullReplications <p>全能型副本数量</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 设置<p>全能型副本数量</p>
                     * @param _fullReplications <p>全能型副本数量</p>
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
                     * 获取<p>创建实例版本，默认使用当前最新版本</p>
                     * @return CreateVersion <p>创建实例版本，默认使用当前最新版本</p>
                     * 
                     */
                    std::string GetCreateVersion() const;

                    /**
                     * 设置<p>创建实例版本，默认使用当前最新版本</p>
                     * @param _createVersion <p>创建实例版本，默认使用当前最新版本</p>
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
                     * 获取<p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
                     * @return InstanceName <p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
                     * @param _instanceName <p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
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
                     * 获取<p>标签键值对数组</p>
                     * @return ResourceTags <p>标签键值对数组</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>标签键值对数组</p>
                     * @param _resourceTags <p>标签键值对数组</p>
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
                     * 获取<p>初始化实例参数。比如：<br>character_set_server（字符集，默认为utf8），<br>lower_case_table_names（表名大小写敏感，0 - 敏感；1-不敏感，默认为0）</p>
                     * @return InitParams <p>初始化实例参数。比如：<br>character_set_server（字符集，默认为utf8），<br>lower_case_table_names（表名大小写敏感，0 - 敏感；1-不敏感，默认为0）</p>
                     * 
                     */
                    std::vector<InstanceParam> GetInitParams() const;

                    /**
                     * 设置<p>初始化实例参数。比如：<br>character_set_server（字符集，默认为utf8），<br>lower_case_table_names（表名大小写敏感，0 - 敏感；1-不敏感，默认为0）</p>
                     * @param _initParams <p>初始化实例参数。比如：<br>character_set_server（字符集，默认为utf8），<br>lower_case_table_names（表名大小写敏感，0 - 敏感；1-不敏感，默认为0）</p>
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
                     * 获取<p>时间单位，m：月</p>
                     * @return TimeUnit <p>时间单位，m：月</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>时间单位，m：月</p>
                     * @param _timeUnit <p>时间单位，m：月</p>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>商品的时间大小</p>
                     * @return TimeSpan <p>商品的时间大小</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>商品的时间大小</p>
                     * @param _timeSpan <p>商品的时间大小</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>存储节点CPU核数</p>
                     * @return StorageNodeCpu <p>存储节点CPU核数</p>
                     * 
                     */
                    int64_t GetStorageNodeCpu() const;

                    /**
                     * 设置<p>存储节点CPU核数</p>
                     * @param _storageNodeCpu <p>存储节点CPU核数</p>
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
                     * @return StorageNodeMem <p>存储节点内存大小</p>
                     * 
                     */
                    int64_t GetStorageNodeMem() const;

                    /**
                     * 设置<p>存储节点内存大小</p>
                     * @param _storageNodeMem <p>存储节点内存大小</p>
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
                     * 获取<p>付费模式，0表示按需计费/后付费，1表示预付费</p>
                     * @return PayMode <p>付费模式，0表示按需计费/后付费，1表示预付费</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费模式，0表示按需计费/后付费，1表示预付费</p>
                     * @param _payMode <p>付费模式，0表示按需计费/后付费，1表示预付费</p>
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
                     * 获取<p>管控节点数量</p>
                     * @return MCNum <p>管控节点数量</p>
                     * 
                     */
                    int64_t GetMCNum() const;

                    /**
                     * 设置<p>管控节点数量</p>
                     * @param _mCNum <p>管控节点数量</p>
                     * 
                     */
                    void SetMCNum(const int64_t& _mCNum);

                    /**
                     * 判断参数 MCNum 是否已赋值
                     * @return MCNum 是否已赋值
                     * 
                     */
                    bool MCNumHasBeenSet() const;

                    /**
                     * 获取<p>自定义端口</p>
                     * @return Vport <p>自定义端口</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>自定义端口</p>
                     * @param _vport <p>自定义端口</p>
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
                     * 获取<p>多AZ可用区列表</p>
                     * @return Zones <p>多AZ可用区列表</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>多AZ可用区列表</p>
                     * @param _zones <p>多AZ可用区列表</p>
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
                     * 获取<p>是否使用优惠卷</p>
                     * @return AutoVoucher <p>是否使用优惠卷</p>
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置<p>是否使用优惠卷</p>
                     * @param _autoVoucher <p>是否使用优惠卷</p>
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>优惠卷列表</p>
                     * @return VoucherIds <p>优惠卷列表</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>优惠卷列表</p>
                     * @param _voucherIds <p>优惠卷列表</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
                     * @return InstanceType <p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
                     * @param _instanceType <p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
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
                     * 获取<p>磁盘类型,CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
                     * @return StorageType <p>磁盘类型,CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>磁盘类型,CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
                     * @param _storageType <p>磁盘类型,CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
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
                     * 获取<p>AZ模式，1:单AZ，2:多AZ非主AZ，3:多AZ主AZ</p>
                     * @return AZMode <p>AZ模式，1:单AZ，2:多AZ非主AZ，3:多AZ主AZ</p>
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 设置<p>AZ模式，1:单AZ，2:多AZ非主AZ，3:多AZ主AZ</p>
                     * @param _aZMode <p>AZ模式，1:单AZ，2:多AZ非主AZ，3:多AZ主AZ</p>
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
                     * 获取<p>参数模板id</p>
                     * @return TemplateId <p>参数模板id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>参数模板id</p>
                     * @param _templateId <p>参数模板id</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>兼容模式，enum:MySQL,HBase</p>
                     * @return SQLMode <p>兼容模式，enum:MySQL,HBase</p>
                     * 
                     */
                    std::string GetSQLMode() const;

                    /**
                     * 设置<p>兼容模式，enum:MySQL,HBase</p>
                     * @param _sQLMode <p>兼容模式，enum:MySQL,HBase</p>
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
                     * 获取<p>svls实例的ccu变配配置</p>
                     * @return AutoScaleConfig <p>svls实例的ccu变配配置</p>
                     * 
                     */
                    AutoScalingConfig GetAutoScaleConfig() const;

                    /**
                     * 设置<p>svls实例的ccu变配配置</p>
                     * @param _autoScaleConfig <p>svls实例的ccu变配配置</p>
                     * 
                     */
                    void SetAutoScaleConfig(const AutoScalingConfig& _autoScaleConfig);

                    /**
                     * 判断参数 AutoScaleConfig 是否已赋值
                     * @return AutoScaleConfig 是否已赋值
                     * 
                     */
                    bool AutoScaleConfigHasBeenSet() const;

                private:

                    /**
                     * <p>创建实例区域</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>字符型vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>字符型subnetid</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>购买规格</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>存储节点磁盘容量，单位GB</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>存储节点数量</p>
                     */
                    int64_t m_storageNodeNum;
                    bool m_storageNodeNumHasBeenSet;

                    /**
                     * <p>存储节点副本数量，最大为5，要求为奇数</p>
                     */
                    int64_t m_replications;
                    bool m_replicationsHasBeenSet;

                    /**
                     * <p>创建实例个数，上限为10</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>全能型副本数量</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>创建实例版本，默认使用当前最新版本</p>
                     */
                    std::string m_createVersion;
                    bool m_createVersionHasBeenSet;

                    /**
                     * <p>实例名称，要求长度1-60，允许包含中文、英文大小写、数字、-、_</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>标签键值对数组</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>初始化实例参数。比如：<br>character_set_server（字符集，默认为utf8），<br>lower_case_table_names（表名大小写敏感，0 - 敏感；1-不敏感，默认为0）</p>
                     */
                    std::vector<InstanceParam> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * <p>时间单位，m：月</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>商品的时间大小</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>存储节点CPU核数</p>
                     */
                    int64_t m_storageNodeCpu;
                    bool m_storageNodeCpuHasBeenSet;

                    /**
                     * <p>存储节点内存大小</p>
                     */
                    int64_t m_storageNodeMem;
                    bool m_storageNodeMemHasBeenSet;

                    /**
                     * <p>付费模式，0表示按需计费/后付费，1表示预付费</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>管控节点数量</p>
                     */
                    int64_t m_mCNum;
                    bool m_mCNumHasBeenSet;

                    /**
                     * <p>自定义端口</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>多AZ可用区列表</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>是否使用优惠卷</p>
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>优惠卷列表</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>实例架构类型，separate:分离架构；hybrid:对等架构</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>磁盘类型,CLOUD_HSSD增强型SSD,CLOUD_TCS本地SSD盘</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>AZ模式，1:单AZ，2:多AZ非主AZ，3:多AZ主AZ</p>
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>实例模式</p>
                     */
                    std::string m_instanceMode;
                    bool m_instanceModeHasBeenSet;

                    /**
                     * <p>参数模板id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>兼容模式，enum:MySQL,HBase</p>
                     */
                    std::string m_sQLMode;
                    bool m_sQLModeHasBeenSet;

                    /**
                     * <p>svls实例的ccu变配配置</p>
                     */
                    AutoScalingConfig m_autoScaleConfig;
                    bool m_autoScaleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBINSTANCESREQUEST_H_
