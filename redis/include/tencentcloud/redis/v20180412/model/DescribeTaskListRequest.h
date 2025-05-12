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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETASKLISTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeTaskList请求参数结构体
                */
                class DescribeTaskListRequest : public AbstractModel
                {
                public:
                    DescribeTaskListRequest();
                    ~DescribeTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
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
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取每页输出的任务列表大小。默认为 20，最多输出100条。
                     * @return Limit 每页输出的任务列表大小。默认为 20，最多输出100条。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页输出的任务列表大小。默认为 20，最多输出100条。
                     * @param _limit 每页输出的任务列表大小。默认为 20，最多输出100条。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @return Offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @param _offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取项目 ID。登录 [Redis 控制台](https://console.cloud.tencent.com/redis)，在右上角的账号信息下拉菜单中，选择**项目管理**，即可获取对应的项目 ID。
                     * @return ProjectIds 项目 ID。登录 [Redis 控制台](https://console.cloud.tencent.com/redis)，在右上角的账号信息下拉菜单中，选择**项目管理**，即可获取对应的项目 ID。
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目 ID。登录 [Redis 控制台](https://console.cloud.tencent.com/redis)，在右上角的账号信息下拉菜单中，选择**项目管理**，即可获取对应的项目 ID。
                     * @param _projectIds 项目 ID。登录 [Redis 控制台](https://console.cloud.tencent.com/redis)，在右上角的账号信息下拉菜单中，选择**项目管理**，即可获取对应的项目 ID。
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取任务类型。

- FLOW_CREATE: "001"，新建实例。
- FLOW_RESIZE ： "002"，配置变更。
- FLOW_CLOSE："003"，关闭实例。
- FLOW_CLEAN： "004"，清空实例。
- FLOW_STARTUP："005"，实例启用。
- FLOW_DELETE："006"，删除实例。
- FLOW_SETPWD："007"，重置密码。
- FLOW_EXPORTBACKUP："009"，导出备份文件。
- FLOW_RESTOREBACKUP："010"，恢复备份。
- FLOW_BACKUPINSTANCE："012"，备份实例。
- FLOW_MIGRATEINSTANCE："013"，迁移实例。
- FLOW_DELBACKUP："014"，删除备份。
- FLOW_EXCHANGEINSTANCE： "016"，切换实例流程。
- FLOW_AUTOBACKUP："017"，自动备份实例。
- FLOW_MIGRATECHECK： "022"，迁移参数校验。
- FLOW_MIGRATETASK："023"，数据迁移中。
- FLOW_CLEANDB："025"，清空某个数据库。
- FLOW_CLONEBACKUP："026"，克隆备份。
- FLOW_CHANGEVIP： "027"，改变vip地址。
- FLOW_EXPORSHR ："028"，扩缩容。
- FLOW_ADDNODES："029"，加（减）节点。
- FLOW_CHANGENET："031"，改变网络类型。
- FLOW_MODIFYINSTACEREADONLY："033"，只读策略变更。
- FLOW_MODIFYINSTANCEPARAMS："034"，修改实例参数。
- FLOW_MODIFYINSTANCEPASSWORDFREE："035"，设置免密。
- FLOW_SWITCHINSTANCEVIP："036"，实例VIP切换。
- FLOW_MODIFYINSTANCEACCOUNT："037"，实例帐号变更。
- FLOW_MODIFYINSTANCEBANDWIDTH："038"，实例带宽变更。
- FLOW_ENABLEINSTANCE_REPLICATE："039"，开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE："040"，关闭副本只读。
- FLOW_UpgradeArch："041"，实例架构升级，主从升集群。
- FLOW_DowngradeArch： "042"，实例架构降级，集群降主从。
- FLOW_UpgradeVersion： "043"，版本升级。
- FLOW_MODIFYCONNECTIONCONFIG："044"，带宽连接数调整，
- FLOW_CLEARNETWORK："045"，更换网络，
- FLOW_REMOVE_BACKUP_FILE："046"，删除备份。
- FLOW_UPGRADE_SUPPORT_MULTI_AZ："047"，升级实例支持多可用区。
- FLOW_SHUTDOWN_MASTER："048"，模拟故障。
- FLOW_CHANGE_REPLICA_TO_MASTER："049"，手动提主。
- FLOW_CODE_ADD_REPLICATION_INSTANCE："050"，新增复制组。
- FLOW_OPEN_WAN："052"，开通外网。
- FLOW_CLOSE_WAN："053"，关闭外网FLOW_UPDATE_WAN："054"，更新外网。
- FLOW_CODE_DELETE_REPLICATION_INSTANCE："055"，解绑复制组。
- FLOW_CODE_CHANGE_MASTER_INSTANCE："056"，复制组实例切主。
- FLOW_CODE_CHANGE_INSTANCE_ROLE： "057"，更改复制组实例角色。
- FLOW_MIGRATE_NODE："058"，迁移节点。
- FLOW_SWITCH_NODE："059"，切换节点。
- FLOW_UPGRADE_SMALL_VERSION："060"，升级 Redi s版本。
- FLOW_UPGRADE_PROXY_VERSION："061"，升级 Proxy 版本。
- FLOW_MODIFY_INSTANCE_NETWORK： "062"，实例修改网络。
- FLOW_MIGRATE_PROXY_NODE："063"，迁移proxy节点。
- FLOW_MIGRATION_INSTANCE_ZONE："066"，实例可用区迁移中。
- FLOW_UPGRADE_INSTANCE_CACHE_AND_PROXY： "067"，实例版本升级中。
- FLOW_MODIFY_PROXY_NUM："069"，加（减）Proxy 节点。
- FLOW_MODIFYBACKUPMOD："070"，变更实例备份模式。
                     * @return TaskTypes 任务类型。

- FLOW_CREATE: "001"，新建实例。
- FLOW_RESIZE ： "002"，配置变更。
- FLOW_CLOSE："003"，关闭实例。
- FLOW_CLEAN： "004"，清空实例。
- FLOW_STARTUP："005"，实例启用。
- FLOW_DELETE："006"，删除实例。
- FLOW_SETPWD："007"，重置密码。
- FLOW_EXPORTBACKUP："009"，导出备份文件。
- FLOW_RESTOREBACKUP："010"，恢复备份。
- FLOW_BACKUPINSTANCE："012"，备份实例。
- FLOW_MIGRATEINSTANCE："013"，迁移实例。
- FLOW_DELBACKUP："014"，删除备份。
- FLOW_EXCHANGEINSTANCE： "016"，切换实例流程。
- FLOW_AUTOBACKUP："017"，自动备份实例。
- FLOW_MIGRATECHECK： "022"，迁移参数校验。
- FLOW_MIGRATETASK："023"，数据迁移中。
- FLOW_CLEANDB："025"，清空某个数据库。
- FLOW_CLONEBACKUP："026"，克隆备份。
- FLOW_CHANGEVIP： "027"，改变vip地址。
- FLOW_EXPORSHR ："028"，扩缩容。
- FLOW_ADDNODES："029"，加（减）节点。
- FLOW_CHANGENET："031"，改变网络类型。
- FLOW_MODIFYINSTACEREADONLY："033"，只读策略变更。
- FLOW_MODIFYINSTANCEPARAMS："034"，修改实例参数。
- FLOW_MODIFYINSTANCEPASSWORDFREE："035"，设置免密。
- FLOW_SWITCHINSTANCEVIP："036"，实例VIP切换。
- FLOW_MODIFYINSTANCEACCOUNT："037"，实例帐号变更。
- FLOW_MODIFYINSTANCEBANDWIDTH："038"，实例带宽变更。
- FLOW_ENABLEINSTANCE_REPLICATE："039"，开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE："040"，关闭副本只读。
- FLOW_UpgradeArch："041"，实例架构升级，主从升集群。
- FLOW_DowngradeArch： "042"，实例架构降级，集群降主从。
- FLOW_UpgradeVersion： "043"，版本升级。
- FLOW_MODIFYCONNECTIONCONFIG："044"，带宽连接数调整，
- FLOW_CLEARNETWORK："045"，更换网络，
- FLOW_REMOVE_BACKUP_FILE："046"，删除备份。
- FLOW_UPGRADE_SUPPORT_MULTI_AZ："047"，升级实例支持多可用区。
- FLOW_SHUTDOWN_MASTER："048"，模拟故障。
- FLOW_CHANGE_REPLICA_TO_MASTER："049"，手动提主。
- FLOW_CODE_ADD_REPLICATION_INSTANCE："050"，新增复制组。
- FLOW_OPEN_WAN："052"，开通外网。
- FLOW_CLOSE_WAN："053"，关闭外网FLOW_UPDATE_WAN："054"，更新外网。
- FLOW_CODE_DELETE_REPLICATION_INSTANCE："055"，解绑复制组。
- FLOW_CODE_CHANGE_MASTER_INSTANCE："056"，复制组实例切主。
- FLOW_CODE_CHANGE_INSTANCE_ROLE： "057"，更改复制组实例角色。
- FLOW_MIGRATE_NODE："058"，迁移节点。
- FLOW_SWITCH_NODE："059"，切换节点。
- FLOW_UPGRADE_SMALL_VERSION："060"，升级 Redi s版本。
- FLOW_UPGRADE_PROXY_VERSION："061"，升级 Proxy 版本。
- FLOW_MODIFY_INSTANCE_NETWORK： "062"，实例修改网络。
- FLOW_MIGRATE_PROXY_NODE："063"，迁移proxy节点。
- FLOW_MIGRATION_INSTANCE_ZONE："066"，实例可用区迁移中。
- FLOW_UPGRADE_INSTANCE_CACHE_AND_PROXY： "067"，实例版本升级中。
- FLOW_MODIFY_PROXY_NUM："069"，加（减）Proxy 节点。
- FLOW_MODIFYBACKUPMOD："070"，变更实例备份模式。
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置任务类型。

- FLOW_CREATE: "001"，新建实例。
- FLOW_RESIZE ： "002"，配置变更。
- FLOW_CLOSE："003"，关闭实例。
- FLOW_CLEAN： "004"，清空实例。
- FLOW_STARTUP："005"，实例启用。
- FLOW_DELETE："006"，删除实例。
- FLOW_SETPWD："007"，重置密码。
- FLOW_EXPORTBACKUP："009"，导出备份文件。
- FLOW_RESTOREBACKUP："010"，恢复备份。
- FLOW_BACKUPINSTANCE："012"，备份实例。
- FLOW_MIGRATEINSTANCE："013"，迁移实例。
- FLOW_DELBACKUP："014"，删除备份。
- FLOW_EXCHANGEINSTANCE： "016"，切换实例流程。
- FLOW_AUTOBACKUP："017"，自动备份实例。
- FLOW_MIGRATECHECK： "022"，迁移参数校验。
- FLOW_MIGRATETASK："023"，数据迁移中。
- FLOW_CLEANDB："025"，清空某个数据库。
- FLOW_CLONEBACKUP："026"，克隆备份。
- FLOW_CHANGEVIP： "027"，改变vip地址。
- FLOW_EXPORSHR ："028"，扩缩容。
- FLOW_ADDNODES："029"，加（减）节点。
- FLOW_CHANGENET："031"，改变网络类型。
- FLOW_MODIFYINSTACEREADONLY："033"，只读策略变更。
- FLOW_MODIFYINSTANCEPARAMS："034"，修改实例参数。
- FLOW_MODIFYINSTANCEPASSWORDFREE："035"，设置免密。
- FLOW_SWITCHINSTANCEVIP："036"，实例VIP切换。
- FLOW_MODIFYINSTANCEACCOUNT："037"，实例帐号变更。
- FLOW_MODIFYINSTANCEBANDWIDTH："038"，实例带宽变更。
- FLOW_ENABLEINSTANCE_REPLICATE："039"，开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE："040"，关闭副本只读。
- FLOW_UpgradeArch："041"，实例架构升级，主从升集群。
- FLOW_DowngradeArch： "042"，实例架构降级，集群降主从。
- FLOW_UpgradeVersion： "043"，版本升级。
- FLOW_MODIFYCONNECTIONCONFIG："044"，带宽连接数调整，
- FLOW_CLEARNETWORK："045"，更换网络，
- FLOW_REMOVE_BACKUP_FILE："046"，删除备份。
- FLOW_UPGRADE_SUPPORT_MULTI_AZ："047"，升级实例支持多可用区。
- FLOW_SHUTDOWN_MASTER："048"，模拟故障。
- FLOW_CHANGE_REPLICA_TO_MASTER："049"，手动提主。
- FLOW_CODE_ADD_REPLICATION_INSTANCE："050"，新增复制组。
- FLOW_OPEN_WAN："052"，开通外网。
- FLOW_CLOSE_WAN："053"，关闭外网FLOW_UPDATE_WAN："054"，更新外网。
- FLOW_CODE_DELETE_REPLICATION_INSTANCE："055"，解绑复制组。
- FLOW_CODE_CHANGE_MASTER_INSTANCE："056"，复制组实例切主。
- FLOW_CODE_CHANGE_INSTANCE_ROLE： "057"，更改复制组实例角色。
- FLOW_MIGRATE_NODE："058"，迁移节点。
- FLOW_SWITCH_NODE："059"，切换节点。
- FLOW_UPGRADE_SMALL_VERSION："060"，升级 Redi s版本。
- FLOW_UPGRADE_PROXY_VERSION："061"，升级 Proxy 版本。
- FLOW_MODIFY_INSTANCE_NETWORK： "062"，实例修改网络。
- FLOW_MIGRATE_PROXY_NODE："063"，迁移proxy节点。
- FLOW_MIGRATION_INSTANCE_ZONE："066"，实例可用区迁移中。
- FLOW_UPGRADE_INSTANCE_CACHE_AND_PROXY： "067"，实例版本升级中。
- FLOW_MODIFY_PROXY_NUM："069"，加（减）Proxy 节点。
- FLOW_MODIFYBACKUPMOD："070"，变更实例备份模式。
                     * @param _taskTypes 任务类型。

- FLOW_CREATE: "001"，新建实例。
- FLOW_RESIZE ： "002"，配置变更。
- FLOW_CLOSE："003"，关闭实例。
- FLOW_CLEAN： "004"，清空实例。
- FLOW_STARTUP："005"，实例启用。
- FLOW_DELETE："006"，删除实例。
- FLOW_SETPWD："007"，重置密码。
- FLOW_EXPORTBACKUP："009"，导出备份文件。
- FLOW_RESTOREBACKUP："010"，恢复备份。
- FLOW_BACKUPINSTANCE："012"，备份实例。
- FLOW_MIGRATEINSTANCE："013"，迁移实例。
- FLOW_DELBACKUP："014"，删除备份。
- FLOW_EXCHANGEINSTANCE： "016"，切换实例流程。
- FLOW_AUTOBACKUP："017"，自动备份实例。
- FLOW_MIGRATECHECK： "022"，迁移参数校验。
- FLOW_MIGRATETASK："023"，数据迁移中。
- FLOW_CLEANDB："025"，清空某个数据库。
- FLOW_CLONEBACKUP："026"，克隆备份。
- FLOW_CHANGEVIP： "027"，改变vip地址。
- FLOW_EXPORSHR ："028"，扩缩容。
- FLOW_ADDNODES："029"，加（减）节点。
- FLOW_CHANGENET："031"，改变网络类型。
- FLOW_MODIFYINSTACEREADONLY："033"，只读策略变更。
- FLOW_MODIFYINSTANCEPARAMS："034"，修改实例参数。
- FLOW_MODIFYINSTANCEPASSWORDFREE："035"，设置免密。
- FLOW_SWITCHINSTANCEVIP："036"，实例VIP切换。
- FLOW_MODIFYINSTANCEACCOUNT："037"，实例帐号变更。
- FLOW_MODIFYINSTANCEBANDWIDTH："038"，实例带宽变更。
- FLOW_ENABLEINSTANCE_REPLICATE："039"，开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE："040"，关闭副本只读。
- FLOW_UpgradeArch："041"，实例架构升级，主从升集群。
- FLOW_DowngradeArch： "042"，实例架构降级，集群降主从。
- FLOW_UpgradeVersion： "043"，版本升级。
- FLOW_MODIFYCONNECTIONCONFIG："044"，带宽连接数调整，
- FLOW_CLEARNETWORK："045"，更换网络，
- FLOW_REMOVE_BACKUP_FILE："046"，删除备份。
- FLOW_UPGRADE_SUPPORT_MULTI_AZ："047"，升级实例支持多可用区。
- FLOW_SHUTDOWN_MASTER："048"，模拟故障。
- FLOW_CHANGE_REPLICA_TO_MASTER："049"，手动提主。
- FLOW_CODE_ADD_REPLICATION_INSTANCE："050"，新增复制组。
- FLOW_OPEN_WAN："052"，开通外网。
- FLOW_CLOSE_WAN："053"，关闭外网FLOW_UPDATE_WAN："054"，更新外网。
- FLOW_CODE_DELETE_REPLICATION_INSTANCE："055"，解绑复制组。
- FLOW_CODE_CHANGE_MASTER_INSTANCE："056"，复制组实例切主。
- FLOW_CODE_CHANGE_INSTANCE_ROLE： "057"，更改复制组实例角色。
- FLOW_MIGRATE_NODE："058"，迁移节点。
- FLOW_SWITCH_NODE："059"，切换节点。
- FLOW_UPGRADE_SMALL_VERSION："060"，升级 Redi s版本。
- FLOW_UPGRADE_PROXY_VERSION："061"，升级 Proxy 版本。
- FLOW_MODIFY_INSTANCE_NETWORK： "062"，实例修改网络。
- FLOW_MIGRATE_PROXY_NODE："063"，迁移proxy节点。
- FLOW_MIGRATION_INSTANCE_ZONE："066"，实例可用区迁移中。
- FLOW_UPGRADE_INSTANCE_CACHE_AND_PROXY： "067"，实例版本升级中。
- FLOW_MODIFY_PROXY_NUM："069"，加（减）Proxy 节点。
- FLOW_MODIFYBACKUPMOD："070"，变更实例备份模式。
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取任务执行的起始时间，格式如：2021-12-30 00:00:00，支持查询近30天内数据。
                     * @return BeginTime 任务执行的起始时间，格式如：2021-12-30 00:00:00，支持查询近30天内数据。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置任务执行的起始时间，格式如：2021-12-30 00:00:00，支持查询近30天内数据。
                     * @param _beginTime 任务执行的起始时间，格式如：2021-12-30 00:00:00，支持查询近30天内数据。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取任务运行的终止时间。格式如：2021-12-30 20:59:35，支持查询近30天内数据。
                     * @return EndTime 任务运行的终止时间。格式如：2021-12-30 20:59:35，支持查询近30天内数据。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务运行的终止时间。格式如：2021-12-30 20:59:35，支持查询近30天内数据。
                     * @param _endTime 任务运行的终止时间。格式如：2021-12-30 20:59:35，支持查询近30天内数据。
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
                     * 获取该参数为内部使用，请忽略。
                     * @return TaskStatus 该参数为内部使用，请忽略。
                     * 
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置该参数为内部使用，请忽略。
                     * @param _taskStatus 该参数为内部使用，请忽略。
                     * 
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务执行状态。
- 0：任务初始化。
- 1：执行中。
- 2：完成。
- 4：失败。
                     * @return Result 任务执行状态。
- 0：任务初始化。
- 1：执行中。
- 2：完成。
- 4：失败。
                     * 
                     */
                    std::vector<int64_t> GetResult() const;

                    /**
                     * 设置任务执行状态。
- 0：任务初始化。
- 1：执行中。
- 2：完成。
- 4：失败。
                     * @param _result 任务执行状态。
- 0：任务初始化。
- 1：执行中。
- 2：完成。
- 4：失败。
                     * 
                     */
                    void SetResult(const std::vector<int64_t>& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取该字段已废弃，使用OperateUin代替，请忽略。
                     * @return OperatorUin 该字段已废弃，使用OperateUin代替，请忽略。
                     * @deprecated
                     */
                    std::vector<int64_t> GetOperatorUin() const;

                    /**
                     * 设置该字段已废弃，使用OperateUin代替，请忽略。
                     * @param _operatorUin 该字段已废弃，使用OperateUin代替，请忽略。
                     * @deprecated
                     */
                    void SetOperatorUin(const std::vector<int64_t>& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * @deprecated
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取操作者账号 ID，UIN。
                     * @return OperateUin 操作者账号 ID，UIN。
                     * 
                     */
                    std::vector<std::string> GetOperateUin() const;

                    /**
                     * 设置操作者账号 ID，UIN。
                     * @param _operateUin 操作者账号 ID，UIN。
                     * 
                     */
                    void SetOperateUin(const std::vector<std::string>& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                private:

                    /**
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 每页输出的任务列表大小。默认为 20，最多输出100条。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 项目 ID。登录 [Redis 控制台](https://console.cloud.tencent.com/redis)，在右上角的账号信息下拉菜单中，选择**项目管理**，即可获取对应的项目 ID。
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 任务类型。

- FLOW_CREATE: "001"，新建实例。
- FLOW_RESIZE ： "002"，配置变更。
- FLOW_CLOSE："003"，关闭实例。
- FLOW_CLEAN： "004"，清空实例。
- FLOW_STARTUP："005"，实例启用。
- FLOW_DELETE："006"，删除实例。
- FLOW_SETPWD："007"，重置密码。
- FLOW_EXPORTBACKUP："009"，导出备份文件。
- FLOW_RESTOREBACKUP："010"，恢复备份。
- FLOW_BACKUPINSTANCE："012"，备份实例。
- FLOW_MIGRATEINSTANCE："013"，迁移实例。
- FLOW_DELBACKUP："014"，删除备份。
- FLOW_EXCHANGEINSTANCE： "016"，切换实例流程。
- FLOW_AUTOBACKUP："017"，自动备份实例。
- FLOW_MIGRATECHECK： "022"，迁移参数校验。
- FLOW_MIGRATETASK："023"，数据迁移中。
- FLOW_CLEANDB："025"，清空某个数据库。
- FLOW_CLONEBACKUP："026"，克隆备份。
- FLOW_CHANGEVIP： "027"，改变vip地址。
- FLOW_EXPORSHR ："028"，扩缩容。
- FLOW_ADDNODES："029"，加（减）节点。
- FLOW_CHANGENET："031"，改变网络类型。
- FLOW_MODIFYINSTACEREADONLY："033"，只读策略变更。
- FLOW_MODIFYINSTANCEPARAMS："034"，修改实例参数。
- FLOW_MODIFYINSTANCEPASSWORDFREE："035"，设置免密。
- FLOW_SWITCHINSTANCEVIP："036"，实例VIP切换。
- FLOW_MODIFYINSTANCEACCOUNT："037"，实例帐号变更。
- FLOW_MODIFYINSTANCEBANDWIDTH："038"，实例带宽变更。
- FLOW_ENABLEINSTANCE_REPLICATE："039"，开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE："040"，关闭副本只读。
- FLOW_UpgradeArch："041"，实例架构升级，主从升集群。
- FLOW_DowngradeArch： "042"，实例架构降级，集群降主从。
- FLOW_UpgradeVersion： "043"，版本升级。
- FLOW_MODIFYCONNECTIONCONFIG："044"，带宽连接数调整，
- FLOW_CLEARNETWORK："045"，更换网络，
- FLOW_REMOVE_BACKUP_FILE："046"，删除备份。
- FLOW_UPGRADE_SUPPORT_MULTI_AZ："047"，升级实例支持多可用区。
- FLOW_SHUTDOWN_MASTER："048"，模拟故障。
- FLOW_CHANGE_REPLICA_TO_MASTER："049"，手动提主。
- FLOW_CODE_ADD_REPLICATION_INSTANCE："050"，新增复制组。
- FLOW_OPEN_WAN："052"，开通外网。
- FLOW_CLOSE_WAN："053"，关闭外网FLOW_UPDATE_WAN："054"，更新外网。
- FLOW_CODE_DELETE_REPLICATION_INSTANCE："055"，解绑复制组。
- FLOW_CODE_CHANGE_MASTER_INSTANCE："056"，复制组实例切主。
- FLOW_CODE_CHANGE_INSTANCE_ROLE： "057"，更改复制组实例角色。
- FLOW_MIGRATE_NODE："058"，迁移节点。
- FLOW_SWITCH_NODE："059"，切换节点。
- FLOW_UPGRADE_SMALL_VERSION："060"，升级 Redi s版本。
- FLOW_UPGRADE_PROXY_VERSION："061"，升级 Proxy 版本。
- FLOW_MODIFY_INSTANCE_NETWORK： "062"，实例修改网络。
- FLOW_MIGRATE_PROXY_NODE："063"，迁移proxy节点。
- FLOW_MIGRATION_INSTANCE_ZONE："066"，实例可用区迁移中。
- FLOW_UPGRADE_INSTANCE_CACHE_AND_PROXY： "067"，实例版本升级中。
- FLOW_MODIFY_PROXY_NUM："069"，加（减）Proxy 节点。
- FLOW_MODIFYBACKUPMOD："070"，变更实例备份模式。
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * 任务执行的起始时间，格式如：2021-12-30 00:00:00，支持查询近30天内数据。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 任务运行的终止时间。格式如：2021-12-30 20:59:35，支持查询近30天内数据。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 该参数为内部使用，请忽略。
                     */
                    std::vector<int64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务执行状态。
- 0：任务初始化。
- 1：执行中。
- 2：完成。
- 4：失败。
                     */
                    std::vector<int64_t> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 该字段已废弃，使用OperateUin代替，请忽略。
                     */
                    std::vector<int64_t> m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * 操作者账号 ID，UIN。
                     */
                    std::vector<std::string> m_operateUin;
                    bool m_operateUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETASKLISTREQUEST_H_
