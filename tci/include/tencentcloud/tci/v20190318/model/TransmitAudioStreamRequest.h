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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_TRANSMITAUDIOSTREAMREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_TRANSMITAUDIOSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/Function.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * TransmitAudioStream请求参数结构体
                */
                class TransmitAudioStreamRequest : public AbstractModel
                {
                public:
                    TransmitAudioStreamRequest();
                    ~TransmitAudioStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取功能开关列表，表示是否需要打开相应的功能，返回相应的信息
                     * @return Functions 功能开关列表，表示是否需要打开相应的功能，返回相应的信息
                     * 
                     */
                    Function GetFunctions() const;

                    /**
                     * 设置功能开关列表，表示是否需要打开相应的功能，返回相应的信息
                     * @param _functions 功能开关列表，表示是否需要打开相应的功能，返回相应的信息
                     * 
                     */
                    void SetFunctions(const Function& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义。
                     * @return SeqId 流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义。
                     * 
                     */
                    int64_t GetSeqId() const;

                    /**
                     * 设置流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义。
                     * @param _seqId 流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义。
                     * 
                     */
                    void SetSeqId(const int64_t& _seqId);

                    /**
                     * 判断参数 SeqId 是否已赋值
                     * @return SeqId 是否已赋值
                     * 
                     */
                    bool SeqIdHasBeenSet() const;

                    /**
                     * 获取语音段唯一标识，一个完整语音一个SessionId。
                     * @return SessionId 语音段唯一标识，一个完整语音一个SessionId。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置语音段唯一标识，一个完整语音一个SessionId。
                     * @param _sessionId 语音段唯一标识，一个完整语音一个SessionId。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     * @return UserVoiceData 当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     * 
                     */
                    std::string GetUserVoiceData() const;

                    /**
                     * 设置当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     * @param _userVoiceData 当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     * 
                     */
                    void SetUserVoiceData(const std::string& _userVoiceData);

                    /**
                     * 判断参数 UserVoiceData 是否已赋值
                     * @return UserVoiceData 是否已赋值
                     * 
                     */
                    bool UserVoiceDataHasBeenSet() const;

                    /**
                     * 获取语音编码类型 1:pcm。
                     * @return VoiceEncodeType 语音编码类型 1:pcm。
                     * 
                     */
                    int64_t GetVoiceEncodeType() const;

                    /**
                     * 设置语音编码类型 1:pcm。
                     * @param _voiceEncodeType 语音编码类型 1:pcm。
                     * 
                     */
                    void SetVoiceEncodeType(const int64_t& _voiceEncodeType);

                    /**
                     * 判断参数 VoiceEncodeType 是否已赋值
                     * @return VoiceEncodeType 是否已赋值
                     * 
                     */
                    bool VoiceEncodeTypeHasBeenSet() const;

                    /**
                     * 获取语音文件类型 	1: raw, 2: wav, 3: mp3 (语言文件格式目前仅支持 16k 采样率 16bit 编码单声道，如有不一致可能导致评估不准确或失败)。
                     * @return VoiceFileType 语音文件类型 	1: raw, 2: wav, 3: mp3 (语言文件格式目前仅支持 16k 采样率 16bit 编码单声道，如有不一致可能导致评估不准确或失败)。
                     * 
                     */
                    int64_t GetVoiceFileType() const;

                    /**
                     * 设置语音文件类型 	1: raw, 2: wav, 3: mp3 (语言文件格式目前仅支持 16k 采样率 16bit 编码单声道，如有不一致可能导致评估不准确或失败)。
                     * @param _voiceFileType 语音文件类型 	1: raw, 2: wav, 3: mp3 (语言文件格式目前仅支持 16k 采样率 16bit 编码单声道，如有不一致可能导致评估不准确或失败)。
                     * 
                     */
                    void SetVoiceFileType(const int64_t& _voiceFileType);

                    /**
                     * 判断参数 VoiceFileType 是否已赋值
                     * @return VoiceFileType 是否已赋值
                     * 
                     */
                    bool VoiceFileTypeHasBeenSet() const;

                    /**
                     * 获取是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     * @return IsEnd 是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     * 
                     */
                    int64_t GetIsEnd() const;

                    /**
                     * 设置是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     * @param _isEnd 是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
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
                     * 获取音频源的语言，默认0为英文，1为中文
                     * @return Lang 音频源的语言，默认0为英文，1为中文
                     * 
                     */
                    int64_t GetLang() const;

                    /**
                     * 设置音频源的语言，默认0为英文，1为中文
                     * @param _lang 音频源的语言，默认0为英文，1为中文
                     * 
                     */
                    void SetLang(const int64_t& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取是否临时保存 音频链接
                     * @return StorageMode 是否临时保存 音频链接
                     * 
                     */
                    int64_t GetStorageMode() const;

                    /**
                     * 设置是否临时保存 音频链接
                     * @param _storageMode 是否临时保存 音频链接
                     * 
                     */
                    void SetStorageMode(const int64_t& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取识别词库名列表，评估过程使用这些词汇库中的词汇进行词汇使用行为分析
                     * @return VocabLibNameList 识别词库名列表，评估过程使用这些词汇库中的词汇进行词汇使用行为分析
                     * 
                     */
                    std::vector<std::string> GetVocabLibNameList() const;

                    /**
                     * 设置识别词库名列表，评估过程使用这些词汇库中的词汇进行词汇使用行为分析
                     * @param _vocabLibNameList 识别词库名列表，评估过程使用这些词汇库中的词汇进行词汇使用行为分析
                     * 
                     */
                    void SetVocabLibNameList(const std::vector<std::string>& _vocabLibNameList);

                    /**
                     * 判断参数 VocabLibNameList 是否已赋值
                     * @return VocabLibNameList 是否已赋值
                     * 
                     */
                    bool VocabLibNameListHasBeenSet() const;

                private:

                    /**
                     * 功能开关列表，表示是否需要打开相应的功能，返回相应的信息
                     */
                    Function m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * 流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义。
                     */
                    int64_t m_seqId;
                    bool m_seqIdHasBeenSet;

                    /**
                     * 语音段唯一标识，一个完整语音一个SessionId。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     */
                    std::string m_userVoiceData;
                    bool m_userVoiceDataHasBeenSet;

                    /**
                     * 语音编码类型 1:pcm。
                     */
                    int64_t m_voiceEncodeType;
                    bool m_voiceEncodeTypeHasBeenSet;

                    /**
                     * 语音文件类型 	1: raw, 2: wav, 3: mp3 (语言文件格式目前仅支持 16k 采样率 16bit 编码单声道，如有不一致可能导致评估不准确或失败)。
                     */
                    int64_t m_voiceFileType;
                    bool m_voiceFileTypeHasBeenSet;

                    /**
                     * 是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     */
                    int64_t m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * 音频源的语言，默认0为英文，1为中文
                     */
                    int64_t m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * 是否临时保存 音频链接
                     */
                    int64_t m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 识别词库名列表，评估过程使用这些词汇库中的词汇进行词汇使用行为分析
                     */
                    std::vector<std::string> m_vocabLibNameList;
                    bool m_vocabLibNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_TRANSMITAUDIOSTREAMREQUEST_H_
