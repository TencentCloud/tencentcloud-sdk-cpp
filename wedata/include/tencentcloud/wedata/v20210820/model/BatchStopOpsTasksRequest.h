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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTOPOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTOPOPSTASKSREQUEST_H_

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
                * BatchStopOpsTasks请求参数结构体
                */
                class BatchStopOpsTasksRequest : public AbstractModel
                {
                public:
                    BatchStopOpsTasksRequest();
                    ~BatchStopOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量停止任务的TaskId
                     * @return TaskIdList 批量停止任务的TaskId
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置批量停止任务的TaskId
                     * @param _taskIdList 批量停止任务的TaskId
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取是否终止已生成的实例
                     * @return KillInstance 是否终止已生成的实例
                     * 
                     */
                    bool GetKillInstance() const;

                    /**
                     * 设置是否终止已生成的实例
                     * @param _killInstance 是否终止已生成的实例
                     * 
                     */
                    void SetKillInstance(const bool& _killInstance);

                    /**
                     * 判断参数 KillInstance 是否已赋值
                     * @return KillInstance 是否已赋值
                     * 
                     */
                    bool KillInstanceHasBeenSet() const;

                    /**
                     * 获取是否异步模式
                     * @return AsyncMode 是否异步模式
                     * 
                     */
                    bool GetAsyncMode() const;

                    /**
                     * 设置是否异步模式
                     * @param _asyncMode 是否异步模式
                     * 
                     */
                    void SetAsyncMode(const bool& _asyncMode);

                    /**
                     * 判断参数 AsyncMode 是否已赋值
                     * @return AsyncMode 是否已赋值
                     * 
                     */
                    bool AsyncModeHasBeenSet() const;

                private:

                    /**
                     * 批量停止任务的TaskId
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否终止已生成的实例
                     */
                    bool m_killInstance;
                    bool m_killInstanceHasBeenSet;

                    /**
                     * 是否异步模式
                     */
                    bool m_asyncMode;
                    bool m_asyncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHSTOPOPSTASKSREQUEST_H_
