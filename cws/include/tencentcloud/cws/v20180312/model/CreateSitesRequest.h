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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_CREATESITESREQUEST_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_CREATESITESREQUEST_H_

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
                * CreateSites请求参数结构体
                */
                class CreateSitesRequest : public AbstractModel
                {
                public:
                    CreateSitesRequest();
                    ~CreateSitesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点的url列表
                     * @return Urls 站点的url列表
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置站点的url列表
                     * @param _urls 站点的url列表
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取访问网站的客户端标识
                     * @return UserAgent 访问网站的客户端标识
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置访问网站的客户端标识
                     * @param _userAgent 访问网站的客户端标识
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                private:

                    /**
                     * 站点的url列表
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 访问网站的客户端标识
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_CREATESITESREQUEST_H_
