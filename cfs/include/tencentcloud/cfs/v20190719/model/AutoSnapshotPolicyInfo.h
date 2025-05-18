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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AUTOSNAPSHOTPOLICYINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AUTOSNAPSHOTPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/FileSystemByPolicy.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 快照策略信息
                */
                class AutoSnapshotPolicyInfo : public AbstractModel
                {
                public:
                    AutoSnapshotPolicyInfo();
                    ~AutoSnapshotPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取快照策略ID
                     * @return AutoSnapshotPolicyId 快照策略ID
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置快照策略ID
                     * @param _autoSnapshotPolicyId 快照策略ID
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取快照策略名称
                     * @return PolicyName 快照策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置快照策略名称
                     * @param _policyName 快照策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取快照策略创建时间
                     * @return CreationTime 快照策略创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置快照策略创建时间
                     * @param _creationTime 快照策略创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取关联的文件系统个数
                     * @return FileSystemNums 关联的文件系统个数
                     * 
                     */
                    uint64_t GetFileSystemNums() const;

                    /**
                     * 设置关联的文件系统个数
                     * @param _fileSystemNums 关联的文件系统个数
                     * 
                     */
                    void SetFileSystemNums(const uint64_t& _fileSystemNums);

                    /**
                     * 判断参数 FileSystemNums 是否已赋值
                     * @return FileSystemNums 是否已赋值
                     * 
                     */
                    bool FileSystemNumsHasBeenSet() const;

                    /**
                     * 获取快照定期备份在一星期哪一天，该参数与DayOfMonth,IntervalDays互斥
                     * @return DayOfWeek 快照定期备份在一星期哪一天，该参数与DayOfMonth,IntervalDays互斥
                     * 
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置快照定期备份在一星期哪一天，该参数与DayOfMonth,IntervalDays互斥
                     * @param _dayOfWeek 快照定期备份在一星期哪一天，该参数与DayOfMonth,IntervalDays互斥
                     * 
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取快照定期备份在一天的哪一小时
                     * @return Hour 快照定期备份在一天的哪一小时
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置快照定期备份在一天的哪一小时
                     * @param _hour 快照定期备份在一天的哪一小时
                     * 
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取是否激活定期快照功能,1代表已激活，0代表未激活
                     * @return IsActivated 是否激活定期快照功能,1代表已激活，0代表未激活
                     * 
                     */
                    uint64_t GetIsActivated() const;

                    /**
                     * 设置是否激活定期快照功能,1代表已激活，0代表未激活
                     * @param _isActivated 是否激活定期快照功能,1代表已激活，0代表未激活
                     * 
                     */
                    void SetIsActivated(const uint64_t& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     * 
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取下一次触发快照时间
                     * @return NextActiveTime 下一次触发快照时间
                     * 
                     */
                    std::string GetNextActiveTime() const;

                    /**
                     * 设置下一次触发快照时间
                     * @param _nextActiveTime 下一次触发快照时间
                     * 
                     */
                    void SetNextActiveTime(const std::string& _nextActiveTime);

                    /**
                     * 判断参数 NextActiveTime 是否已赋值
                     * @return NextActiveTime 是否已赋值
                     * 
                     */
                    bool NextActiveTimeHasBeenSet() const;

                    /**
                     * 获取快照策略状态，available代表快照策略状态正常。这里只有一种状态
                     * @return Status 快照策略状态，available代表快照策略状态正常。这里只有一种状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置快照策略状态，available代表快照策略状态正常。这里只有一种状态
                     * @param _status 快照策略状态，available代表快照策略状态正常。这里只有一种状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取账号ID
                     * @return AppId 账号ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置账号ID
                     * @param _appId 账号ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取保留时间
                     * @return AliveDays 保留时间
                     * 
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置保留时间
                     * @param _aliveDays 保留时间
                     * 
                     */
                    void SetAliveDays(const uint64_t& _aliveDays);

                    /**
                     * 判断参数 AliveDays 是否已赋值
                     * @return AliveDays 是否已赋值
                     * 
                     */
                    bool AliveDaysHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return RegionName 地域
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域
                     * @param _regionName 地域
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取文件系统信息
                     * @return FileSystems 文件系统信息
                     * 
                     */
                    std::vector<FileSystemByPolicy> GetFileSystems() const;

                    /**
                     * 设置文件系统信息
                     * @param _fileSystems 文件系统信息
                     * 
                     */
                    void SetFileSystems(const std::vector<FileSystemByPolicy>& _fileSystems);

                    /**
                     * 判断参数 FileSystems 是否已赋值
                     * @return FileSystems 是否已赋值
                     * 
                     */
                    bool FileSystemsHasBeenSet() const;

                    /**
                     * 获取快照定期备份在一个月的某个时间；该参数与DayOfWeek,IntervalDays互斥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayOfMonth 快照定期备份在一个月的某个时间；该参数与DayOfWeek,IntervalDays互斥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置快照定期备份在一个月的某个时间；该参数与DayOfWeek,IntervalDays互斥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayOfMonth 快照定期备份在一个月的某个时间；该参数与DayOfWeek,IntervalDays互斥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayOfMonth(const std::string& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     * 
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取快照定期间隔天数，1-365 天；该参数与DayOfMonth,DayOfWeek互斥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalDays 快照定期间隔天数，1-365 天；该参数与DayOfMonth,DayOfWeek互斥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntervalDays() const;

                    /**
                     * 设置快照定期间隔天数，1-365 天；该参数与DayOfMonth,DayOfWeek互斥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intervalDays 快照定期间隔天数，1-365 天；该参数与DayOfMonth,DayOfWeek互斥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntervalDays(const uint64_t& _intervalDays);

                    /**
                     * 判断参数 IntervalDays 是否已赋值
                     * @return IntervalDays 是否已赋值
                     * 
                     */
                    bool IntervalDaysHasBeenSet() const;

                    /**
                     * 获取跨地域复制的快照保留时间，单位天
                     * @return CrossRegionsAliveDays 跨地域复制的快照保留时间，单位天
                     * 
                     */
                    uint64_t GetCrossRegionsAliveDays() const;

                    /**
                     * 设置跨地域复制的快照保留时间，单位天
                     * @param _crossRegionsAliveDays 跨地域复制的快照保留时间，单位天
                     * 
                     */
                    void SetCrossRegionsAliveDays(const uint64_t& _crossRegionsAliveDays);

                    /**
                     * 判断参数 CrossRegionsAliveDays 是否已赋值
                     * @return CrossRegionsAliveDays 是否已赋值
                     * 
                     */
                    bool CrossRegionsAliveDaysHasBeenSet() const;

                private:

                    /**
                     * 快照策略ID
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 快照策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 快照策略创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 关联的文件系统个数
                     */
                    uint64_t m_fileSystemNums;
                    bool m_fileSystemNumsHasBeenSet;

                    /**
                     * 快照定期备份在一星期哪一天，该参数与DayOfMonth,IntervalDays互斥
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * 快照定期备份在一天的哪一小时
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 是否激活定期快照功能,1代表已激活，0代表未激活
                     */
                    uint64_t m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * 下一次触发快照时间
                     */
                    std::string m_nextActiveTime;
                    bool m_nextActiveTimeHasBeenSet;

                    /**
                     * 快照策略状态，available代表快照策略状态正常。这里只有一种状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 账号ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 保留时间
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 文件系统信息
                     */
                    std::vector<FileSystemByPolicy> m_fileSystems;
                    bool m_fileSystemsHasBeenSet;

                    /**
                     * 快照定期备份在一个月的某个时间；该参数与DayOfWeek,IntervalDays互斥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * 快照定期间隔天数，1-365 天；该参数与DayOfMonth,DayOfWeek互斥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intervalDays;
                    bool m_intervalDaysHasBeenSet;

                    /**
                     * 跨地域复制的快照保留时间，单位天
                     */
                    uint64_t m_crossRegionsAliveDays;
                    bool m_crossRegionsAliveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AUTOSNAPSHOTPOLICYINFO_H_
