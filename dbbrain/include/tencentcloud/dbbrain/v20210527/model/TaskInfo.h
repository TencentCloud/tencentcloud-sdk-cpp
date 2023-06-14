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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TASKINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 展示 redis kill 会话任务状态。
                */
                class TaskInfo : public AbstractModel
                {
                public:
                    TaskInfo();
                    ~TaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异步任务 ID。
                     * @return AsyncRequestId 异步任务 ID。
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置异步任务 ID。
                     * @param _asyncRequestId 异步任务 ID。
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取当前实例所有 proxy 列表。
                     * @return InstProxyList 当前实例所有 proxy 列表。
                     * 
                     */
                    std::vector<std::string> GetInstProxyList() const;

                    /**
                     * 设置当前实例所有 proxy 列表。
                     * @param _instProxyList 当前实例所有 proxy 列表。
                     * 
                     */
                    void SetInstProxyList(const std::vector<std::string>& _instProxyList);

                    /**
                     * 判断参数 InstProxyList 是否已赋值
                     * @return InstProxyList 是否已赋值
                     * 
                     */
                    bool InstProxyListHasBeenSet() const;

                    /**
                     * 获取当前实例所有 proxy 数量。
                     * @return InstProxyCount 当前实例所有 proxy 数量。
                     * 
                     */
                    int64_t GetInstProxyCount() const;

                    /**
                     * 设置当前实例所有 proxy 数量。
                     * @param _instProxyCount 当前实例所有 proxy 数量。
                     * 
                     */
                    void SetInstProxyCount(const int64_t& _instProxyCount);

                    /**
                     * 判断参数 InstProxyCount 是否已赋值
                     * @return InstProxyCount 是否已赋值
                     * 
                     */
                    bool InstProxyCountHasBeenSet() const;

                    /**
                     * 获取任务创建时间。
                     * @return CreateTime 任务创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
                     * @param _createTime 任务创建时间。
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
                     * 获取任务启动时间。
                     * @return StartTime 任务启动时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务启动时间。
                     * @param _startTime 任务启动时间。
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
                     * 获取任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     * @return TaskStatus 任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     * @param _taskStatus 任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取完成 kill 任务的 proxyId。
                     * @return FinishedProxyList 完成 kill 任务的 proxyId。
                     * 
                     */
                    std::vector<std::string> GetFinishedProxyList() const;

                    /**
                     * 设置完成 kill 任务的 proxyId。
                     * @param _finishedProxyList 完成 kill 任务的 proxyId。
                     * 
                     */
                    void SetFinishedProxyList(const std::vector<std::string>& _finishedProxyList);

                    /**
                     * 判断参数 FinishedProxyList 是否已赋值
                     * @return FinishedProxyList 是否已赋值
                     * 
                     */
                    bool FinishedProxyListHasBeenSet() const;

                    /**
                     * 获取kill 任务实行失败的 proxyId。
                     * @return FailedProxyList kill 任务实行失败的 proxyId。
                     * 
                     */
                    std::vector<std::string> GetFailedProxyList() const;

                    /**
                     * 设置kill 任务实行失败的 proxyId。
                     * @param _failedProxyList kill 任务实行失败的 proxyId。
                     * 
                     */
                    void SetFailedProxyList(const std::vector<std::string>& _failedProxyList);

                    /**
                     * 判断参数 FailedProxyList 是否已赋值
                     * @return FailedProxyList 是否已赋值
                     * 
                     */
                    bool FailedProxyListHasBeenSet() const;

                    /**
                     * 获取任务结束时间。
                     * @return EndTime 任务结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间。
                     * @param _endTime 任务结束时间。
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
                     * 获取任务执行进度。
                     * @return Progress 任务执行进度。
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置任务执行进度。
                     * @param _progress 任务执行进度。
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
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 异步任务 ID。
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 当前实例所有 proxy 列表。
                     */
                    std::vector<std::string> m_instProxyList;
                    bool m_instProxyListHasBeenSet;

                    /**
                     * 当前实例所有 proxy 数量。
                     */
                    int64_t m_instProxyCount;
                    bool m_instProxyCountHasBeenSet;

                    /**
                     * 任务创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务启动时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务的状态，支持的取值包括："created" - 新建；"chosen" - 待执行； "running" - 执行中；"failed" - 失败；"finished" - 已完成。
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 完成 kill 任务的 proxyId。
                     */
                    std::vector<std::string> m_finishedProxyList;
                    bool m_finishedProxyListHasBeenSet;

                    /**
                     * kill 任务实行失败的 proxyId。
                     */
                    std::vector<std::string> m_failedProxyList;
                    bool m_failedProxyListHasBeenSet;

                    /**
                     * 任务结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务执行进度。
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TASKINFO_H_
