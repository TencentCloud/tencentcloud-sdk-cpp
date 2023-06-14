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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCECORRECTIONRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCECORRECTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/CorrectionItem.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * SentenceCorrection返回参数结构体
                */
                class SentenceCorrectionResponse : public AbstractModel
                {
                public:
                    SentenceCorrectionResponse();
                    ~SentenceCorrectionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取纠错结果列表。
（注意仅展示错误句子的纠错结果，若句子无错则不展示，若全部待纠错句子都被认为无错，则可能返回数组为空）
                     * @return CorrectionList 纠错结果列表。
（注意仅展示错误句子的纠错结果，若句子无错则不展示，若全部待纠错句子都被认为无错，则可能返回数组为空）
                     * 
                     */
                    std::vector<CorrectionItem> GetCorrectionList() const;

                    /**
                     * 判断参数 CorrectionList 是否已赋值
                     * @return CorrectionList 是否已赋值
                     * 
                     */
                    bool CorrectionListHasBeenSet() const;

                private:

                    /**
                     * 纠错结果列表。
（注意仅展示错误句子的纠错结果，若句子无错则不展示，若全部待纠错句子都被认为无错，则可能返回数组为空）
                     */
                    std::vector<CorrectionItem> m_correctionList;
                    bool m_correctionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SENTENCECORRECTIONRESPONSE_H_
