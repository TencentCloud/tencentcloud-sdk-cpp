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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_SETTLEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_SETTLEINFO_H_

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
                * 商户结算信息
                */
                class SettleInfo : public AbstractModel
                {
                public:
                    SettleInfo();
                    ~SettleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结算账户类型 
PRIVATE：对私 
BUSINESS：对公
HELIPAY渠道必传
                     * @return SettleAccountType 结算账户类型 
PRIVATE：对私 
BUSINESS：对公
HELIPAY渠道必传
                     * 
                     */
                    std::string GetSettleAccountType() const;

                    /**
                     * 设置结算账户类型 
PRIVATE：对私 
BUSINESS：对公
HELIPAY渠道必传
                     * @param _settleAccountType 结算账户类型 
PRIVATE：对私 
BUSINESS：对公
HELIPAY渠道必传
                     * 
                     */
                    void SetSettleAccountType(const std::string& _settleAccountType);

                    /**
                     * 判断参数 SettleAccountType 是否已赋值
                     * @return SettleAccountType 是否已赋值
                     * 
                     */
                    bool SettleAccountTypeHasBeenSet() const;

                    /**
                     * 获取结算账号
HELIPAY渠道必传
                     * @return SettleAccountNumber 结算账号
HELIPAY渠道必传
                     * 
                     */
                    std::string GetSettleAccountNumber() const;

                    /**
                     * 设置结算账号
HELIPAY渠道必传
                     * @param _settleAccountNumber 结算账号
HELIPAY渠道必传
                     * 
                     */
                    void SetSettleAccountNumber(const std::string& _settleAccountNumber);

                    /**
                     * 判断参数 SettleAccountNumber 是否已赋值
                     * @return SettleAccountNumber 是否已赋值
                     * 
                     */
                    bool SettleAccountNumberHasBeenSet() const;

                    /**
                     * 获取结算账户名称
HELIPAY渠道必传
                     * @return SettleAccountName 结算账户名称
HELIPAY渠道必传
                     * 
                     */
                    std::string GetSettleAccountName() const;

                    /**
                     * 设置结算账户名称
HELIPAY渠道必传
                     * @param _settleAccountName 结算账户名称
HELIPAY渠道必传
                     * 
                     */
                    void SetSettleAccountName(const std::string& _settleAccountName);

                    /**
                     * 判断参数 SettleAccountName 是否已赋值
                     * @return SettleAccountName 是否已赋值
                     * 
                     */
                    bool SettleAccountNameHasBeenSet() const;

                    /**
                     * 获取支行号
HELIPAY渠道必传
                     * @return BankBranchId 支行号
HELIPAY渠道必传
                     * 
                     */
                    std::string GetBankBranchId() const;

                    /**
                     * 设置支行号
HELIPAY渠道必传
                     * @param _bankBranchId 支行号
HELIPAY渠道必传
                     * 
                     */
                    void SetBankBranchId(const std::string& _bankBranchId);

                    /**
                     * 判断参数 BankBranchId 是否已赋值
                     * @return BankBranchId 是否已赋值
                     * 
                     */
                    bool BankBranchIdHasBeenSet() const;

                    /**
                     * 获取支行名称
                     * @return BankBranchName 支行名称
                     * 
                     */
                    std::string GetBankBranchName() const;

                    /**
                     * 设置支行名称
                     * @param _bankBranchName 支行名称
                     * 
                     */
                    void SetBankBranchName(const std::string& _bankBranchName);

                    /**
                     * 判断参数 BankBranchName 是否已赋值
                     * @return BankBranchName 是否已赋值
                     * 
                     */
                    bool BankBranchNameHasBeenSet() const;

                    /**
                     * 获取结算方式 
AUTO：自动结算 
SELF：自主结算
HELIPAY渠道必传
                     * @return SettleMode 结算方式 
AUTO：自动结算 
SELF：自主结算
HELIPAY渠道必传
                     * 
                     */
                    std::string GetSettleMode() const;

                    /**
                     * 设置结算方式 
AUTO：自动结算 
SELF：自主结算
HELIPAY渠道必传
                     * @param _settleMode 结算方式 
AUTO：自动结算 
SELF：自主结算
HELIPAY渠道必传
                     * 
                     */
                    void SetSettleMode(const std::string& _settleMode);

                    /**
                     * 判断参数 SettleMode 是否已赋值
                     * @return SettleMode 是否已赋值
                     * 
                     */
                    bool SettleModeHasBeenSet() const;

                    /**
                     * 获取结算周期 
T1：工作日隔天结算 
D1：自然日隔天结算 
D0：当日结算
HELIPAY渠道必传
                     * @return SettlePeriod 结算周期 
T1：工作日隔天结算 
D1：自然日隔天结算 
D0：当日结算
HELIPAY渠道必传
                     * 
                     */
                    std::string GetSettlePeriod() const;

                    /**
                     * 设置结算周期 
T1：工作日隔天结算 
D1：自然日隔天结算 
D0：当日结算
HELIPAY渠道必传
                     * @param _settlePeriod 结算周期 
T1：工作日隔天结算 
D1：自然日隔天结算 
D0：当日结算
HELIPAY渠道必传
                     * 
                     */
                    void SetSettlePeriod(const std::string& _settlePeriod);

                    /**
                     * 判断参数 SettlePeriod 是否已赋值
                     * @return SettlePeriod 是否已赋值
                     * 
                     */
                    bool SettlePeriodHasBeenSet() const;

                private:

                    /**
                     * 结算账户类型 
PRIVATE：对私 
BUSINESS：对公
HELIPAY渠道必传
                     */
                    std::string m_settleAccountType;
                    bool m_settleAccountTypeHasBeenSet;

                    /**
                     * 结算账号
HELIPAY渠道必传
                     */
                    std::string m_settleAccountNumber;
                    bool m_settleAccountNumberHasBeenSet;

                    /**
                     * 结算账户名称
HELIPAY渠道必传
                     */
                    std::string m_settleAccountName;
                    bool m_settleAccountNameHasBeenSet;

                    /**
                     * 支行号
HELIPAY渠道必传
                     */
                    std::string m_bankBranchId;
                    bool m_bankBranchIdHasBeenSet;

                    /**
                     * 支行名称
                     */
                    std::string m_bankBranchName;
                    bool m_bankBranchNameHasBeenSet;

                    /**
                     * 结算方式 
AUTO：自动结算 
SELF：自主结算
HELIPAY渠道必传
                     */
                    std::string m_settleMode;
                    bool m_settleModeHasBeenSet;

                    /**
                     * 结算周期 
T1：工作日隔天结算 
D1：自然日隔天结算 
D0：当日结算
HELIPAY渠道必传
                     */
                    std::string m_settlePeriod;
                    bool m_settlePeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_SETTLEINFO_H_
