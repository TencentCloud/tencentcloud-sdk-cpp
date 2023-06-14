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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_DESCRIBETASKDETAILREQUEST_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_DESCRIBETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
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
                     * 获取该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。
<br>备注：查询接口单次最大查询量为**20条每次**。
                     * @return TaskId 该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。
<br>备注：查询接口单次最大查询量为**20条每次**。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。
<br>备注：查询接口单次最大查询量为**20条每次**。
                     * @param _taskId 该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。
<br>备注：查询接口单次最大查询量为**20条每次**。
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
                     * 获取该布尔字段表示是否展示全部的视频片段，取值：True(展示全部的视频分片)、False(只展示命中审核规则的视频分片)；默认值为False。
                     * @return ShowAllSegments 该布尔字段表示是否展示全部的视频片段，取值：True(展示全部的视频分片)、False(只展示命中审核规则的视频分片)；默认值为False。
                     * 
                     */
                    bool GetShowAllSegments() const;

                    /**
                     * 设置该布尔字段表示是否展示全部的视频片段，取值：True(展示全部的视频分片)、False(只展示命中审核规则的视频分片)；默认值为False。
                     * @param _showAllSegments 该布尔字段表示是否展示全部的视频片段，取值：True(展示全部的视频分片)、False(只展示命中审核规则的视频分片)；默认值为False。
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
                     * 该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。
<br>备注：查询接口单次最大查询量为**20条每次**。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 该布尔字段表示是否展示全部的视频片段，取值：True(展示全部的视频分片)、False(只展示命中审核规则的视频分片)；默认值为False。
                     */
                    bool m_showAllSegments;
                    bool m_showAllSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_DESCRIBETASKDETAILREQUEST_H_
