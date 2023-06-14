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

#ifndef TENCENTCLOUD_AAI_V20180522_MODEL_SIMULTANEOUSINTERPRETINGREQUEST_H_
#define TENCENTCLOUD_AAI_V20180522_MODEL_SIMULTANEOUSINTERPRETINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aai
    {
        namespace V20180522
        {
            namespace Model
            {
                /**
                * SimultaneousInterpreting请求参数结构体
                */
                class SimultaneousInterpretingRequest : public AbstractModel
                {
                public:
                    SimultaneousInterpretingRequest();
                    ~SimultaneousInterpretingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     * @return ProjectId 腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     * @param _projectId 腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取子服务类型。0：离线语音识别。1：实时流式识别，2，一句话识别。3：同传。
                     * @return SubServiceType 子服务类型。0：离线语音识别。1：实时流式识别，2，一句话识别。3：同传。
                     * 
                     */
                    uint64_t GetSubServiceType() const;

                    /**
                     * 设置子服务类型。0：离线语音识别。1：实时流式识别，2，一句话识别。3：同传。
                     * @param _subServiceType 子服务类型。0：离线语音识别。1：实时流式识别，2，一句话识别。3：同传。
                     * 
                     */
                    void SetSubServiceType(const uint64_t& _subServiceType);

                    /**
                     * 判断参数 SubServiceType 是否已赋值
                     * @return SubServiceType 是否已赋值
                     * 
                     */
                    bool SubServiceTypeHasBeenSet() const;

                    /**
                     * 获取识别引擎类型。8k_zh： 8k 中文会场模型；16k_zh：16k 中文会场模型，8k_en： 8k 英文会场模型；16k_en：16k 英文会场模型。当前仅支持16K。
                     * @return RecEngineModelType 识别引擎类型。8k_zh： 8k 中文会场模型；16k_zh：16k 中文会场模型，8k_en： 8k 英文会场模型；16k_en：16k 英文会场模型。当前仅支持16K。
                     * 
                     */
                    std::string GetRecEngineModelType() const;

                    /**
                     * 设置识别引擎类型。8k_zh： 8k 中文会场模型；16k_zh：16k 中文会场模型，8k_en： 8k 英文会场模型；16k_en：16k 英文会场模型。当前仅支持16K。
                     * @param _recEngineModelType 识别引擎类型。8k_zh： 8k 中文会场模型；16k_zh：16k 中文会场模型，8k_en： 8k 英文会场模型；16k_en：16k 英文会场模型。当前仅支持16K。
                     * 
                     */
                    void SetRecEngineModelType(const std::string& _recEngineModelType);

                    /**
                     * 判断参数 RecEngineModelType 是否已赋值
                     * @return RecEngineModelType 是否已赋值
                     * 
                     */
                    bool RecEngineModelTypeHasBeenSet() const;

                    /**
                     * 获取语音数据，要base64编码。
                     * @return Data 语音数据，要base64编码。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置语音数据，要base64编码。
                     * @param _data 语音数据，要base64编码。
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
                     * 获取数据长度。
                     * @return DataLen 数据长度。
                     * 
                     */
                    uint64_t GetDataLen() const;

                    /**
                     * 设置数据长度。
                     * @param _dataLen 数据长度。
                     * 
                     */
                    void SetDataLen(const uint64_t& _dataLen);

                    /**
                     * 判断参数 DataLen 是否已赋值
                     * @return DataLen 是否已赋值
                     * 
                     */
                    bool DataLenHasBeenSet() const;

                    /**
                     * 获取声音id，标识一句话。
                     * @return VoiceId 声音id，标识一句话。
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置声音id，标识一句话。
                     * @param _voiceId 声音id，标识一句话。
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取是否是一句话的结束。
                     * @return IsEnd 是否是一句话的结束。
                     * 
                     */
                    uint64_t GetIsEnd() const;

                    /**
                     * 设置是否是一句话的结束。
                     * @param _isEnd 是否是一句话的结束。
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
                     * 获取声音编码的格式1:pcm，4:speex，6:silk，默认为1。
                     * @return VoiceFormat 声音编码的格式1:pcm，4:speex，6:silk，默认为1。
                     * 
                     */
                    uint64_t GetVoiceFormat() const;

                    /**
                     * 设置声音编码的格式1:pcm，4:speex，6:silk，默认为1。
                     * @param _voiceFormat 声音编码的格式1:pcm，4:speex，6:silk，默认为1。
                     * 
                     */
                    void SetVoiceFormat(const uint64_t& _voiceFormat);

                    /**
                     * 判断参数 VoiceFormat 是否已赋值
                     * @return VoiceFormat 是否已赋值
                     * 
                     */
                    bool VoiceFormatHasBeenSet() const;

                    /**
                     * 获取是否需要翻译结果，1表示需要翻译，0是不需要。
                     * @return OpenTranslate 是否需要翻译结果，1表示需要翻译，0是不需要。
                     * 
                     */
                    uint64_t GetOpenTranslate() const;

                    /**
                     * 设置是否需要翻译结果，1表示需要翻译，0是不需要。
                     * @param _openTranslate 是否需要翻译结果，1表示需要翻译，0是不需要。
                     * 
                     */
                    void SetOpenTranslate(const uint64_t& _openTranslate);

                    /**
                     * 判断参数 OpenTranslate 是否已赋值
                     * @return OpenTranslate 是否已赋值
                     * 
                     */
                    bool OpenTranslateHasBeenSet() const;

                    /**
                     * 获取如果需要翻译，表示源语言类型，可取值：zh，en。
                     * @return SourceLanguage 如果需要翻译，表示源语言类型，可取值：zh，en。
                     * 
                     */
                    std::string GetSourceLanguage() const;

                    /**
                     * 设置如果需要翻译，表示源语言类型，可取值：zh，en。
                     * @param _sourceLanguage 如果需要翻译，表示源语言类型，可取值：zh，en。
                     * 
                     */
                    void SetSourceLanguage(const std::string& _sourceLanguage);

                    /**
                     * 判断参数 SourceLanguage 是否已赋值
                     * @return SourceLanguage 是否已赋值
                     * 
                     */
                    bool SourceLanguageHasBeenSet() const;

                    /**
                     * 获取如果需要翻译，表示目标语言类型，可取值：zh，en。
                     * @return TargetLanguage 如果需要翻译，表示目标语言类型，可取值：zh，en。
                     * 
                     */
                    std::string GetTargetLanguage() const;

                    /**
                     * 设置如果需要翻译，表示目标语言类型，可取值：zh，en。
                     * @param _targetLanguage 如果需要翻译，表示目标语言类型，可取值：zh，en。
                     * 
                     */
                    void SetTargetLanguage(const std::string& _targetLanguage);

                    /**
                     * 判断参数 TargetLanguage 是否已赋值
                     * @return TargetLanguage 是否已赋值
                     * 
                     */
                    bool TargetLanguageHasBeenSet() const;

                    /**
                     * 获取表明当前语音分片的索引，从0开始
                     * @return Seq 表明当前语音分片的索引，从0开始
                     * 
                     */
                    uint64_t GetSeq() const;

                    /**
                     * 设置表明当前语音分片的索引，从0开始
                     * @param _seq 表明当前语音分片的索引，从0开始
                     * 
                     */
                    void SetSeq(const uint64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                private:

                    /**
                     * 腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 子服务类型。0：离线语音识别。1：实时流式识别，2，一句话识别。3：同传。
                     */
                    uint64_t m_subServiceType;
                    bool m_subServiceTypeHasBeenSet;

                    /**
                     * 识别引擎类型。8k_zh： 8k 中文会场模型；16k_zh：16k 中文会场模型，8k_en： 8k 英文会场模型；16k_en：16k 英文会场模型。当前仅支持16K。
                     */
                    std::string m_recEngineModelType;
                    bool m_recEngineModelTypeHasBeenSet;

                    /**
                     * 语音数据，要base64编码。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 数据长度。
                     */
                    uint64_t m_dataLen;
                    bool m_dataLenHasBeenSet;

                    /**
                     * 声音id，标识一句话。
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * 是否是一句话的结束。
                     */
                    uint64_t m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * 声音编码的格式1:pcm，4:speex，6:silk，默认为1。
                     */
                    uint64_t m_voiceFormat;
                    bool m_voiceFormatHasBeenSet;

                    /**
                     * 是否需要翻译结果，1表示需要翻译，0是不需要。
                     */
                    uint64_t m_openTranslate;
                    bool m_openTranslateHasBeenSet;

                    /**
                     * 如果需要翻译，表示源语言类型，可取值：zh，en。
                     */
                    std::string m_sourceLanguage;
                    bool m_sourceLanguageHasBeenSet;

                    /**
                     * 如果需要翻译，表示目标语言类型，可取值：zh，en。
                     */
                    std::string m_targetLanguage;
                    bool m_targetLanguageHasBeenSet;

                    /**
                     * 表明当前语音分片的索引，从0开始
                     */
                    uint64_t m_seq;
                    bool m_seqHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AAI_V20180522_MODEL_SIMULTANEOUSINTERPRETINGREQUEST_H_
