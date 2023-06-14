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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_STOPTRAININGJOBREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_STOPTRAININGJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * StopTrainingJob请求参数结构体
                */
                class StopTrainingJobRequest : public AbstractModel
                {
                public:
                    StopTrainingJobRequest();
                    ~StopTrainingJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取训练任务名称
                     * @return TrainingJobName 训练任务名称
                     * 
                     */
                    std::string GetTrainingJobName() const;

                    /**
                     * 设置训练任务名称
                     * @param _trainingJobName 训练任务名称
                     * 
                     */
                    void SetTrainingJobName(const std::string& _trainingJobName);

                    /**
                     * 判断参数 TrainingJobName 是否已赋值
                     * @return TrainingJobName 是否已赋值
                     * 
                     */
                    bool TrainingJobNameHasBeenSet() const;

                private:

                    /**
                     * 训练任务名称
                     */
                    std::string m_trainingJobName;
                    bool m_trainingJobNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_STOPTRAININGJOBREQUEST_H_
