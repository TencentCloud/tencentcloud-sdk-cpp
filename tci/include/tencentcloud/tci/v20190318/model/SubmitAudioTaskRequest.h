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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITAUDIOTASKREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITAUDIOTASKREQUEST_H_

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
                * SubmitAudioTask请求参数结构体
                */
                class SubmitAudioTaskRequest : public AbstractModel
                {
                public:
                    SubmitAudioTaskRequest();
                    ~SubmitAudioTaskRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取音频URL。客户请求为URL方式时必须带此字段指名音频的url。
                     * @return Url 音频URL。客户请求为URL方式时必须带此字段指名音频的url。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置音频URL。客户请求为URL方式时必须带此字段指名音频的url。
                     * @param _url 音频URL。客户请求为URL方式时必须带此字段指名音频的url。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取语音编码类型 1:pcm
                     * @return VoiceEncodeType 语音编码类型 1:pcm
                     * 
                     */
                    int64_t GetVoiceEncodeType() const;

                    /**
                     * 设置语音编码类型 1:pcm
                     * @param _voiceEncodeType 语音编码类型 1:pcm
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
                     * 获取语音文件类型 1:raw, 2:wav, 3:mp3，10:视频（三种音频格式目前仅支持16k采样率16bit）
                     * @return VoiceFileType 语音文件类型 1:raw, 2:wav, 3:mp3，10:视频（三种音频格式目前仅支持16k采样率16bit）
                     * 
                     */
                    int64_t GetVoiceFileType() const;

                    /**
                     * 设置语音文件类型 1:raw, 2:wav, 3:mp3，10:视频（三种音频格式目前仅支持16k采样率16bit）
                     * @param _voiceFileType 语音文件类型 1:raw, 2:wav, 3:mp3，10:视频（三种音频格式目前仅支持16k采样率16bit）
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
                     * 获取视频文件类型，默认点播，直播填 live_url
                     * @return FileType 视频文件类型，默认点播，直播填 live_url
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置视频文件类型，默认点播，直播填 live_url
                     * @param _fileType 视频文件类型，默认点播，直播填 live_url
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取静音阈值设置，如果静音检测开关开启，则静音时间超过这个阈值认为是静音片段，在结果中会返回, 没给的话默认值为3s
                     * @return MuteThreshold 静音阈值设置，如果静音检测开关开启，则静音时间超过这个阈值认为是静音片段，在结果中会返回, 没给的话默认值为3s
                     * 
                     */
                    int64_t GetMuteThreshold() const;

                    /**
                     * 设置静音阈值设置，如果静音检测开关开启，则静音时间超过这个阈值认为是静音片段，在结果中会返回, 没给的话默认值为3s
                     * @param _muteThreshold 静音阈值设置，如果静音检测开关开启，则静音时间超过这个阈值认为是静音片段，在结果中会返回, 没给的话默认值为3s
                     * 
                     */
                    void SetMuteThreshold(const int64_t& _muteThreshold);

                    /**
                     * 判断参数 MuteThreshold 是否已赋值
                     * @return MuteThreshold 是否已赋值
                     * 
                     */
                    bool MuteThresholdHasBeenSet() const;

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
                     * 音频源的语言，默认0为英文，1为中文
                     */
                    int64_t m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * 音频URL。客户请求为URL方式时必须带此字段指名音频的url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 语音编码类型 1:pcm
                     */
                    int64_t m_voiceEncodeType;
                    bool m_voiceEncodeTypeHasBeenSet;

                    /**
                     * 语音文件类型 1:raw, 2:wav, 3:mp3，10:视频（三种音频格式目前仅支持16k采样率16bit）
                     */
                    int64_t m_voiceFileType;
                    bool m_voiceFileTypeHasBeenSet;

                    /**
                     * 功能开关列表，表示是否需要打开相应的功能，返回相应的信息
                     */
                    Function m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * 视频文件类型，默认点播，直播填 live_url
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 静音阈值设置，如果静音检测开关开启，则静音时间超过这个阈值认为是静音片段，在结果中会返回, 没给的话默认值为3s
                     */
                    int64_t m_muteThreshold;
                    bool m_muteThresholdHasBeenSet;

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

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITAUDIOTASKREQUEST_H_
