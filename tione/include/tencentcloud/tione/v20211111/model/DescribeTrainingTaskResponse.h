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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGTASKRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/TrainingTaskDetail.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeTrainingTask返回参数结构体
                */
                class DescribeTrainingTaskResponse : public AbstractModel
                {
                public:
                    DescribeTrainingTaskResponse();
                    ~DescribeTrainingTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取训练任务详情
                     * @return TrainingTaskDetail 训练任务详情
                     * 
                     */
                    TrainingTaskDetail GetTrainingTaskDetail() const;

                    /**
                     * 判断参数 TrainingTaskDetail 是否已赋值
                     * @return TrainingTaskDetail 是否已赋值
                     * 
                     */
                    bool TrainingTaskDetailHasBeenSet() const;

                private:

                    /**
                     * 训练任务详情
                     */
                    TrainingTaskDetail m_trainingTaskDetail;
                    bool m_trainingTaskDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGTASKRESPONSE_H_
