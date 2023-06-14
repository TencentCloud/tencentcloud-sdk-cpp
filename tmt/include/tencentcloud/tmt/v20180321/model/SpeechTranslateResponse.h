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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_SPEECHTRANSLATERESPONSE_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_SPEECHTRANSLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * SpeechTranslate返回参数结构体
                */
                class SpeechTranslateResponse : public AbstractModel
                {
                public:
                    SpeechTranslateResponse();
                    ~SpeechTranslateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求的SessionUuid直接返回
                     * @return SessionUuid 请求的SessionUuid直接返回
                     * 
                     */
                    std::string GetSessionUuid() const;

                    /**
                     * 判断参数 SessionUuid 是否已赋值
                     * @return SessionUuid 是否已赋值
                     * 
                     */
                    bool SessionUuidHasBeenSet() const;

                    /**
                     * 获取语音识别状态 1-进行中 0-完成
                     * @return RecognizeStatus 语音识别状态 1-进行中 0-完成
                     * 
                     */
                    int64_t GetRecognizeStatus() const;

                    /**
                     * 判断参数 RecognizeStatus 是否已赋值
                     * @return RecognizeStatus 是否已赋值
                     * 
                     */
                    bool RecognizeStatusHasBeenSet() const;

                    /**
                     * 获取识别出的原文
                     * @return SourceText 识别出的原文
                     * 
                     */
                    std::string GetSourceText() const;

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     * 
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取翻译出的译文
                     * @return TargetText 翻译出的译文
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取第几个语音分片
                     * @return Seq 第几个语音分片
                     * 
                     */
                    int64_t GetSeq() const;

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取原语言
                     * @return Source 原语言
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取目标语言
                     * @return Target 目标语言
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取当请求的Mode参数填写bvad是，启动VadSeq。此时Seq会被设置为后台vad（静音检测）后的新序号，而VadSeq代表客户端原始Seq值
                     * @return VadSeq 当请求的Mode参数填写bvad是，启动VadSeq。此时Seq会被设置为后台vad（静音检测）后的新序号，而VadSeq代表客户端原始Seq值
                     * 
                     */
                    int64_t GetVadSeq() const;

                    /**
                     * 判断参数 VadSeq 是否已赋值
                     * @return VadSeq 是否已赋值
                     * 
                     */
                    bool VadSeqHasBeenSet() const;

                private:

                    /**
                     * 请求的SessionUuid直接返回
                     */
                    std::string m_sessionUuid;
                    bool m_sessionUuidHasBeenSet;

                    /**
                     * 语音识别状态 1-进行中 0-完成
                     */
                    int64_t m_recognizeStatus;
                    bool m_recognizeStatusHasBeenSet;

                    /**
                     * 识别出的原文
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     * 翻译出的译文
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * 第几个语音分片
                     */
                    int64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 原语言
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标语言
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 当请求的Mode参数填写bvad是，启动VadSeq。此时Seq会被设置为后台vad（静音检测）后的新序号，而VadSeq代表客户端原始Seq值
                     */
                    int64_t m_vadSeq;
                    bool m_vadSeqHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_SPEECHTRANSLATERESPONSE_H_
