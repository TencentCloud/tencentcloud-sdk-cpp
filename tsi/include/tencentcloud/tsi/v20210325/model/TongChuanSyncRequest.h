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

#ifndef TENCENTCLOUD_TSI_V20210325_MODEL_TONGCHUANSYNCREQUEST_H_
#define TENCENTCLOUD_TSI_V20210325_MODEL_TONGCHUANSYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsi
    {
        namespace V20210325
        {
            namespace Model
            {
                /**
                * TongChuanSync请求参数结构体
                */
                class TongChuanSyncRequest : public AbstractModel
                {
                public:
                    TongChuanSyncRequest();
                    ~TongChuanSyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一段完整的语音对应一个SessionUuid
                     * @return SessionUuid 一段完整的语音对应一个SessionUuid
                     * 
                     */
                    std::string GetSessionUuid() const;

                    /**
                     * 设置一段完整的语音对应一个SessionUuid
                     * @param _sessionUuid 一段完整的语音对应一个SessionUuid
                     * 
                     */
                    void SetSessionUuid(const std::string& _sessionUuid);

                    /**
                     * 判断参数 SessionUuid 是否已赋值
                     * @return SessionUuid 是否已赋值
                     * 
                     */
                    bool SessionUuidHasBeenSet() const;

                    /**
                     * 获取音频中的语言类型，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * @return Source 音频中的语言类型，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置音频中的语言类型，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * @param _source 音频中的语言类型，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取翻译目标语言类型，支持的语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * @return Target 翻译目标语言类型，支持的语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置翻译目标语言类型，支持的语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * @param _target 翻译目标语言类型，支持的语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取语音编码类型，1-pcm
                     * @return AudioFormat 语音编码类型，1-pcm
                     * 
                     */
                    uint64_t GetAudioFormat() const;

                    /**
                     * 设置语音编码类型，1-pcm
                     * @param _audioFormat 语音编码类型，1-pcm
                     * 
                     */
                    void SetAudioFormat(const uint64_t& _audioFormat);

                    /**
                     * 判断参数 AudioFormat 是否已赋值
                     * @return AudioFormat 是否已赋值
                     * 
                     */
                    bool AudioFormatHasBeenSet() const;

                    /**
                     * 获取语音分片的序号，从0开始
                     * @return Seq 语音分片的序号，从0开始
                     * 
                     */
                    uint64_t GetSeq() const;

                    /**
                     * 设置语音分片的序号，从0开始
                     * @param _seq 语音分片的序号，从0开始
                     * 
                     */
                    void SetSeq(const uint64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取语音开始的时间戳
                     * @return Utc 语音开始的时间戳
                     * 
                     */
                    uint64_t GetUtc() const;

                    /**
                     * 设置语音开始的时间戳
                     * @param _utc 语音开始的时间戳
                     * 
                     */
                    void SetUtc(const uint64_t& _utc);

                    /**
                     * 判断参数 Utc 是否已赋值
                     * @return Utc 是否已赋值
                     * 
                     */
                    bool UtcHasBeenSet() const;

                    /**
                     * 获取是否最后一片语音分片，0-否，1-是
                     * @return IsEnd 是否最后一片语音分片，0-否，1-是
                     * 
                     */
                    uint64_t GetIsEnd() const;

                    /**
                     * 设置是否最后一片语音分片，0-否，1-是
                     * @param _isEnd 是否最后一片语音分片，0-否，1-是
                     * 
                     */
                    void SetIsEnd(const uint64_t& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     * 
                     */
                    bool IsEndHasBeenSet() const;

                    /**
                     * 获取翻译时机，0 -不翻译 1 - 句子结束时翻译，2 - 句子实时翻译
                     * @return TranslateTime 翻译时机，0 -不翻译 1 - 句子结束时翻译，2 - 句子实时翻译
                     * 
                     */
                    uint64_t GetTranslateTime() const;

                    /**
                     * 设置翻译时机，0 -不翻译 1 - 句子结束时翻译，2 - 句子实时翻译
                     * @param _translateTime 翻译时机，0 -不翻译 1 - 句子结束时翻译，2 - 句子实时翻译
                     * 
                     */
                    void SetTranslateTime(const uint64_t& _translateTime);

                    /**
                     * 判断参数 TranslateTime 是否已赋值
                     * @return TranslateTime 是否已赋值
                     * 
                     */
                    bool TranslateTimeHasBeenSet() const;

                    /**
                     * 获取语音分片内容进行 Base64 编码后的字符串。音频内容需包含有效并可识别的文本信息。
                     * @return Data 语音分片内容进行 Base64 编码后的字符串。音频内容需包含有效并可识别的文本信息。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置语音分片内容进行 Base64 编码后的字符串。音频内容需包含有效并可识别的文本信息。
                     * @param _data 语音分片内容进行 Base64 编码后的字符串。音频内容需包含有效并可识别的文本信息。
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 一段完整的语音对应一个SessionUuid
                     */
                    std::string m_sessionUuid;
                    bool m_sessionUuidHasBeenSet;

                    /**
                     * 音频中的语言类型，支持语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 翻译目标语言类型，支持的语言列表<li> zh : 中文 </li> <li> en : 英文 </li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 语音编码类型，1-pcm
                     */
                    uint64_t m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                    /**
                     * 语音分片的序号，从0开始
                     */
                    uint64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 语音开始的时间戳
                     */
                    uint64_t m_utc;
                    bool m_utcHasBeenSet;

                    /**
                     * 是否最后一片语音分片，0-否，1-是
                     */
                    uint64_t m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * 翻译时机，0 -不翻译 1 - 句子结束时翻译，2 - 句子实时翻译
                     */
                    uint64_t m_translateTime;
                    bool m_translateTimeHasBeenSet;

                    /**
                     * 语音分片内容进行 Base64 编码后的字符串。音频内容需包含有效并可识别的文本信息。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSI_V20210325_MODEL_TONGCHUANSYNCREQUEST_H_
