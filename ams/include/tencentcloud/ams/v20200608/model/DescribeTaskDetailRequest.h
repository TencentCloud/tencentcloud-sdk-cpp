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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBETASKDETAILREQUEST_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail请求参数结构体
                */
                class DescribeTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeTaskDetailRequest();
                    ~DescribeTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID，创建任务后返回的TaskId字段
                     * @return TaskId 任务ID，创建任务后返回的TaskId字段
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，创建任务后返回的TaskId字段
                     * @param _taskId 任务ID，创建任务后返回的TaskId字段
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
                     * 获取是否展示所有分片，默认只展示命中规则的分片
                     * @return ShowAllSegments 是否展示所有分片，默认只展示命中规则的分片
                     * 
                     */
                    bool GetShowAllSegments() const;

                    /**
                     * 设置是否展示所有分片，默认只展示命中规则的分片
                     * @param _showAllSegments 是否展示所有分片，默认只展示命中规则的分片
                     * 
                     */
                    void SetShowAllSegments(const bool& _showAllSegments);

                    /**
                     * 判断参数 ShowAllSegments 是否已赋值
                     * @return ShowAllSegments 是否已赋值
                     * 
                     */
                    bool ShowAllSegmentsHasBeenSet() const;

                private:

                    /**
                     * 任务ID，创建任务后返回的TaskId字段
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 是否展示所有分片，默认只展示命中规则的分片
                     */
                    bool m_showAllSegments;
                    bool m_showAllSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBETASKDETAILREQUEST_H_
