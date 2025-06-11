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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKBANKCARDINFORMATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKBANKCARDINFORMATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CheckBankCardInformation返回参数结构体
                */
                class CheckBankCardInformationResponse : public AbstractModel
                {
                public:
                    CheckBankCardInformationResponse();
                    ~CheckBankCardInformationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取认证结果码，收费情况如下。
- 收费结果码：
0: 查询成功
-1: 未查到信息
-5: 卡号无效

- 不收费结果码：
-2：验证中心服务繁忙
-3：银行卡不存在
-4：认证次数超过当日限制，请次日重试
-6:   暂不支持该银行卡种

                     * @return Result 认证结果码，收费情况如下。
- 收费结果码：
0: 查询成功
-1: 未查到信息
-5: 卡号无效

- 不收费结果码：
-2：验证中心服务繁忙
-3：银行卡不存在
-4：认证次数超过当日限制，请次日重试
-6:   暂不支持该银行卡种

                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取业务结果描述。
                     * @return Description 业务结果描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取开户行。
                     * @return AccountBank 开户行。
                     * 
                     */
                    std::string GetAccountBank() const;

                    /**
                     * 判断参数 AccountBank 是否已赋值
                     * @return AccountBank 是否已赋值
                     * 
                     */
                    bool AccountBankHasBeenSet() const;

                    /**
                     * 获取卡性质。
- 取值范围：
1：借记卡。
2：贷记卡。
3：预付费卡。
4：准贷记卡
                     * @return AccountType 卡性质。
- 取值范围：
1：借记卡。
2：贷记卡。
3：预付费卡。
4：准贷记卡
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * 认证结果码，收费情况如下。
- 收费结果码：
0: 查询成功
-1: 未查到信息
-5: 卡号无效

- 不收费结果码：
-2：验证中心服务繁忙
-3：银行卡不存在
-4：认证次数超过当日限制，请次日重试
-6:   暂不支持该银行卡种

                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 业务结果描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 开户行。
                     */
                    std::string m_accountBank;
                    bool m_accountBankHasBeenSet;

                    /**
                     * 卡性质。
- 取值范围：
1：借记卡。
2：贷记卡。
3：预付费卡。
4：准贷记卡
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKBANKCARDINFORMATIONRESPONSE_H_
