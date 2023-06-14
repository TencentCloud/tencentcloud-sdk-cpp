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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_AIASSISTANTRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_AIASSISTANTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/ImageTaskResult.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * AIAssistant返回参数结构体
                */
                class AIAssistantResponse : public AbstractModel
                {
                public:
                    AIAssistantResponse();
                    ~AIAssistantResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图像任务直接返回结果
                     * @return ImageResults 图像任务直接返回结果
                     * 
                     */
                    std::vector<ImageTaskResult> GetImageResults() const;

                    /**
                     * 判断参数 ImageResults 是否已赋值
                     * @return ImageResults 是否已赋值
                     * 
                     */
                    bool ImageResultsHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 图像任务直接返回结果
                     */
                    std::vector<ImageTaskResult> m_imageResults;
                    bool m_imageResultsHasBeenSet;

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_AIASSISTANTRESPONSE_H_
