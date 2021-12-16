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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISK_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 磁盘信息
                */
                class Disk : public AbstractModel
                {
                public:
                    Disk();
                    ~Disk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘ID
                     * @return DiskId 磁盘ID
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置磁盘ID
                     * @param DiskId 磁盘ID
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取磁盘名称
                     * @return DiskName 磁盘名称
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置磁盘名称
                     * @param DiskName 磁盘名称
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取磁盘类型
                     * @return DiskUsage 磁盘类型
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置磁盘类型
                     * @param DiskUsage 磁盘类型
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取磁盘介质类型
                     * @return DiskType 磁盘介质类型
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘介质类型
                     * @param DiskType 磁盘介质类型
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取磁盘付费类型
                     * @return DiskChargeType 磁盘付费类型
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置磁盘付费类型
                     * @param DiskChargeType 磁盘付费类型
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取磁盘大小
                     * @return DiskSize 磁盘大小
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小
                     * @param DiskSize 磁盘大小
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取续费标识
                     * @return RenewFlag 续费标识
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置续费标识
                     * @param RenewFlag 续费标识
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取磁盘状态
                     * @return DiskState 磁盘状态
                     */
                    std::string GetDiskState() const;

                    /**
                     * 设置磁盘状态
                     * @param DiskState 磁盘状态
                     */
                    void SetDiskState(const std::string& _diskState);

                    /**
                     * 判断参数 DiskState 是否已赋值
                     * @return DiskState 是否已赋值
                     */
                    bool DiskStateHasBeenSet() const;

                    /**
                     * 获取磁盘挂载状态
                     * @return Attached 磁盘挂载状态
                     */
                    bool GetAttached() const;

                    /**
                     * 设置磁盘挂载状态
                     * @param Attached 磁盘挂载状态
                     */
                    void SetAttached(const bool& _attached);

                    /**
                     * 判断参数 Attached 是否已赋值
                     * @return Attached 是否已赋值
                     */
                    bool AttachedHasBeenSet() const;

                    /**
                     * 获取是否随实例释放
                     * @return DeleteWithInstance 是否随实例释放
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置是否随实例释放
                     * @param DeleteWithInstance 是否随实例释放
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取上一次操作
                     * @return LatestOperation 上一次操作
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置上一次操作
                     * @param LatestOperation 上一次操作
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取上一次操作状态
                     * @return LatestOperationState 上一次操作状态
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置上一次操作状态
                     * @param LatestOperationState 上一次操作状态
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     */
                    bool LatestOperationStateHasBeenSet() const;

                    /**
                     * 获取上一次请求ID
                     * @return LatestOperationRequestId 上一次请求ID
                     */
                    std::string GetLatestOperationRequestId() const;

                    /**
                     * 设置上一次请求ID
                     * @param LatestOperationRequestId 上一次请求ID
                     */
                    void SetLatestOperationRequestId(const std::string& _latestOperationRequestId);

                    /**
                     * 判断参数 LatestOperationRequestId 是否已赋值
                     * @return LatestOperationRequestId 是否已赋值
                     */
                    bool LatestOperationRequestIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param CreatedTime 创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime 到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpiredTime 到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取隔离时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime 隔离时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置隔离时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsolatedTime 隔离时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     */
                    bool IsolatedTimeHasBeenSet() const;

                private:

                    /**
                     * 磁盘ID
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 磁盘名称
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * 磁盘类型
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 磁盘介质类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 磁盘付费类型
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * 磁盘大小
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 续费标识
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 磁盘状态
                     */
                    std::string m_diskState;
                    bool m_diskStateHasBeenSet;

                    /**
                     * 磁盘挂载状态
                     */
                    bool m_attached;
                    bool m_attachedHasBeenSet;

                    /**
                     * 是否随实例释放
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * 上一次操作
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 上一次操作状态
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * 上一次请求ID
                     */
                    std::string m_latestOperationRequestId;
                    bool m_latestOperationRequestIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 隔离时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISK_H_
