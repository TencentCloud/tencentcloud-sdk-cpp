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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_RULECONDITION_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_RULECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/HTTPCookieInfo.h>
#include <tencentcloud/alb/v20251030/model/HTTPHeaderInfo.h>
#include <tencentcloud/alb/v20251030/model/HTTPQueryStringInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 转发规则条件
                */
                class RuleCondition : public AbstractModel
                {
                public:
                    RuleCondition();
                    ~RuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发条件类型。取值：
Host：主机。
Path：路径。
Header：HTTP Header字段。
QueryString：HTPP查询字符串。
Method：请求方法。
Cookie：Cookie。
SourceIp：源 IP。
                     * @return Type 转发条件类型。取值：
Host：主机。
Path：路径。
Header：HTTP Header字段。
QueryString：HTPP查询字符串。
Method：请求方法。
Cookie：Cookie。
SourceIp：源 IP。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置转发条件类型。取值：
Host：主机。
Path：路径。
Header：HTTP Header字段。
QueryString：HTPP查询字符串。
Method：请求方法。
Cookie：Cookie。
SourceIp：源 IP。
                     * @param _type 转发条件类型。取值：
Host：主机。
Path：路径。
Header：HTTP Header字段。
QueryString：HTPP查询字符串。
Method：请求方法。
Cookie：Cookie。
SourceIp：源 IP。
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
                     * 获取Cookie配置。
                     * @return CookieConfig Cookie配置。
                     * 
                     */
                    std::vector<HTTPCookieInfo> GetCookieConfig() const;

                    /**
                     * 设置Cookie配置。
                     * @param _cookieConfig Cookie配置。
                     * 
                     */
                    void SetCookieConfig(const std::vector<HTTPCookieInfo>& _cookieConfig);

                    /**
                     * 判断参数 CookieConfig 是否已赋值
                     * @return CookieConfig 是否已赋值
                     * 
                     */
                    bool CookieConfigHasBeenSet() const;

                    /**
                     * 获取HTTP Header配置。
                     * @return HeaderConfig HTTP Header配置。
                     * 
                     */
                    HTTPHeaderInfo GetHeaderConfig() const;

                    /**
                     * 设置HTTP Header配置。
                     * @param _headerConfig HTTP Header配置。
                     * 
                     */
                    void SetHeaderConfig(const HTTPHeaderInfo& _headerConfig);

                    /**
                     * 判断参数 HeaderConfig 是否已赋值
                     * @return HeaderConfig 是否已赋值
                     * 
                     */
                    bool HeaderConfigHasBeenSet() const;

                    /**
                     * 获取主机名。主机配置在一个规则中只能出现一次，长度3 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
不能以半角句号（.）、下划线（_）开头或结尾。
精确匹配，支持的字符集为：a-z 0-9 . - _ 。
正则匹配，波浪线（~）开头为正则匹配，支持的字符集为：a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] 。
通配匹配，星号（*）多字符通配，半角问号（?）单字符通配，支持的字符集为：a-z 0-9 . - _ * ?。
                     * @return HostConfig 主机名。主机配置在一个规则中只能出现一次，长度3 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
不能以半角句号（.）、下划线（_）开头或结尾。
精确匹配，支持的字符集为：a-z 0-9 . - _ 。
正则匹配，波浪线（~）开头为正则匹配，支持的字符集为：a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] 。
通配匹配，星号（*）多字符通配，半角问号（?）单字符通配，支持的字符集为：a-z 0-9 . - _ * ?。
                     * 
                     */
                    std::vector<std::string> GetHostConfig() const;

                    /**
                     * 设置主机名。主机配置在一个规则中只能出现一次，长度3 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
不能以半角句号（.）、下划线（_）开头或结尾。
精确匹配，支持的字符集为：a-z 0-9 . - _ 。
正则匹配，波浪线（~）开头为正则匹配，支持的字符集为：a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] 。
通配匹配，星号（*）多字符通配，半角问号（?）单字符通配，支持的字符集为：a-z 0-9 . - _ * ?。
                     * @param _hostConfig 主机名。主机配置在一个规则中只能出现一次，长度3 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
不能以半角句号（.）、下划线（_）开头或结尾。
精确匹配，支持的字符集为：a-z 0-9 . - _ 。
正则匹配，波浪线（~）开头为正则匹配，支持的字符集为：a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] 。
通配匹配，星号（*）多字符通配，半角问号（?）单字符通配，支持的字符集为：a-z 0-9 . - _ * ?。
                     * 
                     */
                    void SetHostConfig(const std::vector<std::string>& _hostConfig);

                    /**
                     * 判断参数 HostConfig 是否已赋值
                     * @return HostConfig 是否已赋值
                     * 
                     */
                    bool HostConfigHasBeenSet() const;

                    /**
                     * 获取请求方法。取值：HEAD、GET、POST、OPTIONS、PUT、PATCH、DELETE。
                     * @return MethodConfig 请求方法。取值：HEAD、GET、POST、OPTIONS、PUT、PATCH、DELETE。
                     * 
                     */
                    std::vector<std::string> GetMethodConfig() const;

                    /**
                     * 设置请求方法。取值：HEAD、GET、POST、OPTIONS、PUT、PATCH、DELETE。
                     * @param _methodConfig 请求方法。取值：HEAD、GET、POST、OPTIONS、PUT、PATCH、DELETE。
                     * 
                     */
                    void SetMethodConfig(const std::vector<std::string>& _methodConfig);

                    /**
                     * 判断参数 MethodConfig 是否已赋值
                     * @return MethodConfig 是否已赋值
                     * 
                     */
                    bool MethodConfigHasBeenSet() const;

                    /**
                     * 获取转发路径。长度1 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
精确匹配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
正则匹配，需以 ~ 开头，~ 开头表示区分大小写， ~* 开头表示不区分大小写，支持的字符集为： a-z A-Z 0-9 . - _ / = ?  ~ ^ * $ : ( ) [ ] + |。
通配匹配，* 表示多字符通配，? 表示单字符通配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
                     * @return PathConfig 转发路径。长度1 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
精确匹配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
正则匹配，需以 ~ 开头，~ 开头表示区分大小写， ~* 开头表示不区分大小写，支持的字符集为： a-z A-Z 0-9 . - _ / = ?  ~ ^ * $ : ( ) [ ] + |。
通配匹配，* 表示多字符通配，? 表示单字符通配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
                     * 
                     */
                    std::vector<std::string> GetPathConfig() const;

                    /**
                     * 设置转发路径。长度1 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
精确匹配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
正则匹配，需以 ~ 开头，~ 开头表示区分大小写， ~* 开头表示不区分大小写，支持的字符集为： a-z A-Z 0-9 . - _ / = ?  ~ ^ * $ : ( ) [ ] + |。
通配匹配，* 表示多字符通配，? 表示单字符通配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
                     * @param _pathConfig 转发路径。长度1 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
精确匹配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
正则匹配，需以 ~ 开头，~ 开头表示区分大小写， ~* 开头表示不区分大小写，支持的字符集为： a-z A-Z 0-9 . - _ / = ?  ~ ^ * $ : ( ) [ ] + |。
通配匹配，* 表示多字符通配，? 表示单字符通配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
                     * 
                     */
                    void SetPathConfig(const std::vector<std::string>& _pathConfig);

                    /**
                     * 判断参数 PathConfig 是否已赋值
                     * @return PathConfig 是否已赋值
                     * 
                     */
                    bool PathConfigHasBeenSet() const;

                    /**
                     * 获取查询字符串配置。
                     * @return QueryStringConfig 查询字符串配置。
                     * 
                     */
                    std::vector<HTTPQueryStringInfo> GetQueryStringConfig() const;

                    /**
                     * 设置查询字符串配置。
                     * @param _queryStringConfig 查询字符串配置。
                     * 
                     */
                    void SetQueryStringConfig(const std::vector<HTTPQueryStringInfo>& _queryStringConfig);

                    /**
                     * 判断参数 QueryStringConfig 是否已赋值
                     * @return QueryStringConfig 是否已赋值
                     * 
                     */
                    bool QueryStringConfigHasBeenSet() const;

                    /**
                     * 获取源IP匹配配置。CIDR格式，IP地址x.x.x.x/32，IP网段x.x.x.x/24。
                     * @return SourceIpConfig 源IP匹配配置。CIDR格式，IP地址x.x.x.x/32，IP网段x.x.x.x/24。
                     * 
                     */
                    std::vector<std::string> GetSourceIpConfig() const;

                    /**
                     * 设置源IP匹配配置。CIDR格式，IP地址x.x.x.x/32，IP网段x.x.x.x/24。
                     * @param _sourceIpConfig 源IP匹配配置。CIDR格式，IP地址x.x.x.x/32，IP网段x.x.x.x/24。
                     * 
                     */
                    void SetSourceIpConfig(const std::vector<std::string>& _sourceIpConfig);

                    /**
                     * 判断参数 SourceIpConfig 是否已赋值
                     * @return SourceIpConfig 是否已赋值
                     * 
                     */
                    bool SourceIpConfigHasBeenSet() const;

                private:

                    /**
                     * 转发条件类型。取值：
Host：主机。
Path：路径。
Header：HTTP Header字段。
QueryString：HTPP查询字符串。
Method：请求方法。
Cookie：Cookie。
SourceIp：源 IP。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cookie配置。
                     */
                    std::vector<HTTPCookieInfo> m_cookieConfig;
                    bool m_cookieConfigHasBeenSet;

                    /**
                     * HTTP Header配置。
                     */
                    HTTPHeaderInfo m_headerConfig;
                    bool m_headerConfigHasBeenSet;

                    /**
                     * 主机名。主机配置在一个规则中只能出现一次，长度3 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
不能以半角句号（.）、下划线（_）开头或结尾。
精确匹配，支持的字符集为：a-z 0-9 . - _ 。
正则匹配，波浪线（~）开头为正则匹配，支持的字符集为：a-z 0-9 . - ? = ~ _ - + \ ^ * ! $ & | ( ) [ ] 。
通配匹配，星号（*）多字符通配，半角问号（?）单字符通配，支持的字符集为：a-z 0-9 . - _ * ?。
                     */
                    std::vector<std::string> m_hostConfig;
                    bool m_hostConfigHasBeenSet;

                    /**
                     * 请求方法。取值：HEAD、GET、POST、OPTIONS、PUT、PATCH、DELETE。
                     */
                    std::vector<std::string> m_methodConfig;
                    bool m_methodConfigHasBeenSet;

                    /**
                     * 转发路径。长度1 ~ 128个字符，支持精确匹配，正则匹配，通配匹配。
精确匹配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
正则匹配，需以 ~ 开头，~ 开头表示区分大小写， ~* 开头表示不区分大小写，支持的字符集为： a-z A-Z 0-9 . - _ / = ?  ~ ^ * $ : ( ) [ ] + |。
通配匹配，* 表示多字符通配，? 表示单字符通配，支持的字符集为：a-z A-Z 0-9 . - _ / =  :。
                     */
                    std::vector<std::string> m_pathConfig;
                    bool m_pathConfigHasBeenSet;

                    /**
                     * 查询字符串配置。
                     */
                    std::vector<HTTPQueryStringInfo> m_queryStringConfig;
                    bool m_queryStringConfigHasBeenSet;

                    /**
                     * 源IP匹配配置。CIDR格式，IP地址x.x.x.x/32，IP网段x.x.x.x/24。
                     */
                    std::vector<std::string> m_sourceIpConfig;
                    bool m_sourceIpConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_RULECONDITION_H_
