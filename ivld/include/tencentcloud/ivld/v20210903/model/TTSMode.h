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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_TTSMODE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_TTSMODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * TTS 的参数模式
                */
                class TTSMode : public AbstractModel
                {
                public:
                    TTSMode();
                    ~TTSMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语速，范围：[-2，2]，分别对应不同语速：
-2代表0.6倍
-1代表0.8倍
0代表1.0倍（默认）
1代表1.2倍
2代表1.5倍
如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
                     * @return Speed 语速，范围：[-2，2]，分别对应不同语速：
-2代表0.6倍
-1代表0.8倍
0代表1.0倍（默认）
1代表1.2倍
2代表1.5倍
如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置语速，范围：[-2，2]，分别对应不同语速：
-2代表0.6倍
-1代表0.8倍
0代表1.0倍（默认）
1代表1.2倍
2代表1.5倍
如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
                     * @param _speed 语速，范围：[-2，2]，分别对应不同语速：
-2代表0.6倍
-1代表0.8倍
0代表1.0倍（默认）
1代表1.2倍
2代表1.5倍
如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
                     * 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                    /**
                     * 获取音色 ID，[音色体验地址](https://cloud.tencent.com/product/tts)。


|音乐ID|音色名称|推荐场景|
|--|--|--|
|1001|智瑜|情感女声|
|1002|智聆|通用女声|
|1003|智美|客服女声|
|1004|智云|通用男声|
|1005|智莉|通用女声|
|1007|智娜|客服女声|
|1008|智琪|客服女声|
|1009|智芸|知性女声|
|1010|智华|通用男声|
|1017|智蓉|情感女声|
|1018|智靖|情感男声|



                     * @return VoiceType 音色 ID，[音色体验地址](https://cloud.tencent.com/product/tts)。


|音乐ID|音色名称|推荐场景|
|--|--|--|
|1001|智瑜|情感女声|
|1002|智聆|通用女声|
|1003|智美|客服女声|
|1004|智云|通用男声|
|1005|智莉|通用女声|
|1007|智娜|客服女声|
|1008|智琪|客服女声|
|1009|智芸|知性女声|
|1010|智华|通用男声|
|1017|智蓉|情感女声|
|1018|智靖|情感男声|



                     * 
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置音色 ID，[音色体验地址](https://cloud.tencent.com/product/tts)。


|音乐ID|音色名称|推荐场景|
|--|--|--|
|1001|智瑜|情感女声|
|1002|智聆|通用女声|
|1003|智美|客服女声|
|1004|智云|通用男声|
|1005|智莉|通用女声|
|1007|智娜|客服女声|
|1008|智琪|客服女声|
|1009|智芸|知性女声|
|1010|智华|通用男声|
|1017|智蓉|情感女声|
|1018|智靖|情感男声|



                     * @param _voiceType 音色 ID，[音色体验地址](https://cloud.tencent.com/product/tts)。


|音乐ID|音色名称|推荐场景|
|--|--|--|
|1001|智瑜|情感女声|
|1002|智聆|通用女声|
|1003|智美|客服女声|
|1004|智云|通用男声|
|1005|智莉|通用女声|
|1007|智娜|客服女声|
|1008|智琪|客服女声|
|1009|智芸|知性女声|
|1010|智华|通用男声|
|1017|智蓉|情感女声|
|1018|智靖|情感男声|



                     * 
                     */
                    void SetVoiceType(const int64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                private:

                    /**
                     * 语速，范围：[-2，2]，分别对应不同语速：
-2代表0.6倍
-1代表0.8倍
0代表1.0倍（默认）
1代表1.2倍
2代表1.5倍
如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * 音色 ID，[音色体验地址](https://cloud.tencent.com/product/tts)。


|音乐ID|音色名称|推荐场景|
|--|--|--|
|1001|智瑜|情感女声|
|1002|智聆|通用女声|
|1003|智美|客服女声|
|1004|智云|通用男声|
|1005|智莉|通用女声|
|1007|智娜|客服女声|
|1008|智琪|客服女声|
|1009|智芸|知性女声|
|1010|智华|通用男声|
|1017|智蓉|情感女声|
|1018|智靖|情感男声|



                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_TTSMODE_H_
