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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GETTASKSTATERESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GETTASKSTATERESPONSE_H_

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
                * GetTaskState返回参数结构体
                */
                class GetTaskStateResponse : public AbstractModel
                {
                public:
                    GetTaskStateResponse();
                    ~GetTaskStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取1:任务识别完成，还未提交
2:任务已手动关闭
3:任务已提交
4:任务识别中
5:超时：任务超过了可操作的24H时限
6:任务识别失败
                     * @return TaskState 1:任务识别完成，还未提交
2:任务已手动关闭
3:任务已提交
4:任务识别中
5:超时：任务超过了可操作的24H时限
6:任务识别失败
                     * 
                     */
                    uint64_t GetTaskState() const;

                    /**
                     * 判断参数 TaskState 是否已赋值
                     * @return TaskState 是否已赋值
                     * 
                     */
                    bool TaskStateHasBeenSet() const;

                private:

                    /**
                     * 1:任务识别完成，还未提交
2:任务已手动关闭
3:任务已提交
4:任务识别中
5:超时：任务超过了可操作的24H时限
6:任务识别失败
                     */
                    uint64_t m_taskState;
                    bool m_taskStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GETTASKSTATERESPONSE_H_
