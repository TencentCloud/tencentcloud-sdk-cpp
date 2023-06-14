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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_KEYWORDEVALUATERESPONSE_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_KEYWORDEVALUATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/soe/v20180724/model/KeywordScore.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * KeywordEvaluate返回参数结构体
                */
                class KeywordEvaluateResponse : public AbstractModel
                {
                public:
                    KeywordEvaluateResponse();
                    ~KeywordEvaluateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词得分
                     * @return KeywordScores 关键词得分
                     * 
                     */
                    std::vector<KeywordScore> GetKeywordScores() const;

                    /**
                     * 判断参数 KeywordScores 是否已赋值
                     * @return KeywordScores 是否已赋值
                     * 
                     */
                    bool KeywordScoresHasBeenSet() const;

                    /**
                     * 获取语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     * @return SessionId 语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 关键词得分
                     */
                    std::vector<KeywordScore> m_keywordScores;
                    bool m_keywordScoresHasBeenSet;

                    /**
                     * 语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_KEYWORDEVALUATERESPONSE_H_
