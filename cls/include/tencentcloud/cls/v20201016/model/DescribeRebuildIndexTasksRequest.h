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
                     * 获取<p>日志主题ID</p>
                     * @return TopicId <p>日志主题ID</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p>
                     * @param _topicId <p>日志主题ID</p>
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
                     * 获取<p>索引重建任务ID</p>
                     * @return TaskId <p>索引重建任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>索引重建任务ID</p>
                     * @param _taskId <p>索引重建任务ID</p>
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
                     * 获取<p>索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔。</p><p>枚举值：</p><ul><li>0： 索引重建任务已创建</li><li>1： 正在创建索引重建资源</li><li>2： 已创建索引重建资源</li><li>3： 重建中</li><li>4： 暂停</li><li>5： 重建完成</li><li>6： 重建成功（可检索）</li><li>7： 重建失败</li><li>8： 任务取消</li><li>9： 元数据和索引已删除</li></ul>
                     * @return Status <p>索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔。</p><p>枚举值：</p><ul><li>0： 索引重建任务已创建</li><li>1： 正在创建索引重建资源</li><li>2： 已创建索引重建资源</li><li>3： 重建中</li><li>4： 暂停</li><li>5： 重建完成</li><li>6： 重建成功（可检索）</li><li>7： 重建失败</li><li>8： 任务取消</li><li>9： 元数据和索引已删除</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔。</p><p>枚举值：</p><ul><li>0： 索引重建任务已创建</li><li>1： 正在创建索引重建资源</li><li>2： 已创建索引重建资源</li><li>3： 重建中</li><li>4： 暂停</li><li>5： 重建完成</li><li>6： 重建成功（可检索）</li><li>7： 重建失败</li><li>8： 任务取消</li><li>9： 元数据和索引已删除</li></ul>
                     * @param _status <p>索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔。</p><p>枚举值：</p><ul><li>0： 索引重建任务已创建</li><li>1： 正在创建索引重建资源</li><li>2： 已创建索引重建资源</li><li>3： 重建中</li><li>4： 暂停</li><li>5： 重建完成</li><li>6： 重建成功（可检索）</li><li>7： 重建失败</li><li>8： 任务取消</li><li>9： 元数据和索引已删除</li></ul>
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
                     * 获取<p>分页的偏移量，默认值为0。</p>
                     * @return Offset <p>分页的偏移量，默认值为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页的偏移量，默认值为0。</p>
                     * @param _offset <p>分页的偏移量，默认值为0。</p>
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
                     * 获取<p>分页单页限制数目，默认值为10，最大值20。</p>
                     * @return Limit <p>分页单页限制数目，默认值为10，最大值20。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页单页限制数目，默认值为10，最大值20。</p>
                     * @param _limit <p>分页单页限制数目，默认值为10，最大值20。</p>
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
                     * <p>日志主题ID</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>索引重建任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>索引重建任务状态，不填返回所有状态任务列表，多种状态之间用逗号分隔。</p><p>枚举值：</p><ul><li>0： 索引重建任务已创建</li><li>1： 正在创建索引重建资源</li><li>2： 已创建索引重建资源</li><li>3： 重建中</li><li>4： 暂停</li><li>5： 重建完成</li><li>6： 重建成功（可检索）</li><li>7： 重建失败</li><li>8： 任务取消</li><li>9： 元数据和索引已删除</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>分页的偏移量，默认值为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页单页限制数目，默认值为10，最大值20。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREBUILDINDEXTASKSREQUEST_H_
