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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_GETASRVOCABLISTRESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_GETASRVOCABLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/Vocab.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * GetAsrVocabList返回参数结构体
                */
                class GetAsrVocabListResponse : public AbstractModel
                {
                public:
                    GetAsrVocabListResponse();
                    ~GetAsrVocabListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取热词表列表
                     * @return VocabList 热词表列表
                     * 
                     */
                    std::vector<Vocab> GetVocabList() const;

                    /**
                     * 判断参数 VocabList 是否已赋值
                     * @return VocabList 是否已赋值
                     * 
                     */
                    bool VocabListHasBeenSet() const;

                    /**
                     * 获取热词列表总数
                     * @return TotalCount 热词列表总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 热词表列表
                     */
                    std::vector<Vocab> m_vocabList;
                    bool m_vocabListHasBeenSet;

                    /**
                     * 热词列表总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_GETASRVOCABLISTRESPONSE_H_
