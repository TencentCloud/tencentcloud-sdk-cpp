/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_GETLLMDIAGNOSISHEALTHREQUEST_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_GETLLMDIAGNOSISHEALTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            namespace Model
            {
                /**
                * GetLLMDiagnosisHealth请求参数结构体
                */
                class GetLLMDiagnosisHealthRequest : public AbstractModel
                {
                public:
                    GetLLMDiagnosisHealthRequest();
                    ~GetLLMDiagnosisHealthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>合作方ID</p>
                     * @return PartnerId <p>合作方ID</p>
                     * 
                     */
                    std::string GetPartnerId() const;

                    /**
                     * 设置<p>合作方ID</p>
                     * @param _partnerId <p>合作方ID</p>
                     * 
                     */
                    void SetPartnerId(const std::string& _partnerId);

                    /**
                     * 判断参数 PartnerId 是否已赋值
                     * @return PartnerId 是否已赋值
                     * 
                     */
                    bool PartnerIdHasBeenSet() const;

                    /**
                     * 获取<p>合作方密钥</p>
                     * @return PartnerSecret <p>合作方密钥</p>
                     * 
                     */
                    std::string GetPartnerSecret() const;

                    /**
                     * 设置<p>合作方密钥</p>
                     * @param _partnerSecret <p>合作方密钥</p>
                     * 
                     */
                    void SetPartnerSecret(const std::string& _partnerSecret);

                    /**
                     * 判断参数 PartnerSecret 是否已赋值
                     * @return PartnerSecret 是否已赋值
                     * 
                     */
                    bool PartnerSecretHasBeenSet() const;

                    /**
                     * 获取<p>医院应用ID</p>
                     * @return HospitalAppId <p>医院应用ID</p>
                     * 
                     */
                    std::string GetHospitalAppId() const;

                    /**
                     * 设置<p>医院应用ID</p>
                     * @param _hospitalAppId <p>医院应用ID</p>
                     * 
                     */
                    void SetHospitalAppId(const std::string& _hospitalAppId);

                    /**
                     * 判断参数 HospitalAppId 是否已赋值
                     * @return HospitalAppId 是否已赋值
                     * 
                     */
                    bool HospitalAppIdHasBeenSet() const;

                    /**
                     * 获取<p>对话ID，由接入方生成，相同对话ID会保持相同的上下文，接入方根据业务场景使用相同或新建对话ID（建议使用UUID值）</p><p>入参限制：长度限制10-50</p>
                     * @return DialogueId <p>对话ID，由接入方生成，相同对话ID会保持相同的上下文，接入方根据业务场景使用相同或新建对话ID（建议使用UUID值）</p><p>入参限制：长度限制10-50</p>
                     * 
                     */
                    std::string GetDialogueId() const;

                    /**
                     * 设置<p>对话ID，由接入方生成，相同对话ID会保持相同的上下文，接入方根据业务场景使用相同或新建对话ID（建议使用UUID值）</p><p>入参限制：长度限制10-50</p>
                     * @param _dialogueId <p>对话ID，由接入方生成，相同对话ID会保持相同的上下文，接入方根据业务场景使用相同或新建对话ID（建议使用UUID值）</p><p>入参限制：长度限制10-50</p>
                     * 
                     */
                    void SetDialogueId(const std::string& _dialogueId);

                    /**
                     * 判断参数 DialogueId 是否已赋值
                     * @return DialogueId 是否已赋值
                     * 
                     */
                    bool DialogueIdHasBeenSet() const;

                    /**
                     * 获取<p>本次问答用户输入的问题，（最大长度1000）</p>
                     * @return Message <p>本次问答用户输入的问题，（最大长度1000）</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>本次问答用户输入的问题，（最大长度1000）</p>
                     * @param _message <p>本次问答用户输入的问题，（最大长度1000）</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>返回类型：0:正常返回； 1:流式返回； 默认：0</p>
                     * @return ResultType <p>返回类型：0:正常返回； 1:流式返回； 默认：0</p>
                     * 
                     */
                    int64_t GetResultType() const;

                    /**
                     * 设置<p>返回类型：0:正常返回； 1:流式返回； 默认：0</p>
                     * @param _resultType <p>返回类型：0:正常返回； 1:流式返回； 默认：0</p>
                     * 
                     */
                    void SetResultType(const int64_t& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取<p>性别，0:未知，1:男，2:女</p>
                     * @return Sex <p>性别，0:未知，1:男，2:女</p>
                     * 
                     */
                    int64_t GetSex() const;

                    /**
                     * 设置<p>性别，0:未知，1:男，2:女</p>
                     * @param _sex <p>性别，0:未知，1:男，2:女</p>
                     * 
                     */
                    void SetSex(const int64_t& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取<p>年龄，0:未知，最大值：120</p>
                     * @return Age <p>年龄，0:未知，最大值：120</p>
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置<p>年龄，0:未知，最大值：120</p>
                     * @param _age <p>年龄，0:未知，最大值：120</p>
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取<p>追问轮数，-1:不追问；0:使用默认规则； 1-10:按指定轮数追问；（最大值10轮）； 默认：0</p>
                     * @return RoundNumber <p>追问轮数，-1:不追问；0:使用默认规则； 1-10:按指定轮数追问；（最大值10轮）； 默认：0</p>
                     * 
                     */
                    int64_t GetRoundNumber() const;

                    /**
                     * 设置<p>追问轮数，-1:不追问；0:使用默认规则； 1-10:按指定轮数追问；（最大值10轮）； 默认：0</p>
                     * @param _roundNumber <p>追问轮数，-1:不追问；0:使用默认规则； 1-10:按指定轮数追问；（最大值10轮）； 默认：0</p>
                     * 
                     */
                    void SetRoundNumber(const int64_t& _roundNumber);

                    /**
                     * 判断参数 RoundNumber 是否已赋值
                     * @return RoundNumber 是否已赋值
                     * 
                     */
                    bool RoundNumberHasBeenSet() const;

                    /**
                     * 获取<p>是否追问结构化结果，0：否，1：是；</p>
                     * @return OutputStructured <p>是否追问结构化结果，0：否，1：是；</p>
                     * 
                     */
                    int64_t GetOutputStructured() const;

                    /**
                     * 设置<p>是否追问结构化结果，0：否，1：是；</p>
                     * @param _outputStructured <p>是否追问结构化结果，0：否，1：是；</p>
                     * 
                     */
                    void SetOutputStructured(const int64_t& _outputStructured);

                    /**
                     * 判断参数 OutputStructured 是否已赋值
                     * @return OutputStructured 是否已赋值
                     * 
                     */
                    bool OutputStructuredHasBeenSet() const;

                private:

                    /**
                     * <p>合作方ID</p>
                     */
                    std::string m_partnerId;
                    bool m_partnerIdHasBeenSet;

                    /**
                     * <p>合作方密钥</p>
                     */
                    std::string m_partnerSecret;
                    bool m_partnerSecretHasBeenSet;

                    /**
                     * <p>医院应用ID</p>
                     */
                    std::string m_hospitalAppId;
                    bool m_hospitalAppIdHasBeenSet;

                    /**
                     * <p>对话ID，由接入方生成，相同对话ID会保持相同的上下文，接入方根据业务场景使用相同或新建对话ID（建议使用UUID值）</p><p>入参限制：长度限制10-50</p>
                     */
                    std::string m_dialogueId;
                    bool m_dialogueIdHasBeenSet;

                    /**
                     * <p>本次问答用户输入的问题，（最大长度1000）</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>返回类型：0:正常返回； 1:流式返回； 默认：0</p>
                     */
                    int64_t m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>性别，0:未知，1:男，2:女</p>
                     */
                    int64_t m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>年龄，0:未知，最大值：120</p>
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * <p>追问轮数，-1:不追问；0:使用默认规则； 1-10:按指定轮数追问；（最大值10轮）； 默认：0</p>
                     */
                    int64_t m_roundNumber;
                    bool m_roundNumberHasBeenSet;

                    /**
                     * <p>是否追问结构化结果，0：否，1：是；</p>
                     */
                    int64_t m_outputStructured;
                    bool m_outputStructuredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_GETLLMDIAGNOSISHEALTHREQUEST_H_
