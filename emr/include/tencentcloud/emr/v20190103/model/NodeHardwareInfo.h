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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/MultiDiskMC.h>
#include <tencentcloud/emr/v20190103/model/CdbInfo.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/SubnetInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 节点硬件信息
                */
                class NodeHardwareInfo : public AbstractModel
                {
                public:
                    NodeHardwareInfo();
                    ~NodeHardwareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户APPID
                     * @return AppId 用户APPID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户APPID
                     * @param _appId 用户APPID
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
                     * 获取序列号
                     * @return SerialNo 序列号
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置序列号
                     * @param _serialNo 序列号
                     * 
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     * 
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取机器实例ID
                     * @return OrderNo 机器实例ID
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置机器实例ID
                     * @param _orderNo 机器实例ID
                     * 
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取master节点绑定外网IP
                     * @return WanIp master节点绑定外网IP
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置master节点绑定外网IP
                     * @param _wanIp master节点绑定外网IP
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     * @return Flag 节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     * 
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     * @param _flag 节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     * 
                     */
                    void SetFlag(const int64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取节点规格
                     * @return Spec 节点规格
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置节点规格
                     * @param _spec 节点规格
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取节点核数
                     * @return CpuNum 节点核数
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置节点核数
                     * @param _cpuNum 节点核数
                     * 
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取节点内存,单位b
                     * @return MemSize 节点内存,单位b
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置节点内存,单位b
                     * @param _memSize 节点内存,单位b
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取节点内存描述，单位GB
                     * @return MemDesc 节点内存描述，单位GB
                     * 
                     */
                    std::string GetMemDesc() const;

                    /**
                     * 设置节点内存描述，单位GB
                     * @param _memDesc 节点内存描述，单位GB
                     * 
                     */
                    void SetMemDesc(const std::string& _memDesc);

                    /**
                     * 判断参数 MemDesc 是否已赋值
                     * @return MemDesc 是否已赋值
                     * 
                     */
                    bool MemDescHasBeenSet() const;

                    /**
                     * 获取节点所在region
                     * @return RegionId 节点所在region
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置节点所在region
                     * @param _regionId 节点所在region
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取节点所在Zone
                     * @return ZoneId 节点所在Zone
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置节点所在Zone
                     * @param _zoneId 节点所在Zone
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取申请时间
                     * @return ApplyTime 申请时间
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置申请时间
                     * @param _applyTime 申请时间
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取释放时间
                     * @return FreeTime 释放时间
                     * 
                     */
                    std::string GetFreeTime() const;

                    /**
                     * 设置释放时间
                     * @param _freeTime 释放时间
                     * 
                     */
                    void SetFreeTime(const std::string& _freeTime);

                    /**
                     * 判断参数 FreeTime 是否已赋值
                     * @return FreeTime 是否已赋值
                     * 
                     */
                    bool FreeTimeHasBeenSet() const;

                    /**
                     * 获取硬盘大小
                     * @return DiskSize 硬盘大小
                     * 
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置硬盘大小
                     * @param _diskSize 硬盘大小
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
                     * 获取节点描述
                     * @return NameTag 节点描述
                     * 
                     */
                    std::string GetNameTag() const;

                    /**
                     * 设置节点描述
                     * @param _nameTag 节点描述
                     * 
                     */
                    void SetNameTag(const std::string& _nameTag);

                    /**
                     * 判断参数 NameTag 是否已赋值
                     * @return NameTag 是否已赋值
                     * 
                     */
                    bool NameTagHasBeenSet() const;

                    /**
                     * 获取节点部署服务
                     * @return Services 节点部署服务
                     * 
                     */
                    std::string GetServices() const;

                    /**
                     * 设置节点部署服务
                     * @param _services 节点部署服务
                     * 
                     */
                    void SetServices(const std::string& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     * @return StorageType 磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     * @param _storageType 磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     * 
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取系统盘大小，单位GB
                     * @return RootSize 系统盘大小，单位GB
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置系统盘大小，单位GB
                     * @param _rootSize 系统盘大小，单位GB
                     * 
                     */
                    void SetRootSize(const int64_t& _rootSize);

                    /**
                     * 判断参数 RootSize 是否已赋值
                     * @return RootSize 是否已赋值
                     * 
                     */
                    bool RootSizeHasBeenSet() const;

                    /**
                     * 获取付费类型，0：按量计费；1：包年包月
                     * @return ChargeType 付费类型，0：按量计费；1：包年包月
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置付费类型，0：按量计费；1：包年包月
                     * @param _chargeType 付费类型，0：按量计费；1：包年包月
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取数据库IP
                     * @return CdbIp 数据库IP
                     * 
                     */
                    std::string GetCdbIp() const;

                    /**
                     * 设置数据库IP
                     * @param _cdbIp 数据库IP
                     * 
                     */
                    void SetCdbIp(const std::string& _cdbIp);

                    /**
                     * 判断参数 CdbIp 是否已赋值
                     * @return CdbIp 是否已赋值
                     * 
                     */
                    bool CdbIpHasBeenSet() const;

                    /**
                     * 获取数据库端口
                     * @return CdbPort 数据库端口
                     * 
                     */
                    int64_t GetCdbPort() const;

                    /**
                     * 设置数据库端口
                     * @param _cdbPort 数据库端口
                     * 
                     */
                    void SetCdbPort(const int64_t& _cdbPort);

                    /**
                     * 判断参数 CdbPort 是否已赋值
                     * @return CdbPort 是否已赋值
                     * 
                     */
                    bool CdbPortHasBeenSet() const;

                    /**
                     * 获取硬盘容量,单位b
                     * @return HwDiskSize 硬盘容量,单位b
                     * 
                     */
                    int64_t GetHwDiskSize() const;

                    /**
                     * 设置硬盘容量,单位b
                     * @param _hwDiskSize 硬盘容量,单位b
                     * 
                     */
                    void SetHwDiskSize(const int64_t& _hwDiskSize);

                    /**
                     * 判断参数 HwDiskSize 是否已赋值
                     * @return HwDiskSize 是否已赋值
                     * 
                     */
                    bool HwDiskSizeHasBeenSet() const;

                    /**
                     * 获取硬盘容量描述
                     * @return HwDiskSizeDesc 硬盘容量描述
                     * 
                     */
                    std::string GetHwDiskSizeDesc() const;

                    /**
                     * 设置硬盘容量描述
                     * @param _hwDiskSizeDesc 硬盘容量描述
                     * 
                     */
                    void SetHwDiskSizeDesc(const std::string& _hwDiskSizeDesc);

                    /**
                     * 判断参数 HwDiskSizeDesc 是否已赋值
                     * @return HwDiskSizeDesc 是否已赋值
                     * 
                     */
                    bool HwDiskSizeDescHasBeenSet() const;

                    /**
                     * 获取内存容量，单位b
                     * @return HwMemSize 内存容量，单位b
                     * 
                     */
                    int64_t GetHwMemSize() const;

                    /**
                     * 设置内存容量，单位b
                     * @param _hwMemSize 内存容量，单位b
                     * 
                     */
                    void SetHwMemSize(const int64_t& _hwMemSize);

                    /**
                     * 判断参数 HwMemSize 是否已赋值
                     * @return HwMemSize 是否已赋值
                     * 
                     */
                    bool HwMemSizeHasBeenSet() const;

                    /**
                     * 获取内存容量描述
                     * @return HwMemSizeDesc 内存容量描述
                     * 
                     */
                    std::string GetHwMemSizeDesc() const;

                    /**
                     * 设置内存容量描述
                     * @param _hwMemSizeDesc 内存容量描述
                     * 
                     */
                    void SetHwMemSizeDesc(const std::string& _hwMemSizeDesc);

                    /**
                     * 判断参数 HwMemSizeDesc 是否已赋值
                     * @return HwMemSizeDesc 是否已赋值
                     * 
                     */
                    bool HwMemSizeDescHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取节点资源ID
                     * @return EmrResourceId 节点资源ID
                     * 
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置节点资源ID
                     * @param _emrResourceId 节点资源ID
                     * 
                     */
                    void SetEmrResourceId(const std::string& _emrResourceId);

                    /**
                     * 判断参数 EmrResourceId 是否已赋值
                     * @return EmrResourceId 是否已赋值
                     * 
                     */
                    bool EmrResourceIdHasBeenSet() const;

                    /**
                     * 获取续费标志
                     * @return IsAutoRenew 续费标志
                     * 
                     */
                    int64_t GetIsAutoRenew() const;

                    /**
                     * 设置续费标志
                     * @param _isAutoRenew 续费标志
                     * 
                     */
                    void SetIsAutoRenew(const int64_t& _isAutoRenew);

                    /**
                     * 判断参数 IsAutoRenew 是否已赋值
                     * @return IsAutoRenew 是否已赋值
                     * 
                     */
                    bool IsAutoRenewHasBeenSet() const;

                    /**
                     * 获取设备标识
                     * @return DeviceClass 设备标识
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置设备标识
                     * @param _deviceClass 设备标识
                     * 
                     */
                    void SetDeviceClass(const std::string& _deviceClass);

                    /**
                     * 判断参数 DeviceClass 是否已赋值
                     * @return DeviceClass 是否已赋值
                     * 
                     */
                    bool DeviceClassHasBeenSet() const;

                    /**
                     * 获取支持变配
                     * @return Mutable 支持变配
                     * 
                     */
                    int64_t GetMutable() const;

                    /**
                     * 设置支持变配
                     * @param _mutable 支持变配
                     * 
                     */
                    void SetMutable(const int64_t& _mutable);

                    /**
                     * 判断参数 Mutable 是否已赋值
                     * @return Mutable 是否已赋值
                     * 
                     */
                    bool MutableHasBeenSet() const;

                    /**
                     * 获取多云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCMultiDisk 多云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MultiDiskMC> GetMCMultiDisk() const;

                    /**
                     * 设置多云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mCMultiDisk 多云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMCMultiDisk(const std::vector<MultiDiskMC>& _mCMultiDisk);

                    /**
                     * 判断参数 MCMultiDisk 是否已赋值
                     * @return MCMultiDisk 是否已赋值
                     * 
                     */
                    bool MCMultiDiskHasBeenSet() const;

                    /**
                     * 获取数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdbNodeInfo 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CdbInfo GetCdbNodeInfo() const;

                    /**
                     * 设置数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdbNodeInfo 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCdbNodeInfo(const CdbInfo& _cdbNodeInfo);

                    /**
                     * 判断参数 CdbNodeInfo 是否已赋值
                     * @return CdbNodeInfo 是否已赋值
                     * 
                     */
                    bool CdbNodeInfoHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return Ip 内网IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置内网IP
                     * @param _ip 内网IP
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
                     * 获取此节点是否可销毁，1可销毁，0不可销毁
                     * @return Destroyable 此节点是否可销毁，1可销毁，0不可销毁
                     * 
                     */
                    int64_t GetDestroyable() const;

                    /**
                     * 设置此节点是否可销毁，1可销毁，0不可销毁
                     * @param _destroyable 此节点是否可销毁，1可销毁，0不可销毁
                     * 
                     */
                    void SetDestroyable(const int64_t& _destroyable);

                    /**
                     * 判断参数 Destroyable 是否已赋值
                     * @return Destroyable 是否已赋值
                     * 
                     */
                    bool DestroyableHasBeenSet() const;

                    /**
                     * 获取节点绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 节点绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置节点绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 节点绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。
                     * @return AutoFlag 是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。
                     * 
                     */
                    int64_t GetAutoFlag() const;

                    /**
                     * 设置是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。
                     * @param _autoFlag 是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。
                     * 
                     */
                    void SetAutoFlag(const int64_t& _autoFlag);

                    /**
                     * 判断参数 AutoFlag 是否已赋值
                     * @return AutoFlag 是否已赋值
                     * 
                     */
                    bool AutoFlagHasBeenSet() const;

                    /**
                     * 获取资源类型, host/pod
                     * @return HardwareResourceType 资源类型, host/pod
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置资源类型, host/pod
                     * @param _hardwareResourceType 资源类型, host/pod
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                    /**
                     * 获取是否浮动规格，1是，0否
                     * @return IsDynamicSpec 是否浮动规格，1是，0否
                     * 
                     */
                    int64_t GetIsDynamicSpec() const;

                    /**
                     * 设置是否浮动规格，1是，0否
                     * @param _isDynamicSpec 是否浮动规格，1是，0否
                     * 
                     */
                    void SetIsDynamicSpec(const int64_t& _isDynamicSpec);

                    /**
                     * 判断参数 IsDynamicSpec 是否已赋值
                     * @return IsDynamicSpec 是否已赋值
                     * 
                     */
                    bool IsDynamicSpecHasBeenSet() const;

                    /**
                     * 获取浮动规格值json字符串
                     * @return DynamicPodSpec 浮动规格值json字符串
                     * 
                     */
                    std::string GetDynamicPodSpec() const;

                    /**
                     * 设置浮动规格值json字符串
                     * @param _dynamicPodSpec 浮动规格值json字符串
                     * 
                     */
                    void SetDynamicPodSpec(const std::string& _dynamicPodSpec);

                    /**
                     * 判断参数 DynamicPodSpec 是否已赋值
                     * @return DynamicPodSpec 是否已赋值
                     * 
                     */
                    bool DynamicPodSpecHasBeenSet() const;

                    /**
                     * 获取是否支持变更计费类型 1是，0否
                     * @return SupportModifyPayMode 是否支持变更计费类型 1是，0否
                     * 
                     */
                    int64_t GetSupportModifyPayMode() const;

                    /**
                     * 设置是否支持变更计费类型 1是，0否
                     * @param _supportModifyPayMode 是否支持变更计费类型 1是，0否
                     * 
                     */
                    void SetSupportModifyPayMode(const int64_t& _supportModifyPayMode);

                    /**
                     * 判断参数 SupportModifyPayMode 是否已赋值
                     * @return SupportModifyPayMode 是否已赋值
                     * 
                     */
                    bool SupportModifyPayModeHasBeenSet() const;

                    /**
                     * 获取系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     * @return RootStorageType 系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     * 
                     */
                    int64_t GetRootStorageType() const;

                    /**
                     * 设置系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     * @param _rootStorageType 系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     * 
                     */
                    void SetRootStorageType(const int64_t& _rootStorageType);

                    /**
                     * 判断参数 RootStorageType 是否已赋值
                     * @return RootStorageType 是否已赋值
                     * 
                     */
                    bool RootStorageTypeHasBeenSet() const;

                    /**
                     * 获取可用区信息
                     * @return Zone 可用区信息
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息
                     * @param _zone 可用区信息
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
                     * 获取子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetInfo 子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubnetInfo GetSubnetInfo() const;

                    /**
                     * 设置子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetInfo 子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetInfo(const SubnetInfo& _subnetInfo);

                    /**
                     * 判断参数 SubnetInfo 是否已赋值
                     * @return SubnetInfo 是否已赋值
                     * 
                     */
                    bool SubnetInfoHasBeenSet() const;

                    /**
                     * 获取客户端
                     * @return Clients 客户端
                     * 
                     */
                    std::string GetClients() const;

                    /**
                     * 设置客户端
                     * @param _clients 客户端
                     * 
                     */
                    void SetClients(const std::string& _clients);

                    /**
                     * 判断参数 Clients 是否已赋值
                     * @return Clients 是否已赋值
                     * 
                     */
                    bool ClientsHasBeenSet() const;

                    /**
                     * 获取系统当前时间
                     * @return CurrentTime 系统当前时间
                     * 
                     */
                    std::string GetCurrentTime() const;

                    /**
                     * 设置系统当前时间
                     * @param _currentTime 系统当前时间
                     * 
                     */
                    void SetCurrentTime(const std::string& _currentTime);

                    /**
                     * 判断参数 CurrentTime 是否已赋值
                     * @return CurrentTime 是否已赋值
                     * 
                     */
                    bool CurrentTimeHasBeenSet() const;

                    /**
                     * 获取是否用于联邦 ,1是，0否
                     * @return IsFederation 是否用于联邦 ,1是，0否
                     * 
                     */
                    int64_t GetIsFederation() const;

                    /**
                     * 设置是否用于联邦 ,1是，0否
                     * @param _isFederation 是否用于联邦 ,1是，0否
                     * 
                     */
                    void SetIsFederation(const int64_t& _isFederation);

                    /**
                     * 判断参数 IsFederation 是否已赋值
                     * @return IsFederation 是否已赋值
                     * 
                     */
                    bool IsFederationHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取服务
                     * @return ServiceClient 服务
                     * 
                     */
                    std::string GetServiceClient() const;

                    /**
                     * 设置服务
                     * @param _serviceClient 服务
                     * 
                     */
                    void SetServiceClient(const std::string& _serviceClient);

                    /**
                     * 判断参数 ServiceClient 是否已赋值
                     * @return ServiceClient 是否已赋值
                     * 
                     */
                    bool ServiceClientHasBeenSet() const;

                    /**
                     * 获取该实例是否开启实例保护，true为开启 false为关闭
                     * @return DisableApiTermination 该实例是否开启实例保护，true为开启 false为关闭
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置该实例是否开启实例保护，true为开启 false为关闭
                     * @param _disableApiTermination 该实例是否开启实例保护，true为开启 false为关闭
                     * 
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     * 
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                    /**
                     * 获取0表示老计费，1表示新计费
                     * @return TradeVersion 0表示老计费，1表示新计费
                     * 
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置0表示老计费，1表示新计费
                     * @param _tradeVersion 0表示老计费，1表示新计费
                     * 
                     */
                    void SetTradeVersion(const int64_t& _tradeVersion);

                    /**
                     * 判断参数 TradeVersion 是否已赋值
                     * @return TradeVersion 是否已赋值
                     * 
                     */
                    bool TradeVersionHasBeenSet() const;

                    /**
                     * 获取各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止
                     * @return ServicesStatus 各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止
                     * 
                     */
                    std::string GetServicesStatus() const;

                    /**
                     * 设置各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止
                     * @param _servicesStatus 各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止
                     * 
                     */
                    void SetServicesStatus(const std::string& _servicesStatus);

                    /**
                     * 判断参数 ServicesStatus 是否已赋值
                     * @return ServicesStatus 是否已赋值
                     * 
                     */
                    bool ServicesStatusHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取共享集群id
                     * @return SharedClusterId 共享集群id
                     * 
                     */
                    std::string GetSharedClusterId() const;

                    /**
                     * 设置共享集群id
                     * @param _sharedClusterId 共享集群id
                     * 
                     */
                    void SetSharedClusterId(const std::string& _sharedClusterId);

                    /**
                     * 判断参数 SharedClusterId 是否已赋值
                     * @return SharedClusterId 是否已赋值
                     * 
                     */
                    bool SharedClusterIdHasBeenSet() const;

                    /**
                     * 获取共享集群id描述
                     * @return SharedClusterIdDesc 共享集群id描述
                     * 
                     */
                    std::string GetSharedClusterIdDesc() const;

                    /**
                     * 设置共享集群id描述
                     * @param _sharedClusterIdDesc 共享集群id描述
                     * 
                     */
                    void SetSharedClusterIdDesc(const std::string& _sharedClusterIdDesc);

                    /**
                     * 判断参数 SharedClusterIdDesc 是否已赋值
                     * @return SharedClusterIdDesc 是否已赋值
                     * 
                     */
                    bool SharedClusterIdDescHasBeenSet() const;

                    /**
                     * 获取是否是定时销毁资源
                     * @return TimingResource 是否是定时销毁资源
                     * 
                     */
                    bool GetTimingResource() const;

                    /**
                     * 设置是否是定时销毁资源
                     * @param _timingResource 是否是定时销毁资源
                     * 
                     */
                    void SetTimingResource(const bool& _timingResource);

                    /**
                     * 判断参数 TimingResource 是否已赋值
                     * @return TimingResource 是否已赋值
                     * 
                     */
                    bool TimingResourceHasBeenSet() const;

                    /**
                     * 获取资源类型（HardwareResourceType）为pod时，对应的TKE集群id
                     * @return TkeClusterId 资源类型（HardwareResourceType）为pod时，对应的TKE集群id
                     * 
                     */
                    std::string GetTkeClusterId() const;

                    /**
                     * 设置资源类型（HardwareResourceType）为pod时，对应的TKE集群id
                     * @param _tkeClusterId 资源类型（HardwareResourceType）为pod时，对应的TKE集群id
                     * 
                     */
                    void SetTkeClusterId(const std::string& _tkeClusterId);

                    /**
                     * 判断参数 TkeClusterId 是否已赋值
                     * @return TkeClusterId 是否已赋值
                     * 
                     */
                    bool TkeClusterIdHasBeenSet() const;

                    /**
                     * 获取新挂磁盘时可支持配置的服务名称列表
                     * @return ConfigurableServices 新挂磁盘时可支持配置的服务名称列表
                     * 
                     */
                    std::vector<std::string> GetConfigurableServices() const;

                    /**
                     * 设置新挂磁盘时可支持配置的服务名称列表
                     * @param _configurableServices 新挂磁盘时可支持配置的服务名称列表
                     * 
                     */
                    void SetConfigurableServices(const std::vector<std::string>& _configurableServices);

                    /**
                     * 判断参数 ConfigurableServices 是否已赋值
                     * @return ConfigurableServices 是否已赋值
                     * 
                     */
                    bool ConfigurableServicesHasBeenSet() const;

                private:

                    /**
                     * 用户APPID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 序列号
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 机器实例ID
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * master节点绑定外网IP
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 节点规格
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 节点核数
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 节点内存,单位b
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 节点内存描述，单位GB
                     */
                    std::string m_memDesc;
                    bool m_memDescHasBeenSet;

                    /**
                     * 节点所在region
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 节点所在Zone
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 申请时间
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 释放时间
                     */
                    std::string m_freeTime;
                    bool m_freeTimeHasBeenSet;

                    /**
                     * 硬盘大小
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 节点描述
                     */
                    std::string m_nameTag;
                    bool m_nameTagHasBeenSet;

                    /**
                     * 节点部署服务
                     */
                    std::string m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * 磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 系统盘大小，单位GB
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * 付费类型，0：按量计费；1：包年包月
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 数据库IP
                     */
                    std::string m_cdbIp;
                    bool m_cdbIpHasBeenSet;

                    /**
                     * 数据库端口
                     */
                    int64_t m_cdbPort;
                    bool m_cdbPortHasBeenSet;

                    /**
                     * 硬盘容量,单位b
                     */
                    int64_t m_hwDiskSize;
                    bool m_hwDiskSizeHasBeenSet;

                    /**
                     * 硬盘容量描述
                     */
                    std::string m_hwDiskSizeDesc;
                    bool m_hwDiskSizeDescHasBeenSet;

                    /**
                     * 内存容量，单位b
                     */
                    int64_t m_hwMemSize;
                    bool m_hwMemSizeHasBeenSet;

                    /**
                     * 内存容量描述
                     */
                    std::string m_hwMemSizeDesc;
                    bool m_hwMemSizeDescHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 节点资源ID
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * 续费标志
                     */
                    int64_t m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * 设备标识
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * 支持变配
                     */
                    int64_t m_mutable;
                    bool m_mutableHasBeenSet;

                    /**
                     * 多云盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDiskMC> m_mCMultiDisk;
                    bool m_mCMultiDiskHasBeenSet;

                    /**
                     * 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CdbInfo m_cdbNodeInfo;
                    bool m_cdbNodeInfoHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 此节点是否可销毁，1可销毁，0不可销毁
                     */
                    int64_t m_destroyable;
                    bool m_destroyableHasBeenSet;

                    /**
                     * 节点绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。
                     */
                    int64_t m_autoFlag;
                    bool m_autoFlagHasBeenSet;

                    /**
                     * 资源类型, host/pod
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * 是否浮动规格，1是，0否
                     */
                    int64_t m_isDynamicSpec;
                    bool m_isDynamicSpecHasBeenSet;

                    /**
                     * 浮动规格值json字符串
                     */
                    std::string m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * 是否支持变更计费类型 1是，0否
                     */
                    int64_t m_supportModifyPayMode;
                    bool m_supportModifyPayModeHasBeenSet;

                    /**
                     * 系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘

                     */
                    int64_t m_rootStorageType;
                    bool m_rootStorageTypeHasBeenSet;

                    /**
                     * 可用区信息
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 子网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubnetInfo m_subnetInfo;
                    bool m_subnetInfoHasBeenSet;

                    /**
                     * 客户端
                     */
                    std::string m_clients;
                    bool m_clientsHasBeenSet;

                    /**
                     * 系统当前时间
                     */
                    std::string m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * 是否用于联邦 ,1是，0否
                     */
                    int64_t m_isFederation;
                    bool m_isFederationHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 服务
                     */
                    std::string m_serviceClient;
                    bool m_serviceClientHasBeenSet;

                    /**
                     * 该实例是否开启实例保护，true为开启 false为关闭
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * 0表示老计费，1表示新计费
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * 各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止
                     */
                    std::string m_servicesStatus;
                    bool m_servicesStatusHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 共享集群id
                     */
                    std::string m_sharedClusterId;
                    bool m_sharedClusterIdHasBeenSet;

                    /**
                     * 共享集群id描述
                     */
                    std::string m_sharedClusterIdDesc;
                    bool m_sharedClusterIdDescHasBeenSet;

                    /**
                     * 是否是定时销毁资源
                     */
                    bool m_timingResource;
                    bool m_timingResourceHasBeenSet;

                    /**
                     * 资源类型（HardwareResourceType）为pod时，对应的TKE集群id
                     */
                    std::string m_tkeClusterId;
                    bool m_tkeClusterIdHasBeenSet;

                    /**
                     * 新挂磁盘时可支持配置的服务名称列表
                     */
                    std::vector<std::string> m_configurableServices;
                    bool m_configurableServicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_
