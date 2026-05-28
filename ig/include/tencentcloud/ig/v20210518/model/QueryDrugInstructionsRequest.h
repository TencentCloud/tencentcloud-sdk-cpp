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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_QUERYDRUGINSTRUCTIONSREQUEST_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_QUERYDRUGINSTRUCTIONSREQUEST_H_

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
                * QueryDrugInstructions请求参数结构体
                */
                class QueryDrugInstructionsRequest : public AbstractModel
                {
                public:
                    QueryDrugInstructionsRequest();
                    ~QueryDrugInstructionsRequest() = default;
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
                     * <p>本次问答用户输入的问题，（最大长度1000）</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_QUERYDRUGINSTRUCTIONSREQUEST_H_
