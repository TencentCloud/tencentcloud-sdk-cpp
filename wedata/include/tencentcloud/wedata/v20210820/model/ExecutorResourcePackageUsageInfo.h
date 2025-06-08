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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEPACKAGEUSAGEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEPACKAGEUSAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ExecutorUsageTrendInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 执行资源包使用情况
                */
                class ExecutorResourcePackageUsageInfo : public AbstractModel
                {
                public:
                    ExecutorResourcePackageUsageInfo();
                    ~ExecutorResourcePackageUsageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuUsagePercent CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpuUsagePercent() const;

                    /**
                     * 设置CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuUsagePercent CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuUsagePercent(const double& _cpuUsagePercent);

                    /**
                     * 判断参数 CpuUsagePercent 是否已赋值
                     * @return CpuUsagePercent 是否已赋值
                     * 
                     */
                    bool CpuUsagePercentHasBeenSet() const;

                    /**
                     * 获取内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemUsagePercent 内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMemUsagePercent() const;

                    /**
                     * 设置内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memUsagePercent 内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemUsagePercent(const double& _memUsagePercent);

                    /**
                     * 判断参数 MemUsagePercent 是否已赋值
                     * @return MemUsagePercent 是否已赋值
                     * 
                     */
                    bool MemUsagePercentHasBeenSet() const;

                    /**
                     * 获取资源包状态, /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源包状态, /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetStatus() const;

                    /**
                     * 设置资源包状态, /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源包状态, /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const double& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取/**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningTaskNum /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunningTaskNum() const;

                    /**
                     * 设置/**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningTaskNum /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningTaskNum(const int64_t& _runningTaskNum);

                    /**
                     * 判断参数 RunningTaskNum 是否已赋值
                     * @return RunningTaskNum 是否已赋值
                     * 
                     */
                    bool RunningTaskNumHasBeenSet() const;

                    /**
                     * 获取等待中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitingTaskNum 等待中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWaitingTaskNum() const;

                    /**
                     * 设置等待中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitingTaskNum 等待中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitingTaskNum(const int64_t& _waitingTaskNum);

                    /**
                     * 判断参数 WaitingTaskNum 是否已赋值
                     * @return WaitingTaskNum 是否已赋值
                     * 
                     */
                    bool WaitingTaskNumHasBeenSet() const;

                    /**
                     * 获取资源使用趋势: 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsageTrendStartTime 资源使用趋势: 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsageTrendStartTime() const;

                    /**
                     * 设置资源使用趋势: 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usageTrendStartTime 资源使用趋势: 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsageTrendStartTime(const std::string& _usageTrendStartTime);

                    /**
                     * 判断参数 UsageTrendStartTime 是否已赋值
                     * @return UsageTrendStartTime 是否已赋值
                     * 
                     */
                    bool UsageTrendStartTimeHasBeenSet() const;

                    /**
                     * 获取资源使用趋势: 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsageTrendEndTime 资源使用趋势: 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsageTrendEndTime() const;

                    /**
                     * 设置资源使用趋势: 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usageTrendEndTime 资源使用趋势: 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsageTrendEndTime(const std::string& _usageTrendEndTime);

                    /**
                     * 判断参数 UsageTrendEndTime 是否已赋值
                     * @return UsageTrendEndTime 是否已赋值
                     * 
                     */
                    bool UsageTrendEndTimeHasBeenSet() const;

                    /**
                     * 获取资源使用趋势列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsageTrendList 资源使用趋势列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExecutorUsageTrendInfo> GetUsageTrendList() const;

                    /**
                     * 设置资源使用趋势列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usageTrendList 资源使用趋势列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsageTrendList(const std::vector<ExecutorUsageTrendInfo>& _usageTrendList);

                    /**
                     * 判断参数 UsageTrendList 是否已赋值
                     * @return UsageTrendList 是否已赋值
                     * 
                     */
                    bool UsageTrendListHasBeenSet() const;

                private:

                    /**
                     * CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpuUsagePercent;
                    bool m_cpuUsagePercentHasBeenSet;

                    /**
                     * 内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_memUsagePercent;
                    bool m_memUsagePercentHasBeenSet;

                    /**
                     * 资源包状态, /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
    EXPIRED(9);
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * /**
     * 初始化中
     * /
    INIT(0),
    /**
     * 运行中
     * /
    RUNNING(1),
    /**
     * 运行异常
     * /
    RUNNING_FAILED(2),
    /**
     * 释放中
     * /
    DELETEING(3),
    /**
     * 已释放
     * /
    DELETED(4),
    /**
     * 创建中
     * /
    CREATING(5),
    /**
     * 创建失败
     * /
    CREATE_FAILED(6),
    /**
     * 更新中
     * /
    UPDATING(7),
    /**
     * 更新失败
     * /
    UPDATE_FAILED(8),
    /**
     * 已到期
     * /
运行中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runningTaskNum;
                    bool m_runningTaskNumHasBeenSet;

                    /**
                     * 等待中的任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_waitingTaskNum;
                    bool m_waitingTaskNumHasBeenSet;

                    /**
                     * 资源使用趋势: 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usageTrendStartTime;
                    bool m_usageTrendStartTimeHasBeenSet;

                    /**
                     * 资源使用趋势: 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usageTrendEndTime;
                    bool m_usageTrendEndTimeHasBeenSet;

                    /**
                     * 资源使用趋势列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExecutorUsageTrendInfo> m_usageTrendList;
                    bool m_usageTrendListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEPACKAGEUSAGEINFO_H_
