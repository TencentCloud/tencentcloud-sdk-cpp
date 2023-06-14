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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHRESULTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHRESULTREQUEST_H_

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
                * GetPayRollAuthResult请求参数结构体
                */
                class GetPayRollAuthResultRequest : public AbstractModel
                {
                public:
                    GetPayRollAuthResultRequest();
                    ~GetPayRollAuthResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * @return AuthNumber 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * 
                     */
                    std::string GetAuthNumber() const;

                    /**
                     * 设置商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * @param _authNumber 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * 
                     */
                    void SetAuthNumber(const std::string& _authNumber);

                    /**
                     * 判断参数 AuthNumber 是否已赋值
                     * @return AuthNumber 是否已赋值
                     * 
                     */
                    bool AuthNumberHasBeenSet() const;

                    /**
                     * 获取微信服务商下特约商户的商户号，由微信支付生成并下发
                     * @return SubMerchantId 微信服务商下特约商户的商户号，由微信支付生成并下发
                     * 
                     */
                    std::string GetSubMerchantId() const;

                    /**
                     * 设置微信服务商下特约商户的商户号，由微信支付生成并下发
                     * @param _subMerchantId 微信服务商下特约商户的商户号，由微信支付生成并下发
                     * 
                     */
                    void SetSubMerchantId(const std::string& _subMerchantId);

                    /**
                     * 判断参数 SubMerchantId 是否已赋值
                     * @return SubMerchantId 是否已赋值
                     * 
                     */
                    bool SubMerchantIdHasBeenSet() const;

                private:

                    /**
                     * 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     */
                    std::string m_authNumber;
                    bool m_authNumberHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHRESULTREQUEST_H_
