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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GETTASKSTATEREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GETTASKSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GetTaskState请求参数结构体
                */
                class GetTaskStateRequest : public AbstractModel
                {
                public:
                    GetTaskStateRequest();
                    ~GetTaskStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取智慧表单任务唯一身份ID
                     * @return TaskId 智慧表单任务唯一身份ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置智慧表单任务唯一身份ID
                     * @param TaskId 智慧表单任务唯一身份ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 智慧表单任务唯一身份ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GETTASKSTATEREQUEST_H_
