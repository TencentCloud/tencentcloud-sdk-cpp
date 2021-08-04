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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_LEXICALANALYSISRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_LEXICALANALYSISRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/NerToken.h>
#include <tencentcloud/nlp/v20190408/model/PosToken.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * LexicalAnalysis返回参数结构体
                */
                class LexicalAnalysisResponse : public AbstractModel
                {
                public:
                    LexicalAnalysisResponse();
                    ~LexicalAnalysisResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取命名实体识别结果。取值范围：
<li>PER：表示人名，如刘德华、贝克汉姆</li>
<li>LOC：表示地名，如北京、华山</li>
<li>ORG：表示机构团体名，如腾讯、最高人民法院、人大附中</li>
<li>PRODUCTION：表示产品名，如QQ、微信、iPhone</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NerTokens 命名实体识别结果。取值范围：
<li>PER：表示人名，如刘德华、贝克汉姆</li>
<li>LOC：表示地名，如北京、华山</li>
<li>ORG：表示机构团体名，如腾讯、最高人民法院、人大附中</li>
<li>PRODUCTION：表示产品名，如QQ、微信、iPhone</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NerToken> GetNerTokens() const;

                    /**
                     * 判断参数 NerTokens 是否已赋值
                     * @return NerTokens 是否已赋值
                     */
                    bool NerTokensHasBeenSet() const;

                    /**
                     * 获取分词&词性标注结果（词性表请参见附录）
                     * @return PosTokens 分词&词性标注结果（词性表请参见附录）
                     */
                    std::vector<PosToken> GetPosTokens() const;

                    /**
                     * 判断参数 PosTokens 是否已赋值
                     * @return PosTokens 是否已赋值
                     */
                    bool PosTokensHasBeenSet() const;

                private:

                    /**
                     * 命名实体识别结果。取值范围：
<li>PER：表示人名，如刘德华、贝克汉姆</li>
<li>LOC：表示地名，如北京、华山</li>
<li>ORG：表示机构团体名，如腾讯、最高人民法院、人大附中</li>
<li>PRODUCTION：表示产品名，如QQ、微信、iPhone</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NerToken> m_nerTokens;
                    bool m_nerTokensHasBeenSet;

                    /**
                     * 分词&词性标注结果（词性表请参见附录）
                     */
                    std::vector<PosToken> m_posTokens;
                    bool m_posTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_LEXICALANALYSISRESPONSE_H_
