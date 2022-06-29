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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DELETETRAININGMODELREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DELETETRAININGMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DeleteTrainingModel请求参数结构体
                */
                class DeleteTrainingModelRequest : public AbstractModel
                {
                public:
                    DeleteTrainingModelRequest();
                    ~DeleteTrainingModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型ID
                     * @return TrainingModelId 模型ID
                     */
                    std::string GetTrainingModelId() const;

                    /**
                     * 设置模型ID
                     * @param TrainingModelId 模型ID
                     */
                    void SetTrainingModelId(const std::string& _trainingModelId);

                    /**
                     * 判断参数 TrainingModelId 是否已赋值
                     * @return TrainingModelId 是否已赋值
                     */
                    bool TrainingModelIdHasBeenSet() const;

                private:

                    /**
                     * 模型ID
                     */
                    std::string m_trainingModelId;
                    bool m_trainingModelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DELETETRAININGMODELREQUEST_H_
