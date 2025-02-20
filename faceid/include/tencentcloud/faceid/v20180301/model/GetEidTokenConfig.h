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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENCONFIG_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/IntentionQuestion.h>
#include <tencentcloud/faceid/v20180301/model/IntentionActionConfig.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 获取token时的配置
                */
                class GetEidTokenConfig : public AbstractModel
                {
                public:
                    GetEidTokenConfig();
                    ~GetEidTokenConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取姓名身份证输入方式。
- 取值范围：
1：传身份证正反面OCR。
2：传身份证正面OCR。
3：用户手动输入。
4：客户后台传入。
- 默认值：1。
- 注意：使用OCR时仅支持用户修改结果中的姓名。
                     * @return InputType 姓名身份证输入方式。
- 取值范围：
1：传身份证正反面OCR。
2：传身份证正面OCR。
3：用户手动输入。
4：客户后台传入。
- 默认值：1。
- 注意：使用OCR时仅支持用户修改结果中的姓名。
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置姓名身份证输入方式。
- 取值范围：
1：传身份证正反面OCR。
2：传身份证正面OCR。
3：用户手动输入。
4：客户后台传入。
- 默认值：1。
- 注意：使用OCR时仅支持用户修改结果中的姓名。
                     * @param _inputType 姓名身份证输入方式。
- 取值范围：
1：传身份证正反面OCR。
2：传身份证正面OCR。
3：用户手动输入。
4：客户后台传入。
- 默认值：1。
- 注意：使用OCR时仅支持用户修改结果中的姓名。
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取是否使用意愿核身。

- 默认不使用。
- 注意：如开启使用，则计费标签按【意愿核身】计费标签计价；如不开启，则计费标签按【E证通】计费标签计价，价格详见：[价格说明](https://cloud.tencent.com/document/product/1007/56804)。
                     * @return UseIntentionVerify 是否使用意愿核身。

- 默认不使用。
- 注意：如开启使用，则计费标签按【意愿核身】计费标签计价；如不开启，则计费标签按【E证通】计费标签计价，价格详见：[价格说明](https://cloud.tencent.com/document/product/1007/56804)。
                     * 
                     */
                    bool GetUseIntentionVerify() const;

                    /**
                     * 设置是否使用意愿核身。

- 默认不使用。
- 注意：如开启使用，则计费标签按【意愿核身】计费标签计价；如不开启，则计费标签按【E证通】计费标签计价，价格详见：[价格说明](https://cloud.tencent.com/document/product/1007/56804)。
                     * @param _useIntentionVerify 是否使用意愿核身。

- 默认不使用。
- 注意：如开启使用，则计费标签按【意愿核身】计费标签计价；如不开启，则计费标签按【E证通】计费标签计价，价格详见：[价格说明](https://cloud.tencent.com/document/product/1007/56804)。
                     * 
                     */
                    void SetUseIntentionVerify(const bool& _useIntentionVerify);

                    /**
                     * 判断参数 UseIntentionVerify 是否已赋值
                     * @return UseIntentionVerify 是否已赋值
                     * 
                     */
                    bool UseIntentionVerifyHasBeenSet() const;

                    /**
                     * 获取意愿核身模式。
- 取值范围：
1：语音朗读模式。
2：语音问答模式。
3：点头确认模式。
- 默认值为1。
                     * @return IntentionMode 意愿核身模式。
- 取值范围：
1：语音朗读模式。
2：语音问答模式。
3：点头确认模式。
- 默认值为1。
                     * 
                     */
                    std::string GetIntentionMode() const;

                    /**
                     * 设置意愿核身模式。
- 取值范围：
1：语音朗读模式。
2：语音问答模式。
3：点头确认模式。
- 默认值为1。
                     * @param _intentionMode 意愿核身模式。
- 取值范围：
1：语音朗读模式。
2：语音问答模式。
3：点头确认模式。
- 默认值为1。
                     * 
                     */
                    void SetIntentionMode(const std::string& _intentionMode);

                    /**
                     * 判断参数 IntentionMode 是否已赋值
                     * @return IntentionMode 是否已赋值
                     * 
                     */
                    bool IntentionModeHasBeenSet() const;

                    /**
                     * 获取意愿核身朗读模式使用的文案。
- 若未使用意愿核身朗读功能，该字段无需传入。
- 默认为空，最长可接受120的字符串长度。
                     * @return IntentionVerifyText 意愿核身朗读模式使用的文案。
- 若未使用意愿核身朗读功能，该字段无需传入。
- 默认为空，最长可接受120的字符串长度。
                     * 
                     */
                    std::string GetIntentionVerifyText() const;

                    /**
                     * 设置意愿核身朗读模式使用的文案。
- 若未使用意愿核身朗读功能，该字段无需传入。
- 默认为空，最长可接受120的字符串长度。
                     * @param _intentionVerifyText 意愿核身朗读模式使用的文案。
- 若未使用意愿核身朗读功能，该字段无需传入。
- 默认为空，最长可接受120的字符串长度。
                     * 
                     */
                    void SetIntentionVerifyText(const std::string& _intentionVerifyText);

                    /**
                     * 判断参数 IntentionVerifyText 是否已赋值
                     * @return IntentionVerifyText 是否已赋值
                     * 
                     */
                    bool IntentionVerifyTextHasBeenSet() const;

                    /**
                     * 获取意愿核身问答模式的配置列表。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
                     * @return IntentionQuestions 意愿核身问答模式的配置列表。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
                     * 
                     */
                    std::vector<IntentionQuestion> GetIntentionQuestions() const;

                    /**
                     * 设置意愿核身问答模式的配置列表。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
                     * @param _intentionQuestions 意愿核身问答模式的配置列表。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
                     * 
                     */
                    void SetIntentionQuestions(const std::vector<IntentionQuestion>& _intentionQuestions);

                    /**
                     * 判断参数 IntentionQuestions 是否已赋值
                     * @return IntentionQuestions 是否已赋值
                     * 
                     */
                    bool IntentionQuestionsHasBeenSet() const;

                    /**
                     * 获取意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 默认为空，最长可接受150的字符串长度。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
                     * @return IntentionActions 意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 默认为空，最长可接受150的字符串长度。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
                     * 
                     */
                    std::vector<IntentionActionConfig> GetIntentionActions() const;

                    /**
                     * 设置意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 默认为空，最长可接受150的字符串长度。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
                     * @param _intentionActions 意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 默认为空，最长可接受150的字符串长度。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
                     * 
                     */
                    void SetIntentionActions(const std::vector<IntentionActionConfig>& _intentionActions);

                    /**
                     * 判断参数 IntentionActions 是否已赋值
                     * @return IntentionActions 是否已赋值
                     * 
                     */
                    bool IntentionActionsHasBeenSet() const;

                    /**
                     * 获取意愿核身过程中识别用户的回答意图。
- 开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过。
- 默认开启。
                     * @return IntentionRecognition 意愿核身过程中识别用户的回答意图。
- 开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过。
- 默认开启。
                     * 
                     */
                    bool GetIntentionRecognition() const;

                    /**
                     * 设置意愿核身过程中识别用户的回答意图。
- 开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过。
- 默认开启。
                     * @param _intentionRecognition 意愿核身过程中识别用户的回答意图。
- 开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过。
- 默认开启。
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
                     * 获取是否支持港澳台居住证识别。
                     * @return IsSupportHMTResidentPermitOCR 是否支持港澳台居住证识别。
                     * 
                     */
                    bool GetIsSupportHMTResidentPermitOCR() const;

                    /**
                     * 设置是否支持港澳台居住证识别。
                     * @param _isSupportHMTResidentPermitOCR 是否支持港澳台居住证识别。
                     * 
                     */
                    void SetIsSupportHMTResidentPermitOCR(const bool& _isSupportHMTResidentPermitOCR);

                    /**
                     * 判断参数 IsSupportHMTResidentPermitOCR 是否已赋值
                     * @return IsSupportHMTResidentPermitOCR 是否已赋值
                     * 
                     */
                    bool IsSupportHMTResidentPermitOCRHasBeenSet() const;

                    /**
                     * 获取用户语音回答过程中是否开启张嘴识别检测。
- 默认不开启。
- 仅在意愿核身问答模式中使用。
                     * @return MouthOpenRecognition 用户语音回答过程中是否开启张嘴识别检测。
- 默认不开启。
- 仅在意愿核身问答模式中使用。
                     * 
                     */
                    bool GetMouthOpenRecognition() const;

                    /**
                     * 设置用户语音回答过程中是否开启张嘴识别检测。
- 默认不开启。
- 仅在意愿核身问答模式中使用。
                     * @param _mouthOpenRecognition 用户语音回答过程中是否开启张嘴识别检测。
- 默认不开启。
- 仅在意愿核身问答模式中使用。
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
                     * 获取意愿核身语音播报速度。
- 配置后问答模式和点头模式的语音播报环节都会生效。
- 默认值为0。
- 取值范围： 
0：智能语速（根据播报文案的长度自动调整语音播报速度）。
1：固定1倍速。
2：固定1.2倍速。
3：固定1.5倍速。
                     * @return Speed 意愿核身语音播报速度。
- 配置后问答模式和点头模式的语音播报环节都会生效。
- 默认值为0。
- 取值范围： 
0：智能语速（根据播报文案的长度自动调整语音播报速度）。
1：固定1倍速。
2：固定1.2倍速。
3：固定1.5倍速。
                     * 
                     */
                    uint64_t GetSpeed() const;

                    /**
                     * 设置意愿核身语音播报速度。
- 配置后问答模式和点头模式的语音播报环节都会生效。
- 默认值为0。
- 取值范围： 
0：智能语速（根据播报文案的长度自动调整语音播报速度）。
1：固定1倍速。
2：固定1.2倍速。
3：固定1.5倍速。
                     * @param _speed 意愿核身语音播报速度。
- 配置后问答模式和点头模式的语音播报环节都会生效。
- 默认值为0。
- 取值范围： 
0：智能语速（根据播报文案的长度自动调整语音播报速度）。
1：固定1倍速。
2：固定1.2倍速。
3：固定1.5倍速。
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
                     * 姓名身份证输入方式。
- 取值范围：
1：传身份证正反面OCR。
2：传身份证正面OCR。
3：用户手动输入。
4：客户后台传入。
- 默认值：1。
- 注意：使用OCR时仅支持用户修改结果中的姓名。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 是否使用意愿核身。

- 默认不使用。
- 注意：如开启使用，则计费标签按【意愿核身】计费标签计价；如不开启，则计费标签按【E证通】计费标签计价，价格详见：[价格说明](https://cloud.tencent.com/document/product/1007/56804)。
                     */
                    bool m_useIntentionVerify;
                    bool m_useIntentionVerifyHasBeenSet;

                    /**
                     * 意愿核身模式。
- 取值范围：
1：语音朗读模式。
2：语音问答模式。
3：点头确认模式。
- 默认值为1。
                     */
                    std::string m_intentionMode;
                    bool m_intentionModeHasBeenSet;

                    /**
                     * 意愿核身朗读模式使用的文案。
- 若未使用意愿核身朗读功能，该字段无需传入。
- 默认为空，最长可接受120的字符串长度。
                     */
                    std::string m_intentionVerifyText;
                    bool m_intentionVerifyTextHasBeenSet;

                    /**
                     * 意愿核身问答模式的配置列表。
- 问答模式支持1-10轮（不超过10轮）的意愿确认。
                     */
                    std::vector<IntentionQuestion> m_intentionQuestions;
                    bool m_intentionQuestionsHasBeenSet;

                    /**
                     * 意愿核身（点头确认模式）使用的文案。
- 若未使用意愿核身（点头确认模式），则该字段无需传入。
- 默认为空，最长可接受150的字符串长度。
- 点头确认模式支持1-10轮（不超过10轮）的意愿确认。
                     */
                    std::vector<IntentionActionConfig> m_intentionActions;
                    bool m_intentionActionsHasBeenSet;

                    /**
                     * 意愿核身过程中识别用户的回答意图。
- 开启后除了IntentionQuestions的Answers列表中的标准回答会通过，近似意图的回答也会通过。
- 默认开启。
                     */
                    bool m_intentionRecognition;
                    bool m_intentionRecognitionHasBeenSet;

                    /**
                     * 是否支持港澳台居住证识别。
                     */
                    bool m_isSupportHMTResidentPermitOCR;
                    bool m_isSupportHMTResidentPermitOCRHasBeenSet;

                    /**
                     * 用户语音回答过程中是否开启张嘴识别检测。
- 默认不开启。
- 仅在意愿核身问答模式中使用。
                     */
                    bool m_mouthOpenRecognition;
                    bool m_mouthOpenRecognitionHasBeenSet;

                    /**
                     * 意愿核身语音播报速度。
- 配置后问答模式和点头模式的语音播报环节都会生效。
- 默认值为0。
- 取值范围： 
0：智能语速（根据播报文案的长度自动调整语音播报速度）。
1：固定1倍速。
2：固定1.2倍速。
3：固定1.5倍速。
                     */
                    uint64_t m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENCONFIG_H_
