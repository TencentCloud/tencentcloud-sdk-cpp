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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYREQUEST_H_

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
                * CreateSinglePay请求参数结构体
                */
                class CreateSinglePayRequest : public AbstractModel
                {
                public:
                    CreateSinglePayRequest();
                    ~CreateSinglePayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务流水号，历史唯一
                     * @return SerialNumber 业务流水号，历史唯一
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置业务流水号，历史唯一
                     * @param SerialNumber 业务流水号，历史唯一
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取付方账户号
                     * @return PayAccountNumber 付方账户号
                     */
                    std::string GetPayAccountNumber() const;

                    /**
                     * 设置付方账户号
                     * @param PayAccountNumber 付方账户号
                     */
                    void SetPayAccountNumber(const std::string& _payAccountNumber);

                    /**
                     * 判断参数 PayAccountNumber 是否已赋值
                     * @return PayAccountNumber 是否已赋值
                     */
                    bool PayAccountNumberHasBeenSet() const;

                    /**
                     * 获取付方账户名称
                     * @return PayAccountName 付方账户名称
                     */
                    std::string GetPayAccountName() const;

                    /**
                     * 设置付方账户名称
                     * @param PayAccountName 付方账户名称
                     */
                    void SetPayAccountName(const std::string& _payAccountName);

                    /**
                     * 判断参数 PayAccountName 是否已赋值
                     * @return PayAccountName 是否已赋值
                     */
                    bool PayAccountNameHasBeenSet() const;

                    /**
                     * 获取金额
                     * @return Amount 金额
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置金额
                     * @param Amount 金额
                     */
                    void SetAmount(const int64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取收方账户号
                     * @return RecvAccountNumber 收方账户号
                     */
                    std::string GetRecvAccountNumber() const;

                    /**
                     * 设置收方账户号
                     * @param RecvAccountNumber 收方账户号
                     */
                    void SetRecvAccountNumber(const std::string& _recvAccountNumber);

                    /**
                     * 判断参数 RecvAccountNumber 是否已赋值
                     * @return RecvAccountNumber 是否已赋值
                     */
                    bool RecvAccountNumberHasBeenSet() const;

                    /**
                     * 获取收方账户名称
                     * @return RecvAccountName 收方账户名称
                     */
                    std::string GetRecvAccountName() const;

                    /**
                     * 设置收方账户名称
                     * @param RecvAccountName 收方账户名称
                     */
                    void SetRecvAccountName(const std::string& _recvAccountName);

                    /**
                     * 判断参数 RecvAccountName 是否已赋值
                     * @return RecvAccountName 是否已赋值
                     */
                    bool RecvAccountNameHasBeenSet() const;

                    /**
                     * 获取付方账户CNAPS号
                     * @return PayBankCnaps 付方账户CNAPS号
                     */
                    std::string GetPayBankCnaps() const;

                    /**
                     * 设置付方账户CNAPS号
                     * @param PayBankCnaps 付方账户CNAPS号
                     */
                    void SetPayBankCnaps(const std::string& _payBankCnaps);

                    /**
                     * 判断参数 PayBankCnaps 是否已赋值
                     * @return PayBankCnaps 是否已赋值
                     */
                    bool PayBankCnapsHasBeenSet() const;

                    /**
                     * 获取付方账户银行大类，PayBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     * @return PayBankType 付方账户银行大类，PayBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     */
                    std::string GetPayBankType() const;

                    /**
                     * 设置付方账户银行大类，PayBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     * @param PayBankType 付方账户银行大类，PayBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     */
                    void SetPayBankType(const std::string& _payBankType);

                    /**
                     * 判断参数 PayBankType 是否已赋值
                     * @return PayBankType 是否已赋值
                     */
                    bool PayBankTypeHasBeenSet() const;

                    /**
                     * 获取付方账户银行所在省，PayBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     * @return PayBankProvince 付方账户银行所在省，PayBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     */
                    std::string GetPayBankProvince() const;

                    /**
                     * 设置付方账户银行所在省，PayBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     * @param PayBankProvince 付方账户银行所在省，PayBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     */
                    void SetPayBankProvince(const std::string& _payBankProvince);

                    /**
                     * 判断参数 PayBankProvince 是否已赋值
                     * @return PayBankProvince 是否已赋值
                     */
                    bool PayBankProvinceHasBeenSet() const;

                    /**
                     * 获取付方账户银行所在地区，PayBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     * @return PayBankCity 付方账户银行所在地区，PayBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     */
                    std::string GetPayBankCity() const;

                    /**
                     * 设置付方账户银行所在地区，PayBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     * @param PayBankCity 付方账户银行所在地区，PayBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     */
                    void SetPayBankCity(const std::string& _payBankCity);

                    /**
                     * 判断参数 PayBankCity 是否已赋值
                     * @return PayBankCity 是否已赋值
                     */
                    bool PayBankCityHasBeenSet() const;

                    /**
                     * 获取收方账户CNAPS号
                     * @return RecvBankCnaps 收方账户CNAPS号
                     */
                    std::string GetRecvBankCnaps() const;

                    /**
                     * 设置收方账户CNAPS号
                     * @param RecvBankCnaps 收方账户CNAPS号
                     */
                    void SetRecvBankCnaps(const std::string& _recvBankCnaps);

                    /**
                     * 判断参数 RecvBankCnaps 是否已赋值
                     * @return RecvBankCnaps 是否已赋值
                     */
                    bool RecvBankCnapsHasBeenSet() const;

                    /**
                     * 获取收方账户银行大类，RecvBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     * @return RecvBankType 收方账户银行大类，RecvBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     */
                    std::string GetRecvBankType() const;

                    /**
                     * 设置收方账户银行大类，RecvBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     * @param RecvBankType 收方账户银行大类，RecvBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     */
                    void SetRecvBankType(const std::string& _recvBankType);

                    /**
                     * 判断参数 RecvBankType 是否已赋值
                     * @return RecvBankType 是否已赋值
                     */
                    bool RecvBankTypeHasBeenSet() const;

                    /**
                     * 获取收方账户银行所在省，RecvBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     * @return RecvBankProvince 收方账户银行所在省，RecvBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     */
                    std::string GetRecvBankProvince() const;

                    /**
                     * 设置收方账户银行所在省，RecvBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     * @param RecvBankProvince 收方账户银行所在省，RecvBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     */
                    void SetRecvBankProvince(const std::string& _recvBankProvince);

                    /**
                     * 判断参数 RecvBankProvince 是否已赋值
                     * @return RecvBankProvince 是否已赋值
                     */
                    bool RecvBankProvinceHasBeenSet() const;

                    /**
                     * 获取收方账户银行所在地区，RecvBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     * @return RecvBankCity 收方账户银行所在地区，RecvBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     */
                    std::string GetRecvBankCity() const;

                    /**
                     * 设置收方账户银行所在地区，RecvBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     * @param RecvBankCity 收方账户银行所在地区，RecvBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     */
                    void SetRecvBankCity(const std::string& _recvBankCity);

                    /**
                     * 判断参数 RecvBankCity 是否已赋值
                     * @return RecvBankCity 是否已赋值
                     */
                    bool RecvBankCityHasBeenSet() const;

                    /**
                     * 获取收款方证件类型（见常见问题-银企直连证件类型枚举信息）
                     * @return RecvCertType 收款方证件类型（见常见问题-银企直连证件类型枚举信息）
                     */
                    std::string GetRecvCertType() const;

                    /**
                     * 设置收款方证件类型（见常见问题-银企直连证件类型枚举信息）
                     * @param RecvCertType 收款方证件类型（见常见问题-银企直连证件类型枚举信息）
                     */
                    void SetRecvCertType(const std::string& _recvCertType);

                    /**
                     * 判断参数 RecvCertType 是否已赋值
                     * @return RecvCertType 是否已赋值
                     */
                    bool RecvCertTypeHasBeenSet() const;

                    /**
                     * 获取收款方证件号码
                     * @return RecvCertNo 收款方证件号码
                     */
                    std::string GetRecvCertNo() const;

                    /**
                     * 设置收款方证件号码
                     * @param RecvCertNo 收款方证件号码
                     */
                    void SetRecvCertNo(const std::string& _recvCertNo);

                    /**
                     * 判断参数 RecvCertNo 是否已赋值
                     * @return RecvCertNo 是否已赋值
                     */
                    bool RecvCertNoHasBeenSet() const;

                    /**
                     * 获取摘要信息
                     * @return Summary 摘要信息
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置摘要信息
                     * @param Summary 摘要信息
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填sandbox
                     * @return Profile 接入环境。沙箱环境填sandbox
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox
                     * @param Profile 接入环境。沙箱环境填sandbox
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 业务流水号，历史唯一
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 付方账户号
                     */
                    std::string m_payAccountNumber;
                    bool m_payAccountNumberHasBeenSet;

                    /**
                     * 付方账户名称
                     */
                    std::string m_payAccountName;
                    bool m_payAccountNameHasBeenSet;

                    /**
                     * 金额
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 收方账户号
                     */
                    std::string m_recvAccountNumber;
                    bool m_recvAccountNumberHasBeenSet;

                    /**
                     * 收方账户名称
                     */
                    std::string m_recvAccountName;
                    bool m_recvAccountNameHasBeenSet;

                    /**
                     * 付方账户CNAPS号
                     */
                    std::string m_payBankCnaps;
                    bool m_payBankCnapsHasBeenSet;

                    /**
                     * 付方账户银行大类，PayBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     */
                    std::string m_payBankType;
                    bool m_payBankTypeHasBeenSet;

                    /**
                     * 付方账户银行所在省，PayBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     */
                    std::string m_payBankProvince;
                    bool m_payBankProvinceHasBeenSet;

                    /**
                     * 付方账户银行所在地区，PayBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     */
                    std::string m_payBankCity;
                    bool m_payBankCityHasBeenSet;

                    /**
                     * 收方账户CNAPS号
                     */
                    std::string m_recvBankCnaps;
                    bool m_recvBankCnapsHasBeenSet;

                    /**
                     * 收方账户银行大类，RecvBankCnaps为空时必传（见常见问题-银企直连银行类型）
                     */
                    std::string m_recvBankType;
                    bool m_recvBankTypeHasBeenSet;

                    /**
                     * 收方账户银行所在省，RecvBankCnaps为空时必传（见常见问题-银企直连省份枚举信息）
                     */
                    std::string m_recvBankProvince;
                    bool m_recvBankProvinceHasBeenSet;

                    /**
                     * 收方账户银行所在地区，RecvBankCnaps为空时必传（见常见问题-银企直连城市枚举信息）
                     */
                    std::string m_recvBankCity;
                    bool m_recvBankCityHasBeenSet;

                    /**
                     * 收款方证件类型（见常见问题-银企直连证件类型枚举信息）
                     */
                    std::string m_recvCertType;
                    bool m_recvCertTypeHasBeenSet;

                    /**
                     * 收款方证件号码
                     */
                    std::string m_recvCertNo;
                    bool m_recvCertNoHasBeenSet;

                    /**
                     * 摘要信息
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYREQUEST_H_
