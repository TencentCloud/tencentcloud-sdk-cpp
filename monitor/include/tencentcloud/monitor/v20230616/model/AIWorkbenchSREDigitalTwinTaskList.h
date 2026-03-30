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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINTASKLIST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINTASKLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/AIWorkbenchSREDigitalTwinTask.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * AI工作台SRE数字分身任务列表
                */
                class AIWorkbenchSREDigitalTwinTaskList : public AbstractModel
                {
                public:
                    AIWorkbenchSREDigitalTwinTaskList();
                    ~AIWorkbenchSREDigitalTwinTaskList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务列表
                     * @return Tasks 任务列表
                     * 
                     */
                    std::vector<AIWorkbenchSREDigitalTwinTask> GetTasks() const;

                    /**
                     * 设置任务列表
                     * @param _tasks 任务列表
                     * 
                     */
                    void SetTasks(const std::vector<AIWorkbenchSREDigitalTwinTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取任务总数
                     * @return Total 任务总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置任务总数
                     * @param _total 任务总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 任务列表
                     */
                    std::vector<AIWorkbenchSREDigitalTwinTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 任务总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINTASKLIST_H_
