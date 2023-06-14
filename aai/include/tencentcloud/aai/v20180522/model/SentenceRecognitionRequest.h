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

#ifndef TENCENTCLOUD_AAI_V20180522_MODEL_SENTENCERECOGNITIONREQUEST_H_
#define TENCENTCLOUD_AAI_V20180522_MODEL_SENTENCERECOGNITIONREQUEST_H_

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
                * SentenceRecognition请求参数结构体
                */
                class SentenceRecognitionRequest : public AbstractModel
                {
                public:
                    SentenceRecognitionRequest();
                    ~SentenceRecognitionRequest() = default;
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
                     * 获取子服务类型。2，一句话识别。
                     * @return SubServiceType 子服务类型。2，一句话识别。
                     * 
                     */
                    uint64_t GetSubServiceType() const;

                    /**
                     * 设置子服务类型。2，一句话识别。
                     * @param _subServiceType 子服务类型。2，一句话识别。
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
                     * 获取引擎类型。8k：电话 8k 通用模型；16k：16k 通用模型。只支持单声道音频识别。
                     * @return EngSerViceType 引擎类型。8k：电话 8k 通用模型；16k：16k 通用模型。只支持单声道音频识别。
                     * 
                     */
                    std::string GetEngSerViceType() const;

                    /**
                     * 设置引擎类型。8k：电话 8k 通用模型；16k：16k 通用模型。只支持单声道音频识别。
                     * @param _engSerViceType 引擎类型。8k：电话 8k 通用模型；16k：16k 通用模型。只支持单声道音频识别。
                     * 
                     */
                    void SetEngSerViceType(const std::string& _engSerViceType);

                    /**
                     * 判断参数 EngSerViceType 是否已赋值
                     * @return EngSerViceType 是否已赋值
                     * 
                     */
                    bool EngSerViceTypeHasBeenSet() const;

                    /**
                     * 获取语音数据来源。0：语音 URL；1：语音数据（post body）。
                     * @return SourceType 语音数据来源。0：语音 URL；1：语音数据（post body）。
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置语音数据来源。0：语音 URL；1：语音数据（post body）。
                     * @param _sourceType 语音数据来源。0：语音 URL；1：语音数据（post body）。
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取识别音频的音频格式（支持mp3,wav）。
                     * @return VoiceFormat 识别音频的音频格式（支持mp3,wav）。
                     * 
                     */
                    std::string GetVoiceFormat() const;

                    /**
                     * 设置识别音频的音频格式（支持mp3,wav）。
                     * @param _voiceFormat 识别音频的音频格式（支持mp3,wav）。
                     * 
                     */
                    void SetVoiceFormat(const std::string& _voiceFormat);

                    /**
                     * 判断参数 VoiceFormat 是否已赋值
                     * @return VoiceFormat 是否已赋值
                     * 
                     */
                    bool VoiceFormatHasBeenSet() const;

                    /**
                     * 获取用户端对此任务的唯一标识，用户自助生成，用于用户查找识别结果。
                     * @return UsrAudioKey 用户端对此任务的唯一标识，用户自助生成，用于用户查找识别结果。
                     * 
                     */
                    std::string GetUsrAudioKey() const;

                    /**
                     * 设置用户端对此任务的唯一标识，用户自助生成，用于用户查找识别结果。
                     * @param _usrAudioKey 用户端对此任务的唯一标识，用户自助生成，用于用户查找识别结果。
                     * 
                     */
                    void SetUsrAudioKey(const std::string& _usrAudioKey);

                    /**
                     * 判断参数 UsrAudioKey 是否已赋值
                     * @return UsrAudioKey 是否已赋值
                     * 
                     */
                    bool UsrAudioKeyHasBeenSet() const;

                    /**
                     * 获取语音 URL，公网可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不填；URL 的长度大于 0，小于 2048，需进行urlencode编码。音频时间长度要小于60s。
                     * @return Url 语音 URL，公网可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不填；URL 的长度大于 0，小于 2048，需进行urlencode编码。音频时间长度要小于60s。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置语音 URL，公网可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不填；URL 的长度大于 0，小于 2048，需进行urlencode编码。音频时间长度要小于60s。
                     * @param _url 语音 URL，公网可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不填；URL 的长度大于 0，小于 2048，需进行urlencode编码。音频时间长度要小于60s。
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
                     * 获取语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于600kB。
                     * @return Data 语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于600kB。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于600kB。
                     * @param _data 语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于600kB。
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
                     * 获取数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     * @return DataLen 数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     * 
                     */
                    int64_t GetDataLen() const;

                    /**
                     * 设置数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     * @param _dataLen 数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     * 
                     */
                    void SetDataLen(const int64_t& _dataLen);

                    /**
                     * 判断参数 DataLen 是否已赋值
                     * @return DataLen 是否已赋值
                     * 
                     */
                    bool DataLenHasBeenSet() const;

                private:

                    /**
                     * 腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 子服务类型。2，一句话识别。
                     */
                    uint64_t m_subServiceType;
                    bool m_subServiceTypeHasBeenSet;

                    /**
                     * 引擎类型。8k：电话 8k 通用模型；16k：16k 通用模型。只支持单声道音频识别。
                     */
                    std::string m_engSerViceType;
                    bool m_engSerViceTypeHasBeenSet;

                    /**
                     * 语音数据来源。0：语音 URL；1：语音数据（post body）。
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 识别音频的音频格式（支持mp3,wav）。
                     */
                    std::string m_voiceFormat;
                    bool m_voiceFormatHasBeenSet;

                    /**
                     * 用户端对此任务的唯一标识，用户自助生成，用于用户查找识别结果。
                     */
                    std::string m_usrAudioKey;
                    bool m_usrAudioKeyHasBeenSet;

                    /**
                     * 语音 URL，公网可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不填；URL 的长度大于 0，小于 2048，需进行urlencode编码。音频时间长度要小于60s。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于600kB。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    int64_t m_dataLen;
                    bool m_dataLenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AAI_V20180522_MODEL_SENTENCERECOGNITIONREQUEST_H_
