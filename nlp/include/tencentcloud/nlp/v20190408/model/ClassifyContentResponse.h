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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFYCONTENTRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFYCONTENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/Category.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * ClassifyContent返回参数结构体
                */
                class ClassifyContentResponse : public AbstractModel
                {
                public:
                    ClassifyContentResponse();
                    ~ClassifyContentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取一级分类。（请参见附录[三级分类体系表](https://cloud.tencent.com/document/product/271/94286)）
                     * @return FirstClassification 一级分类。（请参见附录[三级分类体系表](https://cloud.tencent.com/document/product/271/94286)）
                     * 
                     */
                    Category GetFirstClassification() const;

                    /**
                     * 判断参数 FirstClassification 是否已赋值
                     * @return FirstClassification 是否已赋值
                     * 
                     */
                    bool FirstClassificationHasBeenSet() const;

                    /**
                     * 获取二级分类。（请参见附录[三级分类体系表](https://cloud.tencent.com/document/product/271/94286)）
                     * @return SecondClassification 二级分类。（请参见附录[三级分类体系表](https://cloud.tencent.com/document/product/271/94286)）
                     * 
                     */
                    Category GetSecondClassification() const;

                    /**
                     * 判断参数 SecondClassification 是否已赋值
                     * @return SecondClassification 是否已赋值
                     * 
                     */
                    bool SecondClassificationHasBeenSet() const;

                    /**
                     * 获取三级分类。（请参见附录[三级分类体系表](https://cloud.tencent.com/document/product/271/94286)）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdClassification 三级分类。（请参见附录[三级分类体系表](https://cloud.tencent.com/document/product/271/94286)）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Category GetThirdClassification() const;

                    /**
                     * 判断参数 ThirdClassification 是否已赋值
                     * @return ThirdClassification 是否已赋值
                     * 
                     */
                    bool ThirdClassificationHasBeenSet() const;

                private:

                    /**
                     * 一级分类。（请参见附录[三级分类体系表](https://cloud.tencent.com/document/product/271/94286)）
                     */
                    Category m_firstClassification;
                    bool m_firstClassificationHasBeenSet;

                    /**
                     * 二级分类。（请参见附录[三级分类体系表](https://cloud.tencent.com/document/product/271/94286)）
                     */
                    Category m_secondClassification;
                    bool m_secondClassificationHasBeenSet;

                    /**
                     * 三级分类。（请参见附录[三级分类体系表](https://cloud.tencent.com/document/product/271/94286)）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Category m_thirdClassification;
                    bool m_thirdClassificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_CLASSIFYCONTENTRESPONSE_H_
