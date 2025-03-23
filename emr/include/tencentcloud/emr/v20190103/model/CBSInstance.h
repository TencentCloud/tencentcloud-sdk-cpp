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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CBSINSTANCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CBSINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CBS实例信息
                */
                class CBSInstance : public AbstractModel
                {
                public:
                    CBSInstance();
                    ~CBSInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云硬盘ID
                     * @return DiskId 云硬盘ID
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云硬盘ID
                     * @param _diskId 云硬盘ID
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
                     * 获取云硬盘类型
                     * @return DiskUsage 云硬盘类型
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置云硬盘类型
                     * @param _diskUsage 云硬盘类型
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
                     * 获取云硬盘名称
                     * @return DiskName 云硬盘名称
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置云硬盘名称
                     * @param _diskName 云硬盘名称
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取云硬盘大小
                     * @return DiskSize 云硬盘大小
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置云硬盘大小
                     * @param _diskSize 云硬盘大小
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取云盘介质类型
                     * @return DiskType 云盘介质类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置云盘介质类型
                     * @param _diskType 云盘介质类型
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取是否跟随实例删除
                     * @return DeleteWithInstance 是否跟随实例删除
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置是否跟随实例删除
                     * @param _deleteWithInstance 是否跟随实例删除
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取云硬盘收费类型
                     * @return DiskChargeType 云硬盘收费类型
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置云硬盘收费类型
                     * @param _diskChargeType 云硬盘收费类型
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
                     * 获取云硬盘运行状态
                     * @return DiskState 云硬盘运行状态
                     * 
                     */
                    std::string GetDiskState() const;

                    /**
                     * 设置云硬盘运行状态
                     * @param _diskState 云硬盘运行状态
                     * 
                     */
                    void SetDiskState(const std::string& _diskState);

                    /**
                     * 判断参数 DiskState 是否已赋值
                     * @return DiskState 是否已赋值
                     * 
                     */
                    bool DiskStateHasBeenSet() const;

                    /**
                     * 获取是否自动续费
                     * @return RenewFlag 是否自动续费
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置是否自动续费
                     * @param _renewFlag 是否自动续费
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return DeadlineTime 到期时间
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置到期时间
                     * @param _deadlineTime 到期时间
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
                     * 获取云盘是否挂载到云主机上
                     * @return Attached 云盘是否挂载到云主机上
                     * 
                     */
                    bool GetAttached() const;

                    /**
                     * 设置云盘是否挂载到云主机上
                     * @param _attached 云盘是否挂载到云主机上
                     * 
                     */
                    void SetAttached(const bool& _attached);

                    /**
                     * 判断参数 Attached 是否已赋值
                     * @return Attached 是否已赋值
                     * 
                     */
                    bool AttachedHasBeenSet() const;

                    /**
                     * 获取当前时间距离盘到期的天数
                     * @return DifferDaysOfDeadline 当前时间距离盘到期的天数
                     * 
                     */
                    int64_t GetDifferDaysOfDeadline() const;

                    /**
                     * 设置当前时间距离盘到期的天数
                     * @param _differDaysOfDeadline 当前时间距离盘到期的天数
                     * 
                     */
                    void SetDifferDaysOfDeadline(const int64_t& _differDaysOfDeadline);

                    /**
                     * 判断参数 DifferDaysOfDeadline 是否已赋值
                     * @return DifferDaysOfDeadline 是否已赋值
                     * 
                     */
                    bool DifferDaysOfDeadlineHasBeenSet() const;

                    /**
                     * 获取该云盘当前被挂载到的CVM实例InstanceId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceIdList 该云盘当前被挂载到的CVM实例InstanceId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置该云盘当前被挂载到的CVM实例InstanceId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceIdList 该云盘当前被挂载到的CVM实例InstanceId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取云硬盘挂载的云主机ID
                     * @return InstanceId 云硬盘挂载的云主机ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云硬盘挂载的云主机ID
                     * @param _instanceId 云硬盘挂载的云主机ID
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
                     * 获取云盘是否为共享型云盘。
                     * @return Shareable 云盘是否为共享型云盘。
                     * 
                     */
                    bool GetShareable() const;

                    /**
                     * 设置云盘是否为共享型云盘。
                     * @param _shareable 云盘是否为共享型云盘。
                     * 
                     */
                    void SetShareable(const bool& _shareable);

                    /**
                     * 判断参数 Shareable 是否已赋值
                     * @return Shareable 是否已赋值
                     * 
                     */
                    bool ShareableHasBeenSet() const;

                    /**
                     * 获取emr节点ID
                     * @return EmrResourceId emr节点ID
                     * 
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置emr节点ID
                     * @param _emrResourceId emr节点ID
                     * 
                     */
                    void SetEmrResourceId(const std::string& _emrResourceId);

                    /**
                     * 判断参数 EmrResourceId 是否已赋值
                     * @return EmrResourceId 是否已赋值
                     * 
                     */
                    bool EmrResourceIdHasBeenSet() const;

                private:

                    /**
                     * 云硬盘ID
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 云硬盘类型
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 云硬盘名称
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * 云硬盘大小
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 云盘介质类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 是否跟随实例删除
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * 云硬盘收费类型
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * 云硬盘运行状态
                     */
                    std::string m_diskState;
                    bool m_diskStateHasBeenSet;

                    /**
                     * 是否自动续费
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * 云盘是否挂载到云主机上
                     */
                    bool m_attached;
                    bool m_attachedHasBeenSet;

                    /**
                     * 当前时间距离盘到期的天数
                     */
                    int64_t m_differDaysOfDeadline;
                    bool m_differDaysOfDeadlineHasBeenSet;

                    /**
                     * 该云盘当前被挂载到的CVM实例InstanceId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * 云硬盘挂载的云主机ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云盘是否为共享型云盘。
                     */
                    bool m_shareable;
                    bool m_shareableHasBeenSet;

                    /**
                     * emr节点ID
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CBSINSTANCE_H_
