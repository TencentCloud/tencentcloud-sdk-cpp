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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTRESPONSE_H_

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
                * QueryMerchant返回参数结构体
                */
                class QueryMerchantResponse : public AbstractModel
                {
                public:
                    QueryMerchantResponse();
                    ~QueryMerchantResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分配给商户的 AppId，该 AppId 为后续各项 交易的商户标识。
                     * @return MerchantAppId 分配给商户的 AppId，该 AppId 为后续各项 交易的商户标识。
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                    /**
                     * 获取收款商户名称。
                     * @return MerchantName 收款商户名称。
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                    /**
                     * 获取B2B 支付标志。是否开通 B2B 支付， 1:开通 0:不开通。
                     * @return BusinessPayFlag B2B 支付标志。是否开通 B2B 支付， 1:开通 0:不开通。
                     * 
                     */
                    std::string GetBusinessPayFlag() const;

                    /**
                     * 判断参数 BusinessPayFlag 是否已赋值
                     * @return BusinessPayFlag 是否已赋值
                     * 
                     */
                    bool BusinessPayFlagHasBeenSet() const;

                private:

                    /**
                     * 分配给商户的 AppId，该 AppId 为后续各项 交易的商户标识。
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 收款商户名称。
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * B2B 支付标志。是否开通 B2B 支付， 1:开通 0:不开通。
                     */
                    std::string m_businessPayFlag;
                    bool m_businessPayFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTRESPONSE_H_
