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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_RULEIDCONFIG_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_RULEIDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * RuleId相关配置
                */
                class RuleIdConfig : public AbstractModel
                {
                public:
                    RuleIdConfig();
                    ~RuleIdConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认开启。
                     * @return IntentionRecognition 意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认开启。
                     * 
                     */
                    bool GetIntentionRecognition() const;

                    /**
                     * 设置意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认开启。
                     * @param _intentionRecognition 意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认开启。
                     * 
                     */
                    void SetIntentionRecognition(const bool& _intentionRecognition);

                    /**
                     * 判断参数 IntentionRecognition 是否已赋值
                     * @return IntentionRecognition 是否已赋值
                     * 
                     */
                    bool IntentionRecognitionHasBeenSet() const;

                    /**
                     * 获取意愿核身类型，默认为0：
0：问答模式，DetectAuth接口需要传入IntentionQuestions字段；
1：点头模式，DetectAuth接口需要传入IntentionActions字段；
                     * @return IntentionType 意愿核身类型，默认为0：
0：问答模式，DetectAuth接口需要传入IntentionQuestions字段；
1：点头模式，DetectAuth接口需要传入IntentionActions字段；
                     * 
                     */
                    int64_t GetIntentionType() const;

                    /**
                     * 设置意愿核身类型，默认为0：
0：问答模式，DetectAuth接口需要传入IntentionQuestions字段；
1：点头模式，DetectAuth接口需要传入IntentionActions字段；
                     * @param _intentionType 意愿核身类型，默认为0：
0：问答模式，DetectAuth接口需要传入IntentionQuestions字段；
1：点头模式，DetectAuth接口需要传入IntentionActions字段；
                     * 
                     */
                    void SetIntentionType(const int64_t& _intentionType);

                    /**
                     * 判断参数 IntentionType 是否已赋值
                     * @return IntentionType 是否已赋值
                     * 
                     */
                    bool IntentionTypeHasBeenSet() const;

                    /**
                     * 获取用户语音回答过程中是否开启张嘴识别检测，默认不开启，仅在意愿核身问答模式中使用。
                     * @return MouthOpenRecognition 用户语音回答过程中是否开启张嘴识别检测，默认不开启，仅在意愿核身问答模式中使用。
                     * 
                     */
                    bool GetMouthOpenRecognition() const;

                    /**
                     * 设置用户语音回答过程中是否开启张嘴识别检测，默认不开启，仅在意愿核身问答模式中使用。
                     * @param _mouthOpenRecognition 用户语音回答过程中是否开启张嘴识别检测，默认不开启，仅在意愿核身问答模式中使用。
                     * 
                     */
                    void SetMouthOpenRecognition(const bool& _mouthOpenRecognition);

                    /**
                     * 判断参数 MouthOpenRecognition 是否已赋值
                     * @return MouthOpenRecognition 是否已赋值
                     * 
                     */
                    bool MouthOpenRecognitionHasBeenSet() const;

                    /**
                     * 获取意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0：智能语速（根据播报文案的长度自动调整语音播报速度）
1：固定1倍速
2：固定1.2倍速
3：固定1.5倍速
                     * @return Speed 意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0：智能语速（根据播报文案的长度自动调整语音播报速度）
1：固定1倍速
2：固定1.2倍速
3：固定1.5倍速
                     * 
                     */
                    uint64_t GetSpeed() const;

                    /**
                     * 设置意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0：智能语速（根据播报文案的长度自动调整语音播报速度）
1：固定1倍速
2：固定1.2倍速
3：固定1.5倍速
                     * @param _speed 意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0：智能语速（根据播报文案的长度自动调整语音播报速度）
1：固定1倍速
2：固定1.2倍速
3：固定1.5倍速
                     * 
                     */
                    void SetSpeed(const uint64_t& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                private:

                    /**
                     * 意愿核身过程中识别用户的回答意图，开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过，默认开启。
                     */
                    bool m_intentionRecognition;
                    bool m_intentionRecognitionHasBeenSet;

                    /**
                     * 意愿核身类型，默认为0：
0：问答模式，DetectAuth接口需要传入IntentionQuestions字段；
1：点头模式，DetectAuth接口需要传入IntentionActions字段；
                     */
                    int64_t m_intentionType;
                    bool m_intentionTypeHasBeenSet;

                    /**
                     * 用户语音回答过程中是否开启张嘴识别检测，默认不开启，仅在意愿核身问答模式中使用。
                     */
                    bool m_mouthOpenRecognition;
                    bool m_mouthOpenRecognitionHasBeenSet;

                    /**
                     * 意愿核身语音播报速度，配置后问答模式和点头模式的语音播报环节都会生效，默认值为0：
0：智能语速（根据播报文案的长度自动调整语音播报速度）
1：固定1倍速
2：固定1.2倍速
3：固定1.5倍速
                     */
                    uint64_t m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_RULEIDCONFIG_H_
