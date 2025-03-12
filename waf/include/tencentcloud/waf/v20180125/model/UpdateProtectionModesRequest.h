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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPDATEPROTECTIONMODESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPDATEPROTECTIONMODESREQUEST_H_

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
                * UpdateProtectionModes请求参数结构体
                */
                class UpdateProtectionModesRequest : public AbstractModel
                {
                public:
                    UpdateProtectionModesRequest();
                    ~UpdateProtectionModesRequest() = default;
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
                     * 获取资源类型
                     * @return Edition 资源类型
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置资源类型
                     * @param _edition 资源类型
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取大类规则ID
                     * @return TypeIDs 大类规则ID
                     * 
                     */
                    std::vector<std::string> GetTypeIDs() const;

                    /**
                     * 设置大类规则ID
                     * @param _typeIDs 大类规则ID
                     * 
                     */
                    void SetTypeIDs(const std::vector<std::string>& _typeIDs);

                    /**
                     * 判断参数 TypeIDs 是否已赋值
                     * @return TypeIDs 是否已赋值
                     * 
                     */
                    bool TypeIDsHasBeenSet() const;

                    /**
                     * 获取0表示观察，1表示拦截
                     * @return Mode 0表示观察，1表示拦截
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置0表示观察，1表示拦截
                     * @param _mode 0表示观察，1表示拦截
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 大类规则ID
                     */
                    std::vector<std::string> m_typeIDs;
                    bool m_typeIDsHasBeenSet;

                    /**
                     * 0表示观察，1表示拦截
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPDATEPROTECTIONMODESREQUEST_H_
