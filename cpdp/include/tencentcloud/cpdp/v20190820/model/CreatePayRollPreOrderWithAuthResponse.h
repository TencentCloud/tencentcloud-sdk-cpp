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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEPAYROLLPREORDERWITHAUTHRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEPAYROLLPREORDERWITHAUTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreatePayRollPreOrderWithAuth返回参数结构体
                */
                class CreatePayRollPreOrderWithAuthResponse : public AbstractModel
                {
                public:
                    CreatePayRollPreOrderWithAuthResponse();
                    ~CreatePayRollPreOrderWithAuthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * @return AuthNumber 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * 
                     */
                    std::string GetAuthNumber() const;

                    /**
                     * 判断参数 AuthNumber 是否已赋值
                     * @return AuthNumber 是否已赋值
                     * 
                     */
                    bool AuthNumberHasBeenSet() const;

                    /**
                     * 获取Token有效时间，单位秒
                     * @return ExpireTime Token有效时间，单位秒
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取微信服务商商户的商户号，由微信支付生成并下发
                     * @return MerchantId 微信服务商商户的商户号，由微信支付生成并下发
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取用户在商户对应appid下的唯一标识
                     * @return OpenId 用户在商户对应appid下的唯一标识
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取微信服务商下特约商户的商户号，由微信支付生成并下发
                     * @return SubMerchantId 微信服务商下特约商户的商户号，由微信支付生成并下发
                     * 
                     */
                    std::string GetSubMerchantId() const;

                    /**
                     * 判断参数 SubMerchantId 是否已赋值
                     * @return SubMerchantId 是否已赋值
                     * 
                     */
                    bool SubMerchantIdHasBeenSet() const;

                    /**
                     * 获取Token值
                     * @return Token Token值
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     */
                    std::string m_authNumber;
                    bool m_authNumberHasBeenSet;

                    /**
                     * Token有效时间，单位秒
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 微信服务商商户的商户号，由微信支付生成并下发
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 用户在商户对应appid下的唯一标识
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 微信服务商下特约商户的商户号，由微信支付生成并下发
                     */
                    std::string m_subMerchantId;
                    bool m_subMerchantIdHasBeenSet;

                    /**
                     * Token值
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEPAYROLLPREORDERWITHAUTHRESPONSE_H_
