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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_RESOURCETASKSTATUSRESULT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_RESOURCETASKSTATUSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 资源任务转态结果
                */
                class ResourceTaskStatusResult : public AbstractModel
                {
                public:
                    ResourceTaskStatusResult();
                    ~ResourceTaskStatusResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务的执行状态
                     * @return TaskStatus 任务的执行状态
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置任务的执行状态
                     * @param _taskStatus 任务的执行状态
                     * 
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 任务的执行状态
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_RESOURCETASKSTATUSRESULT_H_
