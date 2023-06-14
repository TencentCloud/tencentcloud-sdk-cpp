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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOSEORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOSEORDERREQUEST_H_

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
                * CloseOrder请求参数结构体
                */
                class CloseOrderRequest : public AbstractModel
                {
                public:
                    CloseOrderRequest();
                    ~CloseOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param _midasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取用户ID，长度不小于5位， 仅支持字母和数字的组合
                     * @return UserId 用户ID，长度不小于5位， 仅支持字母和数字的组合
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID，长度不小于5位， 仅支持字母和数字的组合
                     * @param _userId 用户ID，长度不小于5位， 仅支持字母和数字的组合
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param _midasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     * 
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param _midasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     * 
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取业务订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     * @return OutTradeNo 业务订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置业务订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     * @param _outTradeNo 业务订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     * 
                     */
                    void SetOutTradeNo(const std::string& _outTradeNo);

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     * 
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取聚鑫订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     * @return TransactionId 聚鑫订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置聚鑫订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     * @param _transactionId 聚鑫订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _midasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 用户ID，长度不小于5位， 仅支持字母和数字的组合
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 业务订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 聚鑫订单号，OutTradeNo ， TransactionId二选一，不能都为空,优先使用 OutTradeNo
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOSEORDERREQUEST_H_
