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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_MODIFYSITEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_MODIFYSITEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * ModifySiteAttribute请求参数结构体
                */
                class ModifySiteAttributeRequest : public AbstractModel
                {
                public:
                    ModifySiteAttributeRequest();
                    ~ModifySiteAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID
                     * @return SiteId 站点ID
                     * 
                     */
                    uint64_t GetSiteId() const;

                    /**
                     * 设置站点ID
                     * @param _siteId 站点ID
                     * 
                     */
                    void SetSiteId(const uint64_t& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return Name 站点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置站点名称
                     * @param _name 站点名称
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
                     * 获取网站是否需要登录扫描：0-未知；-1-不需要；1-需要
                     * @return NeedLogin 网站是否需要登录扫描：0-未知；-1-不需要；1-需要
                     * 
                     */
                    int64_t GetNeedLogin() const;

                    /**
                     * 设置网站是否需要登录扫描：0-未知；-1-不需要；1-需要
                     * @param _needLogin 网站是否需要登录扫描：0-未知；-1-不需要；1-需要
                     * 
                     */
                    void SetNeedLogin(const int64_t& _needLogin);

                    /**
                     * 判断参数 NeedLogin 是否已赋值
                     * @return NeedLogin 是否已赋值
                     * 
                     */
                    bool NeedLoginHasBeenSet() const;

                    /**
                     * 获取登录后的cookie
                     * @return LoginCookie 登录后的cookie
                     * 
                     */
                    std::string GetLoginCookie() const;

                    /**
                     * 设置登录后的cookie
                     * @param _loginCookie 登录后的cookie
                     * 
                     */
                    void SetLoginCookie(const std::string& _loginCookie);

                    /**
                     * 判断参数 LoginCookie 是否已赋值
                     * @return LoginCookie 是否已赋值
                     * 
                     */
                    bool LoginCookieHasBeenSet() const;

                    /**
                     * 获取用于测试cookie是否有效的URL
                     * @return LoginCheckUrl 用于测试cookie是否有效的URL
                     * 
                     */
                    std::string GetLoginCheckUrl() const;

                    /**
                     * 设置用于测试cookie是否有效的URL
                     * @param _loginCheckUrl 用于测试cookie是否有效的URL
                     * 
                     */
                    void SetLoginCheckUrl(const std::string& _loginCheckUrl);

                    /**
                     * 判断参数 LoginCheckUrl 是否已赋值
                     * @return LoginCheckUrl 是否已赋值
                     * 
                     */
                    bool LoginCheckUrlHasBeenSet() const;

                    /**
                     * 获取用于测试cookie是否有效的关键字
                     * @return LoginCheckKw 用于测试cookie是否有效的关键字
                     * 
                     */
                    std::string GetLoginCheckKw() const;

                    /**
                     * 设置用于测试cookie是否有效的关键字
                     * @param _loginCheckKw 用于测试cookie是否有效的关键字
                     * 
                     */
                    void SetLoginCheckKw(const std::string& _loginCheckKw);

                    /**
                     * 判断参数 LoginCheckKw 是否已赋值
                     * @return LoginCheckKw 是否已赋值
                     * 
                     */
                    bool LoginCheckKwHasBeenSet() const;

                    /**
                     * 获取禁止扫描器扫描的目录关键字
                     * @return ScanDisallow 禁止扫描器扫描的目录关键字
                     * 
                     */
                    std::string GetScanDisallow() const;

                    /**
                     * 设置禁止扫描器扫描的目录关键字
                     * @param _scanDisallow 禁止扫描器扫描的目录关键字
                     * 
                     */
                    void SetScanDisallow(const std::string& _scanDisallow);

                    /**
                     * 判断参数 ScanDisallow 是否已赋值
                     * @return ScanDisallow 是否已赋值
                     * 
                     */
                    bool ScanDisallowHasBeenSet() const;

                private:

                    /**
                     * 站点ID
                     */
                    uint64_t m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 网站是否需要登录扫描：0-未知；-1-不需要；1-需要
                     */
                    int64_t m_needLogin;
                    bool m_needLoginHasBeenSet;

                    /**
                     * 登录后的cookie
                     */
                    std::string m_loginCookie;
                    bool m_loginCookieHasBeenSet;

                    /**
                     * 用于测试cookie是否有效的URL
                     */
                    std::string m_loginCheckUrl;
                    bool m_loginCheckUrlHasBeenSet;

                    /**
                     * 用于测试cookie是否有效的关键字
                     */
                    std::string m_loginCheckKw;
                    bool m_loginCheckKwHasBeenSet;

                    /**
                     * 禁止扫描器扫描的目录关键字
                     */
                    std::string m_scanDisallow;
                    bool m_scanDisallowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_MODIFYSITEATTRIBUTEREQUEST_H_
