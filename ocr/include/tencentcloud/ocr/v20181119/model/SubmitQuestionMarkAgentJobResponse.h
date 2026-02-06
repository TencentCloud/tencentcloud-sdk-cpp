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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONMARKAGENTJOBRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONMARKAGENTJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/QuestionInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * SubmitQuestionMarkAgentJob返回参数结构体
                */
                class SubmitQuestionMarkAgentJobResponse : public AbstractModel
                {
                public:
                    SubmitQuestionMarkAgentJobResponse();
                    ~SubmitQuestionMarkAgentJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务唯一ID。由服务端生成.
                     * @return JobId 任务唯一ID。由服务端生成.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取切题题目边框坐标列表 （如果BoolSingleQuestion为true则返回空）
                     * @return QuestionInfo 切题题目边框坐标列表 （如果BoolSingleQuestion为true则返回空）
                     * 
                     */
                    std::vector<QuestionInfo> GetQuestionInfo() const;

                    /**
                     * 判断参数 QuestionInfo 是否已赋值
                     * @return QuestionInfo 是否已赋值
                     * 
                     */
                    bool QuestionInfoHasBeenSet() const;

                    /**
                     * 获取题目切题数量，作为计费题目数总量
                     * @return QuestionCount 题目切题数量，作为计费题目数总量
                     * 
                     */
                    std::string GetQuestionCount() const;

                    /**
                     * 判断参数 QuestionCount 是否已赋值
                     * @return QuestionCount 是否已赋值
                     * 
                     */
                    bool QuestionCountHasBeenSet() const;

                private:

                    /**
                     * 任务唯一ID。由服务端生成.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 切题题目边框坐标列表 （如果BoolSingleQuestion为true则返回空）
                     */
                    std::vector<QuestionInfo> m_questionInfo;
                    bool m_questionInfoHasBeenSet;

                    /**
                     * 题目切题数量，作为计费题目数总量
                     */
                    std::string m_questionCount;
                    bool m_questionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONMARKAGENTJOBRESPONSE_H_
