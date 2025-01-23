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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONOCRRESPONSE_H_

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
                * QuestionOCR返回参数结构体
                */
                class QuestionOCRResponse : public AbstractModel
                {
                public:
                    QuestionOCRResponse();
                    ~QuestionOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测到的文本信息
                     * @return QuestionInfo 检测到的文本信息
                     * 
                     */
                    std::vector<QuestionInfo> GetQuestionInfo() const;

                    /**
                     * 判断参数 QuestionInfo 是否已赋值
                     * @return QuestionInfo 是否已赋值
                     * 
                     */
                    bool QuestionInfoHasBeenSet() const;

                private:

                    /**
                     * 检测到的文本信息
                     */
                    std::vector<QuestionInfo> m_questionInfo;
                    bool m_questionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONOCRRESPONSE_H_
