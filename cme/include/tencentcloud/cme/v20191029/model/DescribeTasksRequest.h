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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeTasks请求参数结构体
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取项目 Id，使用项目 Id 进行过滤。
                     * @return ProjectId 项目 Id，使用项目 Id 进行过滤。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 Id，使用项目 Id 进行过滤。
                     * @param _projectId 项目 Id，使用项目 Id 进行过滤。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务类型集合，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：视频编辑项目导出。</li>

注：不填不使用任务类型进行过滤。
                     * @return TaskTypeSet 任务类型集合，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：视频编辑项目导出。</li>

注：不填不使用任务类型进行过滤。
                     * 
                     */
                    std::vector<std::string> GetTaskTypeSet() const;

                    /**
                     * 设置任务类型集合，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：视频编辑项目导出。</li>

注：不填不使用任务类型进行过滤。
                     * @param _taskTypeSet 任务类型集合，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：视频编辑项目导出。</li>

注：不填不使用任务类型进行过滤。
                     * 
                     */
                    void SetTaskTypeSet(const std::vector<std::string>& _taskTypeSet);

                    /**
                     * 判断参数 TaskTypeSet 是否已赋值
                     * @return TaskTypeSet 是否已赋值
                     * 
                     */
                    bool TaskTypeSetHasBeenSet() const;

                    /**
                     * 获取任务状态集合，取值有：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>

注：不填则不使用任务状态进行过滤。
                     * @return StatusSet 任务状态集合，取值有：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>

注：不填则不使用任务状态进行过滤。
                     * 
                     */
                    std::vector<std::string> GetStatusSet() const;

                    /**
                     * 设置任务状态集合，取值有：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>

注：不填则不使用任务状态进行过滤。
                     * @param _statusSet 任务状态集合，取值有：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>

注：不填则不使用任务状态进行过滤。
                     * 
                     */
                    void SetStatusSet(const std::vector<std::string>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     * 
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取分页返回的起始偏移量，默认值：0。
                     * @return Offset 分页返回的起始偏移量，默认值：0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：0。
                     * @param _offset 分页返回的起始偏移量，默认值：0。
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
                     * 获取分页返回的记录条数，默认值：10。最大值：20。
                     * @return Limit 分页返回的记录条数，默认值：10。最大值：20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页返回的记录条数，默认值：10。最大值：20。
                     * @param _limit 分页返回的记录条数，默认值：10。最大值：20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取所有任务信息。如果指定操作者，则操作者需要是任务发起者。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取所有任务信息。如果指定操作者，则操作者需要是任务发起者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取所有任务信息。如果指定操作者，则操作者需要是任务发起者。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取所有任务信息。如果指定操作者，则操作者需要是任务发起者。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 项目 Id，使用项目 Id 进行过滤。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务类型集合，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：视频编辑项目导出。</li>

注：不填不使用任务类型进行过滤。
                     */
                    std::vector<std::string> m_taskTypeSet;
                    bool m_taskTypeSetHasBeenSet;

                    /**
                     * 任务状态集合，取值有：
<li>PROCESSING：处理中；</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>

注：不填则不使用任务状态进行过滤。
                     */
                    std::vector<std::string> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回的记录条数，默认值：10。最大值：20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取所有任务信息。如果指定操作者，则操作者需要是任务发起者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETASKSREQUEST_H_
