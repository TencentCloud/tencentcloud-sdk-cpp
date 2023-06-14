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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCHANGERATEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCHANGERATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * QueryExchangeRate请求参数结构体
                */
                class QueryExchangeRateRequest : public AbstractModel
                {
                public:
                    QueryExchangeRateRequest();
                    ~QueryExchangeRateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源币种 (默认CNY)
                     * @return SourceCurrency 源币种 (默认CNY)
                     * 
                     */
                    std::string GetSourceCurrency() const;

                    /**
                     * 设置源币种 (默认CNY)
                     * @param _sourceCurrency 源币种 (默认CNY)
                     * 
                     */
                    void SetSourceCurrency(const std::string& _sourceCurrency);

                    /**
                     * 判断参数 SourceCurrency 是否已赋值
                     * @return SourceCurrency 是否已赋值
                     * 
                     */
                    bool SourceCurrencyHasBeenSet() const;

                    /**
                     * 获取目的币种 (见常见问题-汇出币种)
                     * @return TargetCurrency 目的币种 (见常见问题-汇出币种)
                     * 
                     */
                    std::string GetTargetCurrency() const;

                    /**
                     * 设置目的币种 (见常见问题-汇出币种)
                     * @param _targetCurrency 目的币种 (见常见问题-汇出币种)
                     * 
                     */
                    void SetTargetCurrency(const std::string& _targetCurrency);

                    /**
                     * 判断参数 TargetCurrency 是否已赋值
                     * @return TargetCurrency 是否已赋值
                     * 
                     */
                    bool TargetCurrencyHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填sandbox
                     * @return Profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox
                     * @param _profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 源币种 (默认CNY)
                     */
                    std::string m_sourceCurrency;
                    bool m_sourceCurrencyHasBeenSet;

                    /**
                     * 目的币种 (见常见问题-汇出币种)
                     */
                    std::string m_targetCurrency;
                    bool m_targetCurrencyHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCHANGERATEREQUEST_H_
