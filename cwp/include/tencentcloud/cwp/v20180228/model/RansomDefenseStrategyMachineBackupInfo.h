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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEBACKUPINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEBACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tag.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 防勒索策略绑定主机备份详情
                */
                class RansomDefenseStrategyMachineBackupInfo : public AbstractModel
                {
                public:
                    RansomDefenseStrategyMachineBackupInfo();
                    ~RansomDefenseStrategyMachineBackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机Uuid
                     * @return Uuid 主机Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
                     * @param _uuid 主机Uuid
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
                     * 获取主机Quuid
                     * @return Quuid 主机Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
                     * @param _quuid 主机Quuid
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
                     * 获取主机名称
                     * @return MachineName 主机名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称
                     * @param _machineName 主机名称
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取主机实例id
                     * @return InstanceId 主机实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主机实例id
                     * @param _instanceId 主机实例id
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
                     * 获取内网ip
                     * @return MachineIp 内网ip
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置内网ip
                     * @param _machineIp 内网ip
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return MachineWanIp 外网ip
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置外网ip
                     * @param _machineWanIp 外网ip
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取云标签
                     * @return CloudTags 云标签
                     * 
                     */
                    std::vector<Tag> GetCloudTags() const;

                    /**
                     * 设置云标签
                     * @param _cloudTags 云标签
                     * 
                     */
                    void SetCloudTags(const std::vector<Tag>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取可用区信息
                     * @return RegionInfo 可用区信息
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置可用区信息
                     * @param _regionInfo 可用区信息
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取主机安全标签
                     * @return Tag 主机安全标签
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置主机安全标签
                     * @param _tag 主机安全标签
                     * 
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取防护状态：0关闭，1开启
                     * @return Status 防护状态：0关闭，1开启
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置防护状态：0关闭，1开启
                     * @param _status 防护状态：0关闭，1开启
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
                     * 获取策略id，为0时未绑定策略
                     * @return StrategyId 策略id，为0时未绑定策略
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id，为0时未绑定策略
                     * @param _strategyId 策略id，为0时未绑定策略
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     * @return DiskInfo 硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     * 
                     */
                    std::string GetDiskInfo() const;

                    /**
                     * 设置硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     * @param _diskInfo 硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     * 
                     */
                    void SetDiskInfo(const std::string& _diskInfo);

                    /**
                     * 判断参数 DiskInfo 是否已赋值
                     * @return DiskInfo 是否已赋值
                     * 
                     */
                    bool DiskInfoHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return StrategyName 策略名称
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称
                     * @param _strategyName 策略名称
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取备份数量
                     * @return BackupCount 备份数量
                     * 
                     */
                    uint64_t GetBackupCount() const;

                    /**
                     * 设置备份数量
                     * @param _backupCount 备份数量
                     * 
                     */
                    void SetBackupCount(const uint64_t& _backupCount);

                    /**
                     * 判断参数 BackupCount 是否已赋值
                     * @return BackupCount 是否已赋值
                     * 
                     */
                    bool BackupCountHasBeenSet() const;

                    /**
                     * 获取最近一次备份状态：0备份中，1正常，2失败，9暂无备份
                     * @return LastBackupStatus 最近一次备份状态：0备份中，1正常，2失败，9暂无备份
                     * 
                     */
                    uint64_t GetLastBackupStatus() const;

                    /**
                     * 设置最近一次备份状态：0备份中，1正常，2失败，9暂无备份
                     * @param _lastBackupStatus 最近一次备份状态：0备份中，1正常，2失败，9暂无备份
                     * 
                     */
                    void SetLastBackupStatus(const uint64_t& _lastBackupStatus);

                    /**
                     * 判断参数 LastBackupStatus 是否已赋值
                     * @return LastBackupStatus 是否已赋值
                     * 
                     */
                    bool LastBackupStatusHasBeenSet() const;

                    /**
                     * 获取最近一次备份失败原因
                     * @return LastBackupMessage 最近一次备份失败原因
                     * 
                     */
                    std::string GetLastBackupMessage() const;

                    /**
                     * 设置最近一次备份失败原因
                     * @param _lastBackupMessage 最近一次备份失败原因
                     * 
                     */
                    void SetLastBackupMessage(const std::string& _lastBackupMessage);

                    /**
                     * 判断参数 LastBackupMessage 是否已赋值
                     * @return LastBackupMessage 是否已赋值
                     * 
                     */
                    bool LastBackupMessageHasBeenSet() const;

                    /**
                     * 获取最近一次备份时间
                     * @return LastBackupTime 最近一次备份时间
                     * 
                     */
                    std::string GetLastBackupTime() const;

                    /**
                     * 设置最近一次备份时间
                     * @param _lastBackupTime 最近一次备份时间
                     * 
                     */
                    void SetLastBackupTime(const std::string& _lastBackupTime);

                    /**
                     * 判断参数 LastBackupTime 是否已赋值
                     * @return LastBackupTime 是否已赋值
                     * 
                     */
                    bool LastBackupTimeHasBeenSet() const;

                    /**
                     * 获取最近一次回滚进度百分比
                     * @return RollBackPercent 最近一次回滚进度百分比
                     * 
                     */
                    uint64_t GetRollBackPercent() const;

                    /**
                     * 设置最近一次回滚进度百分比
                     * @param _rollBackPercent 最近一次回滚进度百分比
                     * 
                     */
                    void SetRollBackPercent(const uint64_t& _rollBackPercent);

                    /**
                     * 判断参数 RollBackPercent 是否已赋值
                     * @return RollBackPercent 是否已赋值
                     * 
                     */
                    bool RollBackPercentHasBeenSet() const;

                    /**
                     * 获取最近一次回滚状态：0进行中，1成功，2失败
                     * @return RollBackStatus 最近一次回滚状态：0进行中，1成功，2失败
                     * 
                     */
                    uint64_t GetRollBackStatus() const;

                    /**
                     * 设置最近一次回滚状态：0进行中，1成功，2失败
                     * @param _rollBackStatus 最近一次回滚状态：0进行中，1成功，2失败
                     * 
                     */
                    void SetRollBackStatus(const uint64_t& _rollBackStatus);

                    /**
                     * 判断参数 RollBackStatus 是否已赋值
                     * @return RollBackStatus 是否已赋值
                     * 
                     */
                    bool RollBackStatusHasBeenSet() const;

                    /**
                     * 获取备份成功次数
                     * @return BackupSuccessCount 备份成功次数
                     * 
                     */
                    uint64_t GetBackupSuccessCount() const;

                    /**
                     * 设置备份成功次数
                     * @param _backupSuccessCount 备份成功次数
                     * 
                     */
                    void SetBackupSuccessCount(const uint64_t& _backupSuccessCount);

                    /**
                     * 判断参数 BackupSuccessCount 是否已赋值
                     * @return BackupSuccessCount 是否已赋值
                     * 
                     */
                    bool BackupSuccessCountHasBeenSet() const;

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
                     * 获取机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * @return MachineType 机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * @param _machineType 机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                private:

                    /**
                     * 主机Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 主机实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 内网ip
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 云标签
                     */
                    std::vector<Tag> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * 可用区信息
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * 主机安全标签
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 防护状态：0关闭，1开启
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 策略id，为0时未绑定策略
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 硬盘信息，为空时所有硬盘生效：
;分割 diskId1|diskName1;diskId2|diskName2
                     */
                    std::string m_diskInfo;
                    bool m_diskInfoHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 备份数量
                     */
                    uint64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * 最近一次备份状态：0备份中，1正常，2失败，9暂无备份
                     */
                    uint64_t m_lastBackupStatus;
                    bool m_lastBackupStatusHasBeenSet;

                    /**
                     * 最近一次备份失败原因
                     */
                    std::string m_lastBackupMessage;
                    bool m_lastBackupMessageHasBeenSet;

                    /**
                     * 最近一次备份时间
                     */
                    std::string m_lastBackupTime;
                    bool m_lastBackupTimeHasBeenSet;

                    /**
                     * 最近一次回滚进度百分比
                     */
                    uint64_t m_rollBackPercent;
                    bool m_rollBackPercentHasBeenSet;

                    /**
                     * 最近一次回滚状态：0进行中，1成功，2失败
                     */
                    uint64_t m_rollBackStatus;
                    bool m_rollBackStatusHasBeenSet;

                    /**
                     * 备份成功次数
                     */
                    uint64_t m_backupSuccessCount;
                    bool m_backupSuccessCountHasBeenSet;

                    /**
                     * 版本信息：0-基础版 1-专业版 2-旗舰版 3-轻量版
                     */
                    uint64_t m_hostVersion;
                    bool m_hostVersionHasBeenSet;

                    /**
                     * 机器所属专区类型 CVM 云服务器, BM 黑石, ECM 边缘计算, LH 轻量应用服务器 ,Other 混合云专区
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEBACKUPINFO_H_
