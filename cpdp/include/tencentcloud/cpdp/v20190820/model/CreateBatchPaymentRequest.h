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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEBATCHPAYMENTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEBATCHPAYMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CreateBatchPaymentRecipient.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateBatchPayment请求参数结构体
                */
                class CreateBatchPaymentRequest : public AbstractModel
                {
                public:
                    CreateBatchPaymentRequest();
                    ~CreateBatchPaymentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * @return TransferType 1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * 
                     */
                    int64_t GetTransferType() const;

                    /**
                     * 设置1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * @param _transferType 1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * 
                     */
                    void SetTransferType(const int64_t& _transferType);

                    /**
                     * 判断参数 TransferType 是否已赋值
                     * @return TransferType 是否已赋值
                     * 
                     */
                    bool TransferTypeHasBeenSet() const;

                    /**
                     * 获取转账详情
                     * @return RecipientList 转账详情
                     * 
                     */
                    std::vector<CreateBatchPaymentRecipient> GetRecipientList() const;

                    /**
                     * 设置转账详情
                     * @param _recipientList 转账详情
                     * 
                     */
                    void SetRecipientList(const std::vector<CreateBatchPaymentRecipient>& _recipientList);

                    /**
                     * 判断参数 RecipientList 是否已赋值
                     * @return RecipientList 是否已赋值
                     * 
                     */
                    bool RecipientListHasBeenSet() const;

                    /**
                     * 获取请求预留字段
                     * @return ReqReserved 请求预留字段
                     * 
                     */
                    std::string GetReqReserved() const;

                    /**
                     * 设置请求预留字段
                     * @param _reqReserved 请求预留字段
                     * 
                     */
                    void SetReqReserved(const std::string& _reqReserved);

                    /**
                     * 判断参数 ReqReserved 是否已赋值
                     * @return ReqReserved 是否已赋值
                     * 
                     */
                    bool ReqReservedHasBeenSet() const;

                    /**
                     * 获取回调Url
                     * @return NotifyUrl 回调Url
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置回调Url
                     * @param _notifyUrl 回调Url
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                private:

                    /**
                     * 1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     */
                    int64_t m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * 转账详情
                     */
                    std::vector<CreateBatchPaymentRecipient> m_recipientList;
                    bool m_recipientListHasBeenSet;

                    /**
                     * 请求预留字段
                     */
                    std::string m_reqReserved;
                    bool m_reqReservedHasBeenSet;

                    /**
                     * 回调Url
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEBATCHPAYMENTREQUEST_H_
