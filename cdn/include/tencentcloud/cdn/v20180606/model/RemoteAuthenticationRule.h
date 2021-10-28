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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATIONRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 远程鉴权规则。
                */
                class RemoteAuthenticationRule : public AbstractModel
                {
                public:
                    RemoteAuthenticationRule();
                    ~RemoteAuthenticationRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取远程鉴权服务http url
                     * @return Server 远程鉴权服务http url
                     */
                    std::string GetServer() const;

                    /**
                     * 设置远程鉴权服务http url
                     * @param Server 远程鉴权服务http url
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取请求远程鉴权服务器的http方法；取值范围[get,post,head,all]; all 表示不限制请求方法；
all: 不指定访问访问方法；
                     * @return AuthMethod 请求远程鉴权服务器的http方法；取值范围[get,post,head,all]; all 表示不限制请求方法；
all: 不指定访问访问方法；
                     */
                    std::string GetAuthMethod() const;

                    /**
                     * 设置请求远程鉴权服务器的http方法；取值范围[get,post,head,all]; all 表示不限制请求方法；
all: 不指定访问访问方法；
                     * @param AuthMethod 请求远程鉴权服务器的http方法；取值范围[get,post,head,all]; all 表示不限制请求方法；
all: 不指定访问访问方法；
                     */
                    void SetAuthMethod(const std::string& _authMethod);

                    /**
                     * 判断参数 AuthMethod 是否已赋值
                     * @return AuthMethod 是否已赋值
                     */
                    bool AuthMethodHasBeenSet() const;

                    /**
                     * 获取规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
                     * @return RuleType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
                     * @param RuleType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     * @return RulePaths 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     * @param RulePaths 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取请求远程鉴权服务器超时时间，单位毫秒；
取值范围：[1,30 000]
                     * @return AuthTimeout 请求远程鉴权服务器超时时间，单位毫秒；
取值范围：[1,30 000]
                     */
                    int64_t GetAuthTimeout() const;

                    /**
                     * 设置请求远程鉴权服务器超时时间，单位毫秒；
取值范围：[1,30 000]
                     * @param AuthTimeout 请求远程鉴权服务器超时时间，单位毫秒；
取值范围：[1,30 000]
                     */
                    void SetAuthTimeout(const int64_t& _authTimeout);

                    /**
                     * 判断参数 AuthTimeout 是否已赋值
                     * @return AuthTimeout 是否已赋值
                     */
                    bool AuthTimeoutHasBeenSet() const;

                    /**
                     * 获取请求远程鉴权服务器超时后执行拦截或者放行；
RETURN_200: 超时后放行；
RETURN_403:超时返回403；
                     * @return AuthTimeoutAction 请求远程鉴权服务器超时后执行拦截或者放行；
RETURN_200: 超时后放行；
RETURN_403:超时返回403；
                     */
                    std::string GetAuthTimeoutAction() const;

                    /**
                     * 设置请求远程鉴权服务器超时后执行拦截或者放行；
RETURN_200: 超时后放行；
RETURN_403:超时返回403；
                     * @param AuthTimeoutAction 请求远程鉴权服务器超时后执行拦截或者放行；
RETURN_200: 超时后放行；
RETURN_403:超时返回403；
                     */
                    void SetAuthTimeoutAction(const std::string& _authTimeoutAction);

                    /**
                     * 判断参数 AuthTimeoutAction 是否已赋值
                     * @return AuthTimeoutAction 是否已赋值
                     */
                    bool AuthTimeoutActionHasBeenSet() const;

                private:

                    /**
                     * 远程鉴权服务http url
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 请求远程鉴权服务器的http方法；取值范围[get,post,head,all]; all 表示不限制请求方法；
all: 不指定访问访问方法；
                     */
                    std::string m_authMethod;
                    bool m_authMethodHasBeenSet;

                    /**
                     * 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * 请求远程鉴权服务器超时时间，单位毫秒；
取值范围：[1,30 000]
                     */
                    int64_t m_authTimeout;
                    bool m_authTimeoutHasBeenSet;

                    /**
                     * 请求远程鉴权服务器超时后执行拦截或者放行；
RETURN_200: 超时后放行；
RETURN_403:超时返回403；
                     */
                    std::string m_authTimeoutAction;
                    bool m_authTimeoutActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATIONRULE_H_
