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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_DISGUSTRESULT_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_DISGUSTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * 恶心识别结果。
                */
                class DisgustResult : public AbstractModel
                {
                public:
                    DisgustResult();
                    ~DisgustResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误。
                     * @return Code 该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误。
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误。
                     * @param _code 该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误。
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取错误码描述信息。
                     * @return Msg 错误码描述信息。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置错误码描述信息。
                     * @param _msg 错误码描述信息。
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     * @return Suggestion 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     * @param _suggestion 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取图像恶心的分数，0-100之间，分数越高恶心几率越大。
                     * @return Confidence 图像恶心的分数，0-100之间，分数越高恶心几率越大。
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置图像恶心的分数，0-100之间，分数越高恶心几率越大。
                     * @param _confidence 图像恶心的分数，0-100之间，分数越高恶心几率越大。
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 错误码描述信息。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 图像恶心的分数，0-100之间，分数越高恶心几率越大。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_DISGUSTRESULT_H_
