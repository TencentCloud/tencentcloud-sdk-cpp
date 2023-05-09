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
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @param InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param InstanceName 实例名称。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取每页输出的任务列表大小。默认为 20，最多输出100条。
                     * @return Limit 每页输出的任务列表大小。默认为 20，最多输出100条。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页输出的任务列表大小。默认为 20，最多输出100条。
                     * @param Limit 每页输出的任务列表大小。默认为 20，最多输出100条。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @return Offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @param Offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取项目 ID。登录 [Redis 控制台](https://console.cloud.tencent.com/redis)，在右上角的账号信息下拉菜单中，选择**项目管理**，即可获取对应的项目 ID。
                     * @return ProjectIds 项目 ID。登录 [Redis 控制台](https://console.cloud.tencent.com/redis)，在右上角的账号信息下拉菜单中，选择**项目管理**，即可获取对应的项目 ID。
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目 ID。登录 [Redis 控制台](https://console.cloud.tencent.com/redis)，在右上角的账号信息下拉菜单中，选择**项目管理**，即可获取对应的项目 ID。
                     * @param ProjectIds 项目 ID。登录 [Redis 控制台](https://console.cloud.tencent.com/redis)，在右上角的账号信息下拉菜单中，选择**项目管理**，即可获取对应的项目 ID。
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取任务类型。
- FLOW_CREATE：创建实例。
- FLOW_MODIFYCONNECTIONCONFIG：调整带宽连接数。
- FLOW_MODIFYINSTANCEPASSWORDFREE：免密变更流程。
- FLOW_CLEARNETWORK：VPC退还中。
- FLOW_SETPWD：设置访问密码。
- FLOW_EXPORSHR：扩缩容流程。
- FLOW_UpgradeArch：实例架构升级流程。
- FLOW_MODIFYINSTANCEPARAMS：修改实例参数。
- FLOW_MODIFYINSTACEREADONLY：只读变更流程。
- FLOW_CLOSE：关闭实例。
- FLOW_DELETE：删除实例。
- FLOW_OPEN_WAN：开启外网。
- FLOW_CLEAN：清空实例。      
- FLOW_MODIFYINSTANCEACCOUNT：修改实例账号。
- FLOW_ENABLEINSTANCE_REPLICATE：开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE: 关闭副本只读。
- FLOW_SWITCHINSTANCEVIP：交换实例 VIP。
- FLOW_CHANGE_REPLICA_TO_MSTER：副本节点升主节点。
- FLOW_BACKUPINSTANCE：备份实例。
                     * @return TaskTypes 任务类型。
- FLOW_CREATE：创建实例。
- FLOW_MODIFYCONNECTIONCONFIG：调整带宽连接数。
- FLOW_MODIFYINSTANCEPASSWORDFREE：免密变更流程。
- FLOW_CLEARNETWORK：VPC退还中。
- FLOW_SETPWD：设置访问密码。
- FLOW_EXPORSHR：扩缩容流程。
- FLOW_UpgradeArch：实例架构升级流程。
- FLOW_MODIFYINSTANCEPARAMS：修改实例参数。
- FLOW_MODIFYINSTACEREADONLY：只读变更流程。
- FLOW_CLOSE：关闭实例。
- FLOW_DELETE：删除实例。
- FLOW_OPEN_WAN：开启外网。
- FLOW_CLEAN：清空实例。      
- FLOW_MODIFYINSTANCEACCOUNT：修改实例账号。
- FLOW_ENABLEINSTANCE_REPLICATE：开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE: 关闭副本只读。
- FLOW_SWITCHINSTANCEVIP：交换实例 VIP。
- FLOW_CHANGE_REPLICA_TO_MSTER：副本节点升主节点。
- FLOW_BACKUPINSTANCE：备份实例。
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置任务类型。
- FLOW_CREATE：创建实例。
- FLOW_MODIFYCONNECTIONCONFIG：调整带宽连接数。
- FLOW_MODIFYINSTANCEPASSWORDFREE：免密变更流程。
- FLOW_CLEARNETWORK：VPC退还中。
- FLOW_SETPWD：设置访问密码。
- FLOW_EXPORSHR：扩缩容流程。
- FLOW_UpgradeArch：实例架构升级流程。
- FLOW_MODIFYINSTANCEPARAMS：修改实例参数。
- FLOW_MODIFYINSTACEREADONLY：只读变更流程。
- FLOW_CLOSE：关闭实例。
- FLOW_DELETE：删除实例。
- FLOW_OPEN_WAN：开启外网。
- FLOW_CLEAN：清空实例。      
- FLOW_MODIFYINSTANCEACCOUNT：修改实例账号。
- FLOW_ENABLEINSTANCE_REPLICATE：开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE: 关闭副本只读。
- FLOW_SWITCHINSTANCEVIP：交换实例 VIP。
- FLOW_CHANGE_REPLICA_TO_MSTER：副本节点升主节点。
- FLOW_BACKUPINSTANCE：备份实例。
                     * @param TaskTypes 任务类型。
- FLOW_CREATE：创建实例。
- FLOW_MODIFYCONNECTIONCONFIG：调整带宽连接数。
- FLOW_MODIFYINSTANCEPASSWORDFREE：免密变更流程。
- FLOW_CLEARNETWORK：VPC退还中。
- FLOW_SETPWD：设置访问密码。
- FLOW_EXPORSHR：扩缩容流程。
- FLOW_UpgradeArch：实例架构升级流程。
- FLOW_MODIFYINSTANCEPARAMS：修改实例参数。
- FLOW_MODIFYINSTACEREADONLY：只读变更流程。
- FLOW_CLOSE：关闭实例。
- FLOW_DELETE：删除实例。
- FLOW_OPEN_WAN：开启外网。
- FLOW_CLEAN：清空实例。      
- FLOW_MODIFYINSTANCEACCOUNT：修改实例账号。
- FLOW_ENABLEINSTANCE_REPLICATE：开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE: 关闭副本只读。
- FLOW_SWITCHINSTANCEVIP：交换实例 VIP。
- FLOW_CHANGE_REPLICA_TO_MSTER：副本节点升主节点。
- FLOW_BACKUPINSTANCE：备份实例。
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取任务执行的起始时间。格式如：2021-12-30 00:00:00。
                     * @return BeginTime 任务执行的起始时间。格式如：2021-12-30 00:00:00。
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置任务执行的起始时间。格式如：2021-12-30 00:00:00。
                     * @param BeginTime 任务执行的起始时间。格式如：2021-12-30 00:00:00。
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取任务运行的终止时间。格式如：2021-12-30 20:59:35
                     * @return EndTime 任务运行的终止时间。格式如：2021-12-30 20:59:35
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务运行的终止时间。格式如：2021-12-30 20:59:35
                     * @param EndTime 任务运行的终止时间。格式如：2021-12-30 20:59:35
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取该参数为内部使用，请忽略。
                     * @return TaskStatus 该参数为内部使用，请忽略。
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置该参数为内部使用，请忽略。
                     * @param TaskStatus 该参数为内部使用，请忽略。
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
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
                     */
                    std::vector<int64_t> GetResult() const;

                    /**
                     * 设置任务执行状态。
- 0：任务初始化。
- 1：执行中。
- 2：完成。
- 4：失败。
                     * @param Result 任务执行状态。
- 0：任务初始化。
- 1：执行中。
- 2：完成。
- 4：失败。
                     */
                    void SetResult(const std::vector<int64_t>& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取该字段已废弃，使用OperateUin代替，请忽略。
                     * @return OperatorUin 该字段已废弃，使用OperateUin代替，请忽略。
                     */
                    std::vector<int64_t> GetOperatorUin() const;

                    /**
                     * 设置该字段已废弃，使用OperateUin代替，请忽略。
                     * @param OperatorUin 该字段已废弃，使用OperateUin代替，请忽略。
                     */
                    void SetOperatorUin(const std::vector<int64_t>& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取操作者账号 ID，UIN。
                     * @return OperateUin 操作者账号 ID，UIN。
                     */
                    std::vector<std::string> GetOperateUin() const;

                    /**
                     * 设置操作者账号 ID，UIN。
                     * @param OperateUin 操作者账号 ID，UIN。
                     */
                    void SetOperateUin(const std::vector<std::string>& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
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
- FLOW_CREATE：创建实例。
- FLOW_MODIFYCONNECTIONCONFIG：调整带宽连接数。
- FLOW_MODIFYINSTANCEPASSWORDFREE：免密变更流程。
- FLOW_CLEARNETWORK：VPC退还中。
- FLOW_SETPWD：设置访问密码。
- FLOW_EXPORSHR：扩缩容流程。
- FLOW_UpgradeArch：实例架构升级流程。
- FLOW_MODIFYINSTANCEPARAMS：修改实例参数。
- FLOW_MODIFYINSTACEREADONLY：只读变更流程。
- FLOW_CLOSE：关闭实例。
- FLOW_DELETE：删除实例。
- FLOW_OPEN_WAN：开启外网。
- FLOW_CLEAN：清空实例。      
- FLOW_MODIFYINSTANCEACCOUNT：修改实例账号。
- FLOW_ENABLEINSTANCE_REPLICATE：开启副本只读。
- FLOW_DISABLEINSTANCE_REPLICATE: 关闭副本只读。
- FLOW_SWITCHINSTANCEVIP：交换实例 VIP。
- FLOW_CHANGE_REPLICA_TO_MSTER：副本节点升主节点。
- FLOW_BACKUPINSTANCE：备份实例。
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * 任务执行的起始时间。格式如：2021-12-30 00:00:00。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 任务运行的终止时间。格式如：2021-12-30 20:59:35
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
