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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGMODELVERSIONREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGMODELVERSIONREQUEST_H_

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
                * DescribeTrainingModelVersion请求参数结构体
                */
                class DescribeTrainingModelVersionRequest : public AbstractModel
                {
                public:
                    DescribeTrainingModelVersionRequest();
                    ~DescribeTrainingModelVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型版本ID
                     * @return TrainingModelVersionId 模型版本ID
                     * 
                     */
                    std::string GetTrainingModelVersionId() const;

                    /**
                     * 设置模型版本ID
                     * @param _trainingModelVersionId 模型版本ID
                     * 
                     */
                    void SetTrainingModelVersionId(const std::string& _trainingModelVersionId);

                    /**
                     * 判断参数 TrainingModelVersionId 是否已赋值
                     * @return TrainingModelVersionId 是否已赋值
                     * 
                     */
                    bool TrainingModelVersionIdHasBeenSet() const;

                private:

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

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGMODELVERSIONREQUEST_H_
