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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKDETAILREQUEST_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
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
                     * 获取<p>该字段表示创建音频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。<br><br>备注：查询接口单次最大查询量为<strong>20条每次</strong>。</p>
                     * @return TaskId <p>该字段表示创建音频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。<br><br>备注：查询接口单次最大查询量为<strong>20条每次</strong>。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>该字段表示创建音频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。<br><br>备注：查询接口单次最大查询量为<strong>20条每次</strong>。</p>
                     * @param _taskId <p>该字段表示创建音频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。<br><br>备注：查询接口单次最大查询量为<strong>20条每次</strong>。</p>
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
                     * 获取<p>该布尔字段表示是否展示全部的音频片段，取值：True(展示全部的音频分片)、False(只展示命中审核规则的音频分片)；默认值为False。</p>
                     * @return ShowAllSegments <p>该布尔字段表示是否展示全部的音频片段，取值：True(展示全部的音频分片)、False(只展示命中审核规则的音频分片)；默认值为False。</p>
                     * 
                     */
                    bool GetShowAllSegments() const;

                    /**
                     * 设置<p>该布尔字段表示是否展示全部的音频片段，取值：True(展示全部的音频分片)、False(只展示命中审核规则的音频分片)；默认值为False。</p>
                     * @param _showAllSegments <p>该布尔字段表示是否展示全部的音频片段，取值：True(展示全部的音频分片)、False(只展示命中审核规则的音频分片)；默认值为False。</p>
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
                     * <p>该字段表示创建音频审核任务后返回的任务ID（在Results参数中），用于标识需要查询任务详情的审核任务。<br><br>备注：查询接口单次最大查询量为<strong>20条每次</strong>。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>该布尔字段表示是否展示全部的音频片段，取值：True(展示全部的音频分片)、False(只展示命中审核规则的音频分片)；默认值为False。</p>
                     */
                    bool m_showAllSegments;
                    bool m_showAllSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKDETAILREQUEST_H_
