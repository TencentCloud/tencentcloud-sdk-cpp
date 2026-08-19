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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_REMOTEDISKDETAIL_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_REMOTEDISKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Placement.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 单副本SSD硬盘详情。
                */
                class RemoteDiskDetail : public AbstractModel
                {
                public:
                    RemoteDiskDetail();
                    ~RemoteDiskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>单副本SSD硬盘的创建时间。</p>
                     * @return CreateTime <p>单副本SSD硬盘的创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>单副本SSD硬盘的创建时间。</p>
                     * @param _createTime <p>单副本SSD硬盘的创建时间。</p>
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
                     * 获取<p>单副本SSD硬盘到期时间。按小时后付费单副本SSD硬盘可能为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadlineTime <p>单副本SSD硬盘到期时间。按小时后付费单副本SSD硬盘可能为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置<p>单副本SSD硬盘到期时间。按小时后付费单副本SSD硬盘可能为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadlineTime <p>单副本SSD硬盘到期时间。按小时后付费单副本SSD硬盘可能为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * @return DiskChargeType <p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置<p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * @param _diskChargeType <p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * 
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     * 
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>单副本SSD硬盘大小，单位为 GiB。</p>
                     * @return DiskSize <p>单副本SSD硬盘大小，单位为 GiB。</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>单副本SSD硬盘大小，单位为 GiB。</p>
                     * @param _diskSize <p>单副本SSD硬盘大小，单位为 GiB。</p>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>单副本SSD硬盘挂载的云服务器实例ID。未挂载时为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>单副本SSD硬盘挂载的云服务器实例ID。未挂载时为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>单副本SSD硬盘挂载的云服务器实例ID。未挂载时为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>单副本SSD硬盘挂载的云服务器实例ID。未挂载时为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>单副本SSD硬盘所在的位置。</p>
                     * @return Placement <p>单副本SSD硬盘所在的位置。</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>单副本SSD硬盘所在的位置。</p>
                     * @param _placement <p>单副本SSD硬盘所在的位置。</p>
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取<p>单副本SSD硬盘ID。</p>
                     * @return RemoteDiskId <p>单副本SSD硬盘ID。</p>
                     * 
                     */
                    std::string GetRemoteDiskId() const;

                    /**
                     * 设置<p>单副本SSD硬盘ID。</p>
                     * @param _remoteDiskId <p>单副本SSD硬盘ID。</p>
                     * 
                     */
                    void SetRemoteDiskId(const std::string& _remoteDiskId);

                    /**
                     * 判断参数 RemoteDiskId 是否已赋值
                     * @return RemoteDiskId 是否已赋值
                     * 
                     */
                    bool RemoteDiskIdHasBeenSet() const;

                    /**
                     * 获取<p>单副本SSD硬盘名称。</p>
                     * @return RemoteDiskName <p>单副本SSD硬盘名称。</p>
                     * 
                     */
                    std::string GetRemoteDiskName() const;

                    /**
                     * 设置<p>单副本SSD硬盘名称。</p>
                     * @param _remoteDiskName <p>单副本SSD硬盘名称。</p>
                     * 
                     */
                    void SetRemoteDiskName(const std::string& _remoteDiskName);

                    /**
                     * 判断参数 RemoteDiskName 是否已赋值
                     * @return RemoteDiskName 是否已赋值
                     * 
                     */
                    bool RemoteDiskNameHasBeenSet() const;

                    /**
                     * 获取<p>单副本SSD硬盘状态。</p><p>枚举值：</p><ul><li>UNATTACHED： 未挂载</li><li>ATTACHED： 已挂载</li><li>TORECYCLE： 待回收</li></ul>
                     * @return RemoteDiskState <p>单副本SSD硬盘状态。</p><p>枚举值：</p><ul><li>UNATTACHED： 未挂载</li><li>ATTACHED： 已挂载</li><li>TORECYCLE： 待回收</li></ul>
                     * 
                     */
                    std::string GetRemoteDiskState() const;

                    /**
                     * 设置<p>单副本SSD硬盘状态。</p><p>枚举值：</p><ul><li>UNATTACHED： 未挂载</li><li>ATTACHED： 已挂载</li><li>TORECYCLE： 待回收</li></ul>
                     * @param _remoteDiskState <p>单副本SSD硬盘状态。</p><p>枚举值：</p><ul><li>UNATTACHED： 未挂载</li><li>ATTACHED： 已挂载</li><li>TORECYCLE： 待回收</li></ul>
                     * 
                     */
                    void SetRemoteDiskState(const std::string& _remoteDiskState);

                    /**
                     * 判断参数 RemoteDiskState 是否已赋值
                     * @return RemoteDiskState 是否已赋值
                     * 
                     */
                    bool RemoteDiskStateHasBeenSet() const;

                    /**
                     * 获取<p>单副本SSD硬盘类型。</p><p>枚举值：</p><ul><li>REMOTE_SSD： 单副本SSD硬盘</li><li>ELASTIC_REMOTE_SSD： 弹性单副本SSD硬盘</li></ul>
                     * @return RemoteDiskType <p>单副本SSD硬盘类型。</p><p>枚举值：</p><ul><li>REMOTE_SSD： 单副本SSD硬盘</li><li>ELASTIC_REMOTE_SSD： 弹性单副本SSD硬盘</li></ul>
                     * 
                     */
                    std::string GetRemoteDiskType() const;

                    /**
                     * 设置<p>单副本SSD硬盘类型。</p><p>枚举值：</p><ul><li>REMOTE_SSD： 单副本SSD硬盘</li><li>ELASTIC_REMOTE_SSD： 弹性单副本SSD硬盘</li></ul>
                     * @param _remoteDiskType <p>单副本SSD硬盘类型。</p><p>枚举值：</p><ul><li>REMOTE_SSD： 单副本SSD硬盘</li><li>ELASTIC_REMOTE_SSD： 弹性单副本SSD硬盘</li></ul>
                     * 
                     */
                    void SetRemoteDiskType(const std::string& _remoteDiskType);

                    /**
                     * 判断参数 RemoteDiskType 是否已赋值
                     * @return RemoteDiskType 是否已赋值
                     * 
                     */
                    bool RemoteDiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识。</p><p>枚举值：</p><ul><li>NOTIFY_AND_AUTO_RENEW： 通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW： 通知过期不自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知过期不自动续费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag <p>自动续费标识。</p><p>枚举值：</p><ul><li>NOTIFY_AND_AUTO_RENEW： 通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW： 通知过期不自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知过期不自动续费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识。</p><p>枚举值：</p><ul><li>NOTIFY_AND_AUTO_RENEW： 通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW： 通知过期不自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知过期不自动续费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag <p>自动续费标识。</p><p>枚举值：</p><ul><li>NOTIFY_AND_AUTO_RENEW： 通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW： 通知过期不自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知过期不自动续费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * <p>单副本SSD硬盘的创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘到期时间。按小时后付费单副本SSD硬盘可能为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘计费类型。</p><p>枚举值：</p><ul><li>PREPAID： 预付费</li><li>POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘大小，单位为 GiB。</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘挂载的云服务器实例ID。未挂载时为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘所在的位置。</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘ID。</p>
                     */
                    std::string m_remoteDiskId;
                    bool m_remoteDiskIdHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘名称。</p>
                     */
                    std::string m_remoteDiskName;
                    bool m_remoteDiskNameHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘状态。</p><p>枚举值：</p><ul><li>UNATTACHED： 未挂载</li><li>ATTACHED： 已挂载</li><li>TORECYCLE： 待回收</li></ul>
                     */
                    std::string m_remoteDiskState;
                    bool m_remoteDiskStateHasBeenSet;

                    /**
                     * <p>单副本SSD硬盘类型。</p><p>枚举值：</p><ul><li>REMOTE_SSD： 单副本SSD硬盘</li><li>ELASTIC_REMOTE_SSD： 弹性单副本SSD硬盘</li></ul>
                     */
                    std::string m_remoteDiskType;
                    bool m_remoteDiskTypeHasBeenSet;

                    /**
                     * <p>自动续费标识。</p><p>枚举值：</p><ul><li>NOTIFY_AND_AUTO_RENEW： 通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW： 通知过期不自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知过期不自动续费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_REMOTEDISKDETAIL_H_
