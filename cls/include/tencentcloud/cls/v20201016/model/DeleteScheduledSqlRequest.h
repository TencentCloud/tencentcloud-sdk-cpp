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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETESCHEDULEDSQLREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETESCHEDULEDSQLREQUEST_H_

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
                * DeleteScheduledSql请求参数结构体
                */
                class DeleteScheduledSqlRequest : public AbstractModel
                {
                public:
                    DeleteScheduledSqlRequest();
                    ~DeleteScheduledSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
                     * @return TaskId 任务ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
                     * @param _taskId 任务ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
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
                     * 获取源日志主题ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
                     * @return SrcTopicId 源日志主题ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置源日志主题ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
                     * @param _srcTopicId 源日志主题ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
                     * 
                     */
                    void SetSrcTopicId(const std::string& _srcTopicId);

                    /**
                     * 判断参数 SrcTopicId 是否已赋值
                     * @return SrcTopicId 是否已赋值
                     * 
                     */
                    bool SrcTopicIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 源日志主题ID，通过[获取定时SQL分析任务列表](https://cloud.tencent.com/document/product/614/95519)获取
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETESCHEDULEDSQLREQUEST_H_
