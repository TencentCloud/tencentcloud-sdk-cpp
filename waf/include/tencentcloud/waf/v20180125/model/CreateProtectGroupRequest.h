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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEPROTECTGROUPREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEPROTECTGROUPREQUEST_H_

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
                * CreateProtectGroup请求参数结构体
                */
                class CreateProtectGroupRequest : public AbstractModel
                {
                public:
                    CreateProtectGroupRequest();
                    ~CreateProtectGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防护对象组名称
                     * @return Name 防护对象组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置防护对象组名称
                     * @param _name 防护对象组名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取防护对象组的应用范围
                     * @return Domains 防护对象组的应用范围
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置防护对象组的应用范围
                     * @param _domains 防护对象组的应用范围
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取防护对象组备注
                     * @return Remark 防护对象组备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置防护对象组备注
                     * @param _remark 防护对象组备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 防护对象组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 防护对象组的应用范围
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 防护对象组备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEPROTECTGROUPREQUEST_H_
