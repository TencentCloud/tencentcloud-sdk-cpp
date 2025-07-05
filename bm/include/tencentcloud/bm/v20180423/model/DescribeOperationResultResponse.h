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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEOPERATIONRESULTRESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEOPERATIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/SubtaskStatus.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeOperationResult返回参数结构体
                */
                class DescribeOperationResultResponse : public AbstractModel
                {
                public:
                    DescribeOperationResultResponse();
                    ~DescribeOperationResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务的整体状态，取值如下：<br>
1：成功<br>
2：失败<br>
3：部分成功，部分失败<br>
4：未完成<br>
5：部分成功，部分未完成<br>
6：部分未完成，部分失败<br>
7：部分未完成，部分失败，部分成功
                     * @return TaskStatus 任务的整体状态，取值如下：<br>
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
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取各实例对应任务的状态ID
                     * @return SubtaskStatusSet 各实例对应任务的状态ID
                     * 
                     */
                    std::vector<SubtaskStatus> GetSubtaskStatusSet() const;

                    /**
                     * 判断参数 SubtaskStatusSet 是否已赋值
                     * @return SubtaskStatusSet 是否已赋值
                     * 
                     */
                    bool SubtaskStatusSetHasBeenSet() const;

                private:

                    /**
                     * 任务的整体状态，取值如下：<br>
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

                    /**
                     * 各实例对应任务的状态ID
                     */
                    std::vector<SubtaskStatus> m_subtaskStatusSet;
                    bool m_subtaskStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEOPERATIONRESULTRESPONSE_H_
