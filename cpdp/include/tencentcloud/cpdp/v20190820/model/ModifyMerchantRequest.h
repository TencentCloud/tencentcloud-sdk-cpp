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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYMERCHANTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYMERCHANTREQUEST_H_

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
                * ModifyMerchant请求参数结构体
                */
                class ModifyMerchantRequest : public AbstractModel
                {
                public:
                    ModifyMerchantRequest();
                    ~ModifyMerchantRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取进件成功后返给商户的AppId
                     * @return MerchantAppId 进件成功后返给商户的AppId
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 设置进件成功后返给商户的AppId
                     * @param _merchantAppId 进件成功后返给商户的AppId
                     * 
                     */
                    void SetMerchantAppId(const std::string& _merchantAppId);

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                    /**
                     * 获取收款商户名称
                     * @return MerchantName 收款商户名称
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置收款商户名称
                     * @param _merchantName 收款商户名称
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                    /**
                     * 获取B2B 支付标志。是否开通 B2B支付， 1:开通 0:不开通。
                     * @return BusinessPayFlag B2B 支付标志。是否开通 B2B支付， 1:开通 0:不开通。
                     * 
                     */
                    std::string GetBusinessPayFlag() const;

                    /**
                     * 设置B2B 支付标志。是否开通 B2B支付， 1:开通 0:不开通。
                     * @param _businessPayFlag B2B 支付标志。是否开通 B2B支付， 1:开通 0:不开通。
                     * 
                     */
                    void SetBusinessPayFlag(const std::string& _businessPayFlag);

                    /**
                     * 判断参数 BusinessPayFlag 是否已赋值
                     * @return BusinessPayFlag 是否已赋值
                     * 
                     */
                    bool BusinessPayFlagHasBeenSet() const;

                private:

                    /**
                     * 进件成功后返给商户的AppId
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 收款商户名称
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * B2B 支付标志。是否开通 B2B支付， 1:开通 0:不开通。
                     */
                    std::string m_businessPayFlag;
                    bool m_businessPayFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MODIFYMERCHANTREQUEST_H_
