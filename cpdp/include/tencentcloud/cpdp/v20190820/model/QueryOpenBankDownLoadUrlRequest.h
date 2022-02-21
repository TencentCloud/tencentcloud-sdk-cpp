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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDOWNLOADURLREQUEST_H_

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
                * QueryOpenBankDownLoadUrl请求参数结构体
                */
                class QueryOpenBankDownLoadUrlRequest : public AbstractModel
                {
                public:
                    QueryOpenBankDownLoadUrlRequest();
                    ~QueryOpenBankDownLoadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号，外部接入平台方入驻云企付平台后下发。
                     * @return ChannelMerchantId 渠道商户号，外部接入平台方入驻云企付平台后下发。
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号，外部接入平台方入驻云企付平台后下发。
                     * @param ChannelMerchantId 渠道商户号，外部接入平台方入驻云企付平台后下发。
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取账单日期,yyyy-MM-dd。
                     * @return BillDate 账单日期,yyyy-MM-dd。
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置账单日期,yyyy-MM-dd。
                     * @param BillDate 账单日期,yyyy-MM-dd。
                     */
                    void SetBillDate(const std::string& _billDate);

                    /**
                     * 判断参数 BillDate 是否已赋值
                     * @return BillDate 是否已赋值
                     */
                    bool BillDateHasBeenSet() const;

                    /**
                     * 获取账单类型，默认交易账单。
                     * @return BillType 账单类型，默认交易账单。
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置账单类型，默认交易账单。
                     * @param BillType 账单类型，默认交易账单。
                     */
                    void SetBillType(const std::string& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * @return Environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     * @param Environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 渠道商户号，外部接入平台方入驻云企付平台后下发。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 账单日期,yyyy-MM-dd。
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                    /**
                     * 账单类型，默认交易账单。
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDOWNLOADURLREQUEST_H_
