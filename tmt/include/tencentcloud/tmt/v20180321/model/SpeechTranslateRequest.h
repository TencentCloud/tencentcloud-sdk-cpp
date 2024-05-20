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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_SPEECHTRANSLATEREQUEST_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_SPEECHTRANSLATEREQUEST_H_

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
                * SpeechTranslate请求参数结构体
                */
                class SpeechTranslateRequest : public AbstractModel
                {
                public:
                    SpeechTranslateRequest();
                    ~SpeechTranslateRequest() = default;
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
                     * 获取pcm : 146   speex : 16779154   mp3 : 83886080
                     * @return AudioFormat pcm : 146   speex : 16779154   mp3 : 83886080
                     * 
                     */
                    int64_t GetAudioFormat() const;

                    /**
                     * 设置pcm : 146   speex : 16779154   mp3 : 83886080
                     * @param _audioFormat pcm : 146   speex : 16779154   mp3 : 83886080
                     * 
                     */
                    void SetAudioFormat(const int64_t& _audioFormat);

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
                    int64_t GetSeq() const;

                    /**
                     * 设置语音分片的序号，从0开始
                     * @param _seq 语音分片的序号，从0开始
                     * 
                     */
                    void SetSeq(const int64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取是否最后一片语音分片，0-否，1-是
                     * @return IsEnd 是否最后一片语音分片，0-否，1-是
                     * 
                     */
                    int64_t GetIsEnd() const;

                    /**
                     * 设置是否最后一片语音分片，0-否，1-是
                     * @param _isEnd 是否最后一片语音分片，0-否，1-是
                     * 
                     */
                    void SetIsEnd(const int64_t& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     * 
                     */
                    bool IsEndHasBeenSet() const;

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

                    /**
                     * 获取项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     * @return ProjectId 项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     * @param _projectId 项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取识别模式，该参数已废弃
                     * @return Mode 识别模式，该参数已废弃
                     * @deprecated
                     */
                    std::string GetMode() const;

                    /**
                     * 设置识别模式，该参数已废弃
                     * @param _mode 识别模式，该参数已废弃
                     * @deprecated
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * @deprecated
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取该参数已废弃
                     * @return TransType 该参数已废弃
                     * @deprecated
                     */
                    int64_t GetTransType() const;

                    /**
                     * 设置该参数已废弃
                     * @param _transType 该参数已废弃
                     * @deprecated
                     */
                    void SetTransType(const int64_t& _transType);

                    /**
                     * 判断参数 TransType 是否已赋值
                     * @return TransType 是否已赋值
                     * @deprecated
                     */
                    bool TransTypeHasBeenSet() const;

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
                     * pcm : 146   speex : 16779154   mp3 : 83886080
                     */
                    int64_t m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                    /**
                     * 语音分片的序号，从0开始
                     */
                    int64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 是否最后一片语音分片，0-否，1-是
                     */
                    int64_t m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * 语音分片内容进行 Base64 编码后的字符串。音频内容需包含有效并可识别的文本信息。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 项目ID，可以根据控制台-账号中心-项目管理中的配置填写，如无配置请填写默认项目ID:0
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 识别模式，该参数已废弃
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 该参数已废弃
                     */
                    int64_t m_transType;
                    bool m_transTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_SPEECHTRANSLATEREQUEST_H_
