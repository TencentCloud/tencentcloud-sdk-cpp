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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_SNAPSHOTINFO_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_SNAPSHOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 快照信息
                */
                class SnapshotInfo : public AbstractModel
                {
                public:
                    SnapshotInfo();
                    ~SnapshotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>快照唯一ID</p>
                     * @return SnapshotId <p>快照唯一ID</p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>快照唯一ID</p>
                     * @param _snapshotId <p>快照唯一ID</p>
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取<p>快照对应的云硬盘ID</p>
                     * @return DiskId <p>快照对应的云硬盘ID</p>
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>快照对应的云硬盘ID</p>
                     * @param _diskId <p>快照对应的云硬盘ID</p>
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取<p>快照状态，取值如下：<br>NORMAL：正常<br>CREATING：创建中<br>ROLLBACKING：回滚中<br>COPYING_FROM_REMOTE：跨地域复制中<br>CHECKING_COPIED：复制校验中<br>TORECYCLE：待回收。</p>
                     * @return SnapshotState <p>快照状态，取值如下：<br>NORMAL：正常<br>CREATING：创建中<br>ROLLBACKING：回滚中<br>COPYING_FROM_REMOTE：跨地域复制中<br>CHECKING_COPIED：复制校验中<br>TORECYCLE：待回收。</p>
                     * 
                     */
                    std::string GetSnapshotState() const;

                    /**
                     * 设置<p>快照状态，取值如下：<br>NORMAL：正常<br>CREATING：创建中<br>ROLLBACKING：回滚中<br>COPYING_FROM_REMOTE：跨地域复制中<br>CHECKING_COPIED：复制校验中<br>TORECYCLE：待回收。</p>
                     * @param _snapshotState <p>快照状态，取值如下：<br>NORMAL：正常<br>CREATING：创建中<br>ROLLBACKING：回滚中<br>COPYING_FROM_REMOTE：跨地域复制中<br>CHECKING_COPIED：复制校验中<br>TORECYCLE：待回收。</p>
                     * 
                     */
                    void SetSnapshotState(const std::string& _snapshotState);

                    /**
                     * 判断参数 SnapshotState 是否已赋值
                     * @return SnapshotState 是否已赋值
                     * 
                     */
                    bool SnapshotStateHasBeenSet() const;

                    /**
                     * 获取<p>创建此快照的云硬盘类型。取值范围：<br>SYSTEM_DISK：系统盘<br>DATA_DISK：数据盘。</p>
                     * @return DiskUsage <p>创建此快照的云硬盘类型。取值范围：<br>SYSTEM_DISK：系统盘<br>DATA_DISK：数据盘。</p>
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置<p>创建此快照的云硬盘类型。取值范围：<br>SYSTEM_DISK：系统盘<br>DATA_DISK：数据盘。</p>
                     * @param _diskUsage <p>创建此快照的云硬盘类型。取值范围：<br>SYSTEM_DISK：系统盘<br>DATA_DISK：数据盘。</p>
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取<p>快照创建的时间</p>
                     * @return CreateTime <p>快照创建的时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>快照创建的时间</p>
                     * @param _createTime <p>快照创建的时间</p>
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
                     * 获取<p>快照到期时间。如果快照为永久保留，此字段为空。</p>
                     * @return DeadlineTime <p>快照到期时间。如果快照为永久保留，此字段为空。</p>
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置<p>快照到期时间。如果快照为永久保留，此字段为空。</p>
                     * @param _deadlineTime <p>快照到期时间。如果快照为永久保留，此字段为空。</p>
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取<p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
                     * @return Percent <p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置<p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
                     * @param _percent <p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取<p>是否为永久快照。取值范围：<br>true：永久快照<br>false：非永久快照。</p>
                     * @return IsPermanent <p>是否为永久快照。取值范围：<br>true：永久快照<br>false：非永久快照。</p>
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置<p>是否为永久快照。取值范围：<br>true：永久快照<br>false：非永久快照。</p>
                     * @param _isPermanent <p>是否为永久快照。取值范围：<br>true：永久快照<br>false：非永久快照。</p>
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取<p>快照创建方式，取值:<br>ManualSnapshot：手动创建<br>AutoSnapshot：快照策略自动创建</p>
                     * @return CreateType <p>快照创建方式，取值:<br>ManualSnapshot：手动创建<br>AutoSnapshot：快照策略自动创建</p>
                     * 
                     */
                    std::string GetCreateType() const;

                    /**
                     * 设置<p>快照创建方式，取值:<br>ManualSnapshot：手动创建<br>AutoSnapshot：快照策略自动创建</p>
                     * @param _createType <p>快照创建方式，取值:<br>ManualSnapshot：手动创建<br>AutoSnapshot：快照策略自动创建</p>
                     * 
                     */
                    void SetCreateType(const std::string& _createType);

                    /**
                     * 判断参数 CreateType 是否已赋值
                     * @return CreateType 是否已赋值
                     * 
                     */
                    bool CreateTypeHasBeenSet() const;

                    /**
                     * 获取<p>上一次快照回滚完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRollbackTime <p>上一次快照回滚完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastRollbackTime() const;

                    /**
                     * 设置<p>上一次快照回滚完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRollbackTime <p>上一次快照回滚完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastRollbackTime(const std::string& _lastRollbackTime);

                    /**
                     * 判断参数 LastRollbackTime 是否已赋值
                     * @return LastRollbackTime 是否已赋值
                     * 
                     */
                    bool LastRollbackTimeHasBeenSet() const;

                    /**
                     * 获取<p>上一次快照回滚状态，取值：<br>成功：SUCCESS<br>失败：FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRollbackState <p>上一次快照回滚状态，取值：<br>成功：SUCCESS<br>失败：FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastRollbackState() const;

                    /**
                     * 设置<p>上一次快照回滚状态，取值：<br>成功：SUCCESS<br>失败：FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRollbackState <p>上一次快照回滚状态，取值：<br>成功：SUCCESS<br>失败：FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastRollbackState(const std::string& _lastRollbackState);

                    /**
                     * 判断参数 LastRollbackState 是否已赋值
                     * @return LastRollbackState 是否已赋值
                     * 
                     */
                    bool LastRollbackStateHasBeenSet() const;

                private:

                    /**
                     * <p>快照唯一ID</p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>快照对应的云硬盘ID</p>
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <p>快照状态，取值如下：<br>NORMAL：正常<br>CREATING：创建中<br>ROLLBACKING：回滚中<br>COPYING_FROM_REMOTE：跨地域复制中<br>CHECKING_COPIED：复制校验中<br>TORECYCLE：待回收。</p>
                     */
                    std::string m_snapshotState;
                    bool m_snapshotStateHasBeenSet;

                    /**
                     * <p>创建此快照的云硬盘类型。取值范围：<br>SYSTEM_DISK：系统盘<br>DATA_DISK：数据盘。</p>
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * <p>快照创建的时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>快照到期时间。如果快照为永久保留，此字段为空。</p>
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * <p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>是否为永久快照。取值范围：<br>true：永久快照<br>false：非永久快照。</p>
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * <p>快照创建方式，取值:<br>ManualSnapshot：手动创建<br>AutoSnapshot：快照策略自动创建</p>
                     */
                    std::string m_createType;
                    bool m_createTypeHasBeenSet;

                    /**
                     * <p>上一次快照回滚完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastRollbackTime;
                    bool m_lastRollbackTimeHasBeenSet;

                    /**
                     * <p>上一次快照回滚状态，取值：<br>成功：SUCCESS<br>失败：FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastRollbackState;
                    bool m_lastRollbackStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_SNAPSHOTINFO_H_
