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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_GETRECOGNIZEVOCABLISTV3RESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_GETRECOGNIZEVOCABLISTV3RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/Vocab.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * GetRecognizeVocabListV3返回参数结构体
                */
                class GetRecognizeVocabListV3Response : public AbstractModel
                {
                public:
                    GetRecognizeVocabListV3Response();
                    ~GetRecognizeVocabListV3Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>词表列表</p>
                     * @return VocabList <p>词表列表</p>
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
                     * 获取<p>词表个数</p><p>单位：个</p>
                     * @return TotalCount <p>词表个数</p><p>单位：个</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>词表列表</p>
                     */
                    std::vector<Vocab> m_vocabList;
                    bool m_vocabListHasBeenSet;

                    /**
                     * <p>词表个数</p><p>单位：个</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_GETRECOGNIZEVOCABLISTV3RESPONSE_H_
