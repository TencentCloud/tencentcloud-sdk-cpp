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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATETASKINSTANCEREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATETASKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TerminateTaskInstance请求参数结构体
                */
                class TerminateTaskInstanceRequest : public AbstractModel
                {
                public:
                    TerminateTaskInstanceRequest();
                    ~TerminateTaskInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID；详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
                     * @return JobId 作业ID；详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID；详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
                     * @param _jobId 作业ID；详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取任务名称；详见[作业提交信息](https://cloud.tencent.com/document/product/599/15910)
                     * @return TaskName 任务名称；详见[作业提交信息](https://cloud.tencent.com/document/product/599/15910)
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称；详见[作业提交信息](https://cloud.tencent.com/document/product/599/15910)
                     * @param _taskName 任务名称；详见[作业提交信息](https://cloud.tencent.com/document/product/599/15910)
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务实例索引
                     * @return TaskInstanceIndex 任务实例索引
                     * 
                     */
                    int64_t GetTaskInstanceIndex() const;

                    /**
                     * 设置任务实例索引
                     * @param _taskInstanceIndex 任务实例索引
                     * 
                     */
                    void SetTaskInstanceIndex(const int64_t& _taskInstanceIndex);

                    /**
                     * 判断参数 TaskInstanceIndex 是否已赋值
                     * @return TaskInstanceIndex 是否已赋值
                     * 
                     */
                    bool TaskInstanceIndexHasBeenSet() const;

                private:

                    /**
                     * 作业ID；详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务名称；详见[作业提交信息](https://cloud.tencent.com/document/product/599/15910)
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务实例索引
                     */
                    int64_t m_taskInstanceIndex;
                    bool m_taskInstanceIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TERMINATETASKINSTANCEREQUEST_H_
