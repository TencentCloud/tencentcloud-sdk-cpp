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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_TRIGGERDIGITALTWINTASKRESP_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_TRIGGERDIGITALTWINTASKRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 触发数字分身任务响应
                */
                class TriggerDigitalTwinTaskResp : public AbstractModel
                {
                public:
                    TriggerDigitalTwinTaskResp();
                    ~TriggerDigitalTwinTaskResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数字分身任务ID
                     * @return TaskID 数字分身任务ID
                     * 
                     */
                    int64_t GetTaskID() const;

                    /**
                     * 设置数字分身任务ID
                     * @param _taskID 数字分身任务ID
                     * 
                     */
                    void SetTaskID(const int64_t& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                private:

                    /**
                     * 数字分身任务ID
                     */
                    int64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_TRIGGERDIGITALTWINTASKRESP_H_
