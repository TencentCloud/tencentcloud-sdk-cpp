/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREBUILDINDEXTASKSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREBUILDINDEXTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeRebuildIndexTasks请求参数结构体
                */
                class DescribeRebuildIndexTasksRequest : public AbstractModel
                {
                public:
                    DescribeRebuildIndexTasksRequest();
                    ~DescribeRebuildIndexTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _topicId 日志主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取索引重建任务ID
                     * @return TaskId 索引重建任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置索引重建任务ID
                     * @param _taskId 索引重建任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔，0:索引重建任务已创建，1:已创建索引重建资源，2:重建中，3:重建完成，4:重建成功（可检索），5:任务取消，6:元数据和索引已删除
                     * @return Status 索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔，0:索引重建任务已创建，1:已创建索引重建资源，2:重建中，3:重建完成，4:重建成功（可检索），5:任务取消，6:元数据和索引已删除
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔，0:索引重建任务已创建，1:已创建索引重建资源，2:重建中，3:重建完成，4:重建成功（可检索），5:任务取消，6:元数据和索引已删除
                     * @param _status 索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔，0:索引重建任务已创建，1:已创建索引重建资源，2:重建中，3:重建完成，4:重建成功（可检索），5:任务取消，6:元数据和索引已删除
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分页的偏移量，默认值为0。
                     * @return Offset 分页的偏移量，默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0。
                     * @param _offset 分页的偏移量，默认值为0。
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
                     * 获取分页单页限制数目，默认值为10，最大值20。
                     * @return Limit 分页单页限制数目，默认值为10，最大值20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目，默认值为10，最大值20。
                     * @param _limit 分页单页限制数目，默认值为10，最大值20。
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
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 索引重建任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔，0:索引重建任务已创建，1:已创建索引重建资源，2:重建中，3:重建完成，4:重建成功（可检索），5:任务取消，6:元数据和索引已删除
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分页的偏移量，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目，默认值为10，最大值20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREBUILDINDEXTASKSREQUEST_H_
