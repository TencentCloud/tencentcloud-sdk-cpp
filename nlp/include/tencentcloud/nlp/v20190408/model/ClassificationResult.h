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
                     * 获取一级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstClassProbability 一级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetFirstClassProbability() const;

                    /**
                     * 设置一级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FirstClassProbability 一级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirstClassProbability(const double& _firstClassProbability);

                    /**
                     * 判断参数 FirstClassProbability 是否已赋值
                     * @return FirstClassProbability 是否已赋值
                     */
                    bool FirstClassProbabilityHasBeenSet() const;

                    /**
                     * 获取二级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondClassProbability 二级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetSecondClassProbability() const;

                    /**
                     * 设置二级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecondClassProbability 二级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecondClassProbability(const double& _secondClassProbability);

                    /**
                     * 判断参数 SecondClassProbability 是否已赋值
                     * @return SecondClassProbability 是否已赋值
                     */
                    bool SecondClassProbabilityHasBeenSet() const;

                    /**
                     * 获取三级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdClassName 三级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetThirdClassName() const;

                    /**
                     * 设置三级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ThirdClassName 三级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetThirdClassName(const std::string& _thirdClassName);

                    /**
                     * 判断参数 ThirdClassName 是否已赋值
                     * @return ThirdClassName 是否已赋值
                     */
                    bool ThirdClassNameHasBeenSet() const;

                    /**
                     * 获取三级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdClassProbability 三级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetThirdClassProbability() const;

                    /**
                     * 设置三级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ThirdClassProbability 三级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetThirdClassProbability(const double& _thirdClassProbability);

                    /**
                     * 判断参数 ThirdClassProbability 是否已赋值
                     * @return ThirdClassProbability 是否已赋值
                     */
                    bool ThirdClassProbabilityHasBeenSet() const;

                    /**
                     * 获取四级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FourthClassName 四级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFourthClassName() const;

                    /**
                     * 设置四级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FourthClassName 四级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFourthClassName(const std::string& _fourthClassName);

                    /**
                     * 判断参数 FourthClassName 是否已赋值
                     * @return FourthClassName 是否已赋值
                     */
                    bool FourthClassNameHasBeenSet() const;

                    /**
                     * 获取四级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FourthClassProbability 四级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetFourthClassProbability() const;

                    /**
                     * 设置四级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FourthClassProbability 四级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFourthClassProbability(const double& _fourthClassProbability);

                    /**
                     * 判断参数 FourthClassProbability 是否已赋值
                     * @return FourthClassProbability 是否已赋值
                     */
                    bool FourthClassProbabilityHasBeenSet() const;

                    /**
                     * 获取五级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FifthClassName 五级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFifthClassName() const;

                    /**
                     * 设置五级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FifthClassName 五级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFifthClassName(const std::string& _fifthClassName);

                    /**
                     * 判断参数 FifthClassName 是否已赋值
                     * @return FifthClassName 是否已赋值
                     */
                    bool FifthClassNameHasBeenSet() const;

                    /**
                     * 获取五级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FifthClassProbability 五级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetFifthClassProbability() const;

                    /**
                     * 设置五级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FifthClassProbability 五级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFifthClassProbability(const double& _fifthClassProbability);

                    /**
                     * 判断参数 FifthClassProbability 是否已赋值
                     * @return FifthClassProbability 是否已赋值
                     */
                    bool FifthClassProbabilityHasBeenSet() const;

                private:

                    /**
                     * 一级分类名称
                     */
                    std::string m_firstClassName;
                    bool m_firstClassNameHasBeenSet;

                    /**
                     * 二级分类名称
                     */
                    std::string m_secondClassName;
                    bool m_secondClassNameHasBeenSet;

                    /**
                     * 一级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_firstClassProbability;
                    bool m_firstClassProbabilityHasBeenSet;

                    /**
                     * 二级分类概率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_secondClassProbability;
                    bool m_secondClassProbabilityHasBeenSet;

                    /**
                     * 三级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_thirdClassName;
                    bool m_thirdClassNameHasBeenSet;

                    /**
                     * 三级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_thirdClassProbability;
                    bool m_thirdClassProbabilityHasBeenSet;

                    /**
                     * 四级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fourthClassName;
                    bool m_fourthClassNameHasBeenSet;

                    /**
                     * 四级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fourthClassProbability;
                    bool m_fourthClassProbabilityHasBeenSet;

                    /**
                     * 五级分类名称，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fifthClassName;
                    bool m_fifthClassNameHasBeenSet;

                    /**
                     * 五级分类概率，仅有当新闻领域五分类可能出现，详情见文本分类文档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fifthClassProbability;
                    bool m_fifthClassProbabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFICATIONRESULT_H_
