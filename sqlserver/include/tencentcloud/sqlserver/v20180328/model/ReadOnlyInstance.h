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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 只读副本实例
                */
                class ReadOnlyInstance : public AbstractModel
                {
                public:
                    ReadOnlyInstance();
                    ~ReadOnlyInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取只读副本ID，格式如：mssqlro-3l3fgqn7
                     * @return InstanceId 只读副本ID，格式如：mssqlro-3l3fgqn7
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置只读副本ID，格式如：mssqlro-3l3fgqn7
                     * @param _instanceId 只读副本ID，格式如：mssqlro-3l3fgqn7
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
                     * 获取只读副本名称
                     * @return Name 只读副本名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置只读副本名称
                     * @param _name 只读副本名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取只读副本唯一UID
                     * @return Uid 只读副本唯一UID
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置只读副本唯一UID
                     * @param _uid 只读副本唯一UID
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取只读副本所在项目ID
                     * @return ProjectId 只读副本所在项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置只读副本所在项目ID
                     * @param _projectId 只读副本所在项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取只读副本状态。1：申请中 2：运行中 3：被延迟剔除 4：已隔离 5：回收中 6：已回收 7：任务执行中 8：已下线 9：实例扩容中 10：实例迁移中  12：重启中
                     * @return Status 只读副本状态。1：申请中 2：运行中 3：被延迟剔除 4：已隔离 5：回收中 6：已回收 7：任务执行中 8：已下线 9：实例扩容中 10：实例迁移中  12：重启中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置只读副本状态。1：申请中 2：运行中 3：被延迟剔除 4：已隔离 5：回收中 6：已回收 7：任务执行中 8：已下线 9：实例扩容中 10：实例迁移中  12：重启中
                     * @param _status 只读副本状态。1：申请中 2：运行中 3：被延迟剔除 4：已隔离 5：回收中 6：已回收 7：任务执行中 8：已下线 9：实例扩容中 10：实例迁移中  12：重启中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取只读副本创建时间
                     * @return CreateTime 只读副本创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置只读副本创建时间
                     * @param _createTime 只读副本创建时间
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
                     * 获取只读副本更新时间
                     * @return UpdateTime 只读副本更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置只读副本更新时间
                     * @param _updateTime 只读副本更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取只读副本内存大小，单位G
                     * @return Memory 只读副本内存大小，单位G
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置只读副本内存大小，单位G
                     * @param _memory 只读副本内存大小，单位G
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取只读副本存储空间大小，单位G
                     * @return Storage 只读副本存储空间大小，单位G
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置只读副本存储空间大小，单位G
                     * @param _storage 只读副本存储空间大小，单位G
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取只读副本cpu核心数
                     * @return Cpu 只读副本cpu核心数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置只读副本cpu核心数
                     * @param _cpu 只读副本cpu核心数
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取只读副本版本代号
                     * @return Version 只读副本版本代号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置只读副本版本代号
                     * @param _version 只读副本版本代号
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取宿主机代号
                     * @return Type 宿主机代号
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置宿主机代号
                     * @param _type 宿主机代号
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取只读副本模式，2-单机
                     * @return Model 只读副本模式，2-单机
                     * 
                     */
                    int64_t GetModel() const;

                    /**
                     * 设置只读副本模式，2-单机
                     * @param _model 只读副本模式，2-单机
                     * 
                     */
                    void SetModel(const int64_t& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取只读副本计费模式，1-包年包月，0-按量计费
                     * @return PayMode 只读副本计费模式，1-包年包月，0-按量计费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置只读副本计费模式，1-包年包月，0-按量计费
                     * @param _payMode 只读副本计费模式，1-包年包月，0-按量计费
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取只读副本权重
                     * @return Weight 只读副本权重
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置只读副本权重
                     * @param _weight 只读副本权重
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取只读副本延迟时间，单位秒
                     * @return DelayTime 只读副本延迟时间，单位秒
                     * 
                     */
                    std::string GetDelayTime() const;

                    /**
                     * 设置只读副本延迟时间，单位秒
                     * @param _delayTime 只读副本延迟时间，单位秒
                     * 
                     */
                    void SetDelayTime(const std::string& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取只读副本与主实例的同步状态。
Init:初始化
DeployReadOnlyInPorgress:部署副本进行中
DeployReadOnlySuccess:部署副本成功
DeployReadOnlyFail:部署副本失败
DeployMasterDBInPorgress:主节点上加入副本数据库进行中
DeployMasterDBSuccess:主节点上加入副本数据库成功
DeployMasterDBFail:主节点上加入副本数据库进失败
DeployReadOnlyDBInPorgress:副本还原加入数据库开始
DeployReadOnlyDBSuccess:副本还原加入数据库成功
DeployReadOnlyDBFail:副本还原加入数据库失败
SyncDelay:同步延迟
SyncFail:同步故障
SyncExcluded:已剔除只读组
SyncNormal:正常
                     * @return SynStatus 只读副本与主实例的同步状态。
Init:初始化
DeployReadOnlyInPorgress:部署副本进行中
DeployReadOnlySuccess:部署副本成功
DeployReadOnlyFail:部署副本失败
DeployMasterDBInPorgress:主节点上加入副本数据库进行中
DeployMasterDBSuccess:主节点上加入副本数据库成功
DeployMasterDBFail:主节点上加入副本数据库进失败
DeployReadOnlyDBInPorgress:副本还原加入数据库开始
DeployReadOnlyDBSuccess:副本还原加入数据库成功
DeployReadOnlyDBFail:副本还原加入数据库失败
SyncDelay:同步延迟
SyncFail:同步故障
SyncExcluded:已剔除只读组
SyncNormal:正常
                     * 
                     */
                    std::string GetSynStatus() const;

                    /**
                     * 设置只读副本与主实例的同步状态。
Init:初始化
DeployReadOnlyInPorgress:部署副本进行中
DeployReadOnlySuccess:部署副本成功
DeployReadOnlyFail:部署副本失败
DeployMasterDBInPorgress:主节点上加入副本数据库进行中
DeployMasterDBSuccess:主节点上加入副本数据库成功
DeployMasterDBFail:主节点上加入副本数据库进失败
DeployReadOnlyDBInPorgress:副本还原加入数据库开始
DeployReadOnlyDBSuccess:副本还原加入数据库成功
DeployReadOnlyDBFail:副本还原加入数据库失败
SyncDelay:同步延迟
SyncFail:同步故障
SyncExcluded:已剔除只读组
SyncNormal:正常
                     * @param _synStatus 只读副本与主实例的同步状态。
Init:初始化
DeployReadOnlyInPorgress:部署副本进行中
DeployReadOnlySuccess:部署副本成功
DeployReadOnlyFail:部署副本失败
DeployMasterDBInPorgress:主节点上加入副本数据库进行中
DeployMasterDBSuccess:主节点上加入副本数据库成功
DeployMasterDBFail:主节点上加入副本数据库进失败
DeployReadOnlyDBInPorgress:副本还原加入数据库开始
DeployReadOnlyDBSuccess:副本还原加入数据库成功
DeployReadOnlyDBFail:副本还原加入数据库失败
SyncDelay:同步延迟
SyncFail:同步故障
SyncExcluded:已剔除只读组
SyncNormal:正常
                     * 
                     */
                    void SetSynStatus(const std::string& _synStatus);

                    /**
                     * 判断参数 SynStatus 是否已赋值
                     * @return SynStatus 是否已赋值
                     * 
                     */
                    bool SynStatusHasBeenSet() const;

                    /**
                     * 获取只读副本与主实例没有同步的库
                     * @return DatabaseDifference 只读副本与主实例没有同步的库
                     * 
                     */
                    std::string GetDatabaseDifference() const;

                    /**
                     * 设置只读副本与主实例没有同步的库
                     * @param _databaseDifference 只读副本与主实例没有同步的库
                     * 
                     */
                    void SetDatabaseDifference(const std::string& _databaseDifference);

                    /**
                     * 判断参数 DatabaseDifference 是否已赋值
                     * @return DatabaseDifference 是否已赋值
                     * 
                     */
                    bool DatabaseDifferenceHasBeenSet() const;

                    /**
                     * 获取只读副本与主实例没有同步的账户
                     * @return AccountDifference 只读副本与主实例没有同步的账户
                     * 
                     */
                    std::string GetAccountDifference() const;

                    /**
                     * 设置只读副本与主实例没有同步的账户
                     * @param _accountDifference 只读副本与主实例没有同步的账户
                     * 
                     */
                    void SetAccountDifference(const std::string& _accountDifference);

                    /**
                     * 判断参数 AccountDifference 是否已赋值
                     * @return AccountDifference 是否已赋值
                     * 
                     */
                    bool AccountDifferenceHasBeenSet() const;

                    /**
                     * 获取只读副本计费开始时间
                     * @return StartTime 只读副本计费开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置只读副本计费开始时间
                     * @param _startTime 只读副本计费开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取只读副本计费结束时间
                     * @return EndTime 只读副本计费结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置只读副本计费结束时间
                     * @param _endTime 只读副本计费结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取只读副本隔离时间
                     * @return IsolateTime 只读副本隔离时间
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置只读副本隔离时间
                     * @param _isolateTime 只读副本隔离时间
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取只读副本所在地域
                     * @return RegionId 只读副本所在地域
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置只读副本所在地域
                     * @param _regionId 只读副本所在地域
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取只读副本所在可用区
                     * @return ZoneId 只读副本所在可用区
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置只读副本所在可用区
                     * @param _zoneId 只读副本所在可用区
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 只读副本ID，格式如：mssqlro-3l3fgqn7
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 只读副本名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 只读副本唯一UID
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 只读副本所在项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 只读副本状态。1：申请中 2：运行中 3：被延迟剔除 4：已隔离 5：回收中 6：已回收 7：任务执行中 8：已下线 9：实例扩容中 10：实例迁移中  12：重启中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 只读副本创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 只读副本更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 只读副本内存大小，单位G
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 只读副本存储空间大小，单位G
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 只读副本cpu核心数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 只读副本版本代号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 宿主机代号
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 只读副本模式，2-单机
                     */
                    int64_t m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 只读副本计费模式，1-包年包月，0-按量计费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 只读副本权重
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 只读副本延迟时间，单位秒
                     */
                    std::string m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 只读副本与主实例的同步状态。
Init:初始化
DeployReadOnlyInPorgress:部署副本进行中
DeployReadOnlySuccess:部署副本成功
DeployReadOnlyFail:部署副本失败
DeployMasterDBInPorgress:主节点上加入副本数据库进行中
DeployMasterDBSuccess:主节点上加入副本数据库成功
DeployMasterDBFail:主节点上加入副本数据库进失败
DeployReadOnlyDBInPorgress:副本还原加入数据库开始
DeployReadOnlyDBSuccess:副本还原加入数据库成功
DeployReadOnlyDBFail:副本还原加入数据库失败
SyncDelay:同步延迟
SyncFail:同步故障
SyncExcluded:已剔除只读组
SyncNormal:正常
                     */
                    std::string m_synStatus;
                    bool m_synStatusHasBeenSet;

                    /**
                     * 只读副本与主实例没有同步的库
                     */
                    std::string m_databaseDifference;
                    bool m_databaseDifferenceHasBeenSet;

                    /**
                     * 只读副本与主实例没有同步的账户
                     */
                    std::string m_accountDifference;
                    bool m_accountDifferenceHasBeenSet;

                    /**
                     * 只读副本计费开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 只读副本计费结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 只读副本隔离时间
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 只读副本所在地域
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 只读副本所在可用区
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCE_H_
