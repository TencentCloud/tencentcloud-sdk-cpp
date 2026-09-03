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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATERECOGNIZEVOCABV3RESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATERECOGNIZEVOCABV3RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * UpdateRecognizeVocabV3返回参数结构体
                */
                class UpdateRecognizeVocabV3Response : public AbstractModel
                {
                public:
                    UpdateRecognizeVocabV3Response();
                    ~UpdateRecognizeVocabV3Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>词表 id</p>
                     * @return VocabId <p>词表 id</p>
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
                     * <p>词表 id</p>
                     */
                    std::string m_vocabId;
                    bool m_vocabIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATERECOGNIZEVOCABV3RESPONSE_H_
