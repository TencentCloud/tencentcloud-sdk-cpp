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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAGEDETECTTASKRESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAGEDETECTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/AgeDetectTaskResult.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeAgeDetectTask返回参数结构体
                */
                class DescribeAgeDetectTaskResponse : public AbstractModel
                {
                public:
                    DescribeAgeDetectTaskResponse();
                    ~DescribeAgeDetectTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取语音检测返回。Results 字段是 JSON 数组，每一个元素包含：
DataId： 请求中对应的 DataId。
Url ：该请求中对应的 Url。
Status ：子任务状态，0:已创建，1:运行中，2:已完成，3:任务异常，4:任务超时。
Age ：子任务完成后的结果，0:成年人，1:未成年人，100:未知结果。
                     * @return Results 语音检测返回。Results 字段是 JSON 数组，每一个元素包含：
DataId： 请求中对应的 DataId。
Url ：该请求中对应的 Url。
Status ：子任务状态，0:已创建，1:运行中，2:已完成，3:任务异常，4:任务超时。
Age ：子任务完成后的结果，0:成年人，1:未成年人，100:未知结果。
                     * 
                     */
                    std::vector<AgeDetectTaskResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 语音检测返回。Results 字段是 JSON 数组，每一个元素包含：
DataId： 请求中对应的 DataId。
Url ：该请求中对应的 Url。
Status ：子任务状态，0:已创建，1:运行中，2:已完成，3:任务异常，4:任务超时。
Age ：子任务完成后的结果，0:成年人，1:未成年人，100:未知结果。
                     */
                    std::vector<AgeDetectTaskResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAGEDETECTTASKRESPONSE_H_
