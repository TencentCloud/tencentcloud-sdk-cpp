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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_FLEXFUNDINGACCOUNTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_FLEXFUNDINGACCOUNTINFO_H_

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
                * 灵云V2-银行信息
                */
                class FlexFundingAccountInfo : public AbstractModel
                {
                public:
                    FlexFundingAccountInfo();
                    ~FlexFundingAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资金账户号
                     * @return FundingAccountNo 资金账户号
                     * 
                     */
                    std::string GetFundingAccountNo() const;

                    /**
                     * 设置资金账户号
                     * @param _fundingAccountNo 资金账户号
                     * 
                     */
                    void SetFundingAccountNo(const std::string& _fundingAccountNo);

                    /**
                     * 判断参数 FundingAccountNo 是否已赋值
                     * @return FundingAccountNo 是否已赋值
                     * 
                     */
                    bool FundingAccountNoHasBeenSet() const;

                    /**
                     * 获取资金账户类型
                     * @return FundingAccountType 资金账户类型
                     * 
                     */
                    std::string GetFundingAccountType() const;

                    /**
                     * 设置资金账户类型
                     * @param _fundingAccountType 资金账户类型
                     * 
                     */
                    void SetFundingAccountType(const std::string& _fundingAccountType);

                    /**
                     * 判断参数 FundingAccountType 是否已赋值
                     * @return FundingAccountType 是否已赋值
                     * 
                     */
                    bool FundingAccountTypeHasBeenSet() const;

                    /**
                     * 获取资金账户绑定序列号
                     * @return FundingAccountBindSerialNo 资金账户绑定序列号
                     * 
                     */
                    std::string GetFundingAccountBindSerialNo() const;

                    /**
                     * 设置资金账户绑定序列号
                     * @param _fundingAccountBindSerialNo 资金账户绑定序列号
                     * 
                     */
                    void SetFundingAccountBindSerialNo(const std::string& _fundingAccountBindSerialNo);

                    /**
                     * 判断参数 FundingAccountBindSerialNo 是否已赋值
                     * @return FundingAccountBindSerialNo 是否已赋值
                     * 
                     */
                    bool FundingAccountBindSerialNoHasBeenSet() const;

                    /**
                     * 获取资金账户名称
                     * @return FundingAccountName 资金账户名称
                     * 
                     */
                    std::string GetFundingAccountName() const;

                    /**
                     * 设置资金账户名称
                     * @param _fundingAccountName 资金账户名称
                     * 
                     */
                    void SetFundingAccountName(const std::string& _fundingAccountName);

                    /**
                     * 判断参数 FundingAccountName 是否已赋值
                     * @return FundingAccountName 是否已赋值
                     * 
                     */
                    bool FundingAccountNameHasBeenSet() const;

                private:

                    /**
                     * 资金账户号
                     */
                    std::string m_fundingAccountNo;
                    bool m_fundingAccountNoHasBeenSet;

                    /**
                     * 资金账户类型
                     */
                    std::string m_fundingAccountType;
                    bool m_fundingAccountTypeHasBeenSet;

                    /**
                     * 资金账户绑定序列号
                     */
                    std::string m_fundingAccountBindSerialNo;
                    bool m_fundingAccountBindSerialNoHasBeenSet;

                    /**
                     * 资金账户名称
                     */
                    std::string m_fundingAccountName;
                    bool m_fundingAccountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_FLEXFUNDINGACCOUNTINFO_H_
