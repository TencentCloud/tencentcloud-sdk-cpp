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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYPROTECTIONLEVELREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYPROTECTIONLEVELREQUEST_H_

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
                * ModifyProtectionLevel请求参数结构体
                */
                class ModifyProtectionLevelRequest : public AbstractModel
                {
                public:
                    ModifyProtectionLevelRequest();
                    ~ModifyProtectionLevelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户域名
                     * @return Domain 客户域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置客户域名
                     * @param _domain 客户域名
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
                     * 获取防护等级,100,200,300
                     * @return Level 防护等级,100,200,300
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置防护等级,100,200,300
                     * @param _level 防护等级,100,200,300
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 客户域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 防护等级,100,200,300
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYPROTECTIONLEVELREQUEST_H_
