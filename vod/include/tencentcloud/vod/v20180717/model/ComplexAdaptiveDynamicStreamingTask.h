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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 自适应码流任务信息。
                */
                class ComplexAdaptiveDynamicStreamingTask : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTask();
                    ~ComplexAdaptiveDynamicStreamingTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 ID。
                     * @return TaskId 任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID。
                     * @param _taskId 任务 ID。
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
                     * 获取任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>

                     * @return Status 任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>

                     * @param _status 任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>

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
                     * 获取自适应码流任务的执行状态与结果，每个元素对应一个自适应码流模板。
                     * @return ComplexAdaptiveDynamicStreamingTaskResultSet 自适应码流任务的执行状态与结果，每个元素对应一个自适应码流模板。
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskResult> GetComplexAdaptiveDynamicStreamingTaskResultSet() const;

                    /**
                     * 设置自适应码流任务的执行状态与结果，每个元素对应一个自适应码流模板。
                     * @param _complexAdaptiveDynamicStreamingTaskResultSet 自适应码流任务的执行状态与结果，每个元素对应一个自适应码流模板。
                     * 
                     */
                    void SetComplexAdaptiveDynamicStreamingTaskResultSet(const std::vector<ComplexAdaptiveDynamicStreamingTaskResult>& _complexAdaptiveDynamicStreamingTaskResultSet);

                    /**
                     * 判断参数 ComplexAdaptiveDynamicStreamingTaskResultSet 是否已赋值
                     * @return ComplexAdaptiveDynamicStreamingTaskResultSet 是否已赋值
                     * 
                     */
                    bool ComplexAdaptiveDynamicStreamingTaskResultSetHasBeenSet() const;

                private:

                    /**
                     * 任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 自适应码流任务的执行状态与结果，每个元素对应一个自适应码流模板。
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskResult> m_complexAdaptiveDynamicStreamingTaskResultSet;
                    bool m_complexAdaptiveDynamicStreamingTaskResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASK_H_
