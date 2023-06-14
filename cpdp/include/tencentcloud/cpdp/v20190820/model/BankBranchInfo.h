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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BANKBRANCHINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BANKBRANCHINFO_H_

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
                * 支行信息
                */
                class BankBranchInfo : public AbstractModel
                {
                public:
                    BankBranchInfo();
                    ~BankBranchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取银行名称。
                     * @return BankName 银行名称。
                     * 
                     */
                    std::string GetBankName() const;

                    /**
                     * 设置银行名称。
                     * @param _bankName 银行名称。
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
                     * 获取银行简称。
                     * @return BankAbbreviation 银行简称。
                     * 
                     */
                    std::string GetBankAbbreviation() const;

                    /**
                     * 设置银行简称。
                     * @param _bankAbbreviation 银行简称。
                     * 
                     */
                    void SetBankAbbreviation(const std::string& _bankAbbreviation);

                    /**
                     * 判断参数 BankAbbreviation 是否已赋值
                     * @return BankAbbreviation 是否已赋值
                     * 
                     */
                    bool BankAbbreviationHasBeenSet() const;

                    /**
                     * 获取支行名。
                     * @return BankBranchName 支行名。
                     * 
                     */
                    std::string GetBankBranchName() const;

                    /**
                     * 设置支行名。
                     * @param _bankBranchName 支行名。
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
                     * 获取联行号。
                     * @return BankBranchId 联行号。
                     * 
                     */
                    std::string GetBankBranchId() const;

                    /**
                     * 设置联行号。
                     * @param _bankBranchId 联行号。
                     * 
                     */
                    void SetBankBranchId(const std::string& _bankBranchId);

                    /**
                     * 判断参数 BankBranchId 是否已赋值
                     * @return BankBranchId 是否已赋值
                     * 
                     */
                    bool BankBranchIdHasBeenSet() const;

                private:

                    /**
                     * 银行名称。
                     */
                    std::string m_bankName;
                    bool m_bankNameHasBeenSet;

                    /**
                     * 银行简称。
                     */
                    std::string m_bankAbbreviation;
                    bool m_bankAbbreviationHasBeenSet;

                    /**
                     * 支行名。
                     */
                    std::string m_bankBranchName;
                    bool m_bankBranchNameHasBeenSet;

                    /**
                     * 联行号。
                     */
                    std::string m_bankBranchId;
                    bool m_bankBranchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BANKBRANCHINFO_H_
