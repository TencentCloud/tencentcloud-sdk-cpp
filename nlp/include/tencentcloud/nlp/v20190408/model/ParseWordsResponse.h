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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_PARSEWORDSRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_PARSEWORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/BasicParticiple.h>
#include <tencentcloud/nlp/v20190408/model/CompoundParticiple.h>
#include <tencentcloud/nlp/v20190408/model/Entity.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * ParseWords返回参数结构体
                */
                class ParseWordsResponse : public AbstractModel
                {
                public:
                    ParseWordsResponse();
                    ~ParseWordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取输入文本正则化的结果。（包括对英文文本中的开头和实体进行大写等）
                     * @return NormalText 输入文本正则化的结果。（包括对英文文本中的开头和实体进行大写等）
                     * 
                     */
                    std::string GetNormalText() const;

                    /**
                     * 判断参数 NormalText 是否已赋值
                     * @return NormalText 是否已赋值
                     * 
                     */
                    bool NormalTextHasBeenSet() const;

                    /**
                     * 获取基础粒度分词和词性标注的结果。（请参见附录[词性表](https://cloud.tencent.com/document/product/271/36460)）
                     * @return BasicParticiples 基础粒度分词和词性标注的结果。（请参见附录[词性表](https://cloud.tencent.com/document/product/271/36460)）
                     * 
                     */
                    std::vector<BasicParticiple> GetBasicParticiples() const;

                    /**
                     * 判断参数 BasicParticiples 是否已赋值
                     * @return BasicParticiples 是否已赋值
                     * 
                     */
                    bool BasicParticiplesHasBeenSet() const;

                    /**
                     * 获取复合粒度分词和词性标注的结果。（请参见附录[词性表](https://cloud.tencent.com/document/product/271/36460)）
                     * @return CompoundParticiples 复合粒度分词和词性标注的结果。（请参见附录[词性表](https://cloud.tencent.com/document/product/271/36460)）
                     * 
                     */
                    std::vector<CompoundParticiple> GetCompoundParticiples() const;

                    /**
                     * 判断参数 CompoundParticiples 是否已赋值
                     * @return CompoundParticiples 是否已赋值
                     * 
                     */
                    bool CompoundParticiplesHasBeenSet() const;

                    /**
                     * 获取实体识别结果。（请参见附录[实体类型数据](https://cloud.tencent.com/document/product/271/90592)）

                     * @return Entities 实体识别结果。（请参见附录[实体类型数据](https://cloud.tencent.com/document/product/271/90592)）

                     * 
                     */
                    std::vector<Entity> GetEntities() const;

                    /**
                     * 判断参数 Entities 是否已赋值
                     * @return Entities 是否已赋值
                     * 
                     */
                    bool EntitiesHasBeenSet() const;

                private:

                    /**
                     * 输入文本正则化的结果。（包括对英文文本中的开头和实体进行大写等）
                     */
                    std::string m_normalText;
                    bool m_normalTextHasBeenSet;

                    /**
                     * 基础粒度分词和词性标注的结果。（请参见附录[词性表](https://cloud.tencent.com/document/product/271/36460)）
                     */
                    std::vector<BasicParticiple> m_basicParticiples;
                    bool m_basicParticiplesHasBeenSet;

                    /**
                     * 复合粒度分词和词性标注的结果。（请参见附录[词性表](https://cloud.tencent.com/document/product/271/36460)）
                     */
                    std::vector<CompoundParticiple> m_compoundParticiples;
                    bool m_compoundParticiplesHasBeenSet;

                    /**
                     * 实体识别结果。（请参见附录[实体类型数据](https://cloud.tencent.com/document/product/271/90592)）

                     */
                    std::vector<Entity> m_entities;
                    bool m_entitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_PARSEWORDSRESPONSE_H_
