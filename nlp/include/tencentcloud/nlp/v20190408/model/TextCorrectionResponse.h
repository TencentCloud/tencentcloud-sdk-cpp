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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTCORRECTIONRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTCORRECTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/CCIToken.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextCorrection返回参数结构体
                */
                class TextCorrectionResponse : public AbstractModel
                {
                public:
                    TextCorrectionResponse();
                    ~TextCorrectionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取纠错详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CCITokens 纠错详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CCIToken> GetCCITokens() const;

                    /**
                     * 判断参数 CCITokens 是否已赋值
                     * @return CCITokens 是否已赋值
                     */
                    bool CCITokensHasBeenSet() const;

                    /**
                     * 获取纠错后的文本
                     * @return ResultText 纠错后的文本
                     */
                    std::string GetResultText() const;

                    /**
                     * 判断参数 ResultText 是否已赋值
                     * @return ResultText 是否已赋值
                     */
                    bool ResultTextHasBeenSet() const;

                private:

                    /**
                     * 纠错详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CCIToken> m_cCITokens;
                    bool m_cCITokensHasBeenSet;

                    /**
                     * 纠错后的文本
                     */
                    std::string m_resultText;
                    bool m_resultTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTCORRECTIONRESPONSE_H_
