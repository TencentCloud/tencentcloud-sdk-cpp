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
#include <tencentcloud/emr/v20190103/model/DiskHealthIssue.h>


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
                     * 获取<p>用户APPID</p>
                     * @return AppId <p>用户APPID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>用户APPID</p>
                     * @param _appId <p>用户APPID</p>
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
                     * 获取<p>序列号</p>
                     * @return SerialNo <p>序列号</p>
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置<p>序列号</p>
                     * @param _serialNo <p>序列号</p>
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
                     * 获取<p>机器实例ID</p>
                     * @return OrderNo <p>机器实例ID</p>
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置<p>机器实例ID</p>
                     * @param _orderNo <p>机器实例ID</p>
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
                     * 获取<p>master节点绑定外网IP</p>
                     * @return WanIp <p>master节点绑定外网IP</p>
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置<p>master节点绑定外网IP</p>
                     * @param _wanIp <p>master节点绑定外网IP</p>
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
                     * 获取<p>节点类型。0:common节点；1:master节点<br>；2:core节点；3:task节点</p>
                     * @return Flag <p>节点类型。0:common节点；1:master节点<br>；2:core节点；3:task节点</p>
                     * 
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置<p>节点类型。0:common节点；1:master节点<br>；2:core节点；3:task节点</p>
                     * @param _flag <p>节点类型。0:common节点；1:master节点<br>；2:core节点；3:task节点</p>
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
                     * 获取<p>节点规格</p>
                     * @return Spec <p>节点规格</p>
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>节点规格</p>
                     * @param _spec <p>节点规格</p>
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
                     * 获取<p>节点核数</p>
                     * @return CpuNum <p>节点核数</p>
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置<p>节点核数</p>
                     * @param _cpuNum <p>节点核数</p>
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
                     * 获取<p>节点内存,单位b</p>
                     * @return MemSize <p>节点内存,单位b</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>节点内存,单位b</p>
                     * @param _memSize <p>节点内存,单位b</p>
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
                     * 获取<p>节点内存描述，单位GB</p>
                     * @return MemDesc <p>节点内存描述，单位GB</p>
                     * 
                     */
                    std::string GetMemDesc() const;

                    /**
                     * 设置<p>节点内存描述，单位GB</p>
                     * @param _memDesc <p>节点内存描述，单位GB</p>
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
                     * 获取<p>节点所在region</p>
                     * @return RegionId <p>节点所在region</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>节点所在region</p>
                     * @param _regionId <p>节点所在region</p>
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
                     * 获取<p>节点所在Zone</p>
                     * @return ZoneId <p>节点所在Zone</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>节点所在Zone</p>
                     * @param _zoneId <p>节点所在Zone</p>
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
                     * 获取<p>申请时间</p>
                     * @return ApplyTime <p>申请时间</p>
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置<p>申请时间</p>
                     * @param _applyTime <p>申请时间</p>
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
                     * 获取<p>释放时间</p>
                     * @return FreeTime <p>释放时间</p>
                     * 
                     */
                    std::string GetFreeTime() const;

                    /**
                     * 设置<p>释放时间</p>
                     * @param _freeTime <p>释放时间</p>
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
                     * 获取<p>硬盘大小</p>
                     * @return DiskSize <p>硬盘大小</p>
                     * 
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置<p>硬盘大小</p>
                     * @param _diskSize <p>硬盘大小</p>
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
                     * 获取<p>节点描述</p>
                     * @return NameTag <p>节点描述</p>
                     * 
                     */
                    std::string GetNameTag() const;

                    /**
                     * 设置<p>节点描述</p>
                     * @param _nameTag <p>节点描述</p>
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
                     * 获取<p>节点部署服务</p>
                     * @return Services <p>节点部署服务</p>
                     * 
                     */
                    std::string GetServices() const;

                    /**
                     * 设置<p>节点部署服务</p>
                     * @param _services <p>节点部署服务</p>
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
                     * 获取<p>磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
                     * @return StorageType <p>磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置<p>磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
                     * @param _storageType <p>磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
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
                     * 获取<p>系统盘大小，单位GB</p>
                     * @return RootSize <p>系统盘大小，单位GB</p>
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置<p>系统盘大小，单位GB</p>
                     * @param _rootSize <p>系统盘大小，单位GB</p>
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
                     * 获取<p>付费类型，0：按量计费；1：包年包月</p>
                     * @return ChargeType <p>付费类型，0：按量计费；1：包年包月</p>
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置<p>付费类型，0：按量计费；1：包年包月</p>
                     * @param _chargeType <p>付费类型，0：按量计费；1：包年包月</p>
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
                     * 获取<p>数据库IP</p>
                     * @return CdbIp <p>数据库IP</p>
                     * 
                     */
                    std::string GetCdbIp() const;

                    /**
                     * 设置<p>数据库IP</p>
                     * @param _cdbIp <p>数据库IP</p>
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
                     * 获取<p>数据库端口</p>
                     * @return CdbPort <p>数据库端口</p>
                     * 
                     */
                    int64_t GetCdbPort() const;

                    /**
                     * 设置<p>数据库端口</p>
                     * @param _cdbPort <p>数据库端口</p>
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
                     * 获取<p>硬盘容量,单位b</p>
                     * @return HwDiskSize <p>硬盘容量,单位b</p>
                     * 
                     */
                    int64_t GetHwDiskSize() const;

                    /**
                     * 设置<p>硬盘容量,单位b</p>
                     * @param _hwDiskSize <p>硬盘容量,单位b</p>
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
                     * 获取<p>硬盘容量描述</p>
                     * @return HwDiskSizeDesc <p>硬盘容量描述</p>
                     * 
                     */
                    std::string GetHwDiskSizeDesc() const;

                    /**
                     * 设置<p>硬盘容量描述</p>
                     * @param _hwDiskSizeDesc <p>硬盘容量描述</p>
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
                     * 获取<p>内存容量，单位b</p>
                     * @return HwMemSize <p>内存容量，单位b</p>
                     * 
                     */
                    int64_t GetHwMemSize() const;

                    /**
                     * 设置<p>内存容量，单位b</p>
                     * @param _hwMemSize <p>内存容量，单位b</p>
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
                     * 获取<p>内存容量描述</p>
                     * @return HwMemSizeDesc <p>内存容量描述</p>
                     * 
                     */
                    std::string GetHwMemSizeDesc() const;

                    /**
                     * 设置<p>内存容量描述</p>
                     * @param _hwMemSizeDesc <p>内存容量描述</p>
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
                     * 获取<p>过期时间</p>
                     * @return ExpireTime <p>过期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>过期时间</p>
                     * @param _expireTime <p>过期时间</p>
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
                     * 获取<p>节点资源ID</p>
                     * @return EmrResourceId <p>节点资源ID</p>
                     * 
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置<p>节点资源ID</p>
                     * @param _emrResourceId <p>节点资源ID</p>
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
                     * 获取<p>续费标志</p>
                     * @return IsAutoRenew <p>续费标志</p>
                     * 
                     */
                    int64_t GetIsAutoRenew() const;

                    /**
                     * 设置<p>续费标志</p>
                     * @param _isAutoRenew <p>续费标志</p>
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
                     * 获取<p>设备标识</p>
                     * @return DeviceClass <p>设备标识</p>
                     * 
                     */
                    std::string GetDeviceClass() const;

                    /**
                     * 设置<p>设备标识</p>
                     * @param _deviceClass <p>设备标识</p>
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
                     * 获取<p>支持变配</p>
                     * @return Mutable <p>支持变配</p>
                     * 
                     */
                    int64_t GetMutable() const;

                    /**
                     * 设置<p>支持变配</p>
                     * @param _mutable <p>支持变配</p>
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
                     * 获取<p>多云盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCMultiDisk <p>多云盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MultiDiskMC> GetMCMultiDisk() const;

                    /**
                     * 设置<p>多云盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mCMultiDisk <p>多云盘</p>
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
                     * 获取<p>数据库信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdbNodeInfo <p>数据库信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CdbInfo GetCdbNodeInfo() const;

                    /**
                     * 设置<p>数据库信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdbNodeInfo <p>数据库信息</p>
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
                     * 获取<p>内网IP</p>
                     * @return Ip <p>内网IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>内网IP</p>
                     * @param _ip <p>内网IP</p>
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
                     * 获取<p>此节点是否可销毁，1可销毁，0不可销毁</p>
                     * @return Destroyable <p>此节点是否可销毁，1可销毁，0不可销毁</p>
                     * 
                     */
                    int64_t GetDestroyable() const;

                    /**
                     * 设置<p>此节点是否可销毁，1可销毁，0不可销毁</p>
                     * @param _destroyable <p>此节点是否可销毁，1可销毁，0不可销毁</p>
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
                     * 获取<p>节点绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>节点绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>节点绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>节点绑定的标签</p>
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
                     * 获取<p>是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。</p>
                     * @return AutoFlag <p>是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。</p>
                     * 
                     */
                    int64_t GetAutoFlag() const;

                    /**
                     * 设置<p>是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。</p>
                     * @param _autoFlag <p>是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。</p>
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
                     * 获取<p>资源类型, host/pod</p>
                     * @return HardwareResourceType <p>资源类型, host/pod</p>
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置<p>资源类型, host/pod</p>
                     * @param _hardwareResourceType <p>资源类型, host/pod</p>
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
                     * 获取<p>是否浮动规格，1是，0否</p>
                     * @return IsDynamicSpec <p>是否浮动规格，1是，0否</p>
                     * 
                     */
                    int64_t GetIsDynamicSpec() const;

                    /**
                     * 设置<p>是否浮动规格，1是，0否</p>
                     * @param _isDynamicSpec <p>是否浮动规格，1是，0否</p>
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
                     * 获取<p>浮动规格值json字符串</p>
                     * @return DynamicPodSpec <p>浮动规格值json字符串</p>
                     * 
                     */
                    std::string GetDynamicPodSpec() const;

                    /**
                     * 设置<p>浮动规格值json字符串</p>
                     * @param _dynamicPodSpec <p>浮动规格值json字符串</p>
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
                     * 获取<p>是否支持变更计费类型 1是，0否</p>
                     * @return SupportModifyPayMode <p>是否支持变更计费类型 1是，0否</p>
                     * 
                     */
                    int64_t GetSupportModifyPayMode() const;

                    /**
                     * 设置<p>是否支持变更计费类型 1是，0否</p>
                     * @param _supportModifyPayMode <p>是否支持变更计费类型 1是，0否</p>
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
                     * 获取<p>系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
                     * @return RootStorageType <p>系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
                     * 
                     */
                    int64_t GetRootStorageType() const;

                    /**
                     * 设置<p>系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
                     * @param _rootStorageType <p>系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
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
                     * 获取<p>可用区信息</p>
                     * @return Zone <p>可用区信息</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区信息</p>
                     * @param _zone <p>可用区信息</p>
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
                     * 获取<p>子网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetInfo <p>子网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubnetInfo GetSubnetInfo() const;

                    /**
                     * 设置<p>子网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetInfo <p>子网</p>
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
                     * 获取<p>客户端</p>
                     * @return Clients <p>客户端</p>
                     * 
                     */
                    std::string GetClients() const;

                    /**
                     * 设置<p>客户端</p>
                     * @param _clients <p>客户端</p>
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
                     * 获取<p>系统当前时间</p>
                     * @return CurrentTime <p>系统当前时间</p>
                     * 
                     */
                    std::string GetCurrentTime() const;

                    /**
                     * 设置<p>系统当前时间</p>
                     * @param _currentTime <p>系统当前时间</p>
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
                     * 获取<p>是否用于联邦 ,1是，0否</p>
                     * @return IsFederation <p>是否用于联邦 ,1是，0否</p>
                     * 
                     */
                    int64_t GetIsFederation() const;

                    /**
                     * 设置<p>是否用于联邦 ,1是，0否</p>
                     * @param _isFederation <p>是否用于联邦 ,1是，0否</p>
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
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
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
                     * 获取<p>服务</p>
                     * @return ServiceClient <p>服务</p>
                     * 
                     */
                    std::string GetServiceClient() const;

                    /**
                     * 设置<p>服务</p>
                     * @param _serviceClient <p>服务</p>
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
                     * 获取<p>该实例是否开启实例保护，true为开启 false为关闭</p>
                     * @return DisableApiTermination <p>该实例是否开启实例保护，true为开启 false为关闭</p>
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置<p>该实例是否开启实例保护，true为开启 false为关闭</p>
                     * @param _disableApiTermination <p>该实例是否开启实例保护，true为开启 false为关闭</p>
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
                     * 获取<p>0表示老计费，1表示新计费</p>
                     * @return TradeVersion <p>0表示老计费，1表示新计费</p>
                     * 
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置<p>0表示老计费，1表示新计费</p>
                     * @param _tradeVersion <p>0表示老计费，1表示新计费</p>
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
                     * 获取<p>各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止</p>
                     * @return ServicesStatus <p>各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止</p>
                     * 
                     */
                    std::string GetServicesStatus() const;

                    /**
                     * 设置<p>各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止</p>
                     * @param _servicesStatus <p>各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止</p>
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
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
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
                     * 获取<p>共享集群id</p>
                     * @return SharedClusterId <p>共享集群id</p>
                     * 
                     */
                    std::string GetSharedClusterId() const;

                    /**
                     * 设置<p>共享集群id</p>
                     * @param _sharedClusterId <p>共享集群id</p>
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
                     * 获取<p>共享集群id描述</p>
                     * @return SharedClusterIdDesc <p>共享集群id描述</p>
                     * 
                     */
                    std::string GetSharedClusterIdDesc() const;

                    /**
                     * 设置<p>共享集群id描述</p>
                     * @param _sharedClusterIdDesc <p>共享集群id描述</p>
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
                     * 获取<p>是否是定时销毁资源</p>
                     * @return TimingResource <p>是否是定时销毁资源</p>
                     * 
                     */
                    bool GetTimingResource() const;

                    /**
                     * 设置<p>是否是定时销毁资源</p>
                     * @param _timingResource <p>是否是定时销毁资源</p>
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
                     * 获取<p>资源类型（HardwareResourceType）为pod时，对应的TKE集群id</p>
                     * @return TkeClusterId <p>资源类型（HardwareResourceType）为pod时，对应的TKE集群id</p>
                     * 
                     */
                    std::string GetTkeClusterId() const;

                    /**
                     * 设置<p>资源类型（HardwareResourceType）为pod时，对应的TKE集群id</p>
                     * @param _tkeClusterId <p>资源类型（HardwareResourceType）为pod时，对应的TKE集群id</p>
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
                     * 获取<p>新挂磁盘时可支持配置的服务名称列表</p>
                     * @return ConfigurableServices <p>新挂磁盘时可支持配置的服务名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetConfigurableServices() const;

                    /**
                     * 设置<p>新挂磁盘时可支持配置的服务名称列表</p>
                     * @param _configurableServices <p>新挂磁盘时可支持配置的服务名称列表</p>
                     * 
                     */
                    void SetConfigurableServices(const std::vector<std::string>& _configurableServices);

                    /**
                     * 判断参数 ConfigurableServices 是否已赋值
                     * @return ConfigurableServices 是否已赋值
                     * 
                     */
                    bool ConfigurableServicesHasBeenSet() const;

                    /**
                     * 获取<p>节点标注信息，目前只提供给tf平台使用</p>
                     * @return NodeMark <p>节点标注信息，目前只提供给tf平台使用</p>
                     * 
                     */
                    std::string GetNodeMark() const;

                    /**
                     * 设置<p>节点标注信息，目前只提供给tf平台使用</p>
                     * @param _nodeMark <p>节点标注信息，目前只提供给tf平台使用</p>
                     * 
                     */
                    void SetNodeMark(const std::string& _nodeMark);

                    /**
                     * 判断参数 NodeMark 是否已赋值
                     * @return NodeMark 是否已赋值
                     * 
                     */
                    bool NodeMarkHasBeenSet() const;

                    /**
                     * 获取<p>包销资源是否支持设置自动续费</p>
                     * @return UnderwriteSetAutoRenew <p>包销资源是否支持设置自动续费</p>
                     * 
                     */
                    bool GetUnderwriteSetAutoRenew() const;

                    /**
                     * 设置<p>包销资源是否支持设置自动续费</p>
                     * @param _underwriteSetAutoRenew <p>包销资源是否支持设置自动续费</p>
                     * 
                     */
                    void SetUnderwriteSetAutoRenew(const bool& _underwriteSetAutoRenew);

                    /**
                     * 判断参数 UnderwriteSetAutoRenew 是否已赋值
                     * @return UnderwriteSetAutoRenew 是否已赋值
                     * 
                     */
                    bool UnderwriteSetAutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Gpu信息</p>
                     * @return GpuDesc <p>Gpu信息</p>
                     * 
                     */
                    std::string GetGpuDesc() const;

                    /**
                     * 设置<p>Gpu信息</p>
                     * @param _gpuDesc <p>Gpu信息</p>
                     * 
                     */
                    void SetGpuDesc(const std::string& _gpuDesc);

                    /**
                     * 判断参数 GpuDesc 是否已赋值
                     * @return GpuDesc 是否已赋值
                     * 
                     */
                    bool GpuDescHasBeenSet() const;

                    /**
                     * 获取<p>磁盘问题描述</p>
                     * @return DiskHealthIssues <p>磁盘问题描述</p>
                     * 
                     */
                    std::vector<DiskHealthIssue> GetDiskHealthIssues() const;

                    /**
                     * 设置<p>磁盘问题描述</p>
                     * @param _diskHealthIssues <p>磁盘问题描述</p>
                     * 
                     */
                    void SetDiskHealthIssues(const std::vector<DiskHealthIssue>& _diskHealthIssues);

                    /**
                     * 判断参数 DiskHealthIssues 是否已赋值
                     * @return DiskHealthIssues 是否已赋值
                     * 
                     */
                    bool DiskHealthIssuesHasBeenSet() const;

                private:

                    /**
                     * <p>用户APPID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>序列号</p>
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * <p>机器实例ID</p>
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * <p>master节点绑定外网IP</p>
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * <p>节点类型。0:common节点；1:master节点<br>；2:core节点；3:task节点</p>
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * <p>节点规格</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>节点核数</p>
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * <p>节点内存,单位b</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>节点内存描述，单位GB</p>
                     */
                    std::string m_memDesc;
                    bool m_memDescHasBeenSet;

                    /**
                     * <p>节点所在region</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>节点所在Zone</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>申请时间</p>
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * <p>释放时间</p>
                     */
                    std::string m_freeTime;
                    bool m_freeTimeHasBeenSet;

                    /**
                     * <p>硬盘大小</p>
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>节点描述</p>
                     */
                    std::string m_nameTag;
                    bool m_nameTagHasBeenSet;

                    /**
                     * <p>节点部署服务</p>
                     */
                    std::string m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * <p>磁盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>系统盘大小，单位GB</p>
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * <p>付费类型，0：按量计费；1：包年包月</p>
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>数据库IP</p>
                     */
                    std::string m_cdbIp;
                    bool m_cdbIpHasBeenSet;

                    /**
                     * <p>数据库端口</p>
                     */
                    int64_t m_cdbPort;
                    bool m_cdbPortHasBeenSet;

                    /**
                     * <p>硬盘容量,单位b</p>
                     */
                    int64_t m_hwDiskSize;
                    bool m_hwDiskSizeHasBeenSet;

                    /**
                     * <p>硬盘容量描述</p>
                     */
                    std::string m_hwDiskSizeDesc;
                    bool m_hwDiskSizeDescHasBeenSet;

                    /**
                     * <p>内存容量，单位b</p>
                     */
                    int64_t m_hwMemSize;
                    bool m_hwMemSizeHasBeenSet;

                    /**
                     * <p>内存容量描述</p>
                     */
                    std::string m_hwMemSizeDesc;
                    bool m_hwMemSizeDescHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>节点资源ID</p>
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * <p>续费标志</p>
                     */
                    int64_t m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * <p>设备标识</p>
                     */
                    std::string m_deviceClass;
                    bool m_deviceClassHasBeenSet;

                    /**
                     * <p>支持变配</p>
                     */
                    int64_t m_mutable;
                    bool m_mutableHasBeenSet;

                    /**
                     * <p>多云盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDiskMC> m_mCMultiDisk;
                    bool m_mCMultiDiskHasBeenSet;

                    /**
                     * <p>数据库信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CdbInfo m_cdbNodeInfo;
                    bool m_cdbNodeInfoHasBeenSet;

                    /**
                     * <p>内网IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>此节点是否可销毁，1可销毁，0不可销毁</p>
                     */
                    int64_t m_destroyable;
                    bool m_destroyableHasBeenSet;

                    /**
                     * <p>节点绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否是自动扩缩容节点，0为普通节点，1为自动扩缩容节点。</p>
                     */
                    int64_t m_autoFlag;
                    bool m_autoFlagHasBeenSet;

                    /**
                     * <p>资源类型, host/pod</p>
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * <p>是否浮动规格，1是，0否</p>
                     */
                    int64_t m_isDynamicSpec;
                    bool m_isDynamicSpecHasBeenSet;

                    /**
                     * <p>浮动规格值json字符串</p>
                     */
                    std::string m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * <p>是否支持变更计费类型 1是，0否</p>
                     */
                    int64_t m_supportModifyPayMode;
                    bool m_supportModifyPayModeHasBeenSet;

                    /**
                     * <p>系统盘类型，1 :本地盘 2 :云硬盘 3 : 本地SSD 4 : 云SSD 5 : 高效云盘 6 : 增强型SSD云硬盘 11 : 吞吐型云硬盘 12 : 极速型SSD云硬盘 13 : 通用型SSD云硬盘 14 : 大数据型云硬盘 15 : 高IO型云硬盘 16 : 远端SSD盘</p>
                     */
                    int64_t m_rootStorageType;
                    bool m_rootStorageTypeHasBeenSet;

                    /**
                     * <p>可用区信息</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>子网</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubnetInfo m_subnetInfo;
                    bool m_subnetInfoHasBeenSet;

                    /**
                     * <p>客户端</p>
                     */
                    std::string m_clients;
                    bool m_clientsHasBeenSet;

                    /**
                     * <p>系统当前时间</p>
                     */
                    std::string m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * <p>是否用于联邦 ,1是，0否</p>
                     */
                    int64_t m_isFederation;
                    bool m_isFederationHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>服务</p>
                     */
                    std::string m_serviceClient;
                    bool m_serviceClientHasBeenSet;

                    /**
                     * <p>该实例是否开启实例保护，true为开启 false为关闭</p>
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * <p>0表示老计费，1表示新计费</p>
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * <p>各组件状态，Zookeeper:STARTED,ResourceManager:STARTED，STARTED已启动，STOPED已停止</p>
                     */
                    std::string m_servicesStatus;
                    bool m_servicesStatusHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>共享集群id</p>
                     */
                    std::string m_sharedClusterId;
                    bool m_sharedClusterIdHasBeenSet;

                    /**
                     * <p>共享集群id描述</p>
                     */
                    std::string m_sharedClusterIdDesc;
                    bool m_sharedClusterIdDescHasBeenSet;

                    /**
                     * <p>是否是定时销毁资源</p>
                     */
                    bool m_timingResource;
                    bool m_timingResourceHasBeenSet;

                    /**
                     * <p>资源类型（HardwareResourceType）为pod时，对应的TKE集群id</p>
                     */
                    std::string m_tkeClusterId;
                    bool m_tkeClusterIdHasBeenSet;

                    /**
                     * <p>新挂磁盘时可支持配置的服务名称列表</p>
                     */
                    std::vector<std::string> m_configurableServices;
                    bool m_configurableServicesHasBeenSet;

                    /**
                     * <p>节点标注信息，目前只提供给tf平台使用</p>
                     */
                    std::string m_nodeMark;
                    bool m_nodeMarkHasBeenSet;

                    /**
                     * <p>包销资源是否支持设置自动续费</p>
                     */
                    bool m_underwriteSetAutoRenew;
                    bool m_underwriteSetAutoRenewHasBeenSet;

                    /**
                     * <p>Gpu信息</p>
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                    /**
                     * <p>磁盘问题描述</p>
                     */
                    std::vector<DiskHealthIssue> m_diskHealthIssues;
                    bool m_diskHealthIssuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEHARDWAREINFO_H_
