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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_DOWNLOADASRVOCABRESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_DOWNLOADASRVOCABRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * DownloadAsrVocab返回参数结构体
                */
                class DownloadAsrVocabResponse : public AbstractModel
                {
                public:
                    DownloadAsrVocabResponse();
                    ~DownloadAsrVocabResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取词表ID。
                     * @return VocabId 词表ID。
                     * 
                     */
                    std::string GetVocabId() const;

                    /**
                     * 判断参数 VocabId 是否已赋值
                     * @return VocabId 是否已赋值
                     * 
                     */
                    bool VocabIdHasBeenSet() const;

                    /**
                     * 获取词表权重文件形式的base64值。
                     * @return WordWeightStr 词表权重文件形式的base64值。
                     * 
                     */
                    std::string GetWordWeightStr() const;

                    /**
                     * 判断参数 WordWeightStr 是否已赋值
                     * @return WordWeightStr 是否已赋值
                     * 
                     */
                    bool WordWeightStrHasBeenSet() const;

                private:

                    /**
                     * 词表ID。
                     */
                    std::string m_vocabId;
                    bool m_vocabIdHasBeenSet;

                    /**
                     * 词表权重文件形式的base64值。
                     */
                    std::string m_wordWeightStr;
                    bool m_wordWeightStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_DOWNLOADASRVOCABRESPONSE_H_
