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

#ifndef TENCENTCLOUD_CII_V20201210_MODEL_DESCRIBESTRUCTURETASKRESULTREQUEST_H_
#define TENCENTCLOUD_CII_V20201210_MODEL_DESCRIBESTRUCTURETASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20201210
        {
            namespace Model
            {
                /**
                * DescribeStructureTaskResult请求参数结构体
                */
                class DescribeStructureTaskResultRequest : public AbstractModel
                {
                public:
                    DescribeStructureTaskResultRequest();
                    ~DescribeStructureTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取结构化任务ID
                     * @return TaskId 结构化任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置结构化任务ID
                     * @param _taskId 结构化任务ID
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
                     * 结构化任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20201210_MODEL_DESCRIBESTRUCTURETASKRESULTREQUEST_H_
