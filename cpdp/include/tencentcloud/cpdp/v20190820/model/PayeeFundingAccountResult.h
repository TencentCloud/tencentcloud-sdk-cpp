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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEFUNDINGACCOUNTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEFUNDINGACCOUNTRESULT_H_

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
                * 收款用户资金账户信息
                */
                class PayeeFundingAccountResult : public AbstractModel
                {
                public:
                    PayeeFundingAccountResult();
                    ~PayeeFundingAccountResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资金账户ID
                     * @return FundingAccountBindSerialNo 资金账户ID
                     * 
                     */
                    std::string GetFundingAccountBindSerialNo() const;

                    /**
                     * 设置资金账户ID
                     * @param _fundingAccountBindSerialNo 资金账户ID
                     * 
                     */
                    void SetFundingAccountBindSerialNo(const std::string& _fundingAccountBindSerialNo);

                    /**
                     * 判断参数 FundingAccountBindSerialNo 是否已赋值
                     * @return FundingAccountBindSerialNo 是否已赋值
                     * 
                     */
                    bool FundingAccountBindSerialNoHasBeenSet() const;

                private:

                    /**
                     * 资金账户ID
                     */
                    std::string m_fundingAccountBindSerialNo;
                    bool m_fundingAccountBindSerialNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEFUNDINGACCOUNTRESULT_H_
