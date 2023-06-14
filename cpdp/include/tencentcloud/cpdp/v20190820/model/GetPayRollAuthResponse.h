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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHRESPONSE_H_

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
                * GetPayRollAuth返回参数结构体
                */
                class GetPayRollAuthResponse : public AbstractModel
                {
                public:
                    GetPayRollAuthResponse();
                    ~GetPayRollAuthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取授权状态：
UNAUTHORIZED：未授权
AUTHORIZED：已授权
DEAUTHORIZED：已取消授权
                     * @return AuthStatus 授权状态：
UNAUTHORIZED：未授权
AUTHORIZED：已授权
DEAUTHORIZED：已取消授权
                     * 
                     */
                    std::string GetAuthStatus() const;

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取授权时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthTime 授权时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthTime() const;

                    /**
                     * 判断参数 AuthTime 是否已赋值
                     * @return AuthTime 是否已赋值
                     * 
                     */
                    bool AuthTimeHasBeenSet() const;

                    /**
                     * 获取授权时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CancelAuthTime 授权时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCancelAuthTime() const;

                    /**
                     * 判断参数 CancelAuthTime 是否已赋值
                     * @return CancelAuthTime 是否已赋值
                     * 
                     */
                    bool CancelAuthTimeHasBeenSet() const;

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

                private:

                    /**
                     * 授权状态：
UNAUTHORIZED：未授权
AUTHORIZED：已授权
DEAUTHORIZED：已取消授权
                     */
                    std::string m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * 授权时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authTime;
                    bool m_authTimeHasBeenSet;

                    /**
                     * 授权时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cancelAuthTime;
                    bool m_cancelAuthTimeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHRESPONSE_H_
