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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_CREATEASYNCRECOGNITIONTASKREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_CREATEASYNCRECOGNITIONTASKREQUEST_H_

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
                * CreateAsyncRecognitionTask请求参数结构体
                */
                class CreateAsyncRecognitionTaskRequest : public AbstractModel
                {
                public:
                    CreateAsyncRecognitionTaskRequest();
                    ~CreateAsyncRecognitionTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎模型类型。
• 16k_zh：中文普通话通用；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_fr：法语；
• 16k_de：德语；
                     * @return EngineType 引擎模型类型。
• 16k_zh：中文普通话通用；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_fr：法语；
• 16k_de：德语；
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎模型类型。
• 16k_zh：中文普通话通用；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_fr：法语；
• 16k_de：德语；
                     * @param _engineType 引擎模型类型。
• 16k_zh：中文普通话通用；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_fr：法语；
• 16k_de：德语；
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取语音流地址，支持rtmp、rtsp等流媒体协议，以及各类基于http协议的直播流(不支持hls, m3u8)
                     * @return Url 语音流地址，支持rtmp、rtsp等流媒体协议，以及各类基于http协议的直播流(不支持hls, m3u8)
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置语音流地址，支持rtmp、rtsp等流媒体协议，以及各类基于http协议的直播流(不支持hls, m3u8)
                     * @param _url 语音流地址，支持rtmp、rtsp等流媒体协议，以及各类基于http协议的直播流(不支持hls, m3u8)
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
                     * 获取支持HTTP和HTTPS协议，用于接收识别结果，您需要自行搭建公网可调用的服务。回调格式&内容详见：[语音流异步识别回调说明](https://cloud.tencent.com/document/product/1093/52633)
                     * @return CallbackUrl 支持HTTP和HTTPS协议，用于接收识别结果，您需要自行搭建公网可调用的服务。回调格式&内容详见：[语音流异步识别回调说明](https://cloud.tencent.com/document/product/1093/52633)
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置支持HTTP和HTTPS协议，用于接收识别结果，您需要自行搭建公网可调用的服务。回调格式&内容详见：[语音流异步识别回调说明](https://cloud.tencent.com/document/product/1093/52633)
                     * @param _callbackUrl 支持HTTP和HTTPS协议，用于接收识别结果，您需要自行搭建公网可调用的服务。回调格式&内容详见：[语音流异步识别回调说明](https://cloud.tencent.com/document/product/1093/52633)
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取用于生成回调通知中的签名
                     * @return SignToken 用于生成回调通知中的签名
                     * 
                     */
                    std::string GetSignToken() const;

                    /**
                     * 设置用于生成回调通知中的签名
                     * @param _signToken 用于生成回调通知中的签名
                     * 
                     */
                    void SetSignToken(const std::string& _signToken);

                    /**
                     * 判断参数 SignToken 是否已赋值
                     * @return SignToken 是否已赋值
                     * 
                     */
                    bool SignTokenHasBeenSet() const;

                    /**
                     * 获取是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0
                     * @return FilterDirty 是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0
                     * 
                     */
                    int64_t GetFilterDirty() const;

                    /**
                     * 设置是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0
                     * @param _filterDirty 是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0
                     * 
                     */
                    void SetFilterDirty(const int64_t& _filterDirty);

                    /**
                     * 判断参数 FilterDirty 是否已赋值
                     * @return FilterDirty 是否已赋值
                     * 
                     */
                    bool FilterDirtyHasBeenSet() const;

                    /**
                     * 获取是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0
                     * @return FilterModal 是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0
                     * 
                     */
                    int64_t GetFilterModal() const;

                    /**
                     * 设置是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0
                     * @param _filterModal 是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0
                     * 
                     */
                    void SetFilterModal(const int64_t& _filterModal);

                    /**
                     * 判断参数 FilterModal 是否已赋值
                     * @return FilterModal 是否已赋值
                     * 
                     */
                    bool FilterModalHasBeenSet() const;

                    /**
                     * 获取是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认为0
                     * @return FilterPunc 是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认为0
                     * 
                     */
                    int64_t GetFilterPunc() const;

                    /**
                     * 设置是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认为0
                     * @param _filterPunc 是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认为0
                     * 
                     */
                    void SetFilterPunc(const int64_t& _filterPunc);

                    /**
                     * 判断参数 FilterPunc 是否已赋值
                     * @return FilterPunc 是否已赋值
                     * 
                     */
                    bool FilterPuncHasBeenSet() const;

                    /**
                     * 获取是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1
                     * @return ConvertNumMode 是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1
                     * 
                     */
                    int64_t GetConvertNumMode() const;

                    /**
                     * 设置是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1
                     * @param _convertNumMode 是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1
                     * 
                     */
                    void SetConvertNumMode(const int64_t& _convertNumMode);

                    /**
                     * 判断参数 ConvertNumMode 是否已赋值
                     * @return ConvertNumMode 是否已赋值
                     * 
                     */
                    bool ConvertNumModeHasBeenSet() const;

                    /**
                     * 获取是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认为0
                     * @return WordInfo 是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认为0
                     * 
                     */
                    int64_t GetWordInfo() const;

                    /**
                     * 设置是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认为0
                     * @param _wordInfo 是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认为0
                     * 
                     */
                    void SetWordInfo(const int64_t& _wordInfo);

                    /**
                     * 判断参数 WordInfo 是否已赋值
                     * @return WordInfo 是否已赋值
                     * 
                     */
                    bool WordInfoHasBeenSet() const;

                    /**
                     * 获取热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     * @return HotwordId 热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     * 
                     */
                    std::string GetHotwordId() const;

                    /**
                     * 设置热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     * @param _hotwordId 热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     * 
                     */
                    void SetHotwordId(const std::string& _hotwordId);

                    /**
                     * 判断参数 HotwordId 是否已赋值
                     * @return HotwordId 是否已赋值
                     * 
                     */
                    bool HotwordIdHasBeenSet() const;

                    /**
                     * 获取回调数据中，是否需要对应音频数据。
                     * @return AudioData 回调数据中，是否需要对应音频数据。
                     * 
                     */
                    bool GetAudioData() const;

                    /**
                     * 设置回调数据中，是否需要对应音频数据。
                     * @param _audioData 回调数据中，是否需要对应音频数据。
                     * 
                     */
                    void SetAudioData(const bool& _audioData);

                    /**
                     * 判断参数 AudioData 是否已赋值
                     * @return AudioData 是否已赋值
                     * 
                     */
                    bool AudioDataHasBeenSet() const;

                private:

                    /**
                     * 引擎模型类型。
• 16k_zh：中文普通话通用；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_fr：法语；
• 16k_de：德语；
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 语音流地址，支持rtmp、rtsp等流媒体协议，以及各类基于http协议的直播流(不支持hls, m3u8)
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 支持HTTP和HTTPS协议，用于接收识别结果，您需要自行搭建公网可调用的服务。回调格式&内容详见：[语音流异步识别回调说明](https://cloud.tencent.com/document/product/1093/52633)
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 用于生成回调通知中的签名
                     */
                    std::string m_signToken;
                    bool m_signTokenHasBeenSet;

                    /**
                     * 是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0
                     */
                    int64_t m_filterDirty;
                    bool m_filterDirtyHasBeenSet;

                    /**
                     * 是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0
                     */
                    int64_t m_filterModal;
                    bool m_filterModalHasBeenSet;

                    /**
                     * 是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认为0
                     */
                    int64_t m_filterPunc;
                    bool m_filterPuncHasBeenSet;

                    /**
                     * 是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1
                     */
                    int64_t m_convertNumMode;
                    bool m_convertNumModeHasBeenSet;

                    /**
                     * 是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认为0
                     */
                    int64_t m_wordInfo;
                    bool m_wordInfoHasBeenSet;

                    /**
                     * 热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     */
                    std::string m_hotwordId;
                    bool m_hotwordIdHasBeenSet;

                    /**
                     * 回调数据中，是否需要对应音频数据。
                     */
                    bool m_audioData;
                    bool m_audioDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATEASYNCRECOGNITIONTASKREQUEST_H_
