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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCERECOGNITIONREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCERECOGNITIONREQUEST_H_

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
                * SentenceRecognition请求参数结构体
                */
                class SentenceRecognitionRequest : public AbstractModel
                {
                public:
                    SentenceRecognitionRequest();
                    ~SentenceRecognitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云项目 ID，废弃参数，填写0即可。
                     * @return ProjectId 腾讯云项目 ID，废弃参数，填写0即可。
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置腾讯云项目 ID，废弃参数，填写0即可。
                     * @param ProjectId 腾讯云项目 ID，废弃参数，填写0即可。
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取子服务类型。2： 一句话识别。
                     * @return SubServiceType 子服务类型。2： 一句话识别。
                     */
                    uint64_t GetSubServiceType() const;

                    /**
                     * 设置子服务类型。2： 一句话识别。
                     * @param SubServiceType 子服务类型。2： 一句话识别。
                     */
                    void SetSubServiceType(const uint64_t& _subServiceType);

                    /**
                     * 判断参数 SubServiceType 是否已赋值
                     * @return SubServiceType 是否已赋值
                     */
                    bool SubServiceTypeHasBeenSet() const;

                    /**
                     * 获取引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_vi：16k 越南语；
• 16k_ms：16k 马来语；
• 16k_id：16k 印度尼西亚语；
• 16k_zh_medical：16k 医疗；
• 16k_zh-PY 中英粤;
• 16k_zh_dialect：多方言，支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
                     * @return EngSerViceType 引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_vi：16k 越南语；
• 16k_ms：16k 马来语；
• 16k_id：16k 印度尼西亚语；
• 16k_zh_medical：16k 医疗；
• 16k_zh-PY 中英粤;
• 16k_zh_dialect：多方言，支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
                     */
                    std::string GetEngSerViceType() const;

                    /**
                     * 设置引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_vi：16k 越南语；
• 16k_ms：16k 马来语；
• 16k_id：16k 印度尼西亚语；
• 16k_zh_medical：16k 医疗；
• 16k_zh-PY 中英粤;
• 16k_zh_dialect：多方言，支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
                     * @param EngSerViceType 引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_vi：16k 越南语；
• 16k_ms：16k 马来语；
• 16k_id：16k 印度尼西亚语；
• 16k_zh_medical：16k 医疗；
• 16k_zh-PY 中英粤;
• 16k_zh_dialect：多方言，支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
                     */
                    void SetEngSerViceType(const std::string& _engSerViceType);

                    /**
                     * 判断参数 EngSerViceType 是否已赋值
                     * @return EngSerViceType 是否已赋值
                     */
                    bool EngSerViceTypeHasBeenSet() const;

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
                     * 获取识别音频的音频格式，支持wav、pcm、ogg-opus、speex、silk、mp3、m4a、aac。
                     * @return VoiceFormat 识别音频的音频格式，支持wav、pcm、ogg-opus、speex、silk、mp3、m4a、aac。
                     */
                    std::string GetVoiceFormat() const;

                    /**
                     * 设置识别音频的音频格式，支持wav、pcm、ogg-opus、speex、silk、mp3、m4a、aac。
                     * @param VoiceFormat 识别音频的音频格式，支持wav、pcm、ogg-opus、speex、silk、mp3、m4a、aac。
                     */
                    void SetVoiceFormat(const std::string& _voiceFormat);

                    /**
                     * 判断参数 VoiceFormat 是否已赋值
                     * @return VoiceFormat 是否已赋值
                     */
                    bool VoiceFormatHasBeenSet() const;

                    /**
                     * 获取废弃参数，填写任意字符串即可。
                     * @return UsrAudioKey 废弃参数，填写任意字符串即可。
                     */
                    std::string GetUsrAudioKey() const;

                    /**
                     * 设置废弃参数，填写任意字符串即可。
                     * @param UsrAudioKey 废弃参数，填写任意字符串即可。
                     */
                    void SetUsrAudioKey(const std::string& _usrAudioKey);

                    /**
                     * 判断参数 UsrAudioKey 是否已赋值
                     * @return UsrAudioKey 是否已赋值
                     */
                    bool UsrAudioKeyHasBeenSet() const;

                    /**
                     * 获取语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0时须填写该字段，为 1 时不填。音频时长不能超过60s，音频文件大小不能超过3MB。
                     * @return Url 语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0时须填写该字段，为 1 时不填。音频时长不能超过60s，音频文件大小不能超过3MB。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0时须填写该字段，为 1 时不填。音频时长不能超过60s，音频文件大小不能超过3MB。
                     * @param Url 语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0时须填写该字段，为 1 时不填。音频时长不能超过60s，音频文件大小不能超过3MB。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取语音数据，当SourceType 值为1（本地语音数据上传）时必须填写，当SourceType 值为0（语音 URL上传）可不写。要使用base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频时长不能超过60s，音频文件大小不能超过3MB（Base64后）。
                     * @return Data 语音数据，当SourceType 值为1（本地语音数据上传）时必须填写，当SourceType 值为0（语音 URL上传）可不写。要使用base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频时长不能超过60s，音频文件大小不能超过3MB（Base64后）。
                     */
                    std::string GetData() const;

                    /**
                     * 设置语音数据，当SourceType 值为1（本地语音数据上传）时必须填写，当SourceType 值为0（语音 URL上传）可不写。要使用base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频时长不能超过60s，音频文件大小不能超过3MB（Base64后）。
                     * @param Data 语音数据，当SourceType 值为1（本地语音数据上传）时必须填写，当SourceType 值为0（语音 URL上传）可不写。要使用base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频时长不能超过60s，音频文件大小不能超过3MB（Base64后）。
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取数据长度，单位为字节。当 SourceType 值为1（本地语音数据上传）时必须填写，当 SourceType 值为0（语音 URL上传）可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     * @return DataLen 数据长度，单位为字节。当 SourceType 值为1（本地语音数据上传）时必须填写，当 SourceType 值为0（语音 URL上传）可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    int64_t GetDataLen() const;

                    /**
                     * 设置数据长度，单位为字节。当 SourceType 值为1（本地语音数据上传）时必须填写，当 SourceType 值为0（语音 URL上传）可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     * @param DataLen 数据长度，单位为字节。当 SourceType 值为1（本地语音数据上传）时必须填写，当 SourceType 值为0（语音 URL上传）可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    void SetDataLen(const int64_t& _dataLen);

                    /**
                     * 判断参数 DataLen 是否已赋值
                     * @return DataLen 是否已赋值
                     */
                    bool DataLenHasBeenSet() const;

                    /**
                     * 获取是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认值为 0。
                     * @return WordInfo 是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认值为 0。
                     */
                    int64_t GetWordInfo() const;

                    /**
                     * 设置是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认值为 0。
                     * @param WordInfo 是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认值为 0。
                     */
                    void SetWordInfo(const int64_t& _wordInfo);

                    /**
                     * 判断参数 WordInfo 是否已赋值
                     * @return WordInfo 是否已赋值
                     */
                    bool WordInfoHasBeenSet() const;

                    /**
                     * 获取是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
                     * @return FilterDirty 是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
                     */
                    int64_t GetFilterDirty() const;

                    /**
                     * 设置是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
                     * @param FilterDirty 是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
                     */
                    void SetFilterDirty(const int64_t& _filterDirty);

                    /**
                     * 判断参数 FilterDirty 是否已赋值
                     * @return FilterDirty 是否已赋值
                     */
                    bool FilterDirtyHasBeenSet() const;

                    /**
                     * 获取是否过语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     * @return FilterModal 是否过语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     */
                    int64_t GetFilterModal() const;

                    /**
                     * 设置是否过语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     * @param FilterModal 是否过语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     */
                    void SetFilterModal(const int64_t& _filterModal);

                    /**
                     * 判断参数 FilterModal 是否已赋值
                     * @return FilterModal 是否已赋值
                     */
                    bool FilterModalHasBeenSet() const;

                    /**
                     * 获取是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
                     * @return FilterPunc 是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
                     */
                    int64_t GetFilterPunc() const;

                    /**
                     * 设置是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
                     * @param FilterPunc 是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
                     */
                    void SetFilterPunc(const int64_t& _filterPunc);

                    /**
                     * 判断参数 FilterPunc 是否已赋值
                     * @return FilterPunc 是否已赋值
                     */
                    bool FilterPuncHasBeenSet() const;

                    /**
                     * 获取是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1。
                     * @return ConvertNumMode 是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1。
                     */
                    int64_t GetConvertNumMode() const;

                    /**
                     * 设置是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1。
                     * @param ConvertNumMode 是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1。
                     */
                    void SetConvertNumMode(const int64_t& _convertNumMode);

                    /**
                     * 判断参数 ConvertNumMode 是否已赋值
                     * @return ConvertNumMode 是否已赋值
                     */
                    bool ConvertNumModeHasBeenSet() const;

                    /**
                     * 获取热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     * @return HotwordId 热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     */
                    std::string GetHotwordId() const;

                    /**
                     * 设置热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     * @param HotwordId 热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     */
                    void SetHotwordId(const std::string& _hotwordId);

                    /**
                     * 判断参数 HotwordId 是否已赋值
                     * @return HotwordId 是否已赋值
                     */
                    bool HotwordIdHasBeenSet() const;

                    /**
                     * 获取自学习模型 id。如设置了该参数，将生效对应的自学习模型。
                     * @return CustomizationId 自学习模型 id。如设置了该参数，将生效对应的自学习模型。
                     */
                    std::string GetCustomizationId() const;

                    /**
                     * 设置自学习模型 id。如设置了该参数，将生效对应的自学习模型。
                     * @param CustomizationId 自学习模型 id。如设置了该参数，将生效对应的自学习模型。
                     */
                    void SetCustomizationId(const std::string& _customizationId);

                    /**
                     * 判断参数 CustomizationId 是否已赋值
                     * @return CustomizationId 是否已赋值
                     */
                    bool CustomizationIdHasBeenSet() const;

                    /**
                     * 获取热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”、“蜜汁”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     * @return ReinforceHotword 热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”、“蜜汁”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     */
                    int64_t GetReinforceHotword() const;

                    /**
                     * 设置热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”、“蜜汁”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     * @param ReinforceHotword 热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”、“蜜汁”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     */
                    void SetReinforceHotword(const int64_t& _reinforceHotword);

                    /**
                     * 判断参数 ReinforceHotword 是否已赋值
                     * @return ReinforceHotword 是否已赋值
                     */
                    bool ReinforceHotwordHasBeenSet() const;

                private:

                    /**
                     * 腾讯云项目 ID，废弃参数，填写0即可。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 子服务类型。2： 一句话识别。
                     */
                    uint64_t m_subServiceType;
                    bool m_subServiceTypeHasBeenSet;

                    /**
                     * 引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_vi：16k 越南语；
• 16k_ms：16k 马来语；
• 16k_id：16k 印度尼西亚语；
• 16k_zh_medical：16k 医疗；
• 16k_zh-PY 中英粤;
• 16k_zh_dialect：多方言，支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
                     */
                    std::string m_engSerViceType;
                    bool m_engSerViceTypeHasBeenSet;

                    /**
                     * 语音数据来源。0：语音 URL；1：语音数据（post body）。
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 识别音频的音频格式，支持wav、pcm、ogg-opus、speex、silk、mp3、m4a、aac。
                     */
                    std::string m_voiceFormat;
                    bool m_voiceFormatHasBeenSet;

                    /**
                     * 废弃参数，填写任意字符串即可。
                     */
                    std::string m_usrAudioKey;
                    bool m_usrAudioKeyHasBeenSet;

                    /**
                     * 语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0时须填写该字段，为 1 时不填。音频时长不能超过60s，音频文件大小不能超过3MB。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 语音数据，当SourceType 值为1（本地语音数据上传）时必须填写，当SourceType 值为0（语音 URL上传）可不写。要使用base64编码(采用python语言时注意读取文件应该为string而不是byte，以byte格式读取后要decode()。编码后的数据不可带有回车换行符)。音频时长不能超过60s，音频文件大小不能超过3MB（Base64后）。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 数据长度，单位为字节。当 SourceType 值为1（本地语音数据上传）时必须填写，当 SourceType 值为0（语音 URL上传）可不写（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    int64_t m_dataLen;
                    bool m_dataLenHasBeenSet;

                    /**
                     * 是否显示词级别时间戳。0：不显示；1：显示，不包含标点时间戳，2：显示，包含标点时间戳。默认值为 0。
                     */
                    int64_t m_wordInfo;
                    bool m_wordInfoHasBeenSet;

                    /**
                     * 是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
                     */
                    int64_t m_filterDirty;
                    bool m_filterDirtyHasBeenSet;

                    /**
                     * 是否过语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     */
                    int64_t m_filterModal;
                    bool m_filterModalHasBeenSet;

                    /**
                     * 是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
                     */
                    int64_t m_filterPunc;
                    bool m_filterPuncHasBeenSet;

                    /**
                     * 是否进行阿拉伯数字智能转换。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字。默认值为1。
                     */
                    int64_t m_convertNumMode;
                    bool m_convertNumModeHasBeenSet;

                    /**
                     * 热词id。用于调用对应的热词表，如果在调用语音识别服务时，不进行单独的热词id设置，自动生效默认热词；如果进行了单独的热词id设置，那么将生效单独设置的热词id。
                     */
                    std::string m_hotwordId;
                    bool m_hotwordIdHasBeenSet;

                    /**
                     * 自学习模型 id。如设置了该参数，将生效对应的自学习模型。
                     */
                    std::string m_customizationId;
                    bool m_customizationIdHasBeenSet;

                    /**
                     * 热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”、“蜜汁”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     */
                    int64_t m_reinforceHotword;
                    bool m_reinforceHotwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SENTENCERECOGNITIONREQUEST_H_
