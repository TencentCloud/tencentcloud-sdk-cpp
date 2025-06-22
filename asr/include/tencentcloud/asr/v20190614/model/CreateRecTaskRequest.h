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
识别引擎采用分级计费方案，标记为“大模型版”的引擎适用大模型计费方案，[点击这里](https://cloud.tencent.com/document/product/1093/35686) 查看产品计费说明

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
• 8k_zh_large：中文电话场景专用大模型引擎。通过显著提升模型参数规模与语言建模能力，实现对电话音频中复杂场景（如口音干扰、背景噪声）的高精度识别，识别准确率较常规版本大幅提升。[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比常规版本与普方大模型效果；

注意：如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• **16k_zh：**中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• **16k_zh_large：**普方英大模型引擎【大模型版】。当前模型同时支持中文、英文、[多种中文方言](https://cloud.tencent.com/document/product/1093/35682)等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升，[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比中文普通话常规版本与普方英大模型版本的识别效果；
• **16k_multi_lang：**多语种大模型引擎【大模型版】。当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别)；
• **16k_zh_dialect：**中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• **16k_zh_en**：中英大模型引擎【大模型版】。当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升;
• **16k_en：**英语；
• **16k_yue：**粤语；
• **16k_zh-PY：**中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• **16k_zh-TW**：中文繁体；
• **16k_ja：**日语；
• **16k_ko：**韩语；
• **16k_vi：**越南语；
• **16k_ms：**马来语；
• **16k_id：**印度尼西亚语；
• **16k_fil：**菲律宾语；
• **16k_th：**泰语；
• **16k_pt：**葡萄牙语；
• **16k_tr：**土耳其语；
• **16k_ar：**阿拉伯语；
• **16k_es：**西班牙语；
• **16k_hi：**印地语；
• **16k_fr：**法语；
• **16k_zh_medical：**中文医疗引擎；
• **16k_de：**德语；
                     * @return EngineModelType 引擎模型类型
识别引擎采用分级计费方案，标记为“大模型版”的引擎适用大模型计费方案，[点击这里](https://cloud.tencent.com/document/product/1093/35686) 查看产品计费说明

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
• 8k_zh_large：中文电话场景专用大模型引擎。通过显著提升模型参数规模与语言建模能力，实现对电话音频中复杂场景（如口音干扰、背景噪声）的高精度识别，识别准确率较常规版本大幅提升。[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比常规版本与普方大模型效果；

注意：如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• **16k_zh：**中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• **16k_zh_large：**普方英大模型引擎【大模型版】。当前模型同时支持中文、英文、[多种中文方言](https://cloud.tencent.com/document/product/1093/35682)等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升，[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比中文普通话常规版本与普方英大模型版本的识别效果；
• **16k_multi_lang：**多语种大模型引擎【大模型版】。当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别)；
• **16k_zh_dialect：**中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• **16k_zh_en**：中英大模型引擎【大模型版】。当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升;
• **16k_en：**英语；
• **16k_yue：**粤语；
• **16k_zh-PY：**中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• **16k_zh-TW**：中文繁体；
• **16k_ja：**日语；
• **16k_ko：**韩语；
• **16k_vi：**越南语；
• **16k_ms：**马来语；
• **16k_id：**印度尼西亚语；
• **16k_fil：**菲律宾语；
• **16k_th：**泰语；
• **16k_pt：**葡萄牙语；
• **16k_tr：**土耳其语；
• **16k_ar：**阿拉伯语；
• **16k_es：**西班牙语；
• **16k_hi：**印地语；
• **16k_fr：**法语；
• **16k_zh_medical：**中文医疗引擎；
• **16k_de：**德语；
                     * 
                     */
                    std::string GetEngineModelType() const;

                    /**
                     * 设置引擎模型类型
识别引擎采用分级计费方案，标记为“大模型版”的引擎适用大模型计费方案，[点击这里](https://cloud.tencent.com/document/product/1093/35686) 查看产品计费说明

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
• 8k_zh_large：中文电话场景专用大模型引擎。通过显著提升模型参数规模与语言建模能力，实现对电话音频中复杂场景（如口音干扰、背景噪声）的高精度识别，识别准确率较常规版本大幅提升。[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比常规版本与普方大模型效果；

注意：如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• **16k_zh：**中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• **16k_zh_large：**普方英大模型引擎【大模型版】。当前模型同时支持中文、英文、[多种中文方言](https://cloud.tencent.com/document/product/1093/35682)等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升，[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比中文普通话常规版本与普方英大模型版本的识别效果；
• **16k_multi_lang：**多语种大模型引擎【大模型版】。当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别)；
• **16k_zh_dialect：**中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• **16k_zh_en**：中英大模型引擎【大模型版】。当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升;
• **16k_en：**英语；
• **16k_yue：**粤语；
• **16k_zh-PY：**中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• **16k_zh-TW**：中文繁体；
• **16k_ja：**日语；
• **16k_ko：**韩语；
• **16k_vi：**越南语；
• **16k_ms：**马来语；
• **16k_id：**印度尼西亚语；
• **16k_fil：**菲律宾语；
• **16k_th：**泰语；
• **16k_pt：**葡萄牙语；
• **16k_tr：**土耳其语；
• **16k_ar：**阿拉伯语；
• **16k_es：**西班牙语；
• **16k_hi：**印地语；
• **16k_fr：**法语；
• **16k_zh_medical：**中文医疗引擎；
• **16k_de：**德语；
                     * @param _engineModelType 引擎模型类型
识别引擎采用分级计费方案，标记为“大模型版”的引擎适用大模型计费方案，[点击这里](https://cloud.tencent.com/document/product/1093/35686) 查看产品计费说明

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
• 8k_zh_large：中文电话场景专用大模型引擎。通过显著提升模型参数规模与语言建模能力，实现对电话音频中复杂场景（如口音干扰、背景噪声）的高精度识别，识别准确率较常规版本大幅提升。[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比常规版本与普方大模型效果；

注意：如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• **16k_zh：**中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• **16k_zh_large：**普方英大模型引擎【大模型版】。当前模型同时支持中文、英文、[多种中文方言](https://cloud.tencent.com/document/product/1093/35682)等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升，[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比中文普通话常规版本与普方英大模型版本的识别效果；
• **16k_multi_lang：**多语种大模型引擎【大模型版】。当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别)；
• **16k_zh_dialect：**中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• **16k_zh_en**：中英大模型引擎【大模型版】。当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升;
• **16k_en：**英语；
• **16k_yue：**粤语；
• **16k_zh-PY：**中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• **16k_zh-TW**：中文繁体；
• **16k_ja：**日语；
• **16k_ko：**韩语；
• **16k_vi：**越南语；
• **16k_ms：**马来语；
• **16k_id：**印度尼西亚语；
• **16k_fil：**菲律宾语；
• **16k_th：**泰语；
• **16k_pt：**葡萄牙语；
• **16k_tr：**土耳其语；
• **16k_ar：**阿拉伯语；
• **16k_es：**西班牙语；
• **16k_hi：**印地语；
• **16k_fr：**法语；
• **16k_zh_medical：**中文医疗引擎；
• **16k_de：**德语；
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
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**；
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可，返回的ResultDetail中的speakerId的值为0代表左声道，值为1代表右声道。
                     * @return ChannelNum 识别声道数
1：单声道（16k音频仅支持单声道，**请勿**设置为双声道）；
2：双声道（仅支持8k电话音频，且双声道应分别为通话双方）

注意：
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**；
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可，返回的ResultDetail中的speakerId的值为0代表左声道，值为1代表右声道。
                     * 
                     */
                    uint64_t GetChannelNum() const;

                    /**
                     * 设置识别声道数
1：单声道（16k音频仅支持单声道，**请勿**设置为双声道）；
2：双声道（仅支持8k电话音频，且双声道应分别为通话双方）

注意：
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**；
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可，返回的ResultDetail中的speakerId的值为0代表左声道，值为1代表右声道。
                     * @param _channelNum 识别声道数
1：单声道（16k音频仅支持单声道，**请勿**设置为双声道）；
2：双声道（仅支持8k电话音频，且双声道应分别为通话双方）

注意：
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**；
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可，返回的ResultDetail中的speakerId的值为0代表左声道，值为1代表右声道。
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
                     * 获取识别结果返回样式
0：基础识别结果（仅包含有效人声时间戳，无词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)）；
1：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值，**不含标点**）；
2：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点）；
3：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按标点符号分段，**适用字幕场景**；
4：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按nlp语义分段，**适用会议、庭审记录转写等场景**，仅支持8k_zh/16k_zh引擎
5：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），并输出口语转书面语转写结果，该结果去除语气词、重复词、精简冗余表达，并修正发言人口误，实现口语转书面语的效果，**适用于线上、线下会议直接总结为书面会议纪要的场景**，仅支持8k_zh/16k_zh引擎

注意：
如果传入参数值4，需确保账号已购买[语义分段资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值4，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
如果传入参数值5，需确保账号已购买[口语转书面语资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值5，将自动计费[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
                     * @return ResTextFormat 识别结果返回样式
0：基础识别结果（仅包含有效人声时间戳，无词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)）；
1：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值，**不含标点**）；
2：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点）；
3：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按标点符号分段，**适用字幕场景**；
4：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按nlp语义分段，**适用会议、庭审记录转写等场景**，仅支持8k_zh/16k_zh引擎
5：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），并输出口语转书面语转写结果，该结果去除语气词、重复词、精简冗余表达，并修正发言人口误，实现口语转书面语的效果，**适用于线上、线下会议直接总结为书面会议纪要的场景**，仅支持8k_zh/16k_zh引擎

注意：
如果传入参数值4，需确保账号已购买[语义分段资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值4，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
如果传入参数值5，需确保账号已购买[口语转书面语资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值5，将自动计费[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
                     * 
                     */
                    uint64_t GetResTextFormat() const;

                    /**
                     * 设置识别结果返回样式
0：基础识别结果（仅包含有效人声时间戳，无词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)）；
1：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值，**不含标点**）；
2：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点）；
3：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按标点符号分段，**适用字幕场景**；
4：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按nlp语义分段，**适用会议、庭审记录转写等场景**，仅支持8k_zh/16k_zh引擎
5：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），并输出口语转书面语转写结果，该结果去除语气词、重复词、精简冗余表达，并修正发言人口误，实现口语转书面语的效果，**适用于线上、线下会议直接总结为书面会议纪要的场景**，仅支持8k_zh/16k_zh引擎

注意：
如果传入参数值4，需确保账号已购买[语义分段资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值4，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
如果传入参数值5，需确保账号已购买[口语转书面语资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值5，将自动计费[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
                     * @param _resTextFormat 识别结果返回样式
0：基础识别结果（仅包含有效人声时间戳，无词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)）；
1：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值，**不含标点**）；
2：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点）；
3：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按标点符号分段，**适用字幕场景**；
4：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按nlp语义分段，**适用会议、庭审记录转写等场景**，仅支持8k_zh/16k_zh引擎
5：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），并输出口语转书面语转写结果，该结果去除语气词、重复词、精简冗余表达，并修正发言人口误，实现口语转书面语的效果，**适用于线上、线下会议直接总结为书面会议纪要的场景**，仅支持8k_zh/16k_zh引擎

注意：
如果传入参数值4，需确保账号已购买[语义分段资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值4，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
如果传入参数值5，需确保账号已购买[口语转书面语资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值5，将自动计费[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
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
                     * 获取音频数据来源
0：音频URL；
1：音频数据（post body）
                     * @return SourceType 音频数据来源
0：音频URL；
1：音频数据（post body）
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置音频数据来源
0：音频URL；
1：音频数据（post body）
                     * @param _sourceType 音频数据来源
0：音频URL；
1：音频数据（post body）
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
                     * 获取音频数据base64编码
**当 SourceType 值为 1 时须填写该字段，为 0 时不需要填写**

注意：音频数据要小于5MB（含）
                     * @return Data 音频数据base64编码
**当 SourceType 值为 1 时须填写该字段，为 0 时不需要填写**

注意：音频数据要小于5MB（含）
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置音频数据base64编码
**当 SourceType 值为 1 时须填写该字段，为 0 时不需要填写**

注意：音频数据要小于5MB（含）
                     * @param _data 音频数据base64编码
**当 SourceType 值为 1 时须填写该字段，为 0 时不需要填写**

注意：音频数据要小于5MB（含）
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
                     * 获取数据长度（此数据长度为数据未进行base64编码时的长度）
                     * @return DataLen 数据长度（此数据长度为数据未进行base64编码时的长度）
                     * 
                     */
                    uint64_t GetDataLen() const;

                    /**
                     * 设置数据长度（此数据长度为数据未进行base64编码时的长度）
                     * @param _dataLen 数据长度（此数据长度为数据未进行base64编码时的长度）
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
                     * 获取音频URL的地址（需要公网环境浏览器可下载）
**当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写**

注意：
1. 请确保录音文件时长在5个小时（含）之内，否则可能识别失败；
2. 请保证文件的下载速度，否则可能下载失败
                     * @return Url 音频URL的地址（需要公网环境浏览器可下载）
**当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写**

注意：
1. 请确保录音文件时长在5个小时（含）之内，否则可能识别失败；
2. 请保证文件的下载速度，否则可能下载失败
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置音频URL的地址（需要公网环境浏览器可下载）
**当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写**

注意：
1. 请确保录音文件时长在5个小时（含）之内，否则可能识别失败；
2. 请保证文件的下载速度，否则可能下载失败
                     * @param _url 音频URL的地址（需要公网环境浏览器可下载）
**当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写**

注意：
1. 请确保录音文件时长在5个小时（含）之内，否则可能识别失败；
2. 请保证文件的下载速度，否则可能下载失败
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
                     * 获取回调 URL
用户自行搭建的用于接收识别结果的服务URL
回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)

注意：

- 如果用户使用轮询方式获取识别结果，则无需提交该参数
- 建议在回调URL中带上您的业务ID等信息，以便处理业务逻辑
                     * @return CallbackUrl 回调 URL
用户自行搭建的用于接收识别结果的服务URL
回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)

注意：

- 如果用户使用轮询方式获取识别结果，则无需提交该参数
- 建议在回调URL中带上您的业务ID等信息，以便处理业务逻辑
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL
用户自行搭建的用于接收识别结果的服务URL
回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)

注意：

- 如果用户使用轮询方式获取识别结果，则无需提交该参数
- 建议在回调URL中带上您的业务ID等信息，以便处理业务逻辑
                     * @param _callbackUrl 回调 URL
用户自行搭建的用于接收识别结果的服务URL
回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)

注意：

- 如果用户使用轮询方式获取识别结果，则无需提交该参数
- 建议在回调URL中带上您的业务ID等信息，以便处理业务逻辑
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
                     * 获取是否开启说话人分离
0：不开启；
1：开启（仅支持以下引擎：8k_zh/16k_zh/16k_ms/16k_en/16k_id/16k_zh_large/16k_zh_dialect，且ChannelNum=1时可用）；
默认值为 0

注意：
8k双声道电话音频请按 **ChannelNum 识别声道数** 的参数描述使用默认值
                     * @return SpeakerDiarization 是否开启说话人分离
0：不开启；
1：开启（仅支持以下引擎：8k_zh/16k_zh/16k_ms/16k_en/16k_id/16k_zh_large/16k_zh_dialect，且ChannelNum=1时可用）；
默认值为 0

注意：
8k双声道电话音频请按 **ChannelNum 识别声道数** 的参数描述使用默认值
                     * 
                     */
                    int64_t GetSpeakerDiarization() const;

                    /**
                     * 设置是否开启说话人分离
0：不开启；
1：开启（仅支持以下引擎：8k_zh/16k_zh/16k_ms/16k_en/16k_id/16k_zh_large/16k_zh_dialect，且ChannelNum=1时可用）；
默认值为 0

注意：
8k双声道电话音频请按 **ChannelNum 识别声道数** 的参数描述使用默认值
                     * @param _speakerDiarization 是否开启说话人分离
0：不开启；
1：开启（仅支持以下引擎：8k_zh/16k_zh/16k_ms/16k_en/16k_id/16k_zh_large/16k_zh_dialect，且ChannelNum=1时可用）；
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
                     * @return SpeakerNumber 说话人分离人数
**需配合开启说话人分离使用，不开启无效**，取值范围：0-10
0：自动分离（最多分离出20个人）；
1-10：指定人数分离；
默认值为 0
                     * 
                     */
                    int64_t GetSpeakerNumber() const;

                    /**
                     * 设置说话人分离人数
**需配合开启说话人分离使用，不开启无效**，取值范围：0-10
0：自动分离（最多分离出20个人）；
1-10：指定人数分离；
默认值为 0
                     * @param _speakerNumber 说话人分离人数
**需配合开启说话人分离使用，不开启无效**，取值范围：0-10
0：自动分离（最多分离出20个人）；
1-10：指定人数分离；
默认值为 0
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
                     * 获取热词表id
如不设置该参数，将自动生效默认热词表；
如设置该参数，将生效对应id的热词表；
点击这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)
                     * @return HotwordId 热词表id
如不设置该参数，将自动生效默认热词表；
如设置该参数，将生效对应id的热词表；
点击这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)
                     * 
                     */
                    std::string GetHotwordId() const;

                    /**
                     * 设置热词表id
如不设置该参数，将自动生效默认热词表；
如设置该参数，将生效对应id的热词表；
点击这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)
                     * @param _hotwordId 热词表id
如不设置该参数，将自动生效默认热词表；
如设置该参数，将生效对应id的热词表；
点击这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)
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
                     * 获取热词增强功能（目前仅支持8k_zh/16k_zh引擎）
1：开启热词增强功能

注意：热词增强功能开启后，将对传入的热词表id开启同音替换功能，可以在这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)。效果举例：在热词表中配置“蜜制”一词，并开启增强功能，与“蜜制”（mìzhì）同音同调的“秘制”（mìzhì）的识别结果会被强制替换成“蜜制”。**建议客户根据实际的业务需求开启该功能**
                     * @return ReinforceHotword 热词增强功能（目前仅支持8k_zh/16k_zh引擎）
1：开启热词增强功能

注意：热词增强功能开启后，将对传入的热词表id开启同音替换功能，可以在这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)。效果举例：在热词表中配置“蜜制”一词，并开启增强功能，与“蜜制”（mìzhì）同音同调的“秘制”（mìzhì）的识别结果会被强制替换成“蜜制”。**建议客户根据实际的业务需求开启该功能**
                     * @deprecated
                     */
                    int64_t GetReinforceHotword() const;

                    /**
                     * 设置热词增强功能（目前仅支持8k_zh/16k_zh引擎）
1：开启热词增强功能

注意：热词增强功能开启后，将对传入的热词表id开启同音替换功能，可以在这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)。效果举例：在热词表中配置“蜜制”一词，并开启增强功能，与“蜜制”（mìzhì）同音同调的“秘制”（mìzhì）的识别结果会被强制替换成“蜜制”。**建议客户根据实际的业务需求开启该功能**
                     * @param _reinforceHotword 热词增强功能（目前仅支持8k_zh/16k_zh引擎）
1：开启热词增强功能

注意：热词增强功能开启后，将对传入的热词表id开启同音替换功能，可以在这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)。效果举例：在热词表中配置“蜜制”一词，并开启增强功能，与“蜜制”（mìzhì）同音同调的“秘制”（mìzhì）的识别结果会被强制替换成“蜜制”。**建议客户根据实际的业务需求开启该功能**
                     * @deprecated
                     */
                    void SetReinforceHotword(const int64_t& _reinforceHotword);

                    /**
                     * 判断参数 ReinforceHotword 是否已赋值
                     * @return ReinforceHotword 是否已赋值
                     * @deprecated
                     */
                    bool ReinforceHotwordHasBeenSet() const;

                    /**
                     * 获取自学习定制模型 id
如设置了该参数，将生效对应id的自学习定制模型；
点击这里查看[自学习定制模型配置方法](https://cloud.tencent.com/document/product/1093/38416)
                     * @return CustomizationId 自学习定制模型 id
如设置了该参数，将生效对应id的自学习定制模型；
点击这里查看[自学习定制模型配置方法](https://cloud.tencent.com/document/product/1093/38416)
                     * 
                     */
                    std::string GetCustomizationId() const;

                    /**
                     * 设置自学习定制模型 id
如设置了该参数，将生效对应id的自学习定制模型；
点击这里查看[自学习定制模型配置方法](https://cloud.tencent.com/document/product/1093/38416)
                     * @param _customizationId 自学习定制模型 id
如设置了该参数，将生效对应id的自学习定制模型；
点击这里查看[自学习定制模型配置方法](https://cloud.tencent.com/document/product/1093/38416)
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
                     * 获取**【增值付费功能】**情绪识别能力（目前仅支持16k_zh,8k_zh）
0：不开启；
1：开启情绪识别，但不在文本展示情绪标签；
2：开启情绪识别，并且在文本展示情绪标签（**该功能需要设置ResTextFormat 大于0**）
默认值为0
支持的情绪分类为：高兴、伤心、愤怒

注意：
1. **本功能为增值服务**，需将参数设置为1或2时方可按对应方式生效；
2. 如果传入参数值1或2，需确保账号已购买[情绪识别资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值1或2，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)）**；
3. 参数设置为0时，无需购买资源包，也不会消耗情绪识别对应资源
                     * @return EmotionRecognition **【增值付费功能】**情绪识别能力（目前仅支持16k_zh,8k_zh）
0：不开启；
1：开启情绪识别，但不在文本展示情绪标签；
2：开启情绪识别，并且在文本展示情绪标签（**该功能需要设置ResTextFormat 大于0**）
默认值为0
支持的情绪分类为：高兴、伤心、愤怒

注意：
1. **本功能为增值服务**，需将参数设置为1或2时方可按对应方式生效；
2. 如果传入参数值1或2，需确保账号已购买[情绪识别资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值1或2，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)）**；
3. 参数设置为0时，无需购买资源包，也不会消耗情绪识别对应资源
                     * 
                     */
                    int64_t GetEmotionRecognition() const;

                    /**
                     * 设置**【增值付费功能】**情绪识别能力（目前仅支持16k_zh,8k_zh）
0：不开启；
1：开启情绪识别，但不在文本展示情绪标签；
2：开启情绪识别，并且在文本展示情绪标签（**该功能需要设置ResTextFormat 大于0**）
默认值为0
支持的情绪分类为：高兴、伤心、愤怒

注意：
1. **本功能为增值服务**，需将参数设置为1或2时方可按对应方式生效；
2. 如果传入参数值1或2，需确保账号已购买[情绪识别资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值1或2，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)）**；
3. 参数设置为0时，无需购买资源包，也不会消耗情绪识别对应资源
                     * @param _emotionRecognition **【增值付费功能】**情绪识别能力（目前仅支持16k_zh,8k_zh）
0：不开启；
1：开启情绪识别，但不在文本展示情绪标签；
2：开启情绪识别，并且在文本展示情绪标签（**该功能需要设置ResTextFormat 大于0**）
默认值为0
支持的情绪分类为：高兴、伤心、愤怒

注意：
1. **本功能为增值服务**，需将参数设置为1或2时方可按对应方式生效；
2. 如果传入参数值1或2，需确保账号已购买[情绪识别资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值1或2，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)）**；
3. 参数设置为0时，无需购买资源包，也不会消耗情绪识别对应资源
                     * 
                     */
                    void SetEmotionRecognition(const int64_t& _emotionRecognition);

                    /**
                     * 判断参数 EmotionRecognition 是否已赋值
                     * @return EmotionRecognition 是否已赋值
                     * 
                     */
                    bool EmotionRecognitionHasBeenSet() const;

                    /**
                     * 获取情绪能量值
取值为音量分贝值/10，取值范围：[1,10]，值越高情绪越强烈
0：不开启；
1：开启；
默认值为0
                     * @return EmotionalEnergy 情绪能量值
取值为音量分贝值/10，取值范围：[1,10]，值越高情绪越强烈
0：不开启；
1：开启；
默认值为0
                     * 
                     */
                    int64_t GetEmotionalEnergy() const;

                    /**
                     * 设置情绪能量值
取值为音量分贝值/10，取值范围：[1,10]，值越高情绪越强烈
0：不开启；
1：开启；
默认值为0
                     * @param _emotionalEnergy 情绪能量值
取值为音量分贝值/10，取值范围：[1,10]，值越高情绪越强烈
0：不开启；
1：开启；
默认值为0
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
                     * 获取阿拉伯数字智能转换（目前支持中文普通话引擎）
0：不转换，直接输出中文数字；
1：根据场景智能转换为阿拉伯数字；
3：打开数学相关数字转换（如：阿尔法转写为α）；
默认值为 1
                     * @return ConvertNumMode 阿拉伯数字智能转换（目前支持中文普通话引擎）
0：不转换，直接输出中文数字；
1：根据场景智能转换为阿拉伯数字；
3：打开数学相关数字转换（如：阿尔法转写为α）；
默认值为 1
                     * 
                     */
                    int64_t GetConvertNumMode() const;

                    /**
                     * 设置阿拉伯数字智能转换（目前支持中文普通话引擎）
0：不转换，直接输出中文数字；
1：根据场景智能转换为阿拉伯数字；
3：打开数学相关数字转换（如：阿尔法转写为α）；
默认值为 1
                     * @param _convertNumMode 阿拉伯数字智能转换（目前支持中文普通话引擎）
0：不转换，直接输出中文数字；
1：根据场景智能转换为阿拉伯数字；
3：打开数学相关数字转换（如：阿尔法转写为α）；
默认值为 1
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
                     * 获取脏词过滤（目前支持中文普通话引擎）
0：不过滤脏词；
1：过滤脏词；
2：将脏词替换为 * ；
默认值为 0
                     * @return FilterDirty 脏词过滤（目前支持中文普通话引擎）
0：不过滤脏词；
1：过滤脏词；
2：将脏词替换为 * ；
默认值为 0
                     * 
                     */
                    int64_t GetFilterDirty() const;

                    /**
                     * 设置脏词过滤（目前支持中文普通话引擎）
0：不过滤脏词；
1：过滤脏词；
2：将脏词替换为 * ；
默认值为 0
                     * @param _filterDirty 脏词过滤（目前支持中文普通话引擎）
0：不过滤脏词；
1：过滤脏词；
2：将脏词替换为 * ；
默认值为 0
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
                     * 获取标点符号过滤（目前支持中文普通话引擎）
0：不过滤标点；
1：过滤句末标点；
2：过滤所有标点；
默认值为 0
                     * @return FilterPunc 标点符号过滤（目前支持中文普通话引擎）
0：不过滤标点；
1：过滤句末标点；
2：过滤所有标点；
默认值为 0
                     * 
                     */
                    int64_t GetFilterPunc() const;

                    /**
                     * 设置标点符号过滤（目前支持中文普通话引擎）
0：不过滤标点；
1：过滤句末标点；
2：过滤所有标点；
默认值为 0
                     * @param _filterPunc 标点符号过滤（目前支持中文普通话引擎）
0：不过滤标点；
1：过滤句末标点；
2：过滤所有标点；
默认值为 0
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
                     * 获取语气词过滤（目前支持中文普通话引擎）
0：不过滤语气词；
1：过滤部分语气词；
2：严格过滤语气词；
默认值为 0
                     * @return FilterModal 语气词过滤（目前支持中文普通话引擎）
0：不过滤语气词；
1：过滤部分语气词；
2：严格过滤语气词；
默认值为 0
                     * 
                     */
                    int64_t GetFilterModal() const;

                    /**
                     * 设置语气词过滤（目前支持中文普通话引擎）
0：不过滤语气词；
1：过滤部分语气词；
2：严格过滤语气词；
默认值为 0
                     * @param _filterModal 语气词过滤（目前支持中文普通话引擎）
0：不过滤语气词；
1：过滤部分语气词；
2：严格过滤语气词；
默认值为 0
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
                     * 获取单标点最多字数（目前支持中文普通话引擎）
**可控制单行字幕最大字数，适用于字幕生成场景**，取值范围：[6，40]
0：不开启该功能；
默认值为0

注意：需设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果
                     * @return SentenceMaxLength 单标点最多字数（目前支持中文普通话引擎）
**可控制单行字幕最大字数，适用于字幕生成场景**，取值范围：[6，40]
0：不开启该功能；
默认值为0

注意：需设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果
                     * 
                     */
                    int64_t GetSentenceMaxLength() const;

                    /**
                     * 设置单标点最多字数（目前支持中文普通话引擎）
**可控制单行字幕最大字数，适用于字幕生成场景**，取值范围：[6，40]
0：不开启该功能；
默认值为0

注意：需设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果
                     * @param _sentenceMaxLength 单标点最多字数（目前支持中文普通话引擎）
**可控制单行字幕最大字数，适用于字幕生成场景**，取值范围：[6，40]
0：不开启该功能；
默认值为0

注意：需设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果
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
                     * 获取附加参数**（该参数无意义，忽略即可）**
                     * @return Extra 附加参数**（该参数无意义，忽略即可）**
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置附加参数**（该参数无意义，忽略即可）**
                     * @param _extra 附加参数**（该参数无意义，忽略即可）**
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
                     * 获取临时热词表：该参数用于提升识别准确率。

- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或“ASR|11”；

- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如：“腾讯云|10,语音识别|5,ASR|11”；

- 参数 hotword_id（热词表） 与 hotword_list（临时热词表） 区别：

    - hotword_id：热词表。需要先在控制台或接口创建热词表，获得对应hotword_id传入参数来使用热词功能；

    - hotword_list：临时热词表。每次请求时直接传入临时热词表来使用热词功能，云端不保留临时热词表。适用于有极大量热词需求的用户；

注意：

- 如果同时传入了 hotword_id 和 hotword_list，只有hotword_list 生效；

- 热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。

- 热词权重设置为100时，当前热词开启热词增强同音替换功能（仅支持8k_zh,16k_zh），举例：热词配置“蜜制|100”时，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
                     * @return HotwordList 临时热词表：该参数用于提升识别准确率。

- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或“ASR|11”；

- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如：“腾讯云|10,语音识别|5,ASR|11”；

- 参数 hotword_id（热词表） 与 hotword_list（临时热词表） 区别：

    - hotword_id：热词表。需要先在控制台或接口创建热词表，获得对应hotword_id传入参数来使用热词功能；

    - hotword_list：临时热词表。每次请求时直接传入临时热词表来使用热词功能，云端不保留临时热词表。适用于有极大量热词需求的用户；

注意：

- 如果同时传入了 hotword_id 和 hotword_list，只有hotword_list 生效；

- 热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。

- 热词权重设置为100时，当前热词开启热词增强同音替换功能（仅支持8k_zh,16k_zh），举例：热词配置“蜜制|100”时，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
                     * 
                     */
                    std::string GetHotwordList() const;

                    /**
                     * 设置临时热词表：该参数用于提升识别准确率。

- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或“ASR|11”；

- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如：“腾讯云|10,语音识别|5,ASR|11”；

- 参数 hotword_id（热词表） 与 hotword_list（临时热词表） 区别：

    - hotword_id：热词表。需要先在控制台或接口创建热词表，获得对应hotword_id传入参数来使用热词功能；

    - hotword_list：临时热词表。每次请求时直接传入临时热词表来使用热词功能，云端不保留临时热词表。适用于有极大量热词需求的用户；

注意：

- 如果同时传入了 hotword_id 和 hotword_list，只有hotword_list 生效；

- 热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。

- 热词权重设置为100时，当前热词开启热词增强同音替换功能（仅支持8k_zh,16k_zh），举例：热词配置“蜜制|100”时，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
                     * @param _hotwordList 临时热词表：该参数用于提升识别准确率。

- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或“ASR|11”；

- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如：“腾讯云|10,语音识别|5,ASR|11”；

- 参数 hotword_id（热词表） 与 hotword_list（临时热词表） 区别：

    - hotword_id：热词表。需要先在控制台或接口创建热词表，获得对应hotword_id传入参数来使用热词功能；

    - hotword_list：临时热词表。每次请求时直接传入临时热词表来使用热词功能，云端不保留临时热词表。适用于有极大量热词需求的用户；

注意：

- 如果同时传入了 hotword_id 和 hotword_list，只有hotword_list 生效；

- 热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。

- 热词权重设置为100时，当前热词开启热词增强同音替换功能（仅支持8k_zh,16k_zh），举例：热词配置“蜜制|100”时，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
                     * 
                     */
                    void SetHotwordList(const std::string& _hotwordList);

                    /**
                     * 判断参数 HotwordList 是否已赋值
                     * @return HotwordList 是否已赋值
                     * 
                     */
                    bool HotwordListHasBeenSet() const;

                    /**
                     * 获取关键词识别ID列表，默认空为不进行识别，最多10个

                     * @return KeyWordLibIdList 关键词识别ID列表，默认空为不进行识别，最多10个

                     * 
                     */
                    std::vector<std::string> GetKeyWordLibIdList() const;

                    /**
                     * 设置关键词识别ID列表，默认空为不进行识别，最多10个

                     * @param _keyWordLibIdList 关键词识别ID列表，默认空为不进行识别，最多10个

                     * 
                     */
                    void SetKeyWordLibIdList(const std::vector<std::string>& _keyWordLibIdList);

                    /**
                     * 判断参数 KeyWordLibIdList 是否已赋值
                     * @return KeyWordLibIdList 是否已赋值
                     * 
                     */
                    bool KeyWordLibIdListHasBeenSet() const;

                    /**
                     * 获取替换词汇表id,  适用于热词和自学习场景也无法解决的极端case词组,  会对识别结果强制替换。具体可参考[配置控制台](https://console.cloud.tencent.com/asr/replaceword);强制替换功能可能会影响正常识别结果，请谨慎使用

注意：
1. 本功能配置完成后，预计在10分钟后生效

                     * @return ReplaceTextId 替换词汇表id,  适用于热词和自学习场景也无法解决的极端case词组,  会对识别结果强制替换。具体可参考[配置控制台](https://console.cloud.tencent.com/asr/replaceword);强制替换功能可能会影响正常识别结果，请谨慎使用

注意：
1. 本功能配置完成后，预计在10分钟后生效

                     * 
                     */
                    std::string GetReplaceTextId() const;

                    /**
                     * 设置替换词汇表id,  适用于热词和自学习场景也无法解决的极端case词组,  会对识别结果强制替换。具体可参考[配置控制台](https://console.cloud.tencent.com/asr/replaceword);强制替换功能可能会影响正常识别结果，请谨慎使用

注意：
1. 本功能配置完成后，预计在10分钟后生效

                     * @param _replaceTextId 替换词汇表id,  适用于热词和自学习场景也无法解决的极端case词组,  会对识别结果强制替换。具体可参考[配置控制台](https://console.cloud.tencent.com/asr/replaceword);强制替换功能可能会影响正常识别结果，请谨慎使用

注意：
1. 本功能配置完成后，预计在10分钟后生效

                     * 
                     */
                    void SetReplaceTextId(const std::string& _replaceTextId);

                    /**
                     * 判断参数 ReplaceTextId 是否已赋值
                     * @return ReplaceTextId 是否已赋值
                     * 
                     */
                    bool ReplaceTextIdHasBeenSet() const;

                private:

                    /**
                     * 引擎模型类型
识别引擎采用分级计费方案，标记为“大模型版”的引擎适用大模型计费方案，[点击这里](https://cloud.tencent.com/document/product/1093/35686) 查看产品计费说明

电话通讯场景引擎：
**注意：电话通讯场景，请务必使用以下8k引擎**
• 8k_zh：中文电话通讯；
• 8k_en：英文电话通讯；
• 8k_zh_large：中文电话场景专用大模型引擎。通过显著提升模型参数规模与语言建模能力，实现对电话音频中复杂场景（如口音干扰、背景噪声）的高精度识别，识别准确率较常规版本大幅提升。[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比常规版本与普方大模型效果；

注意：如您有电话通讯场景识别需求，但发现需求语种仅支持16k，可将8k音频传入下方16k引擎，亦能获取识别结果。但**16k引擎并非基于电话通讯数据训练，无法承诺此种调用方式的识别效果，需由您自行验证识别结果是否可用**

通用场景引擎：
**注意：除电话通讯场景以外的其它识别场景，请务必使用以下16k引擎**
• **16k_zh：**中文普通话通用引擎，支持中文普通话和少量英语，使用丰富的中文普通话语料训练，覆盖场景广泛，适用于除电话通讯外的所有中文普通话识别场景；
• **16k_zh_large：**普方英大模型引擎【大模型版】。当前模型同时支持中文、英文、[多种中文方言](https://cloud.tencent.com/document/product/1093/35682)等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升，[点击这里](https://console.cloud.tencent.com/asr/demonstrate) 对比中文普通话常规版本与普方英大模型版本的识别效果；
• **16k_multi_lang：**多语种大模型引擎【大模型版】。当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别)；
• **16k_zh_dialect：**中文普通话+多方言混合引擎，除普通话外支持23种方言（上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话）；
• **16k_zh_en**：中英大模型引擎【大模型版】。当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升;
• **16k_en：**英语；
• **16k_yue：**粤语；
• **16k_zh-PY：**中英粤混合引擎，使用一个引擎同时识别中文普通话、英语、粤语三个语言;
• **16k_zh-TW**：中文繁体；
• **16k_ja：**日语；
• **16k_ko：**韩语；
• **16k_vi：**越南语；
• **16k_ms：**马来语；
• **16k_id：**印度尼西亚语；
• **16k_fil：**菲律宾语；
• **16k_th：**泰语；
• **16k_pt：**葡萄牙语；
• **16k_tr：**土耳其语；
• **16k_ar：**阿拉伯语；
• **16k_es：**西班牙语；
• **16k_hi：**印地语；
• **16k_fr：**法语；
• **16k_zh_medical：**中文医疗引擎；
• **16k_de：**德语；
                     */
                    std::string m_engineModelType;
                    bool m_engineModelTypeHasBeenSet;

                    /**
                     * 识别声道数
1：单声道（16k音频仅支持单声道，**请勿**设置为双声道）；
2：双声道（仅支持8k电话音频，且双声道应分别为通话双方）

注意：
• 16k音频：仅支持单声道识别，**需设置ChannelNum=1**；
• 8k电话音频：支持单声道、双声道识别，**建议设置ChannelNum=2，即双声道**。双声道能够物理区分说话人、避免说话双方重叠产生的识别错误，能达到最好的说话人分离效果和识别效果。设置双声道后，将自动区分说话人，因此**无需再开启说话人分离功能**，相关参数（**SpeakerDiarization、SpeakerNumber**）使用默认值即可，返回的ResultDetail中的speakerId的值为0代表左声道，值为1代表右声道。
                     */
                    uint64_t m_channelNum;
                    bool m_channelNumHasBeenSet;

                    /**
                     * 识别结果返回样式
0：基础识别结果（仅包含有效人声时间戳，无词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)）；
1：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值，**不含标点**）；
2：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点）；
3：基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按标点符号分段，**适用字幕场景**；
4：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），且识别结果按nlp语义分段，**适用会议、庭审记录转写等场景**，仅支持8k_zh/16k_zh引擎
5：**【增值付费功能】**基础识别结果之上，增加词粒度的[详细识别结果](https://cloud.tencent.com/document/api/1093/37824#SentenceDetail)（包含词级别时间戳、语速值和标点），并输出口语转书面语转写结果，该结果去除语气词、重复词、精简冗余表达，并修正发言人口误，实现口语转书面语的效果，**适用于线上、线下会议直接总结为书面会议纪要的场景**，仅支持8k_zh/16k_zh引擎

注意：
如果传入参数值4，需确保账号已购买[语义分段资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值4，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
如果传入参数值5，需确保账号已购买[口语转书面语资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值5，将自动计费[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)**
                     */
                    uint64_t m_resTextFormat;
                    bool m_resTextFormatHasBeenSet;

                    /**
                     * 音频数据来源
0：音频URL；
1：音频数据（post body）
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 音频数据base64编码
**当 SourceType 值为 1 时须填写该字段，为 0 时不需要填写**

注意：音频数据要小于5MB（含）
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 数据长度（此数据长度为数据未进行base64编码时的长度）
                     */
                    uint64_t m_dataLen;
                    bool m_dataLenHasBeenSet;

                    /**
                     * 音频URL的地址（需要公网环境浏览器可下载）
**当 SourceType 值为 0 时须填写该字段，为 1 时不需要填写**

注意：
1. 请确保录音文件时长在5个小时（含）之内，否则可能识别失败；
2. 请保证文件的下载速度，否则可能下载失败
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 回调 URL
用户自行搭建的用于接收识别结果的服务URL
回调格式和内容详见：[录音识别回调说明](https://cloud.tencent.com/document/product/1093/52632)

注意：

- 如果用户使用轮询方式获取识别结果，则无需提交该参数
- 建议在回调URL中带上您的业务ID等信息，以便处理业务逻辑
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 是否开启说话人分离
0：不开启；
1：开启（仅支持以下引擎：8k_zh/16k_zh/16k_ms/16k_en/16k_id/16k_zh_large/16k_zh_dialect，且ChannelNum=1时可用）；
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
                     */
                    int64_t m_speakerNumber;
                    bool m_speakerNumberHasBeenSet;

                    /**
                     * 热词表id
如不设置该参数，将自动生效默认热词表；
如设置该参数，将生效对应id的热词表；
点击这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)
                     */
                    std::string m_hotwordId;
                    bool m_hotwordIdHasBeenSet;

                    /**
                     * 热词增强功能（目前仅支持8k_zh/16k_zh引擎）
1：开启热词增强功能

注意：热词增强功能开启后，将对传入的热词表id开启同音替换功能，可以在这里查看[热词表配置方法](https://cloud.tencent.com/document/product/1093/40996)。效果举例：在热词表中配置“蜜制”一词，并开启增强功能，与“蜜制”（mìzhì）同音同调的“秘制”（mìzhì）的识别结果会被强制替换成“蜜制”。**建议客户根据实际的业务需求开启该功能**
                     */
                    int64_t m_reinforceHotword;
                    bool m_reinforceHotwordHasBeenSet;

                    /**
                     * 自学习定制模型 id
如设置了该参数，将生效对应id的自学习定制模型；
点击这里查看[自学习定制模型配置方法](https://cloud.tencent.com/document/product/1093/38416)
                     */
                    std::string m_customizationId;
                    bool m_customizationIdHasBeenSet;

                    /**
                     * **【增值付费功能】**情绪识别能力（目前仅支持16k_zh,8k_zh）
0：不开启；
1：开启情绪识别，但不在文本展示情绪标签；
2：开启情绪识别，并且在文本展示情绪标签（**该功能需要设置ResTextFormat 大于0**）
默认值为0
支持的情绪分类为：高兴、伤心、愤怒

注意：
1. **本功能为增值服务**，需将参数设置为1或2时方可按对应方式生效；
2. 如果传入参数值1或2，需确保账号已购买[情绪识别资源包](https://cloud.tencent.com/document/product/1093/35686#97ae4aa0-29a0-4066-9f07-ccaf8856a16b)，或账号开启后付费；**若当前账号已开启后付费功能，并传入参数值1或2，将[自动计费](https://cloud.tencent.com/document/product/1093/35686#d912167d-ffd5-41a9-8b1c-2e89845a6852)）**；
3. 参数设置为0时，无需购买资源包，也不会消耗情绪识别对应资源
                     */
                    int64_t m_emotionRecognition;
                    bool m_emotionRecognitionHasBeenSet;

                    /**
                     * 情绪能量值
取值为音量分贝值/10，取值范围：[1,10]，值越高情绪越强烈
0：不开启；
1：开启；
默认值为0
                     */
                    int64_t m_emotionalEnergy;
                    bool m_emotionalEnergyHasBeenSet;

                    /**
                     * 阿拉伯数字智能转换（目前支持中文普通话引擎）
0：不转换，直接输出中文数字；
1：根据场景智能转换为阿拉伯数字；
3：打开数学相关数字转换（如：阿尔法转写为α）；
默认值为 1
                     */
                    int64_t m_convertNumMode;
                    bool m_convertNumModeHasBeenSet;

                    /**
                     * 脏词过滤（目前支持中文普通话引擎）
0：不过滤脏词；
1：过滤脏词；
2：将脏词替换为 * ；
默认值为 0
                     */
                    int64_t m_filterDirty;
                    bool m_filterDirtyHasBeenSet;

                    /**
                     * 标点符号过滤（目前支持中文普通话引擎）
0：不过滤标点；
1：过滤句末标点；
2：过滤所有标点；
默认值为 0
                     */
                    int64_t m_filterPunc;
                    bool m_filterPuncHasBeenSet;

                    /**
                     * 语气词过滤（目前支持中文普通话引擎）
0：不过滤语气词；
1：过滤部分语气词；
2：严格过滤语气词；
默认值为 0
                     */
                    int64_t m_filterModal;
                    bool m_filterModalHasBeenSet;

                    /**
                     * 单标点最多字数（目前支持中文普通话引擎）
**可控制单行字幕最大字数，适用于字幕生成场景**，取值范围：[6，40]
0：不开启该功能；
默认值为0

注意：需设置ResTextFormat为3，解析返回的ResultDetail列表，通过结构中FinalSentence获取单个标点断句结果
                     */
                    int64_t m_sentenceMaxLength;
                    bool m_sentenceMaxLengthHasBeenSet;

                    /**
                     * 附加参数**（该参数无意义，忽略即可）**
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 临时热词表：该参数用于提升识别准确率。

- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或“ASR|11”；

- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如：“腾讯云|10,语音识别|5,ASR|11”；

- 参数 hotword_id（热词表） 与 hotword_list（临时热词表） 区别：

    - hotword_id：热词表。需要先在控制台或接口创建热词表，获得对应hotword_id传入参数来使用热词功能；

    - hotword_list：临时热词表。每次请求时直接传入临时热词表来使用热词功能，云端不保留临时热词表。适用于有极大量热词需求的用户；

注意：

- 如果同时传入了 hotword_id 和 hotword_list，只有hotword_list 生效；

- 热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。

- 热词权重设置为100时，当前热词开启热词增强同音替换功能（仅支持8k_zh,16k_zh），举例：热词配置“蜜制|100”时，与“蜜制”同拼音（mizhi）的“秘制”的识别结果会被强制替换成“蜜制”。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
                     */
                    std::string m_hotwordList;
                    bool m_hotwordListHasBeenSet;

                    /**
                     * 关键词识别ID列表，默认空为不进行识别，最多10个

                     */
                    std::vector<std::string> m_keyWordLibIdList;
                    bool m_keyWordLibIdListHasBeenSet;

                    /**
                     * 替换词汇表id,  适用于热词和自学习场景也无法解决的极端case词组,  会对识别结果强制替换。具体可参考[配置控制台](https://console.cloud.tencent.com/asr/replaceword);强制替换功能可能会影响正常识别结果，请谨慎使用

注意：
1. 本功能配置完成后，预计在10分钟后生效

                     */
                    std::string m_replaceTextId;
                    bool m_replaceTextIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKREQUEST_H_
