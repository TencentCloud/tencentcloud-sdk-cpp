/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QUERYENTERPRISEBASICINFOREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QUERYENTERPRISEBASICINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * QueryEnterpriseBasicInfo请求参数结构体
                */
                class QueryEnterpriseBasicInfoRequest : public AbstractModel
                {
                public:
                    QueryEnterpriseBasicInfoRequest();
                    ~QueryEnterpriseBasicInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>统一社会信用代码。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     * @return CreditCode <p>统一社会信用代码。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     * 
                     */
                    std::string GetCreditCode() const;

                    /**
                     * 设置<p>统一社会信用代码。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     * @param _creditCode <p>统一社会信用代码。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     * 
                     */
                    void SetCreditCode(const std::string& _creditCode);

                    /**
                     * 判断参数 CreditCode 是否已赋值
                     * @return CreditCode 是否已赋值
                     * 
                     */
                    bool CreditCodeHasBeenSet() const;

                    /**
                     * 获取<p>企业名称。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     * @return EntName <p>企业名称。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     * 
                     */
                    std::string GetEntName() const;

                    /**
                     * 设置<p>企业名称。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     * @param _entName <p>企业名称。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     * 
                     */
                    void SetEntName(const std::string& _entName);

                    /**
                     * 判断参数 EntName 是否已赋值
                     * @return EntName 是否已赋值
                     * 
                     */
                    bool EntNameHasBeenSet() const;

                private:

                    /**
                     * <p>统一社会信用代码。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     */
                    std::string m_creditCode;
                    bool m_creditCodeHasBeenSet;

                    /**
                     * <p>企业名称。CreditCode、EntName 必须提供一个，如果都提供，只使用 CreditCode。</p>
                     */
                    std::string m_entName;
                    bool m_entNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUERYENTERPRISEBASICINFOREQUEST_H_
