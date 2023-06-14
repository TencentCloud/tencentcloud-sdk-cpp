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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPROFITSHAREPAYEEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPROFITSHAREPAYEEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 分账收款人信息
                */
                class OpenBankProfitSharePayeeInfo : public AbstractModel
                {
                public:
                    OpenBankProfitSharePayeeInfo();
                    ~OpenBankProfitSharePayeeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收款人账户名称
                     * @return AccountName 收款人账户名称
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置收款人账户名称
                     * @param _accountName 收款人账户名称
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取银行名称
可大体识别银行就行
                     * @return BankName 银行名称
可大体识别银行就行
                     * 
                     */
                    std::string GetBankName() const;

                    /**
                     * 设置银行名称
可大体识别银行就行
                     * @param _bankName 银行名称
可大体识别银行就行
                     * 
                     */
                    void SetBankName(const std::string& _bankName);

                    /**
                     * 判断参数 BankName 是否已赋值
                     * @return BankName 是否已赋值
                     * 
                     */
                    bool BankNameHasBeenSet() const;

                    /**
                     * 获取账户货币
                     * @return Currency 账户货币
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置账户货币
                     * @param _currency 账户货币
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
                     * 获取账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
                     * @return Nature 账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
                     * 
                     */
                    std::string GetNature() const;

                    /**
                     * 设置账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
                     * @param _nature 账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
                     * 
                     */
                    void SetNature(const std::string& _nature);

                    /**
                     * 判断参数 Nature 是否已赋值
                     * @return Nature 是否已赋值
                     * 
                     */
                    bool NatureHasBeenSet() const;

                    /**
                     * 获取账户地区/受益人所在国家。参考附录“国家代码”表——“代码”字段
                     * @return Country 账户地区/受益人所在国家。参考附录“国家代码”表——“代码”字段
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置账户地区/受益人所在国家。参考附录“国家代码”表——“代码”字段
                     * @param _country 账户地区/受益人所在国家。参考附录“国家代码”表——“代码”字段
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取账户开户所在国家
参考附录“国家代码”表——“代码”字段
                     * @return DepositCountry 账户开户所在国家
参考附录“国家代码”表——“代码”字段
                     * 
                     */
                    std::string GetDepositCountry() const;

                    /**
                     * 设置账户开户所在国家
参考附录“国家代码”表——“代码”字段
                     * @param _depositCountry 账户开户所在国家
参考附录“国家代码”表——“代码”字段
                     * 
                     */
                    void SetDepositCountry(const std::string& _depositCountry);

                    /**
                     * 判断参数 DepositCountry 是否已赋值
                     * @return DepositCountry 是否已赋值
                     * 
                     */
                    bool DepositCountryHasBeenSet() const;

                    /**
                     * 获取合作有效期
yyyy-MM-dd
                     * @return ExpireDate 合作有效期
yyyy-MM-dd
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置合作有效期
yyyy-MM-dd
                     * @param _expireDate 合作有效期
yyyy-MM-dd
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                    /**
                     * 获取0:个人(对私) 1:公司(对公)
                     * @return Flag 0:个人(对私) 1:公司(对公)
                     * 
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置0:个人(对私) 1:公司(对公)
                     * @param _flag 0:个人(对私) 1:公司(对公)
                     * 
                     */
                    void SetFlag(const std::string& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取开户行地址
账户地区非中国必填，【账户名+开户行地址不可超过114个字符（只允许【英文字母数字空格.,/-()'】），否则可能导致境外银行付款失败】
                     * @return BankAddress 开户行地址
账户地区非中国必填，【账户名+开户行地址不可超过114个字符（只允许【英文字母数字空格.,/-()'】），否则可能导致境外银行付款失败】
                     * 
                     */
                    std::string GetBankAddress() const;

                    /**
                     * 设置开户行地址
账户地区非中国必填，【账户名+开户行地址不可超过114个字符（只允许【英文字母数字空格.,/-()'】），否则可能导致境外银行付款失败】
                     * @param _bankAddress 开户行地址
账户地区非中国必填，【账户名+开户行地址不可超过114个字符（只允许【英文字母数字空格.,/-()'】），否则可能导致境外银行付款失败】
                     * 
                     */
                    void SetBankAddress(const std::string& _bankAddress);

                    /**
                     * 判断参数 BankAddress 是否已赋值
                     * @return BankAddress 是否已赋值
                     * 
                     */
                    bool BankAddressHasBeenSet() const;

                    /**
                     * 获取客户地址
非中国内地账户的客户地址不能为空
                     * @return Address 客户地址
非中国内地账户的客户地址不能为空
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置客户地址
非中国内地账户的客户地址不能为空
                     * @param _address 客户地址
非中国内地账户的客户地址不能为空
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取账户属性
账户开户所在国家为中国则必填。
1-离岸账户 0-在岸账户
                     * @return IsOSA 账户属性
账户开户所在国家为中国则必填。
1-离岸账户 0-在岸账户
                     * 
                     */
                    std::string GetIsOSA() const;

                    /**
                     * 设置账户属性
账户开户所在国家为中国则必填。
1-离岸账户 0-在岸账户
                     * @param _isOSA 账户属性
账户开户所在国家为中国则必填。
1-离岸账户 0-在岸账户
                     * 
                     */
                    void SetIsOSA(const std::string& _isOSA);

                    /**
                     * 判断参数 IsOSA 是否已赋值
                     * @return IsOSA 是否已赋值
                     * 
                     */
                    bool IsOSAHasBeenSet() const;

                    /**
                     * 获取账户省份
参考附录“地区代码”
                     * @return Province 账户省份
参考附录“地区代码”
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置账户省份
参考附录“地区代码”
                     * @param _province 账户省份
参考附录“地区代码”
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取账户城市
参考附录“地区代码
                     * @return City 账户城市
参考附录“地区代码
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置账户城市
参考附录“地区代码
                     * @param _city 账户城市
参考附录“地区代码
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取证件号/统一信用证代码
如果country与depositcountry字段都是CHN时，必填
对公账户填统一信用证代码，对私账户填身份证号码
离岸账户非必填
                     * @return LegalIdNo 证件号/统一信用证代码
如果country与depositcountry字段都是CHN时，必填
对公账户填统一信用证代码，对私账户填身份证号码
离岸账户非必填
                     * 
                     */
                    std::string GetLegalIdNo() const;

                    /**
                     * 设置证件号/统一信用证代码
如果country与depositcountry字段都是CHN时，必填
对公账户填统一信用证代码，对私账户填身份证号码
离岸账户非必填
                     * @param _legalIdNo 证件号/统一信用证代码
如果country与depositcountry字段都是CHN时，必填
对公账户填统一信用证代码，对私账户填身份证号码
离岸账户非必填
                     * 
                     */
                    void SetLegalIdNo(const std::string& _legalIdNo);

                    /**
                     * 判断参数 LegalIdNo 是否已赋值
                     * @return LegalIdNo 是否已赋值
                     * 
                     */
                    bool LegalIdNoHasBeenSet() const;

                    /**
                     * 获取手机号。
账户地区是日本则必填
                     * @return Telephone 手机号。
账户地区是日本则必填
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置手机号。
账户地区是日本则必填
                     * @param _telephone 手机号。
账户地区是日本则必填
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                    /**
                     * 获取参考接口说明。
                     * @return BicCode 参考接口说明。
                     * 
                     */
                    std::string GetBicCode() const;

                    /**
                     * 设置参考接口说明。
                     * @param _bicCode 参考接口说明。
                     * 
                     */
                    void SetBicCode(const std::string& _bicCode);

                    /**
                     * 判断参数 BicCode 是否已赋值
                     * @return BicCode 是否已赋值
                     * 
                     */
                    bool BicCodeHasBeenSet() const;

                    /**
                     * 获取参考接口说明。
                     * @return SwiftCode 参考接口说明。
                     * 
                     */
                    std::string GetSwiftCode() const;

                    /**
                     * 设置参考接口说明。
                     * @param _swiftCode 参考接口说明。
                     * 
                     */
                    void SetSwiftCode(const std::string& _swiftCode);

                    /**
                     * 判断参数 SwiftCode 是否已赋值
                     * @return SwiftCode 是否已赋值
                     * 
                     */
                    bool SwiftCodeHasBeenSet() const;

                    /**
                     * 获取大额支付行号/支付行号
参考接口说明。境外（大额支付行号）参考附录【大额行号】，境内（支付行号）参考附录【支付行号】
                     * @return Cnaps 大额支付行号/支付行号
参考接口说明。境外（大额支付行号）参考附录【大额行号】，境内（支付行号）参考附录【支付行号】
                     * 
                     */
                    std::string GetCnaps() const;

                    /**
                     * 设置大额支付行号/支付行号
参考接口说明。境外（大额支付行号）参考附录【大额行号】，境内（支付行号）参考附录【支付行号】
                     * @param _cnaps 大额支付行号/支付行号
参考接口说明。境外（大额支付行号）参考附录【大额行号】，境内（支付行号）参考附录【支付行号】
                     * 
                     */
                    void SetCnaps(const std::string& _cnaps);

                    /**
                     * 判断参数 Cnaps 是否已赋值
                     * @return Cnaps 是否已赋值
                     * 
                     */
                    bool CnapsHasBeenSet() const;

                    /**
                     * 获取中转行号，参考接口说明。
                     * @return TransferBankNo 中转行号，参考接口说明。
                     * 
                     */
                    std::string GetTransferBankNo() const;

                    /**
                     * 设置中转行号，参考接口说明。
                     * @param _transferBankNo 中转行号，参考接口说明。
                     * 
                     */
                    void SetTransferBankNo(const std::string& _transferBankNo);

                    /**
                     * 判断参数 TransferBankNo 是否已赋值
                     * @return TransferBankNo 是否已赋值
                     * 
                     */
                    bool TransferBankNoHasBeenSet() const;

                    /**
                     * 获取关联附件。上传的文件ID
                     * @return Fid 关联附件。上传的文件ID
                     * 
                     */
                    std::string GetFid() const;

                    /**
                     * 设置关联附件。上传的文件ID
                     * @param _fid 关联附件。上传的文件ID
                     * 
                     */
                    void SetFid(const std::string& _fid);

                    /**
                     * 判断参数 Fid 是否已赋值
                     * @return Fid 是否已赋值
                     * 
                     */
                    bool FidHasBeenSet() const;

                private:

                    /**
                     * 收款人账户名称
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 银行名称
可大体识别银行就行
                     */
                    std::string m_bankName;
                    bool m_bankNameHasBeenSet;

                    /**
                     * 账户货币
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 账户类型。
00:借记卡
01:存折 
02:信用卡 
03:准贷记卡 
04:预付卡费 
05:境外卡
                     */
                    std::string m_nature;
                    bool m_natureHasBeenSet;

                    /**
                     * 账户地区/受益人所在国家。参考附录“国家代码”表——“代码”字段
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 账户开户所在国家
参考附录“国家代码”表——“代码”字段
                     */
                    std::string m_depositCountry;
                    bool m_depositCountryHasBeenSet;

                    /**
                     * 合作有效期
yyyy-MM-dd
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                    /**
                     * 0:个人(对私) 1:公司(对公)
                     */
                    std::string m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 开户行地址
账户地区非中国必填，【账户名+开户行地址不可超过114个字符（只允许【英文字母数字空格.,/-()'】），否则可能导致境外银行付款失败】
                     */
                    std::string m_bankAddress;
                    bool m_bankAddressHasBeenSet;

                    /**
                     * 客户地址
非中国内地账户的客户地址不能为空
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 账户属性
账户开户所在国家为中国则必填。
1-离岸账户 0-在岸账户
                     */
                    std::string m_isOSA;
                    bool m_isOSAHasBeenSet;

                    /**
                     * 账户省份
参考附录“地区代码”
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 账户城市
参考附录“地区代码
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 证件号/统一信用证代码
如果country与depositcountry字段都是CHN时，必填
对公账户填统一信用证代码，对私账户填身份证号码
离岸账户非必填
                     */
                    std::string m_legalIdNo;
                    bool m_legalIdNoHasBeenSet;

                    /**
                     * 手机号。
账户地区是日本则必填
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 参考接口说明。
                     */
                    std::string m_bicCode;
                    bool m_bicCodeHasBeenSet;

                    /**
                     * 参考接口说明。
                     */
                    std::string m_swiftCode;
                    bool m_swiftCodeHasBeenSet;

                    /**
                     * 大额支付行号/支付行号
参考接口说明。境外（大额支付行号）参考附录【大额行号】，境内（支付行号）参考附录【支付行号】
                     */
                    std::string m_cnaps;
                    bool m_cnapsHasBeenSet;

                    /**
                     * 中转行号，参考接口说明。
                     */
                    std::string m_transferBankNo;
                    bool m_transferBankNoHasBeenSet;

                    /**
                     * 关联附件。上传的文件ID
                     */
                    std::string m_fid;
                    bool m_fidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPROFITSHAREPAYEEINFO_H_
