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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYREFUNDREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYREFUNDREQUEST_H_

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
                * QueryRefund请求参数结构体
                */
                class QueryRefundRequest : public AbstractModel
                {
                public:
                    QueryRefundRequest();
                    ~QueryRefundRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户Id，长度不小于5位，仅支持字母和数字的组合。
                     * @return UserId 用户Id，长度不小于5位，仅支持字母和数字的组合。
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，长度不小于5位，仅支持字母和数字的组合。
                     * @param UserId 用户Id，长度不小于5位，仅支持字母和数字的组合。
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
                     * @return RefundId 退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
                     */
                    std::string GetRefundId() const;

                    /**
                     * 设置退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
                     * @param RefundId 退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
                     */
                    void SetRefundId(const std::string& _refundId);

                    /**
                     * 判断参数 RefundId 是否已赋值
                     * @return RefundId 是否已赋值
                     */
                    bool RefundIdHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的支付主MidasAppid
                     * @return MidasAppId 聚鑫分配的支付主MidasAppid
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppid
                     * @param MidasAppId 聚鑫分配的支付主MidasAppid
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param MidasSecretId 聚鑫分配的安全ID
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     */
                    bool MidasSignatureHasBeenSet() const;

                private:

                    /**
                     * 用户Id，长度不小于5位，仅支持字母和数字的组合。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合。
                     */
                    std::string m_refundId;
                    bool m_refundIdHasBeenSet;

                    /**
                     * 聚鑫分配的支付主MidasAppid
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYREFUNDREQUEST_H_
