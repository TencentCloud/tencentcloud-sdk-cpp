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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_CREATECLOUDRECORDINGRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_CREATECLOUDRECORDINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * CreateCloudRecording返回参数结构体
                */
                class CreateCloudRecordingResponse : public AbstractModel
                {
                public:
                    CreateCloudRecordingResponse();
                    ~CreateCloudRecordingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云录制服务分配的任务 ID。任务 ID 是对一次录制生命周期过程的唯一标识，结束录制时会失去意义。任务 ID需要业务保存下来，作为下次针对这个录制任务操作的参数。
                     * @return TaskId 云录制服务分配的任务 ID。任务 ID 是对一次录制生命周期过程的唯一标识，结束录制时会失去意义。任务 ID需要业务保存下来，作为下次针对这个录制任务操作的参数。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 云录制服务分配的任务 ID。任务 ID 是对一次录制生命周期过程的唯一标识，结束录制时会失去意义。任务 ID需要业务保存下来，作为下次针对这个录制任务操作的参数。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_CREATECLOUDRECORDINGRESPONSE_H_
