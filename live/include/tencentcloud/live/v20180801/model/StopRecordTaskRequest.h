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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_STOPRECORDTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_STOPRECORDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * StopRecordTask请求参数结构体
                */
                class StopRecordTaskRequest : public AbstractModel
                {
                public:
                    StopRecordTaskRequest();
                    ~StopRecordTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取录制任务ID。
                     * @return TaskId 录制任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置录制任务ID。
                     * @param _taskId 录制任务ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 录制任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_STOPRECORDTASKREQUEST_H_
