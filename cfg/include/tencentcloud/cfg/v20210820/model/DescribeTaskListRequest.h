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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKLISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TagWithDescribe.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
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
                     * 获取分页Limit
                     * @return Limit 分页Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页Limit
                     * @param _limit 分页Limit
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
                     * 获取分页Offset
                     * @return Offset 分页Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页Offset
                     * @param _offset 分页Offset
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
                     * 获取演练名称
                     * @return TaskTitle 演练名称
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置演练名称
                     * @param _taskTitle 演练名称
                     * 
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     * 
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取标签键
                     * @return TaskTag 标签键
                     * 
                     */
                    std::vector<std::string> GetTaskTag() const;

                    /**
                     * 设置标签键
                     * @param _taskTag 标签键
                     * 
                     */
                    void SetTaskTag(const std::vector<std::string>& _taskTag);

                    /**
                     * 判断参数 TaskTag 是否已赋值
                     * @return TaskTag 是否已赋值
                     * 
                     */
                    bool TaskTagHasBeenSet() const;

                    /**
                     * 获取任务状态(1001 -- 未开始 1002 -- 进行中 1003 -- 暂停中 1004 -- 任务结束)
                     * @return TaskStatus 任务状态(1001 -- 未开始 1002 -- 进行中 1003 -- 暂停中 1004 -- 任务结束)
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态(1001 -- 未开始 1002 -- 进行中 1003 -- 暂停中 1004 -- 任务结束)
                     * @param _taskStatus 任务状态(1001 -- 未开始 1002 -- 进行中 1003 -- 暂停中 1004 -- 任务结束)
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取开始时间，固定格式%Y-%m-%d %H:%M:%S
                     * @return TaskStartTime 开始时间，固定格式%Y-%m-%d %H:%M:%S
                     * 
                     */
                    std::string GetTaskStartTime() const;

                    /**
                     * 设置开始时间，固定格式%Y-%m-%d %H:%M:%S
                     * @param _taskStartTime 开始时间，固定格式%Y-%m-%d %H:%M:%S
                     * 
                     */
                    void SetTaskStartTime(const std::string& _taskStartTime);

                    /**
                     * 判断参数 TaskStartTime 是否已赋值
                     * @return TaskStartTime 是否已赋值
                     * 
                     */
                    bool TaskStartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，固定格式%Y-%m-%d %H:%M:%S
                     * @return TaskEndTime 结束时间，固定格式%Y-%m-%d %H:%M:%S
                     * 
                     */
                    std::string GetTaskEndTime() const;

                    /**
                     * 设置结束时间，固定格式%Y-%m-%d %H:%M:%S
                     * @param _taskEndTime 结束时间，固定格式%Y-%m-%d %H:%M:%S
                     * 
                     */
                    void SetTaskEndTime(const std::string& _taskEndTime);

                    /**
                     * 判断参数 TaskEndTime 是否已赋值
                     * @return TaskEndTime 是否已赋值
                     * 
                     */
                    bool TaskEndTimeHasBeenSet() const;

                    /**
                     * 获取标签对
                     * @return Tags 标签对
                     * 
                     */
                    std::vector<TagWithDescribe> GetTags() const;

                    /**
                     * 设置标签对
                     * @param _tags 标签对
                     * 
                     */
                    void SetTags(const std::vector<TagWithDescribe>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 分页Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 演练名称
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * 标签键
                     */
                    std::vector<std::string> m_taskTag;
                    bool m_taskTagHasBeenSet;

                    /**
                     * 任务状态(1001 -- 未开始 1002 -- 进行中 1003 -- 暂停中 1004 -- 任务结束)
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 开始时间，固定格式%Y-%m-%d %H:%M:%S
                     */
                    std::string m_taskStartTime;
                    bool m_taskStartTimeHasBeenSet;

                    /**
                     * 结束时间，固定格式%Y-%m-%d %H:%M:%S
                     */
                    std::string m_taskEndTime;
                    bool m_taskEndTimeHasBeenSet;

                    /**
                     * 标签对
                     */
                    std::vector<TagWithDescribe> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKLISTREQUEST_H_
