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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPROFITSHAREPAYEEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPROFITSHAREPAYEEREQUEST_H_

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
                * QueryOpenBankProfitSharePayee请求参数结构体
                */
                class QueryOpenBankProfitSharePayeeRequest : public AbstractModel
                {
                public:
                    QueryOpenBankProfitSharePayeeRequest();
                    ~QueryOpenBankProfitSharePayeeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号。代理商/集团ID
                     * @return ChannelMerchantId 渠道商户号。代理商/集团ID
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号。代理商/集团ID
                     * @param _channelMerchantId 渠道商户号。代理商/集团ID
                     * 
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取渠道子商户号。商户ID
                     * @return ChannelSubMerchantId 渠道子商户号。商户ID
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户号。商户ID
                     * @param _channelSubMerchantId 渠道子商户号。商户ID
                     * 
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取分账方绑定添加返回的AccountId，账户号和账户ID选其一
                     * @return AccountId 分账方绑定添加返回的AccountId，账户号和账户ID选其一
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置分账方绑定添加返回的AccountId，账户号和账户ID选其一
                     * @param _accountId 分账方绑定添加返回的AccountId，账户号和账户ID选其一
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取银行账户号要与绑定收款方时保持一致，账户号AccountNo和账户AccoutId选其一
                     * @return AccountNo 银行账户号要与绑定收款方时保持一致，账户号AccountNo和账户AccoutId选其一
                     * 
                     */
                    std::string GetAccountNo() const;

                    /**
                     * 设置银行账户号要与绑定收款方时保持一致，账户号AccountNo和账户AccoutId选其一
                     * @param _accountNo 银行账户号要与绑定收款方时保持一致，账户号AccountNo和账户AccoutId选其一
                     * 
                     */
                    void SetAccountNo(const std::string& _accountNo);

                    /**
                     * 判断参数 AccountNo 是否已赋值
                     * @return AccountNo 是否已赋值
                     * 
                     */
                    bool AccountNoHasBeenSet() const;

                    /**
                     * 获取使用账户号时必选
                     * @return Currency 使用账户号时必选
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置使用账户号时必选
                     * @param _currency 使用账户号时必选
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * @return Environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * @param _environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 渠道商户号。代理商/集团ID
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道子商户号。商户ID
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 分账方绑定添加返回的AccountId，账户号和账户ID选其一
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 银行账户号要与绑定收款方时保持一致，账户号AccountNo和账户AccoutId选其一
                     */
                    std::string m_accountNo;
                    bool m_accountNoHasBeenSet;

                    /**
                     * 使用账户号时必选
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKPROFITSHAREPAYEEREQUEST_H_
