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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGTASKSRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/TrainingTaskSetItem.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeTrainingTasks返回参数结构体
                */
                class DescribeTrainingTasksResponse : public AbstractModel
                {
                public:
                    DescribeTrainingTasksResponse();
                    ~DescribeTrainingTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取训练任务集
                     * @return TrainingTaskSet 训练任务集
                     */
                    std::vector<TrainingTaskSetItem> GetTrainingTaskSet() const;

                    /**
                     * 判断参数 TrainingTaskSet 是否已赋值
                     * @return TrainingTaskSet 是否已赋值
                     */
                    bool TrainingTaskSetHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return TotalCount 数量
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 训练任务集
                     */
                    std::vector<TrainingTaskSetItem> m_trainingTaskSet;
                    bool m_trainingTaskSetHasBeenSet;

                    /**
                     * 数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGTASKSRESPONSE_H_
