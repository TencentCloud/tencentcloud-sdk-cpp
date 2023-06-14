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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKRECHARGEPAYEEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKRECHARGEPAYEEINFO_H_

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
                * 云企付-充值单收款人信息
                */
                class OpenBankRechargePayeeInfo : public AbstractModel
                {
                public:
                    OpenBankRechargePayeeInfo();
                    ~OpenBankRechargePayeeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收款方标识
收款方类型为电子记账本时，上送渠道电子记账本ID
                     * @return PayeeId 收款方标识
收款方类型为电子记账本时，上送渠道电子记账本ID
                     * 
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款方标识
收款方类型为电子记账本时，上送渠道电子记账本ID
                     * @param _payeeId 收款方标识
收款方类型为电子记账本时，上送渠道电子记账本ID
                     * 
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     * 
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取收款方标识类型
ACCOUNT_BOOK_ID：电子记账本ID
                     * @return PayeeIdType 收款方标识类型
ACCOUNT_BOOK_ID：电子记账本ID
                     * 
                     */
                    std::string GetPayeeIdType() const;

                    /**
                     * 设置收款方标识类型
ACCOUNT_BOOK_ID：电子记账本ID
                     * @param _payeeIdType 收款方标识类型
ACCOUNT_BOOK_ID：电子记账本ID
                     * 
                     */
                    void SetPayeeIdType(const std::string& _payeeIdType);

                    /**
                     * 判断参数 PayeeIdType 是否已赋值
                     * @return PayeeIdType 是否已赋值
                     * 
                     */
                    bool PayeeIdTypeHasBeenSet() const;

                    /**
                     * 获取收款方名称
                     * @return PayeeName 收款方名称
                     * 
                     */
                    std::string GetPayeeName() const;

                    /**
                     * 设置收款方名称
                     * @param _payeeName 收款方名称
                     * 
                     */
                    void SetPayeeName(const std::string& _payeeName);

                    /**
                     * 判断参数 PayeeName 是否已赋值
                     * @return PayeeName 是否已赋值
                     * 
                     */
                    bool PayeeNameHasBeenSet() const;

                private:

                    /**
                     * 收款方标识
收款方类型为电子记账本时，上送渠道电子记账本ID
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 收款方标识类型
ACCOUNT_BOOK_ID：电子记账本ID
                     */
                    std::string m_payeeIdType;
                    bool m_payeeIdTypeHasBeenSet;

                    /**
                     * 收款方名称
                     */
                    std::string m_payeeName;
                    bool m_payeeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKRECHARGEPAYEEINFO_H_
