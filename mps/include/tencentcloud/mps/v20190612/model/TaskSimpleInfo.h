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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TASKSIMPLEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TASKSIMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 任务概要信息
                */
                class TaskSimpleInfo : public AbstractModel
                {
                public:
                    TaskSimpleInfo();
                    ~TaskSimpleInfo() = default;
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
                     * 获取任务类型，包含：
<li> WorkflowTask：工作流处理任务；</li>
<li> EditMediaTask：视频编辑任务；</li>
<li> LiveProcessTask：直播处理任务。</li>
                     * @return TaskType 任务类型，包含：
<li> WorkflowTask：工作流处理任务；</li>
<li> EditMediaTask：视频编辑任务；</li>
<li> LiveProcessTask：直播处理任务。</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，包含：
<li> WorkflowTask：工作流处理任务；</li>
<li> EditMediaTask：视频编辑任务；</li>
<li> LiveProcessTask：直播处理任务。</li>
                     * @param _taskType 任务类型，包含：
<li> WorkflowTask：工作流处理任务；</li>
<li> EditMediaTask：视频编辑任务；</li>
<li> LiveProcessTask：直播处理任务。</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return CreateTime 任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _createTime 任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未开始，该字段为：0000-00-00T00:00:00Z。
                     * @return BeginProcessTime 任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未开始，该字段为：0000-00-00T00:00:00Z。
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未开始，该字段为：0000-00-00T00:00:00Z。
                     * @param _beginProcessTime 任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未开始，该字段为：0000-00-00T00:00:00Z。
                     * 
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未完成，该字段为：0000-00-00T00:00:00Z。
                     * @return FinishTime 任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未完成，该字段为：0000-00-00T00:00:00Z。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未完成，该字段为：0000-00-00T00:00:00Z。
                     * @param _finishTime 任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未完成，该字段为：0000-00-00T00:00:00Z。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取子任务类型。
                     * @return SubTaskTypes 子任务类型。
                     * 
                     */
                    std::vector<std::string> GetSubTaskTypes() const;

                    /**
                     * 设置子任务类型。
                     * @param _subTaskTypes 子任务类型。
                     * 
                     */
                    void SetSubTaskTypes(const std::vector<std::string>& _subTaskTypes);

                    /**
                     * 判断参数 SubTaskTypes 是否已赋值
                     * @return SubTaskTypes 是否已赋值
                     * 
                     */
                    bool SubTaskTypesHasBeenSet() const;

                private:

                    /**
                     * 任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务类型，包含：
<li> WorkflowTask：工作流处理任务；</li>
<li> EditMediaTask：视频编辑任务；</li>
<li> LiveProcessTask：直播处理任务。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始执行时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未开始，该字段为：0000-00-00T00:00:00Z。
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 任务结束时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。若任务尚未完成，该字段为：0000-00-00T00:00:00Z。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 子任务类型。
                     */
                    std::vector<std::string> m_subTaskTypes;
                    bool m_subTaskTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKSIMPLEINFO_H_
