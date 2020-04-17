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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYREWITHDRAWALREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYREWITHDRAWALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/WithdrawBill.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * ApplyReWithdrawal请求参数结构体
                */
                class ApplyReWithdrawalRequest : public AbstractModel
                {
                public:
                    ApplyReWithdrawalRequest();
                    ~ApplyReWithdrawalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫业务类型
                     * @return BusinessType 聚鑫业务类型
                     */
                    uint64_t GetBusinessType() const;

                    /**
                     * 设置聚鑫业务类型
                     * @param BusinessType 聚鑫业务类型
                     */
                    void SetBusinessType(const uint64_t& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取由平台客服提供的计费密钥Id
                     * @return MidasSecretId 由平台客服提供的计费密钥Id
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置由平台客服提供的计费密钥Id
                     * @param MidasSecretId 由平台客服提供的计费密钥Id
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取计费签名
                     * @return MidasSignature 计费签名
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置计费签名
                     * @param MidasSignature 计费签名
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取提现信息
                     * @return Body 提现信息
                     */
                    WithdrawBill GetBody() const;

                    /**
                     * 设置提现信息
                     * @param Body 提现信息
                     */
                    void SetBody(const WithdrawBill& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取聚鑫业务ID
                     * @return MidasAppId 聚鑫业务ID
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫业务ID
                     * @param MidasAppId 聚鑫业务ID
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     */
                    bool MidasAppIdHasBeenSet() const;

                private:

                    /**
                     * 聚鑫业务类型
                     */
                    uint64_t m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 由平台客服提供的计费密钥Id
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 计费签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 提现信息
                     */
                    WithdrawBill m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 聚鑫业务ID
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYREWITHDRAWALREQUEST_H_
