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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBETASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBETASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeTaskStatus返回参数结构体
                */
                class DescribeTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeTaskStatusResponse();
                    ~DescribeTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取任务结果
                     * @return TaskResult 任务结果
                     */
                    std::string GetTaskResult() const;

                    /**
                     * 判断参数 TaskResult 是否已赋值
                     * @return TaskResult 是否已赋值
                     */
                    bool TaskResultHasBeenSet() const;

                    /**
                     * 获取<p>任务类型：</p><ul style="margin-bottom:0px;"><li>报告下载：001</li><li>催收数据上传：002</li><li>还款数据上传：003</li><li>回访数据上传：004</li></ul>
                     * @return TaskType <p>任务类型：</p><ul style="margin-bottom:0px;"><li>报告下载：001</li><li>催收数据上传：002</li><li>还款数据上传：003</li><li>回访数据上传：004</li></ul>
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 任务结果
                     */
                    std::string m_taskResult;
                    bool m_taskResultHasBeenSet;

                    /**
                     * <p>任务类型：</p><ul style="margin-bottom:0px;"><li>报告下载：001</li><li>催收数据上传：002</li><li>还款数据上传：003</li><li>回访数据上传：004</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBETASKSTATUSRESPONSE_H_
