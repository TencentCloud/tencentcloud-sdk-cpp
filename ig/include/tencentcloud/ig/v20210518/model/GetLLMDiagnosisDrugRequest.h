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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_GETLLMDIAGNOSISDRUGREQUEST_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_GETLLMDIAGNOSISDRUGREQUEST_H_

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
                * GetLLMDiagnosisDrug请求参数结构体
                */
                class GetLLMDiagnosisDrugRequest : public AbstractModel
                {
                public:
                    GetLLMDiagnosisDrugRequest();
                    ~GetLLMDiagnosisDrugRequest() = default;
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
                     * 获取<p>本次问答用户输入的问题，（最大长度1000，传了图片链接，此参数可为空）</p>
                     * @return Message <p>本次问答用户输入的问题，（最大长度1000，传了图片链接，此参数可为空）</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>本次问答用户输入的问题，（最大长度1000，传了图片链接，此参数可为空）</p>
                     * @param _message <p>本次问答用户输入的问题，（最大长度1000，传了图片链接，此参数可为空）</p>
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
                     * 获取<p>药品图片链接</p>
                     * @return ImageUrl <p>药品图片链接</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>药品图片链接</p>
                     * @param _imageUrl <p>药品图片链接</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

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
                     * 获取<p>提示词</p>
                     * @return Prompt <p>提示词</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>提示词</p>
                     * @param _prompt <p>提示词</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

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
                     * <p>本次问答用户输入的问题，（最大长度1000，传了图片链接，此参数可为空）</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>药品图片链接</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>返回类型：0:正常返回； 1:流式返回； 默认：0</p>
                     */
                    int64_t m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * <p>提示词</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_GETLLMDIAGNOSISDRUGREQUEST_H_
