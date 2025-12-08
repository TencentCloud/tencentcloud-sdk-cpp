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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAiMediaTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS AI媒资任务项
                */
                class MPSAiMediaItem : public AbstractModel
                {
                public:
                    MPSAiMediaItem();
                    ~MPSAiMediaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MPS智能处理任务类型
                     * @return TaskType MPS智能处理任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置MPS智能处理任务类型
                     * @param _taskType MPS智能处理任务类型
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
                     * 获取MPS 智能媒资任务输出
                     * @return AiMediaTasks MPS 智能媒资任务输出
                     * 
                     */
                    std::vector<MPSAiMediaTask> GetAiMediaTasks() const;

                    /**
                     * 设置MPS 智能媒资任务输出
                     * @param _aiMediaTasks MPS 智能媒资任务输出
                     * 
                     */
                    void SetAiMediaTasks(const std::vector<MPSAiMediaTask>& _aiMediaTasks);

                    /**
                     * 判断参数 AiMediaTasks 是否已赋值
                     * @return AiMediaTasks 是否已赋值
                     * 
                     */
                    bool AiMediaTasksHasBeenSet() const;

                private:

                    /**
                     * MPS智能处理任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * MPS 智能媒资任务输出
                     */
                    std::vector<MPSAiMediaTask> m_aiMediaTasks;
                    bool m_aiMediaTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAITEM_H_
