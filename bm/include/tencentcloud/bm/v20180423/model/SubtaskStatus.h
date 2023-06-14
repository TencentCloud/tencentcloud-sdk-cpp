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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_SUBTASKSTATUS_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_SUBTASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 各实例对应的异步任务执行结果
                */
                class SubtaskStatus : public AbstractModel
                {
                public:
                    SubtaskStatus();
                    ~SubtaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例ID对应任务的状态，取值如下：<br>
1：成功<br>
2：失败<br>
3：部分成功，部分失败<br>
4：未完成<br>
5：部分成功，部分未完成<br>
6：部分未完成，部分失败<br>
7：部分未完成，部分失败，部分成功
                     * @return TaskStatus 实例ID对应任务的状态，取值如下：<br>
1：成功<br>
2：失败<br>
3：部分成功，部分失败<br>
4：未完成<br>
5：部分成功，部分未完成<br>
6：部分未完成，部分失败<br>
7：部分未完成，部分失败，部分成功
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置实例ID对应任务的状态，取值如下：<br>
1：成功<br>
2：失败<br>
3：部分成功，部分失败<br>
4：未完成<br>
5：部分成功，部分未完成<br>
6：部分未完成，部分失败<br>
7：部分未完成，部分失败，部分成功
                     * @param _taskStatus 实例ID对应任务的状态，取值如下：<br>
1：成功<br>
2：失败<br>
3：部分成功，部分失败<br>
4：未完成<br>
5：部分成功，部分未完成<br>
6：部分未完成，部分失败<br>
7：部分未完成，部分失败，部分成功
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
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例ID对应任务的状态，取值如下：<br>
1：成功<br>
2：失败<br>
3：部分成功，部分失败<br>
4：未完成<br>
5：部分成功，部分未完成<br>
6：部分未完成，部分失败<br>
7：部分未完成，部分失败，部分成功
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_SUBTASKSTATUS_H_
