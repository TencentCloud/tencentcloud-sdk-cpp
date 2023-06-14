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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRVOCABRESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRVOCABRESPONSE_H_

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
                * UpdateAsrVocab返回参数结构体
                */
                class UpdateAsrVocabResponse : public AbstractModel
                {
                public:
                    UpdateAsrVocabResponse();
                    ~UpdateAsrVocabResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取热词表ID
                     * @return VocabId 热词表ID
                     * 
                     */
                    std::string GetVocabId() const;

                    /**
                     * 判断参数 VocabId 是否已赋值
                     * @return VocabId 是否已赋值
                     * 
                     */
                    bool VocabIdHasBeenSet() const;

                private:

                    /**
                     * 热词表ID
                     */
                    std::string m_vocabId;
                    bool m_vocabIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRVOCABRESPONSE_H_
