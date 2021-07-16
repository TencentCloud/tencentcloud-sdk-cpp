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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppId 用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialNo 序列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SerialNo 序列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取机器实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderNo 机器实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置机器实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrderNo 机器实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取master节点绑定外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanIp master节点绑定外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置master节点绑定外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WanIp master节点绑定外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Flag 节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Flag 节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlag(const int64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取节点规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec 节点规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置节点规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Spec 节点规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取节点核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuNum 节点核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置节点核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CpuNum 节点核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取节点内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemSize 节点内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置节点内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MemSize 节点内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取节点内存描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemDesc 节点内存描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMemDesc() const;

                    /**
                     * 设置节点内存描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MemDesc 节点内存描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemDesc(const std::string& _memDesc);

                    /**
                     * 判断参数 MemDesc 是否已赋值
                     * @return MemDesc 是否已赋值
                     */
                    bool MemDescHasBeenSet() const;

                    /**
                     * 获取节点所在region
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 节点所在region
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置节点所在region
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionId 节点所在region
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取节点所在Zone
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 节点所在Zone
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置节点所在Zone
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneId 节点所在Zone
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplyTime 申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplyTime 申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取释放时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreeTime 释放时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFreeTime() const;

                    /**
                     * 设置释放时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FreeTime 释放时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFreeTime(const std::string& _freeTime);

                    /**
                     * 判断参数 FreeTime 是否已赋值
                     * @return FreeTime 是否已赋值
                     */
                    bool FreeTimeHasBeenSet() const;

                    /**
                     * 获取硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiskSize 硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiskSize(const std::string& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameTag 节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNameTag() const;

                    /**
                     * 设置节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NameTag 节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNameTag(const std::string& _nameTag);

                    /**
                     * 判断参数 NameTag 是否已赋值
                     * @return NameTag 是否已赋值
                     */
                    bool NameTagHasBeenSet() const;

                    /**
                     * 获取节点部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Services 节点部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServices() const;

                    /**
                     * 设置节点部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Services 节点部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServices(const std::string& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageType 磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootSize 系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RootSize 系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRootSize(const int64_t& _rootSize);

                    /**
                     * 判断参数 RootSize 是否已赋值
                     * @return RootSize 是否已赋值
                     */
                    bool RootSizeHasBeenSet() const;

                    /**
                     * 获取付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChargeType 付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取数据库IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdbIp 数据库IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCdbIp() const;

                    /**
                     * 设置数据库IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CdbIp 数据库IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCdbIp(const std::string& _cdbIp);

                    /**
                     * 判断参数 CdbIp 是否已赋值
                     * @return CdbIp 是否已赋值
                     */
                    bool CdbIpHasBeenSet() const;

                    /**
                     * 获取数据库端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdbPort 数据库端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCdbPort() const;

                    /**
                     * 设置数据库端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CdbPort 数据库端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCdbPort(const int64_t& _cdbPort);

                    /**
                     * 判断参数 CdbPort 是否已赋值
                     * @return CdbPort 是否已赋值
                     */
                    bool CdbPortHasBeenSet() const;

                    /**
                     * 获取硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HwDiskSize 硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetHwDiskSize() const;

                    /**
                     * 设置硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HwDiskSize 硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHwDiskSize(const int64_t& _hwDiskSize);

                    /**
                     * 判断参数 HwDiskSize 是否已赋值
                     * @return HwDiskSize 是否已赋值
                     */
                    bool HwDiskSizeHasBeenSet() const;

                    /**
                     * 获取硬盘容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HwDiskSizeDesc 硬盘容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHwDiskSizeDesc() const;

                    /**
                     * 设置硬盘容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HwDiskSizeDesc 硬盘容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHwDiskSizeDesc(const std::string& _hwDiskSizeDesc);

                    /**
                     * 判断参数 HwDiskSizeDesc 是否已赋值
                     * @return HwDiskSizeDesc 是否已赋值
                     */
                    bool HwDiskSizeDescHasBeenSet() const;

                    /**
                     * 获取内存容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HwMemSize 内存容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetHwMemSize() const;

                    /**
                     * 设置内存容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HwMemSize 内存容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHwMemSize(const int64_t& _hwMemSize);

                    /**
                     * 判断参数 HwMemSize 是否已赋值
                     * @return HwMemSize 是否已赋值
                     */
                    bool HwMemSizeHasBeenSet() const;

                    /**
                     * 获取内存容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HwMemSizeDesc 内存容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHwMemSizeDesc() const;

                    /**
                     * 设置内存容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HwMemSizeDesc 内存容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHwMemSizeDesc(const std::string& _hwMemSizeDesc);

                    /**
                     * 判断参数 HwMemSizeDesc 是否已赋值
                     * @return HwMemSizeDesc 是否已赋值
                     */
                    bool HwMemSizeDescHasBeenSet() const;

                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取节点资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmrResourceId 节点资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置节点资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EmrResourceId 节点资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEmrResourceId(const std::string& _emrResourceId);

                    /**
                     * 判断参数 EmrResourceId 是否已赋值
                     * @return EmrResourceId 是否已赋值
                     */
                    bool EmrResourceIdHasBeenSet() const;

                    /**
                     * 获取续费标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAutoRenew 续费标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsAutoRenew() const;

                    /**
                     * 设置续费标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsAutoRenew 续费标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsAutoRenew(const int64_t& _isAutoRenew);

                    /**
                     * 判断参数 IsAutoRenew 是否已赋值
                     * @return IsAutoRenew 是否已赋值
                     */
                    bool IsAutoRenewHasBeenSet() const;

                    /**
                     * 获取设备标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceClass 设备标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置设备标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeviceClass 设备标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeviceClass(const std::string& _deviceClass);

                    /**
                     * 判断参数 DeviceClass 是否已赋值
                     * @return DeviceClass 是否已赋值
                     */
                    bool DeviceClassHasBeenSet() const;

                    /**
                     * 获取支持变配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mutable 支持变配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMutable() const;

                    /**
                     * 设置支持变配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Mutable 支持变配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMutable(const int64_t& _mutable);

                    /**
                     * 判断参数 Mutable 是否已赋值
                     * @return Mutable 是否已赋值
                     */
                    bool MutableHasBeenSet() const;

                    /**
                     * 获取多云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCMultiDisk 多云盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDiskMC> GetMCMultiDisk() const;

                    /**
                     * 设置多云盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MCMultiDisk 多云盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMCMultiDisk(const std::vector<MultiDiskMC>& _mCMultiDisk);

                    /**
                     * 判断参数 MCMultiDisk 是否已赋值
                     * @return MCMultiDisk 是否已赋值
                     */
                    bool MCMultiDiskHasBeenSet() const;

                    /**
                     * 获取数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdbNodeInfo 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CdbInfo GetCdbNodeInfo() const;

                    /**
                     * 设置数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CdbNodeInfo 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCdbNodeInfo(const CdbInfo& _cdbNodeInfo);

                    /**
                     * 判断参数 CdbNodeInfo 是否已赋值
                     * @return CdbNodeInfo 是否已赋值
                     */
                    bool CdbNodeInfoHasBeenSet() const;

                    /**
                     * 获取内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIp() const;

                    /**
                     * 设置内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ip 内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取此节点是否可销毁，1可销毁，0不可销毁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Destroyable 此节点是否可销毁，1可销毁，0不可销毁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDestroyable() const;

                    /**
                     * 设置此节点是否可销毁，1可销毁，0不可销毁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Destroyable 此节点是否可销毁，1可销毁，0不可销毁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDestroyable(const int64_t& _destroyable);

                    /**
                     * 判断参数 Destroyable 是否已赋值
                     * @return Destroyable 是否已赋值
                     */
                    bool DestroyableHasBeenSet() const;

                    /**
                     * 获取节点绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 节点绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置节点绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 节点绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoFlag 是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAutoFlag() const;

                    /**
                     * 设置是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoFlag 是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoFlag(const int64_t& _autoFlag);

                    /**
                     * 判断参数 AutoFlag 是否已赋值
                     * @return AutoFlag 是否已赋值
                     */
                    bool AutoFlagHasBeenSet() const;

                    /**
                     * 获取资源类型, host/pod
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HardwareResourceType 资源类型, host/pod
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置资源类型, host/pod
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HardwareResourceType 资源类型, host/pod
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                    /**
                     * 获取是否浮动规格，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDynamicSpec 是否浮动规格，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsDynamicSpec() const;

                    /**
                     * 设置是否浮动规格，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsDynamicSpec 是否浮动规格，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsDynamicSpec(const int64_t& _isDynamicSpec);

                    /**
                     * 判断参数 IsDynamicSpec 是否已赋值
                     * @return IsDynamicSpec 是否已赋值
                     */
                    bool IsDynamicSpecHasBeenSet() const;

                    /**
                     * 获取浮动规格值json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DynamicPodSpec 浮动规格值json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDynamicPodSpec() const;

                    /**
                     * 设置浮动规格值json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DynamicPodSpec 浮动规格值json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDynamicPodSpec(const std::string& _dynamicPodSpec);

                    /**
                     * 判断参数 DynamicPodSpec 是否已赋值
                     * @return DynamicPodSpec 是否已赋值
                     */
                    bool DynamicPodSpecHasBeenSet() const;

                    /**
                     * 获取是否支持变更计费类型 1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportModifyPayMode 是否支持变更计费类型 1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSupportModifyPayMode() const;

                    /**
                     * 设置是否支持变更计费类型 1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SupportModifyPayMode 是否支持变更计费类型 1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSupportModifyPayMode(const int64_t& _supportModifyPayMode);

                    /**
                     * 判断参数 SupportModifyPayMode 是否已赋值
                     * @return SupportModifyPayMode 是否已赋值
                     */
                    bool SupportModifyPayModeHasBeenSet() const;

                private:

                    /**
                     * 用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 序列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 机器实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * master节点绑定外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 节点规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 节点核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 节点内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 节点内存描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memDesc;
                    bool m_memDescHasBeenSet;

                    /**
                     * 节点所在region
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 节点所在Zone
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 释放时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_freeTime;
                    bool m_freeTimeHasBeenSet;

                    /**
                     * 硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameTag;
                    bool m_nameTagHasBeenSet;

                    /**
                     * 节点部署服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * 磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 系统盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * 付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 数据库IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdbIp;
                    bool m_cdbIpHasBeenSet;

                    /**
                     * 数据库端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cdbPort;
                    bool m_cdbPortHasBeenSet;

                    /**
                     * 硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hwDiskSize;
                    bool m_hwDiskSizeHasBeenSet;

                    /**
                     * 硬盘容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hwDiskSizeDesc;
                    bool m_hwDiskSizeDescHasBeenSet;

                    /**
                     * 内存容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hwMemSize;
                    bool m_hwMemSizeHasBeenSet;

                    /**
                     * 内存容量描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hwMemSizeDesc;
                    bool m_hwMemSizeDescHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 节点资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * 续费标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * 设备标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * 支持变配
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 此节点是否可销毁，1可销毁，0不可销毁
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoFlag;
                    bool m_autoFlagHasBeenSet;

                    /**
                     * 资源类型, host/pod
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * 是否浮动规格，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDynamicSpec;
                    bool m_isDynamicSpecHasBeenSet;

                    /**
                     * 浮动规格值json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * 是否支持变更计费类型 1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_supportModifyPayMode;
                    bool m_supportModifyPayModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_
