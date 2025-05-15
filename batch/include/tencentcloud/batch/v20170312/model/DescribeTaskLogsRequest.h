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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKLOGSREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKLOGSREQUEST_H_

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
                * DescribeTaskLogs请求参数结构体
                */
                class DescribeTaskLogsRequest : public AbstractModel
                {
                public:
                    DescribeTaskLogsRequest();
                    ~DescribeTaskLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID。JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
                     * @return JobId 作业ID。JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID。JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
                     * @param _jobId 作业ID。JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
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
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
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
                     * 获取任务实例集合；与Offset不能同时指定。
                     * @return TaskInstanceIndexes 任务实例集合；与Offset不能同时指定。
                     * 
                     */
                    std::vector<uint64_t> GetTaskInstanceIndexes() const;

                    /**
                     * 设置任务实例集合；与Offset不能同时指定。
                     * @param _taskInstanceIndexes 任务实例集合；与Offset不能同时指定。
                     * 
                     */
                    void SetTaskInstanceIndexes(const std::vector<uint64_t>& _taskInstanceIndexes);

                    /**
                     * 判断参数 TaskInstanceIndexes 是否已赋值
                     * @return TaskInstanceIndexes 是否已赋值
                     * 
                     */
                    bool TaskInstanceIndexesHasBeenSet() const;

                    /**
                     * 获取起始任务实例。与TaskInstanceIndexes参数不能同时指定。
                     * @return Offset 起始任务实例。与TaskInstanceIndexes参数不能同时指定。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始任务实例。与TaskInstanceIndexes参数不能同时指定。
                     * @param _offset 起始任务实例。与TaskInstanceIndexes参数不能同时指定。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取最大任务实例数；默认值为5， 最大值为10。
                     * @return Limit 最大任务实例数；默认值为5， 最大值为10。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置最大任务实例数；默认值为5， 最大值为10。
                     * @param _limit 最大任务实例数；默认值为5， 最大值为10。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 作业ID。JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务实例集合；与Offset不能同时指定。
                     */
                    std::vector<uint64_t> m_taskInstanceIndexes;
                    bool m_taskInstanceIndexesHasBeenSet;

                    /**
                     * 起始任务实例。与TaskInstanceIndexes参数不能同时指定。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大任务实例数；默认值为5， 最大值为10。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKLOGSREQUEST_H_
