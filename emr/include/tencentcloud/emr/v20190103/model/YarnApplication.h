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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_YARNAPPLICATION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_YARNAPPLICATION_H_

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
                * Yarn 运行的Application信息
                */
                class YarnApplication : public AbstractModel
                {
                public:
                    YarnApplication();
                    ~YarnApplication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
                     * @return Id 应用ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置应用ID
                     * @param _id 应用ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户
                     * @return User 用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户
                     * @param _user 用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取应用名
                     * @return Name 应用名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名
                     * @param _name 应用名
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
                     * 获取队列
                     * @return Queue 队列
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置队列
                     * @param _queue 队列
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取应用类型
                     * @return ApplicationType 应用类型
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
                     * @param _applicationType 应用类型
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取运行时间
                     * @return ElapsedTime 运行时间
                     * 
                     */
                    std::string GetElapsedTime() const;

                    /**
                     * 设置运行时间
                     * @param _elapsedTime 运行时间
                     * 
                     */
                    void SetElapsedTime(const std::string& _elapsedTime);

                    /**
                     * 判断参数 ElapsedTime 是否已赋值
                     * @return ElapsedTime 是否已赋值
                     * 
                     */
                    bool ElapsedTimeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return State 状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取最终状态
                     * @return FinalStatus 最终状态
                     * 
                     */
                    std::string GetFinalStatus() const;

                    /**
                     * 设置最终状态
                     * @param _finalStatus 最终状态
                     * 
                     */
                    void SetFinalStatus(const std::string& _finalStatus);

                    /**
                     * 判断参数 FinalStatus 是否已赋值
                     * @return FinalStatus 是否已赋值
                     * 
                     */
                    bool FinalStatusHasBeenSet() const;

                    /**
                     * 获取进度
                     * @return Progress 进度
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置进度
                     * @param _progress 进度
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取开始时间毫秒
                     * @return StartedTime 开始时间毫秒
                     * 
                     */
                    int64_t GetStartedTime() const;

                    /**
                     * 设置开始时间毫秒
                     * @param _startedTime 开始时间毫秒
                     * 
                     */
                    void SetStartedTime(const int64_t& _startedTime);

                    /**
                     * 判断参数 StartedTime 是否已赋值
                     * @return StartedTime 是否已赋值
                     * 
                     */
                    bool StartedTimeHasBeenSet() const;

                    /**
                     * 获取结束时间毫秒
                     * @return FinishedTime 结束时间毫秒
                     * 
                     */
                    int64_t GetFinishedTime() const;

                    /**
                     * 设置结束时间毫秒
                     * @param _finishedTime 结束时间毫秒
                     * 
                     */
                    void SetFinishedTime(const int64_t& _finishedTime);

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                    /**
                     * 获取申请内存MB
                     * @return AllocatedMB 申请内存MB
                     * 
                     */
                    int64_t GetAllocatedMB() const;

                    /**
                     * 设置申请内存MB
                     * @param _allocatedMB 申请内存MB
                     * 
                     */
                    void SetAllocatedMB(const int64_t& _allocatedMB);

                    /**
                     * 判断参数 AllocatedMB 是否已赋值
                     * @return AllocatedMB 是否已赋值
                     * 
                     */
                    bool AllocatedMBHasBeenSet() const;

                    /**
                     * 获取申请VCores
                     * @return AllocatedVCores 申请VCores
                     * 
                     */
                    int64_t GetAllocatedVCores() const;

                    /**
                     * 设置申请VCores
                     * @param _allocatedVCores 申请VCores
                     * 
                     */
                    void SetAllocatedVCores(const int64_t& _allocatedVCores);

                    /**
                     * 判断参数 AllocatedVCores 是否已赋值
                     * @return AllocatedVCores 是否已赋值
                     * 
                     */
                    bool AllocatedVCoresHasBeenSet() const;

                    /**
                     * 获取运行的Containers数
                     * @return RunningContainers 运行的Containers数
                     * 
                     */
                    int64_t GetRunningContainers() const;

                    /**
                     * 设置运行的Containers数
                     * @param _runningContainers 运行的Containers数
                     * 
                     */
                    void SetRunningContainers(const int64_t& _runningContainers);

                    /**
                     * 判断参数 RunningContainers 是否已赋值
                     * @return RunningContainers 是否已赋值
                     * 
                     */
                    bool RunningContainersHasBeenSet() const;

                    /**
                     * 获取内存MB*时间秒
                     * @return MemorySeconds 内存MB*时间秒
                     * 
                     */
                    int64_t GetMemorySeconds() const;

                    /**
                     * 设置内存MB*时间秒
                     * @param _memorySeconds 内存MB*时间秒
                     * 
                     */
                    void SetMemorySeconds(const int64_t& _memorySeconds);

                    /**
                     * 判断参数 MemorySeconds 是否已赋值
                     * @return MemorySeconds 是否已赋值
                     * 
                     */
                    bool MemorySecondsHasBeenSet() const;

                    /**
                     * 获取VCores*时间秒
                     * @return VCoreSeconds VCores*时间秒
                     * 
                     */
                    int64_t GetVCoreSeconds() const;

                    /**
                     * 设置VCores*时间秒
                     * @param _vCoreSeconds VCores*时间秒
                     * 
                     */
                    void SetVCoreSeconds(const int64_t& _vCoreSeconds);

                    /**
                     * 判断参数 VCoreSeconds 是否已赋值
                     * @return VCoreSeconds 是否已赋值
                     * 
                     */
                    bool VCoreSecondsHasBeenSet() const;

                    /**
                     * 获取队列资源占比
                     * @return QueueUsagePercentage 队列资源占比
                     * 
                     */
                    double GetQueueUsagePercentage() const;

                    /**
                     * 设置队列资源占比
                     * @param _queueUsagePercentage 队列资源占比
                     * 
                     */
                    void SetQueueUsagePercentage(const double& _queueUsagePercentage);

                    /**
                     * 判断参数 QueueUsagePercentage 是否已赋值
                     * @return QueueUsagePercentage 是否已赋值
                     * 
                     */
                    bool QueueUsagePercentageHasBeenSet() const;

                    /**
                     * 获取集群资源占比
                     * @return ClusterUsagePercentage 集群资源占比
                     * 
                     */
                    double GetClusterUsagePercentage() const;

                    /**
                     * 设置集群资源占比
                     * @param _clusterUsagePercentage 集群资源占比
                     * 
                     */
                    void SetClusterUsagePercentage(const double& _clusterUsagePercentage);

                    /**
                     * 判断参数 ClusterUsagePercentage 是否已赋值
                     * @return ClusterUsagePercentage 是否已赋值
                     * 
                     */
                    bool ClusterUsagePercentageHasBeenSet() const;

                    /**
                     * 获取预占用的内存
                     * @return PreemptedResourceMB 预占用的内存
                     * 
                     */
                    int64_t GetPreemptedResourceMB() const;

                    /**
                     * 设置预占用的内存
                     * @param _preemptedResourceMB 预占用的内存
                     * 
                     */
                    void SetPreemptedResourceMB(const int64_t& _preemptedResourceMB);

                    /**
                     * 判断参数 PreemptedResourceMB 是否已赋值
                     * @return PreemptedResourceMB 是否已赋值
                     * 
                     */
                    bool PreemptedResourceMBHasBeenSet() const;

                    /**
                     * 获取预占用的VCore
                     * @return PreemptedResourceVCores 预占用的VCore
                     * 
                     */
                    int64_t GetPreemptedResourceVCores() const;

                    /**
                     * 设置预占用的VCore
                     * @param _preemptedResourceVCores 预占用的VCore
                     * 
                     */
                    void SetPreemptedResourceVCores(const int64_t& _preemptedResourceVCores);

                    /**
                     * 判断参数 PreemptedResourceVCores 是否已赋值
                     * @return PreemptedResourceVCores 是否已赋值
                     * 
                     */
                    bool PreemptedResourceVCoresHasBeenSet() const;

                    /**
                     * 获取预占的非应用程序主节点容器数量
                     * @return NumNonAMContainerPreempted 预占的非应用程序主节点容器数量
                     * 
                     */
                    int64_t GetNumNonAMContainerPreempted() const;

                    /**
                     * 设置预占的非应用程序主节点容器数量
                     * @param _numNonAMContainerPreempted 预占的非应用程序主节点容器数量
                     * 
                     */
                    void SetNumNonAMContainerPreempted(const int64_t& _numNonAMContainerPreempted);

                    /**
                     * 判断参数 NumNonAMContainerPreempted 是否已赋值
                     * @return NumNonAMContainerPreempted 是否已赋值
                     * 
                     */
                    bool NumNonAMContainerPreemptedHasBeenSet() const;

                    /**
                     * 获取AM预占用的容器数量
                     * @return NumAMContainerPreempted AM预占用的容器数量
                     * 
                     */
                    int64_t GetNumAMContainerPreempted() const;

                    /**
                     * 设置AM预占用的容器数量
                     * @param _numAMContainerPreempted AM预占用的容器数量
                     * 
                     */
                    void SetNumAMContainerPreempted(const int64_t& _numAMContainerPreempted);

                    /**
                     * 判断参数 NumAMContainerPreempted 是否已赋值
                     * @return NumAMContainerPreempted 是否已赋值
                     * 
                     */
                    bool NumAMContainerPreemptedHasBeenSet() const;

                    /**
                     * 获取Map总数
                     * @return MapsTotal Map总数
                     * 
                     */
                    int64_t GetMapsTotal() const;

                    /**
                     * 设置Map总数
                     * @param _mapsTotal Map总数
                     * 
                     */
                    void SetMapsTotal(const int64_t& _mapsTotal);

                    /**
                     * 判断参数 MapsTotal 是否已赋值
                     * @return MapsTotal 是否已赋值
                     * 
                     */
                    bool MapsTotalHasBeenSet() const;

                    /**
                     * 获取完成的Map数
                     * @return MapsCompleted 完成的Map数
                     * 
                     */
                    int64_t GetMapsCompleted() const;

                    /**
                     * 设置完成的Map数
                     * @param _mapsCompleted 完成的Map数
                     * 
                     */
                    void SetMapsCompleted(const int64_t& _mapsCompleted);

                    /**
                     * 判断参数 MapsCompleted 是否已赋值
                     * @return MapsCompleted 是否已赋值
                     * 
                     */
                    bool MapsCompletedHasBeenSet() const;

                    /**
                     * 获取Reduce总数
                     * @return ReducesTotal Reduce总数
                     * 
                     */
                    int64_t GetReducesTotal() const;

                    /**
                     * 设置Reduce总数
                     * @param _reducesTotal Reduce总数
                     * 
                     */
                    void SetReducesTotal(const int64_t& _reducesTotal);

                    /**
                     * 判断参数 ReducesTotal 是否已赋值
                     * @return ReducesTotal 是否已赋值
                     * 
                     */
                    bool ReducesTotalHasBeenSet() const;

                    /**
                     * 获取完成的Reduce数
                     * @return ReducesCompleted 完成的Reduce数
                     * 
                     */
                    int64_t GetReducesCompleted() const;

                    /**
                     * 设置完成的Reduce数
                     * @param _reducesCompleted 完成的Reduce数
                     * 
                     */
                    void SetReducesCompleted(const int64_t& _reducesCompleted);

                    /**
                     * 判断参数 ReducesCompleted 是否已赋值
                     * @return ReducesCompleted 是否已赋值
                     * 
                     */
                    bool ReducesCompletedHasBeenSet() const;

                    /**
                     * 获取平均Map时间
                     * @return AvgMapTime 平均Map时间
                     * 
                     */
                    int64_t GetAvgMapTime() const;

                    /**
                     * 设置平均Map时间
                     * @param _avgMapTime 平均Map时间
                     * 
                     */
                    void SetAvgMapTime(const int64_t& _avgMapTime);

                    /**
                     * 判断参数 AvgMapTime 是否已赋值
                     * @return AvgMapTime 是否已赋值
                     * 
                     */
                    bool AvgMapTimeHasBeenSet() const;

                    /**
                     * 获取平均Reduce时间
                     * @return AvgReduceTime 平均Reduce时间
                     * 
                     */
                    int64_t GetAvgReduceTime() const;

                    /**
                     * 设置平均Reduce时间
                     * @param _avgReduceTime 平均Reduce时间
                     * 
                     */
                    void SetAvgReduceTime(const int64_t& _avgReduceTime);

                    /**
                     * 判断参数 AvgReduceTime 是否已赋值
                     * @return AvgReduceTime 是否已赋值
                     * 
                     */
                    bool AvgReduceTimeHasBeenSet() const;

                    /**
                     * 获取平均Shuffle时间毫秒
                     * @return AvgShuffleTime 平均Shuffle时间毫秒
                     * 
                     */
                    int64_t GetAvgShuffleTime() const;

                    /**
                     * 设置平均Shuffle时间毫秒
                     * @param _avgShuffleTime 平均Shuffle时间毫秒
                     * 
                     */
                    void SetAvgShuffleTime(const int64_t& _avgShuffleTime);

                    /**
                     * 判断参数 AvgShuffleTime 是否已赋值
                     * @return AvgShuffleTime 是否已赋值
                     * 
                     */
                    bool AvgShuffleTimeHasBeenSet() const;

                    /**
                     * 获取平均Merge时间毫秒
                     * @return AvgMergeTime 平均Merge时间毫秒
                     * 
                     */
                    int64_t GetAvgMergeTime() const;

                    /**
                     * 设置平均Merge时间毫秒
                     * @param _avgMergeTime 平均Merge时间毫秒
                     * 
                     */
                    void SetAvgMergeTime(const int64_t& _avgMergeTime);

                    /**
                     * 判断参数 AvgMergeTime 是否已赋值
                     * @return AvgMergeTime 是否已赋值
                     * 
                     */
                    bool AvgMergeTimeHasBeenSet() const;

                    /**
                     * 获取失败的Reduce执行次数
                     * @return FailedReduceAttempts 失败的Reduce执行次数
                     * 
                     */
                    int64_t GetFailedReduceAttempts() const;

                    /**
                     * 设置失败的Reduce执行次数
                     * @param _failedReduceAttempts 失败的Reduce执行次数
                     * 
                     */
                    void SetFailedReduceAttempts(const int64_t& _failedReduceAttempts);

                    /**
                     * 判断参数 FailedReduceAttempts 是否已赋值
                     * @return FailedReduceAttempts 是否已赋值
                     * 
                     */
                    bool FailedReduceAttemptsHasBeenSet() const;

                    /**
                     * 获取Kill的Reduce执行次数
                     * @return KilledReduceAttempts Kill的Reduce执行次数
                     * 
                     */
                    int64_t GetKilledReduceAttempts() const;

                    /**
                     * 设置Kill的Reduce执行次数
                     * @param _killedReduceAttempts Kill的Reduce执行次数
                     * 
                     */
                    void SetKilledReduceAttempts(const int64_t& _killedReduceAttempts);

                    /**
                     * 判断参数 KilledReduceAttempts 是否已赋值
                     * @return KilledReduceAttempts 是否已赋值
                     * 
                     */
                    bool KilledReduceAttemptsHasBeenSet() const;

                    /**
                     * 获取成功的Reduce执行次数
                     * @return SuccessfulReduceAttempts 成功的Reduce执行次数
                     * 
                     */
                    int64_t GetSuccessfulReduceAttempts() const;

                    /**
                     * 设置成功的Reduce执行次数
                     * @param _successfulReduceAttempts 成功的Reduce执行次数
                     * 
                     */
                    void SetSuccessfulReduceAttempts(const int64_t& _successfulReduceAttempts);

                    /**
                     * 判断参数 SuccessfulReduceAttempts 是否已赋值
                     * @return SuccessfulReduceAttempts 是否已赋值
                     * 
                     */
                    bool SuccessfulReduceAttemptsHasBeenSet() const;

                    /**
                     * 获取失败的Map执行次数
                     * @return FailedMapAttempts 失败的Map执行次数
                     * 
                     */
                    int64_t GetFailedMapAttempts() const;

                    /**
                     * 设置失败的Map执行次数
                     * @param _failedMapAttempts 失败的Map执行次数
                     * 
                     */
                    void SetFailedMapAttempts(const int64_t& _failedMapAttempts);

                    /**
                     * 判断参数 FailedMapAttempts 是否已赋值
                     * @return FailedMapAttempts 是否已赋值
                     * 
                     */
                    bool FailedMapAttemptsHasBeenSet() const;

                    /**
                     * 获取Kill的Map执行次数
                     * @return KilledMapAttempts Kill的Map执行次数
                     * 
                     */
                    int64_t GetKilledMapAttempts() const;

                    /**
                     * 设置Kill的Map执行次数
                     * @param _killedMapAttempts Kill的Map执行次数
                     * 
                     */
                    void SetKilledMapAttempts(const int64_t& _killedMapAttempts);

                    /**
                     * 判断参数 KilledMapAttempts 是否已赋值
                     * @return KilledMapAttempts 是否已赋值
                     * 
                     */
                    bool KilledMapAttemptsHasBeenSet() const;

                    /**
                     * 获取成功的Map执行次数
                     * @return SuccessfulMapAttempts 成功的Map执行次数
                     * 
                     */
                    int64_t GetSuccessfulMapAttempts() const;

                    /**
                     * 设置成功的Map执行次数
                     * @param _successfulMapAttempts 成功的Map执行次数
                     * 
                     */
                    void SetSuccessfulMapAttempts(const int64_t& _successfulMapAttempts);

                    /**
                     * 判断参数 SuccessfulMapAttempts 是否已赋值
                     * @return SuccessfulMapAttempts 是否已赋值
                     * 
                     */
                    bool SuccessfulMapAttemptsHasBeenSet() const;

                    /**
                     * 获取GC毫秒
                     * @return GcTimeMillis GC毫秒
                     * 
                     */
                    int64_t GetGcTimeMillis() const;

                    /**
                     * 设置GC毫秒
                     * @param _gcTimeMillis GC毫秒
                     * 
                     */
                    void SetGcTimeMillis(const int64_t& _gcTimeMillis);

                    /**
                     * 判断参数 GcTimeMillis 是否已赋值
                     * @return GcTimeMillis 是否已赋值
                     * 
                     */
                    bool GcTimeMillisHasBeenSet() const;

                    /**
                     * 获取Map使用的VCore毫秒
                     * @return VCoreMillisMaps Map使用的VCore毫秒
                     * 
                     */
                    int64_t GetVCoreMillisMaps() const;

                    /**
                     * 设置Map使用的VCore毫秒
                     * @param _vCoreMillisMaps Map使用的VCore毫秒
                     * 
                     */
                    void SetVCoreMillisMaps(const int64_t& _vCoreMillisMaps);

                    /**
                     * 判断参数 VCoreMillisMaps 是否已赋值
                     * @return VCoreMillisMaps 是否已赋值
                     * 
                     */
                    bool VCoreMillisMapsHasBeenSet() const;

                    /**
                     * 获取Map使用的内存毫秒
                     * @return MbMillisMaps Map使用的内存毫秒
                     * 
                     */
                    int64_t GetMbMillisMaps() const;

                    /**
                     * 设置Map使用的内存毫秒
                     * @param _mbMillisMaps Map使用的内存毫秒
                     * 
                     */
                    void SetMbMillisMaps(const int64_t& _mbMillisMaps);

                    /**
                     * 判断参数 MbMillisMaps 是否已赋值
                     * @return MbMillisMaps 是否已赋值
                     * 
                     */
                    bool MbMillisMapsHasBeenSet() const;

                    /**
                     * 获取Reduce使用的VCore毫秒
                     * @return VCoreMillisReduces Reduce使用的VCore毫秒
                     * 
                     */
                    int64_t GetVCoreMillisReduces() const;

                    /**
                     * 设置Reduce使用的VCore毫秒
                     * @param _vCoreMillisReduces Reduce使用的VCore毫秒
                     * 
                     */
                    void SetVCoreMillisReduces(const int64_t& _vCoreMillisReduces);

                    /**
                     * 判断参数 VCoreMillisReduces 是否已赋值
                     * @return VCoreMillisReduces 是否已赋值
                     * 
                     */
                    bool VCoreMillisReducesHasBeenSet() const;

                    /**
                     * 获取Reduce使用的内存毫秒
                     * @return MbMillisReduces Reduce使用的内存毫秒
                     * 
                     */
                    int64_t GetMbMillisReduces() const;

                    /**
                     * 设置Reduce使用的内存毫秒
                     * @param _mbMillisReduces Reduce使用的内存毫秒
                     * 
                     */
                    void SetMbMillisReduces(const int64_t& _mbMillisReduces);

                    /**
                     * 判断参数 MbMillisReduces 是否已赋值
                     * @return MbMillisReduces 是否已赋值
                     * 
                     */
                    bool MbMillisReducesHasBeenSet() const;

                    /**
                     * 获取启动Map的总数
                     * @return TotalLaunchedMaps 启动Map的总数
                     * 
                     */
                    int64_t GetTotalLaunchedMaps() const;

                    /**
                     * 设置启动Map的总数
                     * @param _totalLaunchedMaps 启动Map的总数
                     * 
                     */
                    void SetTotalLaunchedMaps(const int64_t& _totalLaunchedMaps);

                    /**
                     * 判断参数 TotalLaunchedMaps 是否已赋值
                     * @return TotalLaunchedMaps 是否已赋值
                     * 
                     */
                    bool TotalLaunchedMapsHasBeenSet() const;

                    /**
                     * 获取启动Reduce的总数
                     * @return TotalLaunchedReduces 启动Reduce的总数
                     * 
                     */
                    int64_t GetTotalLaunchedReduces() const;

                    /**
                     * 设置启动Reduce的总数
                     * @param _totalLaunchedReduces 启动Reduce的总数
                     * 
                     */
                    void SetTotalLaunchedReduces(const int64_t& _totalLaunchedReduces);

                    /**
                     * 判断参数 TotalLaunchedReduces 是否已赋值
                     * @return TotalLaunchedReduces 是否已赋值
                     * 
                     */
                    bool TotalLaunchedReducesHasBeenSet() const;

                    /**
                     * 获取Map输入记录数
                     * @return MapInputRecords Map输入记录数
                     * 
                     */
                    int64_t GetMapInputRecords() const;

                    /**
                     * 设置Map输入记录数
                     * @param _mapInputRecords Map输入记录数
                     * 
                     */
                    void SetMapInputRecords(const int64_t& _mapInputRecords);

                    /**
                     * 判断参数 MapInputRecords 是否已赋值
                     * @return MapInputRecords 是否已赋值
                     * 
                     */
                    bool MapInputRecordsHasBeenSet() const;

                    /**
                     * 获取Map输出记录数
                     * @return MapOutputRecords Map输出记录数
                     * 
                     */
                    int64_t GetMapOutputRecords() const;

                    /**
                     * 设置Map输出记录数
                     * @param _mapOutputRecords Map输出记录数
                     * 
                     */
                    void SetMapOutputRecords(const int64_t& _mapOutputRecords);

                    /**
                     * 判断参数 MapOutputRecords 是否已赋值
                     * @return MapOutputRecords 是否已赋值
                     * 
                     */
                    bool MapOutputRecordsHasBeenSet() const;

                    /**
                     * 获取Reduce输入记录数
                     * @return ReduceInputRecords Reduce输入记录数
                     * 
                     */
                    int64_t GetReduceInputRecords() const;

                    /**
                     * 设置Reduce输入记录数
                     * @param _reduceInputRecords Reduce输入记录数
                     * 
                     */
                    void SetReduceInputRecords(const int64_t& _reduceInputRecords);

                    /**
                     * 判断参数 ReduceInputRecords 是否已赋值
                     * @return ReduceInputRecords 是否已赋值
                     * 
                     */
                    bool ReduceInputRecordsHasBeenSet() const;

                    /**
                     * 获取Reduce输出记录数
                     * @return ReduceOutputRecords Reduce输出记录数
                     * 
                     */
                    int64_t GetReduceOutputRecords() const;

                    /**
                     * 设置Reduce输出记录数
                     * @param _reduceOutputRecords Reduce输出记录数
                     * 
                     */
                    void SetReduceOutputRecords(const int64_t& _reduceOutputRecords);

                    /**
                     * 判断参数 ReduceOutputRecords 是否已赋值
                     * @return ReduceOutputRecords 是否已赋值
                     * 
                     */
                    bool ReduceOutputRecordsHasBeenSet() const;

                    /**
                     * 获取HDFS写入字节数
                     * @return HDFSBytesWritten HDFS写入字节数
                     * 
                     */
                    int64_t GetHDFSBytesWritten() const;

                    /**
                     * 设置HDFS写入字节数
                     * @param _hDFSBytesWritten HDFS写入字节数
                     * 
                     */
                    void SetHDFSBytesWritten(const int64_t& _hDFSBytesWritten);

                    /**
                     * 判断参数 HDFSBytesWritten 是否已赋值
                     * @return HDFSBytesWritten 是否已赋值
                     * 
                     */
                    bool HDFSBytesWrittenHasBeenSet() const;

                    /**
                     * 获取HDFS读取字节数
                     * @return HDFSBytesRead HDFS读取字节数
                     * 
                     */
                    int64_t GetHDFSBytesRead() const;

                    /**
                     * 设置HDFS读取字节数
                     * @param _hDFSBytesRead HDFS读取字节数
                     * 
                     */
                    void SetHDFSBytesRead(const int64_t& _hDFSBytesRead);

                    /**
                     * 判断参数 HDFSBytesRead 是否已赋值
                     * @return HDFSBytesRead 是否已赋值
                     * 
                     */
                    bool HDFSBytesReadHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 应用名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 队列
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * 应用类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 运行时间
                     */
                    std::string m_elapsedTime;
                    bool m_elapsedTimeHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 最终状态
                     */
                    std::string m_finalStatus;
                    bool m_finalStatusHasBeenSet;

                    /**
                     * 进度
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 开始时间毫秒
                     */
                    int64_t m_startedTime;
                    bool m_startedTimeHasBeenSet;

                    /**
                     * 结束时间毫秒
                     */
                    int64_t m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                    /**
                     * 申请内存MB
                     */
                    int64_t m_allocatedMB;
                    bool m_allocatedMBHasBeenSet;

                    /**
                     * 申请VCores
                     */
                    int64_t m_allocatedVCores;
                    bool m_allocatedVCoresHasBeenSet;

                    /**
                     * 运行的Containers数
                     */
                    int64_t m_runningContainers;
                    bool m_runningContainersHasBeenSet;

                    /**
                     * 内存MB*时间秒
                     */
                    int64_t m_memorySeconds;
                    bool m_memorySecondsHasBeenSet;

                    /**
                     * VCores*时间秒
                     */
                    int64_t m_vCoreSeconds;
                    bool m_vCoreSecondsHasBeenSet;

                    /**
                     * 队列资源占比
                     */
                    double m_queueUsagePercentage;
                    bool m_queueUsagePercentageHasBeenSet;

                    /**
                     * 集群资源占比
                     */
                    double m_clusterUsagePercentage;
                    bool m_clusterUsagePercentageHasBeenSet;

                    /**
                     * 预占用的内存
                     */
                    int64_t m_preemptedResourceMB;
                    bool m_preemptedResourceMBHasBeenSet;

                    /**
                     * 预占用的VCore
                     */
                    int64_t m_preemptedResourceVCores;
                    bool m_preemptedResourceVCoresHasBeenSet;

                    /**
                     * 预占的非应用程序主节点容器数量
                     */
                    int64_t m_numNonAMContainerPreempted;
                    bool m_numNonAMContainerPreemptedHasBeenSet;

                    /**
                     * AM预占用的容器数量
                     */
                    int64_t m_numAMContainerPreempted;
                    bool m_numAMContainerPreemptedHasBeenSet;

                    /**
                     * Map总数
                     */
                    int64_t m_mapsTotal;
                    bool m_mapsTotalHasBeenSet;

                    /**
                     * 完成的Map数
                     */
                    int64_t m_mapsCompleted;
                    bool m_mapsCompletedHasBeenSet;

                    /**
                     * Reduce总数
                     */
                    int64_t m_reducesTotal;
                    bool m_reducesTotalHasBeenSet;

                    /**
                     * 完成的Reduce数
                     */
                    int64_t m_reducesCompleted;
                    bool m_reducesCompletedHasBeenSet;

                    /**
                     * 平均Map时间
                     */
                    int64_t m_avgMapTime;
                    bool m_avgMapTimeHasBeenSet;

                    /**
                     * 平均Reduce时间
                     */
                    int64_t m_avgReduceTime;
                    bool m_avgReduceTimeHasBeenSet;

                    /**
                     * 平均Shuffle时间毫秒
                     */
                    int64_t m_avgShuffleTime;
                    bool m_avgShuffleTimeHasBeenSet;

                    /**
                     * 平均Merge时间毫秒
                     */
                    int64_t m_avgMergeTime;
                    bool m_avgMergeTimeHasBeenSet;

                    /**
                     * 失败的Reduce执行次数
                     */
                    int64_t m_failedReduceAttempts;
                    bool m_failedReduceAttemptsHasBeenSet;

                    /**
                     * Kill的Reduce执行次数
                     */
                    int64_t m_killedReduceAttempts;
                    bool m_killedReduceAttemptsHasBeenSet;

                    /**
                     * 成功的Reduce执行次数
                     */
                    int64_t m_successfulReduceAttempts;
                    bool m_successfulReduceAttemptsHasBeenSet;

                    /**
                     * 失败的Map执行次数
                     */
                    int64_t m_failedMapAttempts;
                    bool m_failedMapAttemptsHasBeenSet;

                    /**
                     * Kill的Map执行次数
                     */
                    int64_t m_killedMapAttempts;
                    bool m_killedMapAttemptsHasBeenSet;

                    /**
                     * 成功的Map执行次数
                     */
                    int64_t m_successfulMapAttempts;
                    bool m_successfulMapAttemptsHasBeenSet;

                    /**
                     * GC毫秒
                     */
                    int64_t m_gcTimeMillis;
                    bool m_gcTimeMillisHasBeenSet;

                    /**
                     * Map使用的VCore毫秒
                     */
                    int64_t m_vCoreMillisMaps;
                    bool m_vCoreMillisMapsHasBeenSet;

                    /**
                     * Map使用的内存毫秒
                     */
                    int64_t m_mbMillisMaps;
                    bool m_mbMillisMapsHasBeenSet;

                    /**
                     * Reduce使用的VCore毫秒
                     */
                    int64_t m_vCoreMillisReduces;
                    bool m_vCoreMillisReducesHasBeenSet;

                    /**
                     * Reduce使用的内存毫秒
                     */
                    int64_t m_mbMillisReduces;
                    bool m_mbMillisReducesHasBeenSet;

                    /**
                     * 启动Map的总数
                     */
                    int64_t m_totalLaunchedMaps;
                    bool m_totalLaunchedMapsHasBeenSet;

                    /**
                     * 启动Reduce的总数
                     */
                    int64_t m_totalLaunchedReduces;
                    bool m_totalLaunchedReducesHasBeenSet;

                    /**
                     * Map输入记录数
                     */
                    int64_t m_mapInputRecords;
                    bool m_mapInputRecordsHasBeenSet;

                    /**
                     * Map输出记录数
                     */
                    int64_t m_mapOutputRecords;
                    bool m_mapOutputRecordsHasBeenSet;

                    /**
                     * Reduce输入记录数
                     */
                    int64_t m_reduceInputRecords;
                    bool m_reduceInputRecordsHasBeenSet;

                    /**
                     * Reduce输出记录数
                     */
                    int64_t m_reduceOutputRecords;
                    bool m_reduceOutputRecordsHasBeenSet;

                    /**
                     * HDFS写入字节数
                     */
                    int64_t m_hDFSBytesWritten;
                    bool m_hDFSBytesWrittenHasBeenSet;

                    /**
                     * HDFS读取字节数
                     */
                    int64_t m_hDFSBytesRead;
                    bool m_hDFSBytesReadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_YARNAPPLICATION_H_
