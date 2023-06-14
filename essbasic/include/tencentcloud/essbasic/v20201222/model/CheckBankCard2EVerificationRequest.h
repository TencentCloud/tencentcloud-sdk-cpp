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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKBANKCARD2EVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKBANKCARD2EVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * CheckBankCard2EVerification请求参数结构体
                */
                class CheckBankCard2EVerificationRequest : public AbstractModel
                {
                public:
                    CheckBankCard2EVerificationRequest();
                    ~CheckBankCard2EVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息; 必选
                     * @return Caller 调用方信息; 必选
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息; 必选
                     * @param _caller 调用方信息; 必选
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取银行卡号
                     * @return BankCard 银行卡号
                     * 
                     */
                    std::string GetBankCard() const;

                    /**
                     * 设置银行卡号
                     * @param _bankCard 银行卡号
                     * 
                     */
                    void SetBankCard(const std::string& _bankCard);

                    /**
                     * 判断参数 BankCard 是否已赋值
                     * @return BankCard 是否已赋值
                     * 
                     */
                    bool BankCardHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param _name 姓名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 调用方信息; 必选
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 银行卡号
                     */
                    std::string m_bankCard;
                    bool m_bankCardHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKBANKCARD2EVERIFICATIONREQUEST_H_
