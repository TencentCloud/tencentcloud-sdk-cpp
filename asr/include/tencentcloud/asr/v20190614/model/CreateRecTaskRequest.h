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
                     * 获取引擎模型类型

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**。

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• 16k_zh：中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• 16k_zh-PY：中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• 16k_zh_dialect：中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_ja：日语；
• 16k_ko：韩语；
• 16k_vi：越南语；
• 16k_ms：马来语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_zh_medical：中文医疗引擎
                     * @return EngineModelType 引擎模型类型

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**。

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• 16k_zh：中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• 16k_zh-PY：中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• 16k_zh_dialect：中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_ja：日语；
• 16k_ko：韩语；
• 16k_vi：越南语；
• 16k_ms：马来语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_zh_medical：中文医疗引擎
                     * 
                     */
                    std::string GetEngineModelType() const;

                    /**
                     * 设置引擎模型类型

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**。

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• 16k_zh：中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• 16k_zh-PY：中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• 16k_zh_dialect：中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_ja：日语；
• 16k_ko：韩语；
• 16k_vi：越南语；
• 16k_ms：马来语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_zh_medical：中文医疗引擎
                     * @param _engineModelType 引擎模型类型

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**。

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• 16k_zh：中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• 16k_zh-PY：中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• 16k_zh_dialect：中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_ja：日语；
• 16k_ko：韩语；
• 16k_vi：越南语；
• 16k_ms：马来语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_zh_medical：中文医疗引擎
                     * 
                     */
                    void SetEngineModelType(const std::string& _engineModelType);

                    /**
                     * 判断参数 EngineModelType 是否已赋值
                     * @return EngineModelType 是否已赋值
                     * 
                     */
                    bool EngineModelTypeHasBeenSet() const;

                    /**
                     * 获取识别声道数
1：单声道（16k音频仅支持单声道，**请勿**设置为双声道）；
2：双声道（仅支持8k电话音频，且双声道应分别为通话双方）

注意：
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可
                     * @return ChannelNum 识别声道数
1：单声道（16k音频仅支持单声道，**请勿**设置为双声道）；
2：双声道（仅支持8k电话音频，且双声道应分别为通话双方）

注意：
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可
                     * 
                     */
                    uint64_t GetChannelNum() const;

                    /**
                     * 设置识别声道数
1：单声道（16k音频仅支持单声道，**请勿**设置为双声道）；
2：双声道（仅支持8k电话音频，且双声道应分别为通话双方）

注意：
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可
                     * @param _channelNum 识别声道数
1：单声道（16k音频仅支持单声道，**请勿**设置为双声道）；
2：双声道（仅支持8k电话音频，且双声道应分别为通话双方）

注意：
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可
                     * 
                     */
                    void SetChannelNum(const uint64_t& _channelNum);

                    /**
                     * 判断参数 ChannelNum 是否已赋值
                     * @return ChannelNum 是否已赋值
                     * 
                     */
                    bool ChannelNumHasBeenSet() const;

                    /**
                     * 获取识别结果返回形式
0： 识别结果文本(含分段时间戳)；
1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；
2：词级别粒度的详细识别结果（包含标点、语速值）；
3: 标点符号分段，包含每段时间戳，特别适用于字幕场景（包含词级时间、标点、语速值）
4：【增值付费功能】对识别结果按照语义分段，并展示词级别粒度的详细识别结果，仅支持8k_zh、16k_zh引擎，需购买对应资源包使用（注意：如果账号后付费功能开启并使用此功能，将[自动计费](https://cloud.tencent.com/document/product/1093/35686)）
                     * @return ResTextFormat 识别结果返回形式
0： 识别结果文本(含分段时间戳)；
1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；
2：词级别粒度的详细识别结果（包含标点、语速值）；
3: 标点符号分段，包含每段时间戳，特别适用于字幕场景（包含词级时间、标点、语速值）
4：【增值付费功能】对识别结果按照语义分段，并展示词级别粒度的详细识别结果，仅支持8k_zh、16k_zh引擎，需购买对应资源包使用（注意：如果账号后付费功能开启并使用此功能，将[自动计费](https://cloud.tencent.com/document/product/1093/35686)）
                     * 
                     */
                    uint64_t GetResTextFormat() const;

                    /**
                     * 设置识别结果返回形式
0： 识别结果文本(含分段时间戳)；
1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；
2：词级别粒度的详细识别结果（包含标点、语速值）；
3: 标点符号分段，包含每段时间戳，特别适用于字幕场景（包含词级时间、标点、语速值）
4：【增值付费功能】对识别结果按照语义分段，并展示词级别粒度的详细识别结果，仅支持8k_zh、16k_zh引擎，需购买对应资源包使用（注意：如果账号后付费功能开启并使用此功能，将[自动计费](https://cloud.tencent.com/document/product/1093/35686)）
                     * @param _resTextFormat 识别结果返回形式
0： 识别结果文本(含分段时间戳)；
1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；
2：词级别粒度的详细识别结果（包含标点、语速值）；
3: 标点符号分段，包含每段时间戳，特别适用于字幕场景（包含词级时间、标点、语速值）
4：【增值付费功能】对识别结果按照语义分段，并展示词级别粒度的详细识别结果，仅支持8k_zh、16k_zh引擎，需购买对应资源包使用（注意：如果账号后付费功能开启并使用此功能，将[自动计费](https://cloud.tencent.com/document/product/1093/35686)）
                     * 
                     */
                    void SetResTextFormat(const uint64_t& _resTextFormat);

                    /**
                     * 判断参数 ResTextFormat 是否已赋值
                     * @return ResTextFormat 是否已赋值
                     * 
                     */
                    bool ResTextFormatHasBeenSet() const;

                    /**
                     * 获取语音数据来源
0：语音 URL；
1：语音数据（post body）
                     * @return SourceType 语音数据来源
0：语音 URL；
1：语音数据（post body）
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置语音数据来源
0：语音 URL；
1：语音数据（post body）
                     * @param _sourceType 语音数据来源
0：语音 URL；
1：语音数据（post body）
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
                     * 获取是否开启说话人分离
0：不开启；
1：开启（仅支持8k_zh/16k_zh，且ChannelNum=1时可用）；
默认值为 0

注意：
8k双声道电话音频请按 **ChannelNum 识别声道数** 的参数描述使用默认值
                     * @return SpeakerDiarization 是否开启说话人分离
0：不开启；
1：开启（仅支持8k_zh/16k_zh，且ChannelNum=1时可用）；
默认值为 0

注意：
8k双声道电话音频请按 **ChannelNum 识别声道数** 的参数描述使用默认值
                     * 
                     */
                    int64_t GetSpeakerDiarization() const;

                    /**
                     * 设置是否开启说话人分离
0：不开启；
1：开启（仅支持8k_zh/16k_zh，且ChannelNum=1时可用）；
默认值为 0

注意：
8k双声道电话音频请按 **ChannelNum 识别声道数** 的参数描述使用默认值
                     * @param _speakerDiarization 是否开启说话人分离
0：不开启；
1：开启（仅支持8k_zh/16k_zh，且ChannelNum=1时可用）；
默认值为 0

注意：
8k双声道电话音频请按 **ChannelNum 识别声道数** 的参数描述使用默认值
                     * 
                     */
                    void SetSpeakerDiarization(const int64_t& _speakerDiarization);

                    /**
                     * 判断参数 SpeakerDiarization 是否已赋值
                     * @return SpeakerDiarization 是否已赋值
                     * 
                     */
                    bool SpeakerDiarizationHasBeenSet() const;

                    /**
                     * 获取说话人分离人数
**需配合开启说话人分离使用，不开启无效**，取值范围：0-10
0：自动分离（最多分离出20个人）；
1-10：指定人数分离；
默认值为 0

注意：此功能结果仅供参考
                     * @return SpeakerNumber 说话人分离人数
**需配合开启说话人分离使用，不开启无效**，取值范围：0-10
0：自动分离（最多分离出20个人）；
1-10：指定人数分离；
默认值为 0

注意：此功能结果仅供参考
                     * 
                     */
                    int64_t GetSpeakerNumber() const;

                    /**
                     * 设置说话人分离人数
**需配合开启说话人分离使用，不开启无效**，取值范围：0-10
0：自动分离（最多分离出20个人）；
1-10：指定人数分离；
默认值为 0

注意：此功能结果仅供参考
                     * @param _speakerNumber 说话人分离人数
**需配合开启说话人分离使用，不开启无效**，取值范围：0-10
0：自动分离（最多分离出20个人）；
1-10：指定人数分离；
默认值为 0

注意：此功能结果仅供参考
                     * 
                     */
                    void SetSpeakerNumber(const int64_t& _speakerNumber);

                    /**
                     * 判断参数 SpeakerNumber 是否已赋值
                     * @return SpeakerNumber 是否已赋值
                     * 
                     */
                    bool SpeakerNumberHasBeenSet() const;

                    /**
                     * 获取回调 URL：用户自行搭建的用于接收识别结果的服务URL。回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
如果用户使用轮询方式获取识别结果，则无需提交该参数。
                     * @return CallbackUrl 回调 URL：用户自行搭建的用于接收识别结果的服务URL。回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
如果用户使用轮询方式获取识别结果，则无需提交该参数。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL：用户自行搭建的用于接收识别结果的服务URL。回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
如果用户使用轮询方式获取识别结果，则无需提交该参数。
                     * @param _callbackUrl 回调 URL：用户自行搭建的用于接收识别结果的服务URL。回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
如果用户使用轮询方式获取识别结果，则无需提交该参数。
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
                     * 获取语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     * @return Url 语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
                     * @param _url 语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
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
                     * 获取语音数据base64编码，当SourceType 值为1时必须填写，为0可不写。音频数据要小于5MB。
                     * @return Data 语音数据base64编码，当SourceType 值为1时必须填写，为0可不写。音频数据要小于5MB。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置语音数据base64编码，当SourceType 值为1时必须填写，为0可不写。音频数据要小于5MB。
                     * @param _data 语音数据base64编码，当SourceType 值为1时必须填写，为0可不写。音频数据要小于5MB。
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
                     * 获取数据长度，非必填（此数据长度为数据未进行base64编码时的数据长度）。
                     * @return DataLen 数据长度，非必填（此数据长度为数据未进行base64编码时的数据长度）。
                     * 
                     */
                    uint64_t GetDataLen() const;

                    /**
                     * 设置数据长度，非必填（此数据长度为数据未进行base64编码时的数据长度）。
                     * @param _dataLen 数据长度，非必填（此数据长度为数据未进行base64编码时的数据长度）。
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
                     * 获取是否进行阿拉伯数字智能转换（目前支持中文普通话引擎）。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字，3: 打开数学相关数字转换。默认值为 1。
                     * @return ConvertNumMode 是否进行阿拉伯数字智能转换（目前支持中文普通话引擎）。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字，3: 打开数学相关数字转换。默认值为 1。
                     * 
                     */
                    int64_t GetConvertNumMode() const;

                    /**
                     * 设置是否进行阿拉伯数字智能转换（目前支持中文普通话引擎）。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字，3: 打开数学相关数字转换。默认值为 1。
                     * @param _convertNumMode 是否进行阿拉伯数字智能转换（目前支持中文普通话引擎）。0：不转换，直接输出中文数字，1：根据场景智能转换为阿拉伯数字，3: 打开数学相关数字转换。默认值为 1。
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
                     * 获取是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
                     * @return FilterDirty 是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
                     * 
                     */
                    int64_t GetFilterDirty() const;

                    /**
                     * 设置是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
                     * @param _filterDirty 是否过滤脏词（目前支持中文普通话引擎）。0：不过滤脏词；1：过滤脏词；2：将脏词替换为 * 。默认值为 0。
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
                     * 获取热词表id。如不设置该参数，自动生效默认热词表；如设置了该参数，那么将生效对应的热词表。
                     * @return HotwordId 热词表id。如不设置该参数，自动生效默认热词表；如设置了该参数，那么将生效对应的热词表。
                     * 
                     */
                    std::string GetHotwordId() const;

                    /**
                     * 设置热词表id。如不设置该参数，自动生效默认热词表；如设置了该参数，那么将生效对应的热词表。
                     * @param _hotwordId 热词表id。如不设置该参数，自动生效默认热词表；如设置了该参数，那么将生效对应的热词表。
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
                     * 获取自学习模型 id。如设置了该参数，将生效对应的自学习模型。
                     * @return CustomizationId 自学习模型 id。如设置了该参数，将生效对应的自学习模型。
                     * 
                     */
                    std::string GetCustomizationId() const;

                    /**
                     * 设置自学习模型 id。如设置了该参数，将生效对应的自学习模型。
                     * @param _customizationId 自学习模型 id。如设置了该参数，将生效对应的自学习模型。
                     * 
                     */
                    void SetCustomizationId(const std::string& _customizationId);

                    /**
                     * 判断参数 CustomizationId 是否已赋值
                     * @return CustomizationId 是否已赋值
                     * 
                     */
                    bool CustomizationIdHasBeenSet() const;

                    /**
                     * 获取附加参数(该参数无意义，忽略即可)
                     * @return Extra 附加参数(该参数无意义，忽略即可)
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置附加参数(该参数无意义，忽略即可)
                     * @param _extra 附加参数(该参数无意义，忽略即可)
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
                     * @return FilterPunc 是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
                     * 
                     */
                    int64_t GetFilterPunc() const;

                    /**
                     * 设置是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
                     * @param _filterPunc 是否过滤标点符号（目前支持中文普通话引擎）。 0：不过滤，1：过滤句末标点，2：过滤所有标点。默认值为 0。
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
                     * 获取是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     * @return FilterModal 是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     * 
                     */
                    int64_t GetFilterModal() const;

                    /**
                     * 设置是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
                     * @param _filterModal 是否过滤语气词（目前支持中文普通话引擎）。0：不过滤语气词；1：部分过滤；2：严格过滤 。默认值为 0。
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
                     * 获取情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。0:不开启，1:开启
                     * @return EmotionalEnergy 情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。0:不开启，1:开启
                     * 
                     */
                    int64_t GetEmotionalEnergy() const;

                    /**
                     * 设置情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。0:不开启，1:开启
                     * @param _emotionalEnergy 情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。0:不开启，1:开启
                     * 
                     */
                    void SetEmotionalEnergy(const int64_t& _emotionalEnergy);

                    /**
                     * 判断参数 EmotionalEnergy 是否已赋值
                     * @return EmotionalEnergy 是否已赋值
                     * 
                     */
                    bool EmotionalEnergyHasBeenSet() const;

                    /**
                     * 获取热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     * @return ReinforceHotword 热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     * 
                     */
                    int64_t GetReinforceHotword() const;

                    /**
                     * 设置热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     * @param _reinforceHotword 热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     * 
                     */
                    void SetReinforceHotword(const int64_t& _reinforceHotword);

                    /**
                     * 判断参数 ReinforceHotword 是否已赋值
                     * @return ReinforceHotword 是否已赋值
                     * 
                     */
                    bool ReinforceHotwordHasBeenSet() const;

                    /**
                     * 获取单标点最多字数，取值范围：[6，40]。默认为0，不开启该功能。该参数可用于字幕生成场景，控制单行字幕最大字数（设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果）。
                     * @return SentenceMaxLength 单标点最多字数，取值范围：[6，40]。默认为0，不开启该功能。该参数可用于字幕生成场景，控制单行字幕最大字数（设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果）。
                     * 
                     */
                    int64_t GetSentenceMaxLength() const;

                    /**
                     * 设置单标点最多字数，取值范围：[6，40]。默认为0，不开启该功能。该参数可用于字幕生成场景，控制单行字幕最大字数（设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果）。
                     * @param _sentenceMaxLength 单标点最多字数，取值范围：[6，40]。默认为0，不开启该功能。该参数可用于字幕生成场景，控制单行字幕最大字数（设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果）。
                     * 
                     */
                    void SetSentenceMaxLength(const int64_t& _sentenceMaxLength);

                    /**
                     * 判断参数 SentenceMaxLength 是否已赋值
                     * @return SentenceMaxLength 是否已赋值
                     * 
                     */
                    bool SentenceMaxLengthHasBeenSet() const;

                    /**
                     * 获取情绪识别能力(目前支持16k_zh) 默认为0，不开启。 1：开启情绪识别但是不会在文本展示“情绪标签”， 2：开启情绪识别并且在文本展示“情绪标签”。（该功能需要设置ResTextFormat 大于0）
注意：本功能为增值服务，购买对应套餐包后，将参数设置为1或2时方可按对应方式生效，并消耗套餐包对应资源。参数设置为0时无需购买套餐包，也不会消耗对应资源。
                     * @return EmotionRecognition 情绪识别能力(目前支持16k_zh) 默认为0，不开启。 1：开启情绪识别但是不会在文本展示“情绪标签”， 2：开启情绪识别并且在文本展示“情绪标签”。（该功能需要设置ResTextFormat 大于0）
注意：本功能为增值服务，购买对应套餐包后，将参数设置为1或2时方可按对应方式生效，并消耗套餐包对应资源。参数设置为0时无需购买套餐包，也不会消耗对应资源。
                     * 
                     */
                    int64_t GetEmotionRecognition() const;

                    /**
                     * 设置情绪识别能力(目前支持16k_zh) 默认为0，不开启。 1：开启情绪识别但是不会在文本展示“情绪标签”， 2：开启情绪识别并且在文本展示“情绪标签”。（该功能需要设置ResTextFormat 大于0）
注意：本功能为增值服务，购买对应套餐包后，将参数设置为1或2时方可按对应方式生效，并消耗套餐包对应资源。参数设置为0时无需购买套餐包，也不会消耗对应资源。
                     * @param _emotionRecognition 情绪识别能力(目前支持16k_zh) 默认为0，不开启。 1：开启情绪识别但是不会在文本展示“情绪标签”， 2：开启情绪识别并且在文本展示“情绪标签”。（该功能需要设置ResTextFormat 大于0）
注意：本功能为增值服务，购买对应套餐包后，将参数设置为1或2时方可按对应方式生效，并消耗套餐包对应资源。参数设置为0时无需购买套餐包，也不会消耗对应资源。
                     * 
                     */
                    void SetEmotionRecognition(const int64_t& _emotionRecognition);

                    /**
                     * 判断参数 EmotionRecognition 是否已赋值
                     * @return EmotionRecognition 是否已赋值
                     * 
                     */
                    bool EmotionRecognitionHasBeenSet() const;

                private:

                    /**
                     * 引擎模型类型

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**。

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• 16k_zh：中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• 16k_zh-PY：中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• 16k_zh_dialect：中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• 16k_en：英语；
• 16k_yue：粤语；
• 16k_ja：日语；
• 16k_ko：韩语；
• 16k_vi：越南语；
• 16k_ms：马来语；
• 16k_id：印度尼西亚语；
• 16k_fil：菲律宾语；
• 16k_th：泰语；
• 16k_pt：葡萄牙语；
• 16k_tr：土耳其语；
• 16k_ar：阿拉伯语；
• 16k_es：西班牙语；
• 16k_hi：印地语；
• 16k_zh_medical：中文医疗引擎
                     */
                    std::string m_engineModelType;
                    bool m_engineModelTypeHasBeenSet;

                    /**
                     * 识别声道数
1：单声道（16k音频仅支持单声道，**请勿**设置为双声道）；
2：双声道（仅支持8k电话音频，且双声道应分别为通话双方）

注意：
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可
                     */
                    uint64_t m_channelNum;
                    bool m_channelNumHasBeenSet;

                    /**
                     * 识别结果返回形式
0： 识别结果文本(含分段时间戳)；
1：词级别粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)(不含标点，含语速值)；
2：词级别粒度的详细识别结果（包含标点、语速值）；
3: 标点符号分段，包含每段时间戳，特别适用于字幕场景（包含词级时间、标点、语速值）
4：【增值付费功能】对识别结果按照语义分段，并展示词级别粒度的详细识别结果，仅支持8k_zh、16k_zh引擎，需购买对应资源包使用（注意：如果账号后付费功能开启并使用此功能，将[自动计费](https://cloud.tencent.com/document/product/1093/35686)）
                     */
                    uint64_t m_resTextFormat;
                    bool m_resTextFormatHasBeenSet;

                    /**
                     * 语音数据来源
0：语音 URL；
1：语音数据（post body）
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 是否开启说话人分离
0：不开启；
1：开启（仅支持8k_zh/16k_zh，且ChannelNum=1时可用）；
默认值为 0

注意：
8k双声道电话音频请按 **ChannelNum 识别声道数** 的参数描述使用默认值
                     */
                    int64_t m_speakerDiarization;
                    bool m_speakerDiarizationHasBeenSet;

                    /**
                     * 说话人分离人数
**需配合开启说话人分离使用，不开启无效**，取值范围：0-10
0：自动分离（最多分离出20个人）；
1-10：指定人数分离；
默认值为 0

注意：此功能结果仅供参考
                     */
                    int64_t m_speakerNumber;
                    bool m_speakerNumberHasBeenSet;

                    /**
                     * 回调 URL：用户自行搭建的用于接收识别结果的服务URL。回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)
如果用户使用轮询方式获取识别结果，则无需提交该参数。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 语音的URL地址，需要公网环境浏览器可下载。当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写。注意：请确保录音文件时长在5个小时之内，否则可能识别失败。请保证文件的下载速度，否则可能下载失败。
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
                     * 热词表id。如不设置该参数，自动生效默认热词表；如设置了该参数，那么将生效对应的热词表。
                     */
                    std::string m_hotwordId;
                    bool m_hotwordIdHasBeenSet;

                    /**
                     * 自学习模型 id。如设置了该参数，将生效对应的自学习模型。
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

                    /**
                     * 情绪能量值，取值为音量分贝值/10。取值范围：[1,10]。值越高情绪越强烈。0:不开启，1:开启
                     */
                    int64_t m_emotionalEnergy;
                    bool m_emotionalEnergyHasBeenSet;

                    /**
                     * 热词增强功能。1:开启后（仅支持8k_zh,16k_zh），将开启同音替换功能，同音字、词在热词中配置。举例：热词配置“蜜制”并开启增强功能后，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。
                     */
                    int64_t m_reinforceHotword;
                    bool m_reinforceHotwordHasBeenSet;

                    /**
                     * 单标点最多字数，取值范围：[6，40]。默认为0，不开启该功能。该参数可用于字幕生成场景，控制单行字幕最大字数（设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果）。
                     */
                    int64_t m_sentenceMaxLength;
                    bool m_sentenceMaxLengthHasBeenSet;

                    /**
                     * 情绪识别能力(目前支持16k_zh) 默认为0，不开启。 1：开启情绪识别但是不会在文本展示“情绪标签”， 2：开启情绪识别并且在文本展示“情绪标签”。（该功能需要设置ResTextFormat 大于0）
注意：本功能为增值服务，购买对应套餐包后，将参数设置为1或2时方可按对应方式生效，并消耗套餐包对应资源。参数设置为0时无需购买套餐包，也不会消耗对应资源。
                     */
                    int64_t m_emotionRecognition;
                    bool m_emotionRecognitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKREQUEST_H_
