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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBETASKSRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/ProbeTask.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeProbeTasks返回参数结构体
                */
                class DescribeProbeTasksResponse : public AbstractModel
                {
                public:
                    DescribeProbeTasksResponse();
                    ~DescribeProbeTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskSet 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProbeTask> GetTaskSet() const;

                    /**
                     * 判断参数 TaskSet 是否已赋值
                     * @return TaskSet 是否已赋值
                     * 
                     */
                    bool TaskSetHasBeenSet() const;

                    /**
                     * 获取任务总数
                     * @return Total 任务总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProbeTask> m_taskSet;
                    bool m_taskSetHasBeenSet;

                    /**
                     * 任务总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBETASKSRESPONSE_H_
