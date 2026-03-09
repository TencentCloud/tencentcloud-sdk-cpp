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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PATCHEFFECTHOSTLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PATCHEFFECTHOSTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 补丁影响主机列表
                */
                class PatchEffectHostList : public AbstractModel
                {
                public:
                    PatchEffectHostList();
                    ~PatchEffectHostList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     * @return HostVersion 版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     * 
                     */
                    uint64_t GetHostVersion() const;

                    /**
                     * 设置版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     * @param _hostVersion 版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     * 
                     */
                    void SetHostVersion(const uint64_t& _hostVersion);

                    /**
                     * 判断参数 HostVersion 是否已赋值
                     * @return HostVersion 是否已赋值
                     * 
                     */
                    bool HostVersionHasBeenSet() const;

                    /**
                     * 获取实例状态: "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 
                     * @return InstanceState 实例状态: "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例状态: "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 
                     * @param _instanceState 实例状态: "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取首次扫描时间
                     * @return FirstScanTime 首次扫描时间
                     * 
                     */
                    std::string GetFirstScanTime() const;

                    /**
                     * 设置首次扫描时间
                     * @param _firstScanTime 首次扫描时间
                     * 
                     */
                    void SetFirstScanTime(const std::string& _firstScanTime);

                    /**
                     * 判断参数 FirstScanTime 是否已赋值
                     * @return FirstScanTime 是否已赋值
                     * 
                     */
                    bool FirstScanTimeHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
                     * @return LatestScanTime 最近扫描时间
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置最近扫描时间
                     * @param _latestScanTime 最近扫描时间
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取修复状态：0-未进行修复；1-修复中；2-修复失败；3-修复成功；4-修复超时
                     * @return FixStatus 修复状态：0-未进行修复；1-修复中；2-修复失败；3-修复成功；4-修复超时
                     * 
                     */
                    uint64_t GetFixStatus() const;

                    /**
                     * 设置修复状态：0-未进行修复；1-修复中；2-修复失败；3-修复成功；4-修复超时
                     * @param _fixStatus 修复状态：0-未进行修复；1-修复中；2-修复失败；3-修复成功；4-修复超时
                     * 
                     */
                    void SetFixStatus(const uint64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取主机基础信息
                     * @return MachineExtraInfo 主机基础信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机基础信息
                     * @param _machineExtraInfo 主机基础信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取主机安全Uuid
                     * @return Uuid 主机安全Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全Uuid
                     * @param _uuid 主机安全Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取CVM或BM机器唯一Uuid
                     * @return Quuid CVM或BM机器唯一Uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM或BM机器唯一Uuid
                     * @param _quuid CVM或BM机器唯一Uuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取事件id
                     * @return Id 事件id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件id
                     * @param _id 事件id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
                     * @return Status 状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
                     * @param _status 状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取修复时间
                     * @return LatestFixTime 修复时间
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置修复时间
                     * @param _latestFixTime 修复时间
                     * 
                     */
                    void SetLatestFixTime(const std::string& _latestFixTime);

                    /**
                     * 判断参数 LatestFixTime 是否已赋值
                     * @return LatestFixTime 是否已赋值
                     * 
                     */
                    bool LatestFixTimeHasBeenSet() const;

                    /**
                     * 获取KB id
                     * @return KbId KB id
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 设置KB id
                     * @param _kbId KB id
                     * 
                     */
                    void SetKbId(const uint64_t& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取是否需要重启 0不需要，1需要
                     * @return RestartRequired 是否需要重启 0不需要，1需要
                     * 
                     */
                    uint64_t GetRestartRequired() const;

                    /**
                     * 设置是否需要重启 0不需要，1需要
                     * @param _restartRequired 是否需要重启 0不需要，1需要
                     * 
                     */
                    void SetRestartRequired(const uint64_t& _restartRequired);

                    /**
                     * 判断参数 RestartRequired 是否已赋值
                     * @return RestartRequired 是否已赋值
                     * 
                     */
                    bool RestartRequiredHasBeenSet() const;

                    /**
                     * 获取可用区ID	
                     * @return RegionId 可用区ID	
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置可用区ID	
                     * @param _regionId 可用区ID	
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取机器类型信息
                     * @return MachineType 机器类型信息
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机器类型信息
                     * @param _machineType 机器类型信息
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取修复任务是否创建了快照： 0-未创建，其他-已创建
                     * @return HasSnapshot 修复任务是否创建了快照： 0-未创建，其他-已创建
                     * 
                     */
                    uint64_t GetHasSnapshot() const;

                    /**
                     * 设置修复任务是否创建了快照： 0-未创建，其他-已创建
                     * @param _hasSnapshot 修复任务是否创建了快照： 0-未创建，其他-已创建
                     * 
                     */
                    void SetHasSnapshot(const uint64_t& _hasSnapshot);

                    /**
                     * 判断参数 HasSnapshot 是否已赋值
                     * @return HasSnapshot 是否已赋值
                     * 
                     */
                    bool HasSnapshotHasBeenSet() const;

                private:

                    /**
                     * 版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     */
                    uint64_t m_hostVersion;
                    bool m_hostVersionHasBeenSet;

                    /**
                     * 实例状态: "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 首次扫描时间
                     */
                    std::string m_firstScanTime;
                    bool m_firstScanTimeHasBeenSet;

                    /**
                     * 最近扫描时间
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * 修复状态：0-未进行修复；1-修复中；2-修复失败；3-修复成功；4-修复超时
                     */
                    uint64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * 主机基础信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 主机安全Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * CVM或BM机器唯一Uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 事件id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 修复时间
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                    /**
                     * KB id
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * 是否需要重启 0不需要，1需要
                     */
                    uint64_t m_restartRequired;
                    bool m_restartRequiredHasBeenSet;

                    /**
                     * 可用区ID	
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 机器类型信息
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 修复任务是否创建了快照： 0-未创建，其他-已创建
                     */
                    uint64_t m_hasSnapshot;
                    bool m_hasSnapshotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PATCHEFFECTHOSTLIST_H_
