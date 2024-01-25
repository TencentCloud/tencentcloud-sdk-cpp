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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKADVANCEDSETTINGSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKADVANCEDSETTINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UpdateBatchTaskAdvancedSettings请求参数结构体
                */
                class UpdateBatchTaskAdvancedSettingsRequest : public AbstractModel
                {
                public:
                    UpdateBatchTaskAdvancedSettingsRequest();
                    ~UpdateBatchTaskAdvancedSettingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待更新的任务ID
                     * @return TaskIds 待更新的任务ID
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置待更新的任务ID
                     * @param _taskIds 待更新的任务ID
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取重试等待时间
                     * @return RetryWait 重试等待时间
                     * 
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置重试等待时间
                     * @param _retryWait 重试等待时间
                     * 
                     */
                    void SetRetryWait(const int64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取失败重试次数
                     * @return TryLimit 失败重试次数
                     * 
                     */
                    int64_t GetTryLimit() const;

                    /**
                     * 设置失败重试次数
                     * @param _tryLimit 失败重试次数
                     * 
                     */
                    void SetTryLimit(const int64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     * 
                     */
                    bool TryLimitHasBeenSet() const;

                    /**
                     * 获取任务优先级
                     * @return RunPriority 任务优先级
                     * 
                     */
                    int64_t GetRunPriority() const;

                    /**
                     * 设置任务优先级
                     * @param _runPriority 任务优先级
                     * 
                     */
                    void SetRunPriority(const int64_t& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * 
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取超时处理策略
                     * @return ExecutionTTL 超时处理策略
                     * 
                     */
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置超时处理策略
                     * @param _executionTTL 超时处理策略
                     * 
                     */
                    void SetExecutionTTL(const int64_t& _executionTTL);

                    /**
                     * 判断参数 ExecutionTTL 是否已赋值
                     * @return ExecutionTTL 是否已赋值
                     * 
                     */
                    bool ExecutionTTLHasBeenSet() const;

                private:

                    /**
                     * 待更新的任务ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 重试等待时间
                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * 失败重试次数
                     */
                    int64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * 任务优先级
                     */
                    int64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * 超时处理策略
                     */
                    int64_t m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKADVANCEDSETTINGSREQUEST_H_
