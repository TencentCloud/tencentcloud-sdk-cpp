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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_CLOSEASYNCRECOGNITIONTASKREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_CLOSEASYNCRECOGNITIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * CloseAsyncRecognitionTask请求参数结构体
                */
                class CloseAsyncRecognitionTaskRequest : public AbstractModel
                {
                public:
                    CloseAsyncRecognitionTaskRequest();
                    ~CloseAsyncRecognitionTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取语音流异步识别任务的唯一标识，在创建任务时会返回
                     * @return TaskId 语音流异步识别任务的唯一标识，在创建任务时会返回
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置语音流异步识别任务的唯一标识，在创建任务时会返回
                     * @param _taskId 语音流异步识别任务的唯一标识，在创建任务时会返回
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 语音流异步识别任务的唯一标识，在创建任务时会返回
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CLOSEASYNCRECOGNITIONTASKREQUEST_H_
