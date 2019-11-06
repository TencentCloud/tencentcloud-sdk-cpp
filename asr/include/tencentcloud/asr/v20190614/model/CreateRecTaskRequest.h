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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * CreateRecTask请求参数结构体
                */
                class CreateRecTaskRequest : public AbstractModel
                {
                public:
                    CreateRecTaskRequest();
                    ~CreateRecTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎类型。
8k_0：电话 8k 通用模型；
16k_0：16k 通用模型；
8k_6: 电话场景下单声道话者分离模型。
                     * @return EngineModelType 引擎类型。
8k_0：电话 8k 通用模型；
16k_0：16k 通用模型；
8k_6: 电话场景下单声道话者分离模型。
                     */
                    std::string GetEngineModelType() const;

                    /**
                     * 设置引擎类型。
8k_0：电话 8k 通用模型；
16k_0：16k 通用模型；
8k_6: 电话场景下单声道话者分离模型。
                     * @param EngineModelType 引擎类型。
8k_0：电话 8k 通用模型；
16k_0：16k 通用模型；
8k_6: 电话场景下单声道话者分离模型。
                     */
                    void SetEngineModelType(const std::string& _engineModelType);

                    /**
                     * 判断参数 EngineModelType 是否已赋值
                     * @return EngineModelType 是否已赋值
                     */
                    bool EngineModelTypeHasBeenSet() const;

                    /**
                     * 获取语音声道数。1：单声道；2：双声道（仅在电话 8k 通用模型下支持）。
                     * @return ChannelNum 语音声道数。1：单声道；2：双声道（仅在电话 8k 通用模型下支持）。
                     */
                    uint64_t GetChannelNum() const;

                    /**
                     * 设置语音声道数。1：单声道；2：双声道（仅在电话 8k 通用模型下支持）。
                     * @param ChannelNum 语音声道数。1：单声道；2：双声道（仅在电话 8k 通用模型下支持）。
                     */
                    void SetChannelNum(const uint64_t& _channelNum);

                    /**
                     * 判断参数 ChannelNum 是否已赋值
                     * @return ChannelNum 是否已赋值
                     */
                    bool ChannelNumHasBeenSet() const;

                    /**
                     * 获取识别结果文本编码方式。0：UTF-8。
                     * @return ResTextFormat 识别结果文本编码方式。0：UTF-8。
                     */
                    uint64_t GetResTextFormat() const;

                    /**
                     * 设置识别结果文本编码方式。0：UTF-8。
                     * @param ResTextFormat 识别结果文本编码方式。0：UTF-8。
                     */
                    void SetResTextFormat(const uint64_t& _resTextFormat);

                    /**
                     * 判断参数 ResTextFormat 是否已赋值
                     * @return ResTextFormat 是否已赋值
                     */
                    bool ResTextFormatHasBeenSet() const;

                    /**
                     * 获取语音数据来源。0：语音 URL；1：语音数据（post body）。
                     * @return SourceType 语音数据来源。0：语音 URL；1：语音数据（post body）。
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置语音数据来源。0：语音 URL；1：语音数据（post body）。
                     * @param SourceType 语音数据来源。0：语音 URL；1：语音数据（post body）。
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取回调 URL，用户自行搭建的用于接收识别结果的服务器地址， 长度小于2048字节。如果用户使用回调方式获取识别结果，需提交该参数；如果用户使用轮询方式获取识别结果，则无需提交该参数。
                     * @return CallbackUrl 回调 URL，用户自行搭建的用于接收识别结果的服务器地址， 长度小于2048字节。如果用户使用回调方式获取识别结果，需提交该参数；如果用户使用轮询方式获取识别结果，则无需提交该参数。
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL，用户自行搭建的用于接收识别结果的服务器地址， 长度小于2048字节。如果用户使用回调方式获取识别结果，需提交该参数；如果用户使用轮询方式获取识别结果，则无需提交该参数。
                     * @param CallbackUrl 回调 URL，用户自行搭建的用于接收识别结果的服务器地址， 长度小于2048字节。如果用户使用回调方式获取识别结果，需提交该参数；如果用户使用轮询方式获取识别结果，则无需提交该参数。
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取语音的URL地址，需要公网可下载。长度小于2048字节，当 source_type 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在一个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     * @return Url 语音的URL地址，需要公网可下载。长度小于2048字节，当 source_type 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在一个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置语音的URL地址，需要公网可下载。长度小于2048字节，当 source_type 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在一个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     * @param Url 语音的URL地址，需要公网可下载。长度小于2048字节，当 source_type 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在一个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于5MB。
                     * @return Data 语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于5MB。
                     */
                    std::string GetData() const;

                    /**
                     * 设置语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于5MB。
                     * @param Data 语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于5MB。
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     * @return DataLen 数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    uint64_t GetDataLen() const;

                    /**
                     * 设置数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     * @param DataLen 数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    void SetDataLen(const uint64_t& _dataLen);

                    /**
                     * 判断参数 DataLen 是否已赋值
                     * @return DataLen 是否已赋值
                     */
                    bool DataLenHasBeenSet() const;

                private:

                    /**
                     * 引擎类型。
8k_0：电话 8k 通用模型；
16k_0：16k 通用模型；
8k_6: 电话场景下单声道话者分离模型。
                     */
                    std::string m_engineModelType;
                    bool m_engineModelTypeHasBeenSet;

                    /**
                     * 语音声道数。1：单声道；2：双声道（仅在电话 8k 通用模型下支持）。
                     */
                    uint64_t m_channelNum;
                    bool m_channelNumHasBeenSet;

                    /**
                     * 识别结果文本编码方式。0：UTF-8。
                     */
                    uint64_t m_resTextFormat;
                    bool m_resTextFormatHasBeenSet;

                    /**
                     * 语音数据来源。0：语音 URL；1：语音数据（post body）。
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 回调 URL，用户自行搭建的用于接收识别结果的服务器地址， 长度小于2048字节。如果用户使用回调方式获取识别结果，需提交该参数；如果用户使用轮询方式获取识别结果，则无需提交该参数。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 语音的URL地址，需要公网可下载。长度小于2048字节，当 source_type 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在一个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 语音数据，当SourceType 值为1时必须填写，为0可不写。要base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频数据要小于5MB。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 数据长度，当 SourceType 值为1时必须填写，为0可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    uint64_t m_dataLen;
                    bool m_dataLenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKREQUEST_H_
