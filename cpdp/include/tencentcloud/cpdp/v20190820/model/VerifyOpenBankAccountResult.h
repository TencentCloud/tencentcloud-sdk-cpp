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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_VERIFYOPENBANKACCOUNTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_VERIFYOPENBANKACCOUNTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankRedirectInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 打款验证响应结果结构体
                */
                class VerifyOpenBankAccountResult : public AbstractModel
                {
                public:
                    VerifyOpenBankAccountResult();
                    ~VerifyOpenBankAccountResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取打款验证状态。
 INIT("打款中"),
PENDING("打款成功待验证"),
VERIFIED("验证成功"),
FAILED("打款失败"),
VERIFY_FAILED("验证失败")
                     * @return VerifyState 打款验证状态。
 INIT("打款中"),
PENDING("打款成功待验证"),
VERIFIED("验证成功"),
FAILED("打款失败"),
VERIFY_FAILED("验证失败")
                     * 
                     */
                    std::string GetVerifyState() const;

                    /**
                     * 设置打款验证状态。
 INIT("打款中"),
PENDING("打款成功待验证"),
VERIFIED("验证成功"),
FAILED("打款失败"),
VERIFY_FAILED("验证失败")
                     * @param _verifyState 打款验证状态。
 INIT("打款中"),
PENDING("打款成功待验证"),
VERIFIED("验证成功"),
FAILED("打款失败"),
VERIFY_FAILED("验证失败")
                     * 
                     */
                    void SetVerifyState(const std::string& _verifyState);

                    /**
                     * 判断参数 VerifyState 是否已赋值
                     * @return VerifyState 是否已赋值
                     * 
                     */
                    bool VerifyStateHasBeenSet() const;

                    /**
                     * 获取重定向参数，用于客户端跳转，收款商户未完成打款验证时返回该参数
                     * @return RedirectInfo 重定向参数，用于客户端跳转，收款商户未完成打款验证时返回该参数
                     * 
                     */
                    OpenBankRedirectInfo GetRedirectInfo() const;

                    /**
                     * 设置重定向参数，用于客户端跳转，收款商户未完成打款验证时返回该参数
                     * @param _redirectInfo 重定向参数，用于客户端跳转，收款商户未完成打款验证时返回该参数
                     * 
                     */
                    void SetRedirectInfo(const OpenBankRedirectInfo& _redirectInfo);

                    /**
                     * 判断参数 RedirectInfo 是否已赋值
                     * @return RedirectInfo 是否已赋值
                     * 
                     */
                    bool RedirectInfoHasBeenSet() const;

                private:

                    /**
                     * 打款验证状态。
 INIT("打款中"),
PENDING("打款成功待验证"),
VERIFIED("验证成功"),
FAILED("打款失败"),
VERIFY_FAILED("验证失败")
                     */
                    std::string m_verifyState;
                    bool m_verifyStateHasBeenSet;

                    /**
                     * 重定向参数，用于客户端跳转，收款商户未完成打款验证时返回该参数
                     */
                    OpenBankRedirectInfo m_redirectInfo;
                    bool m_redirectInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_VERIFYOPENBANKACCOUNTRESULT_H_
