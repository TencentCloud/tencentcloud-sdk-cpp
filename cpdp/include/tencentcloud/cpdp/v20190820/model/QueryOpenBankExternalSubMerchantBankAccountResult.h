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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKEXTERNALSUBMERCHANTBANKACCOUNTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKEXTERNALSUBMERCHANTBANKACCOUNTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankExternalSubMerchantBankAccountData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 第三方子商户银行卡列表查询返回结果
                */
                class QueryOpenBankExternalSubMerchantBankAccountResult : public AbstractModel
                {
                public:
                    QueryOpenBankExternalSubMerchantBankAccountResult();
                    ~QueryOpenBankExternalSubMerchantBankAccountResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方渠道子商户查询银行账户返回。
                     * @return AccountList 第三方渠道子商户查询银行账户返回。
                     * 
                     */
                    std::vector<QueryOpenBankExternalSubMerchantBankAccountData> GetAccountList() const;

                    /**
                     * 设置第三方渠道子商户查询银行账户返回。
                     * @param _accountList 第三方渠道子商户查询银行账户返回。
                     * 
                     */
                    void SetAccountList(const std::vector<QueryOpenBankExternalSubMerchantBankAccountData>& _accountList);

                    /**
                     * 判断参数 AccountList 是否已赋值
                     * @return AccountList 是否已赋值
                     * 
                     */
                    bool AccountListHasBeenSet() const;

                private:

                    /**
                     * 第三方渠道子商户查询银行账户返回。
                     */
                    std::vector<QueryOpenBankExternalSubMerchantBankAccountData> m_accountList;
                    bool m_accountListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKEXTERNALSUBMERCHANTBANKACCOUNTRESULT_H_
