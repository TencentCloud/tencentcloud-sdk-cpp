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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBETASKRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/TaskInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeTask返回参数结构体
                */
                class DescribeTaskResponse : public AbstractModel
                {
                public:
                    DescribeTaskResponse();
                    ~DescribeTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务信息，详情参见TaskInfo的定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInfo 任务信息，详情参见TaskInfo的定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskInfo GetTaskInfo() const;

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                private:

                    /**
                     * 任务信息，详情参见TaskInfo的定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskInfo m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBETASKRESPONSE_H_
