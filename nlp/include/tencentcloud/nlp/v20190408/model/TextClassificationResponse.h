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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTCLASSIFICATIONRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTCLASSIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/ClassificationResult.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextClassification返回参数结构体
                */
                class TextClassificationResponse : public AbstractModel
                {
                public:
                    TextClassificationResponse();
                    ~TextClassificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文本分类结果（文本分类映射表请参见附录）
                     * @return Classes 文本分类结果（文本分类映射表请参见附录）
                     */
                    std::vector<ClassificationResult> GetClasses() const;

                    /**
                     * 判断参数 Classes 是否已赋值
                     * @return Classes 是否已赋值
                     */
                    bool ClassesHasBeenSet() const;

                private:

                    /**
                     * 文本分类结果（文本分类映射表请参见附录）
                     */
                    std::vector<ClassificationResult> m_classes;
                    bool m_classesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTCLASSIFICATIONRESPONSE_H_
