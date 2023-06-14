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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBILLDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBILLDOWNLOADURLREQUEST_H_

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
                * QueryBillDownloadURL请求参数结构体
                */
                class QueryBillDownloadURLRequest : public AbstractModel
                {
                public:
                    QueryBillDownloadURLRequest();
                    ~QueryBillDownloadURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户号
                     * @return MerchantId 商户号
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户号
                     * @param _merchantId 商户号
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取代发类型：
1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * @return TransferType 代发类型：
1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * 
                     */
                    int64_t GetTransferType() const;

                    /**
                     * 设置代发类型：
1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     * @param _transferType 代发类型：
1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
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
                     * 获取账单日期，格式yyyy-MM-dd
                     * @return BillDate 账单日期，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置账单日期，格式yyyy-MM-dd
                     * @param _billDate 账单日期，格式yyyy-MM-dd
                     * 
                     */
                    void SetBillDate(const std::string& _billDate);

                    /**
                     * 判断参数 BillDate 是否已赋值
                     * @return BillDate 是否已赋值
                     * 
                     */
                    bool BillDateHasBeenSet() const;

                private:

                    /**
                     * 商户号
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 代发类型：
1、 微信企业付款 
2、 支付宝转账 
3、 平安银企直联代发转账
                     */
                    int64_t m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * 账单日期，格式yyyy-MM-dd
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBILLDOWNLOADURLREQUEST_H_
