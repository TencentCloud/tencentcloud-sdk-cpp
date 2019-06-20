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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFICATIONRESULT_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFICATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * 文本分类结果
                */
                class ClassificationResult : public AbstractModel
                {
                public:
                    ClassificationResult();
                    ~ClassificationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一级分类名称
                     * @return FirstClassName 一级分类名称
                     */
                    std::string GetFirstClassName() const;

                    /**
                     * 设置一级分类名称
                     * @param FirstClassName 一级分类名称
                     */
                    void SetFirstClassName(const std::string& _firstClassName);

                    /**
                     * 判断参数 FirstClassName 是否已赋值
                     * @return FirstClassName 是否已赋值
                     */
                    bool FirstClassNameHasBeenSet() const;

                    /**
                     * 获取一级分类概率
                     * @return FirstClassProbability 一级分类概率
                     */
                    double GetFirstClassProbability() const;

                    /**
                     * 设置一级分类概率
                     * @param FirstClassProbability 一级分类概率
                     */
                    void SetFirstClassProbability(const double& _firstClassProbability);

                    /**
                     * 判断参数 FirstClassProbability 是否已赋值
                     * @return FirstClassProbability 是否已赋值
                     */
                    bool FirstClassProbabilityHasBeenSet() const;

                    /**
                     * 获取二级分类名称
                     * @return SecondClassName 二级分类名称
                     */
                    std::string GetSecondClassName() const;

                    /**
                     * 设置二级分类名称
                     * @param SecondClassName 二级分类名称
                     */
                    void SetSecondClassName(const std::string& _secondClassName);

                    /**
                     * 判断参数 SecondClassName 是否已赋值
                     * @return SecondClassName 是否已赋值
                     */
                    bool SecondClassNameHasBeenSet() const;

                    /**
                     * 获取二级分类概率
                     * @return SecondClassProbability 二级分类概率
                     */
                    double GetSecondClassProbability() const;

                    /**
                     * 设置二级分类概率
                     * @param SecondClassProbability 二级分类概率
                     */
                    void SetSecondClassProbability(const double& _secondClassProbability);

                    /**
                     * 判断参数 SecondClassProbability 是否已赋值
                     * @return SecondClassProbability 是否已赋值
                     */
                    bool SecondClassProbabilityHasBeenSet() const;

                private:

                    /**
                     * 一级分类名称
                     */
                    std::string m_firstClassName;
                    bool m_firstClassNameHasBeenSet;

                    /**
                     * 一级分类概率
                     */
                    double m_firstClassProbability;
                    bool m_firstClassProbabilityHasBeenSet;

                    /**
                     * 二级分类名称
                     */
                    std::string m_secondClassName;
                    bool m_secondClassNameHasBeenSet;

                    /**
                     * 二级分类概率
                     */
                    double m_secondClassProbability;
                    bool m_secondClassProbabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFICATIONRESULT_H_
