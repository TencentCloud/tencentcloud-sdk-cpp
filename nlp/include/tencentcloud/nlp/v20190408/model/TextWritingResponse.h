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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTWRITINGRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTWRITINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/Writing.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextWriting返回参数结构体
                */
                class TextWritingResponse : public AbstractModel
                {
                public:
                    TextWritingResponse();
                    ~TextWritingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取续写结果列表。
                     * @return WritingList 续写结果列表。
                     * 
                     */
                    std::vector<Writing> GetWritingList() const;

                    /**
                     * 判断参数 WritingList 是否已赋值
                     * @return WritingList 是否已赋值
                     * 
                     */
                    bool WritingListHasBeenSet() const;

                private:

                    /**
                     * 续写结果列表。
                     */
                    std::vector<Writing> m_writingList;
                    bool m_writingListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTWRITINGRESPONSE_H_
