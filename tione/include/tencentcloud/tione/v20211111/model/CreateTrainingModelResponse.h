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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGMODELRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGMODELRESPONSE_H_

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
                * CreateTrainingModel返回参数结构体
                */
                class CreateTrainingModelResponse : public AbstractModel
                {
                public:
                    CreateTrainingModelResponse();
                    ~CreateTrainingModelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模型ID，TrainingModel ID
                     * @return Id 模型ID，TrainingModel ID
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取模型版本ID
                     * @return TrainingModelVersionId 模型版本ID
                     */
                    std::string GetTrainingModelVersionId() const;

                    /**
                     * 判断参数 TrainingModelVersionId 是否已赋值
                     * @return TrainingModelVersionId 是否已赋值
                     */
                    bool TrainingModelVersionIdHasBeenSet() const;

                private:

                    /**
                     * 模型ID，TrainingModel ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 模型版本ID
                     */
                    std::string m_trainingModelVersionId;
                    bool m_trainingModelVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATETRAININGMODELRESPONSE_H_
