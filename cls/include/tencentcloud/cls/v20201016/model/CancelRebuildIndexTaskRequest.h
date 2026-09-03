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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CANCELREBUILDINDEXTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CANCELREBUILDINDEXTASKREQUEST_H_

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
                * CancelRebuildIndexTask请求参数结构体
                */
                class CancelRebuildIndexTaskRequest : public AbstractModel
                {
                public:
                    CancelRebuildIndexTaskRequest();
                    ~CancelRebuildIndexTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志主题ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></p>
                     * @return TopicId <p>日志主题ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></p>
                     * @param _topicId <p>日志主题ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></p>
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
                     * 获取<p>索引重建任务ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/127535">DescribeRebuildIndexTasks</a></p>
                     * @return TaskId <p>索引重建任务ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/127535">DescribeRebuildIndexTasks</a></p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>索引重建任务ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/127535">DescribeRebuildIndexTasks</a></p>
                     * @param _taskId <p>索引重建任务ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/127535">DescribeRebuildIndexTasks</a></p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/56454">DescribeTopics</a></p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>索引重建任务ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/614/127535">DescribeRebuildIndexTasks</a></p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CANCELREBUILDINDEXTASKREQUEST_H_
