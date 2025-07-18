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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCAUTOSTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCAUTOSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * UpsertCCAutoStatus请求参数结构体
                */
                class UpsertCCAutoStatusRequest : public AbstractModel
                {
                public:
                    UpsertCCAutoStatusRequest();
                    ~UpsertCCAutoStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取状态值
                     * @return Value 状态值
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置状态值
                     * @param _value 状态值
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取版本：clb-waf, spart-waf
                     * @return Edition 版本：clb-waf, spart-waf
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置版本：clb-waf, spart-waf
                     * @param _edition 版本：clb-waf, spart-waf
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 状态值
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 版本：clb-waf, spart-waf
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCAUTOSTATUSREQUEST_H_
