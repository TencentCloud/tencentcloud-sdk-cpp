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
                     * 获取引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_zh_video：16k 音视频领域；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_zh_edu 中文教育；
• 16k_en_edu 英文教育；
• 16k_zh_medical  医疗；
• 16k_th 泰语；
• 16k_wuu-SH：16k 上海话方言；
• 16k_zh_dialect：多方言。
                     * @return EngineModelType 引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_zh_video：16k 音视频领域；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_zh_edu 中文教育；
• 16k_en_edu 英文教育；
• 16k_zh_medical  医疗；
• 16k_th 泰语；
• 16k_wuu-SH：16k 上海话方言；
• 16k_zh_dialect：多方言。
                     */
                    std::string GetEngineModelType() const;

                    /**
                     * 设置引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_zh_video：16k 音视频领域；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_zh_edu 中文教育；
• 16k_en_edu 英文教育；
• 16k_zh_medical  医疗；
• 16k_th 泰语；
• 16k_wuu-SH：16k 上海话方言；
• 16k_zh_dialect：多方言。
                     * @param EngineModelType 引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_zh_video：16k 音视频领域；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_zh_edu 中文教育；
• 16k_en_edu 英文教育；
• 16k_zh_medical  医疗；
• 16k_th 泰语；
• 16k_wuu-SH：16k 上海话方言；
• 16k_zh_dialect：多方言。
                     */
                    void SetEngineModelType(const std::string& _engineModelType);

                    /**
                     * 判断参数 EngineModelType 是否已赋值
                     * @return EngineModelType 是否已赋值
                     */
                    bool EngineModelTypeHasBeenSet() const;

                    /**
                     * 获取识别声道数。1：单声道（非电话场景，直接选择单声道即可，忽略音频声道数）；2：双声道（仅支持8k_zh电话场景，双声道应分别对应通话双方）。注意：双声道的电话音频已物理分离说话人，无需再开启说话人分离功能。
                     * @return ChannelNum 识别声道数。1：单声道（非电话场景，直接选择单声道即可，忽略音频声道数）；2：双声道（仅支持8k_zh电话场景，双声道应分别对应通话双方）。注意：双声道的电话音频已物理分离说话人，无需再开启说话人分离功能。
                     */
                    uint64_t GetChannelNum() const;

                    /**
                     * 设置识别声道数。1：单声道（非电话场景，直接选择单声道即可，忽略音频声道数）；2：双声道（仅支持8k_zh电话场景，双声道应分别对应通话双方）。注意：双声道的电话音频已物理分离说话人，无需再开启说话人分离功能。
                     * @param ChannelNum 识别声道数。1：单声道（非电话场景，直接选择单声道即可，忽略音频声道数）；2：双声道（仅支持8k_zh电话场景，双声道应分别对应通话双方）。注意：双声道的电话音频已物理分离说话人，无需再开启说话人分离功能。
                     */
                    void SetChannelNum(const uint64_t& _channelNum);

                    /**
                     * 判断参数 ChannelNum 是否已赋值
                     * @return ChannelNum 是否已赋值
                     */
                    bool ChannelNumHasBeenSet() const;

                    /**
                     * 获取识别结果返回形式。0： 识别结果文本(含分段时间戳)； 1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；2：词级别粒度的详细识别结果（包含标点、语速值）
                     * @return ResTextFormat 识别结果返回形式。0： 识别结果文本(含分段时间戳)； 1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；2：词级别粒度的详细识别结果（包含标点、语速值）
                     */
                    uint64_t GetResTextFormat() const;

                    /**
                     * 设置识别结果返回形式。0： 识别结果文本(含分段时间戳)； 1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；2：词级别粒度的详细识别结果（包含标点、语速值）
                     * @param ResTextFormat 识别结果返回形式。0： 识别结果文本(含分段时间戳)； 1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；2：词级别粒度的详细识别结果（包含标点、语速值）
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
                     * 获取是否开启说话人分离，0：不开启，1：开启(仅支持8k_zh，16k_zh，16k_zh_video，单声道音频)，默认值为 0。
注意：8k电话场景建议使用双声道来区分通话双方，设置ChannelNum=2即可，不用开启说话人分离。
                     * @return SpeakerDiarization 是否开启说话人分离，0：不开启，1：开启(仅支持8k_zh，16k_zh，16k_zh_video，单声道音频)，默认值为 0。
注意：8k电话场景建议使用双声道来区分通话双方，设置ChannelNum=2即可，不用开启说话人分离。
                     */
                    int64_t GetSpeakerDiarization() const;

                    /**
                     * 设置是否开启说话人分离，0：不开启，1：开启(仅支持8k_zh，16k_zh，16k_zh_video，单声道音频)，默认值为 0。
注意：8k电话场景建议使用双声道来区分通话双方，设置ChannelNum=2即可，不用开启说话人分离。
                     * @param SpeakerDiarization 是否开启说话人分离，0：不开启，1：开启(仅支持8k_zh，16k_zh，16k_zh_video，单声道音频)，默认值为 0。
注意：8k电话场景建议使用双声道来区分通话双方，设置ChannelNum=2即可，不用开启说话人分离。
                     */
                    void SetSpeakerDiarization(const int64_t& _speakerDiarization);

                    /**
                     * 判断参数 SpeakerDiarization 是否已赋值
                     * @return SpeakerDiarization 是否已赋值
                     */
                    bool SpeakerDiarizationHasBeenSet() const;

                    /**
                     * 获取说话人分离人数（需配合开启说话人分离使用），取值范围：0-10，0代表自动分离（目前仅支持≤6个人），1-10代表指定说话人数分离。默认值为 0。
注：话者分离目前是beta版本，请根据您的需要谨慎使用
                     * @return SpeakerNumber 说话人分离人数（需配合开启说话人分离使用），取值范围：0-10，0代表自动分离（目前仅支持≤6个人），1-10代表指定说话人数分离。默认值为 0。
注：话者分离目前是beta版本，请根据您的需要谨慎使用
                     */
                    int64_t GetSpeakerNumber() const;

                    /**
                     * 设置说话人分离人数（需配合开启说话人分离使用），取值范围：0-10，0代表自动分离（目前仅支持≤6个人），1-10代表指定说话人数分离。默认值为 0。
注：话者分离目前是beta版本，请根据您的需要谨慎使用
                     * @param SpeakerNumber 说话人分离人数（需配合开启说话人分离使用），取值范围：0-10，0代表自动分离（目前仅支持≤6个人），1-10代表指定说话人数分离。默认值为 0。
注：话者分离目前是beta版本，请根据您的需要谨慎使用
                     */
                    void SetSpeakerNumber(const int64_t& _speakerNumber);

                    /**
                     * 判断参数 SpeakerNumber 是否已赋值
                     * @return SpeakerNumber 是否已赋值
                     */
                    bool SpeakerNumberHasBeenSet() const;

                    /**
                     * 获取回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。回调格式&内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
                     * @return CallbackUrl 回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。回调格式&内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。回调格式&内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
                     * @param CallbackUrl 回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。回调格式&内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取语音的URL地址，需要公网可下载。长度小于2048字节，当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     * @return Url 语音的URL地址，需要公网可下载。长度小于2048字节，当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置语音的URL地址，需要公网可下载。长度小于2048字节，当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     * @param Url 语音的URL地址，需要公网可下载。长度小于2048字节，当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取语音数据base64编码，当SourceType 值为1时必须填写，为0可不写。音频数据要小于5MB。
                     * @return Data 语音数据base64编码，当SourceType 值为1时必须填写，为0可不写。音频数据要小于5MB。
                     */
                    std::string GetData() const;

                    /**
                     * 设置语音数据base64编码，当SourceType 值为1时必须填写，为0可不写。音频数据要小于5MB。
                     * @param Data 语音数据base64编码，当SourceType 值为1时必须填写，为0可不写。音频数据要小于5MB。
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取数据长度，非必填（此数据长度为数据未进行base64编码时的数据长度）。
                     * @return DataLen 数据长度，非必填（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    uint64_t GetDataLen() const;

                    /**
                     * 设置数据长度，非必填（此数据长度为数据未进行base64编码时的数据长度）。
                     * @param DataLen 数据长度，非必填（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    void SetDataLen(const uint64_t& _dataLen);

                    /**
                     * 判断参数 DataLen 是否已赋值
                     * @return DataLen 是否已赋值
                     */
                    bool DataLenHasBeenSet() const;

                    /**
                     * 获取是否进行阿拉伯数字智能转换（目前支持中文普通话引擎）。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字，3: 打开数学相关数字转换。默认值为 1。
                     * @return ConvertNumMode 是否进行阿拉伯数字智能转换（目前支持中文普通话引擎）。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字，3: 打开数学相关数字转换。默认值为 1。
                     */
                    int64_t GetConvertNumMode() const;

                    /**
                     * 设置是否进行阿拉伯数字智能转换（目前支持中文普通话引擎）。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字，3: 打开数学相关数字转换。默认值为 1。
                     * @param ConvertNumMode 是否进行阿拉伯数字智能转换（目前支持中文普通话引擎）。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字，3: 打开数学相关数字转换。默认值为 1。
                     */
                    void SetConvertNumMode(const int64_t& _convertNumMode);

                    /**
                     * 判断参数 ConvertNumMode 是否已赋值
                     * @return ConvertNumMode 是否已赋值
                     */
                    bool ConvertNumModeHasBeenSet() const;

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
                     * 获取热词表id。如不设置该参数，自动生效默认热词表；如果设置了该参数，那么将生效对应的热词表。
                     * @return HotwordId 热词表id。如不设置该参数，自动生效默认热词表；如果设置了该参数，那么将生效对应的热词表。
                     */
                    std::string GetHotwordId() const;

                    /**
                     * 设置热词表id。如不设置该参数，自动生效默认热词表；如果设置了该参数，那么将生效对应的热词表。
                     * @param HotwordId 热词表id。如不设置该参数，自动生效默认热词表；如果设置了该参数，那么将生效对应的热词表。
                     */
                    void SetHotwordId(const std::string& _hotwordId);

                    /**
                     * 判断参数 HotwordId 是否已赋值
                     * @return HotwordId 是否已赋值
                     */
                    bool HotwordIdHasBeenSet() const;

                    /**
                     * 获取自学习模型 id。如不设置该参数，自动生效最后一次上线的自学习模型；如果设置了该参数，那么将生效对应的自学习模型。
                     * @return CustomizationId 自学习模型 id。如不设置该参数，自动生效最后一次上线的自学习模型；如果设置了该参数，那么将生效对应的自学习模型。
                     */
                    std::string GetCustomizationId() const;

                    /**
                     * 设置自学习模型 id。如不设置该参数，自动生效最后一次上线的自学习模型；如果设置了该参数，那么将生效对应的自学习模型。
                     * @param CustomizationId 自学习模型 id。如不设置该参数，自动生效最后一次上线的自学习模型；如果设置了该参数，那么将生效对应的自学习模型。
                     */
                    void SetCustomizationId(const std::string& _customizationId);

                    /**
                     * 判断参数 CustomizationId 是否已赋值
                     * @return CustomizationId 是否已赋值
                     */
                    bool CustomizationIdHasBeenSet() const;

                    /**
                     * 获取附加参数(该参数无意义，忽略即可)
                     * @return Extra 附加参数(该参数无意义，忽略即可)
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置附加参数(该参数无意义，忽略即可)
                     * @param Extra 附加参数(该参数无意义，忽略即可)
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

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
                     * 获取是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     * @return FilterModal 是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     */
                    int64_t GetFilterModal() const;

                    /**
                     * 设置是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     * @param FilterModal 是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     */
                    void SetFilterModal(const int64_t& _filterModal);

                    /**
                     * 判断参数 FilterModal 是否已赋值
                     * @return FilterModal 是否已赋值
                     */
                    bool FilterModalHasBeenSet() const;

                private:

                    /**
                     * 引擎模型类型。
电话场景：
• 8k_en：电话 8k 英语；
• 8k_zh：电话 8k 中文普通话通用；
非电话场景：
• 16k_zh：16k 中文普通话通用；
• 16k_zh_video：16k 音视频领域；
• 16k_en：16k 英语；
• 16k_ca：16k 粤语；
• 16k_ja：16k 日语；
• 16k_zh_edu 中文教育；
• 16k_en_edu 英文教育；
• 16k_zh_medical  医疗；
• 16k_th 泰语；
• 16k_wuu-SH：16k 上海话方言；
• 16k_zh_dialect：多方言。
                     */
                    std::string m_engineModelType;
                    bool m_engineModelTypeHasBeenSet;

                    /**
                     * 识别声道数。1：单声道（非电话场景，直接选择单声道即可，忽略音频声道数）；2：双声道（仅支持8k_zh电话场景，双声道应分别对应通话双方）。注意：双声道的电话音频已物理分离说话人，无需再开启说话人分离功能。
                     */
                    uint64_t m_channelNum;
                    bool m_channelNumHasBeenSet;

                    /**
                     * 识别结果返回形式。0： 识别结果文本(含分段时间戳)； 1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；2：词级别粒度的详细识别结果（包含标点、语速值）
                     */
                    uint64_t m_resTextFormat;
                    bool m_resTextFormatHasBeenSet;

                    /**
                     * 语音数据来源。0：语音 URL；1：语音数据（post body）。
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 是否开启说话人分离，0：不开启，1：开启(仅支持8k_zh，16k_zh，16k_zh_video，单声道音频)，默认值为 0。
注意：8k电话场景建议使用双声道来区分通话双方，设置ChannelNum=2即可，不用开启说话人分离。
                     */
                    int64_t m_speakerDiarization;
                    bool m_speakerDiarizationHasBeenSet;

                    /**
                     * 说话人分离人数（需配合开启说话人分离使用），取值范围：0-10，0代表自动分离（目前仅支持≤6个人），1-10代表指定说话人数分离。默认值为 0。
注：话者分离目前是beta版本，请根据您的需要谨慎使用
                     */
                    int64_t m_speakerNumber;
                    bool m_speakerNumberHasBeenSet;

                    /**
                     * 回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。回调格式&内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 语音的URL地址，需要公网可下载。长度小于2048字节，当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 语音数据base64编码，当SourceType 值为1时必须填写，为0可不写。音频数据要小于5MB。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 数据长度，非必填（此数据长度为数据未进行base64编码时的数据长度）。
                     */
                    uint64_t m_dataLen;
                    bool m_dataLenHasBeenSet;

                    /**
                     * 是否进行阿拉伯数字智能转换（目前支持中文普通话引擎）。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字，3: 打开数学相关数字转换。默认值为 1。
                     */
                    int64_t m_convertNumMode;
                    bool m_convertNumModeHasBeenSet;

                    /**
                     * 是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
                     */
                    int64_t m_filterDirty;
                    bool m_filterDirtyHasBeenSet;

                    /**
                     * 热词表id。如不设置该参数，自动生效默认热词表；如果设置了该参数，那么将生效对应的热词表。
                     */
                    std::string m_hotwordId;
                    bool m_hotwordIdHasBeenSet;

                    /**
                     * 自学习模型 id。如不设置该参数，自动生效最后一次上线的自学习模型；如果设置了该参数，那么将生效对应的自学习模型。
                     */
                    std::string m_customizationId;
                    bool m_customizationIdHasBeenSet;

                    /**
                     * 附加参数(该参数无意义，忽略即可)
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
                     */
                    int64_t m_filterPunc;
                    bool m_filterPuncHasBeenSet;

                    /**
                     * 是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     */
                    int64_t m_filterModal;
                    bool m_filterModalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKREQUEST_H_
