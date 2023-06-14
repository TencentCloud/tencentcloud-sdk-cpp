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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCURLALLOWREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCURLALLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyCCUrlAllow请求参数结构体
                */
                class ModifyCCUrlAllowRequest : public AbstractModel
                {
                public:
                    ModifyCCUrlAllowRequest();
                    ~ModifyCCUrlAllowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取=add表示添加，=delete表示删除
                     * @return Method =add表示添加，=delete表示删除
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置=add表示添加，=delete表示删除
                     * @param _method =add表示添加，=delete表示删除
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取黑/白名单类型；取值[white(白名单)]
                     * @return Type 黑/白名单类型；取值[white(白名单)]
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置黑/白名单类型；取值[white(白名单)]
                     * @param _type 黑/白名单类型；取值[white(白名单)]
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取URL数组，URL格式如下：
http://域名/cgi
https://域名/cgi
                     * @return UrlList URL数组，URL格式如下：
http://域名/cgi
https://域名/cgi
                     * 
                     */
                    std::vector<std::string> GetUrlList() const;

                    /**
                     * 设置URL数组，URL格式如下：
http://域名/cgi
https://域名/cgi
                     * @param _urlList URL数组，URL格式如下：
http://域名/cgi
https://域名/cgi
                     * 
                     */
                    void SetUrlList(const std::vector<std::string>& _urlList);

                    /**
                     * 判断参数 UrlList 是否已赋值
                     * @return UrlList 是否已赋值
                     * 
                     */
                    bool UrlListHasBeenSet() const;

                    /**
                     * 获取可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写Domain和RuleId字段；
                     * @return Protocol 可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写Domain和RuleId字段；
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写Domain和RuleId字段；
                     * @param _protocol 可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写Domain和RuleId字段；
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取可选字段，表示HTTPS协议的7层转发规则域名（通过获取7层转发规则接口可以获取域名），只有当Protocol字段为https时才必须填写此字段；
                     * @return Domain 可选字段，表示HTTPS协议的7层转发规则域名（通过获取7层转发规则接口可以获取域名），只有当Protocol字段为https时才必须填写此字段；
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置可选字段，表示HTTPS协议的7层转发规则域名（通过获取7层转发规则接口可以获取域名），只有当Protocol字段为https时才必须填写此字段；
                     * @param _domain 可选字段，表示HTTPS协议的7层转发规则域名（通过获取7层转发规则接口可以获取域名），只有当Protocol字段为https时才必须填写此字段；
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
                     * 获取可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID），当添加并且Protocol=https时必须填写；
当Method为delete时，可以不用填写此字段；
                     * @return RuleId 可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID），当添加并且Protocol=https时必须填写；
当Method为delete时，可以不用填写此字段；
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID），当添加并且Protocol=https时必须填写；
当Method为delete时，可以不用填写此字段；
                     * @param _ruleId 可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID），当添加并且Protocol=https时必须填写；
当Method为delete时，可以不用填写此字段；
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * =add表示添加，=delete表示删除
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 黑/白名单类型；取值[white(白名单)]
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * URL数组，URL格式如下：
http://域名/cgi
https://域名/cgi
                     */
                    std::vector<std::string> m_urlList;
                    bool m_urlListHasBeenSet;

                    /**
                     * 可选字段，代表CC防护类型，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；当不填时，默认为HTTP协议的CC防护；当填写https时还需要填写Domain和RuleId字段；
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 可选字段，表示HTTPS协议的7层转发规则域名（通过获取7层转发规则接口可以获取域名），只有当Protocol字段为https时才必须填写此字段；
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 可选字段，表示HTTPS协议的7层转发规则ID（通过获取7层转发规则接口可以获取规则ID），当添加并且Protocol=https时必须填写；
当Method为delete时，可以不用填写此字段；
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCURLALLOWREQUEST_H_
