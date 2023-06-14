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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_AUTOREWRITEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_AUTOREWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * AutoRewrite请求参数结构体
                */
                class AutoRewriteRequest : public AbstractModel
                {
                public:
                    AutoRewriteRequest();
                    ~AutoRewriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID。
                     * @return LoadBalancerId 负载均衡实例ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID。
                     * @param _loadBalancerId 负载均衡实例ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取HTTPS:443监听器的ID。
                     * @return ListenerId HTTPS:443监听器的ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置HTTPS:443监听器的ID。
                     * @param _listenerId HTTPS:443监听器的ID。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取HTTPS:443监听器下需要重定向的域名，若不填，则对HTTPS:443监听器下的所有域名都设置重定向。
                     * @return Domains HTTPS:443监听器下需要重定向的域名，若不填，则对HTTPS:443监听器下的所有域名都设置重定向。
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置HTTPS:443监听器下需要重定向的域名，若不填，则对HTTPS:443监听器下的所有域名都设置重定向。
                     * @param _domains HTTPS:443监听器下需要重定向的域名，若不填，则对HTTPS:443监听器下的所有域名都设置重定向。
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
                     * 获取重定向状态码，可取值301,302,307。
                     * @return RewriteCodes 重定向状态码，可取值301,302,307。
                     * 
                     */
                    std::vector<int64_t> GetRewriteCodes() const;

                    /**
                     * 设置重定向状态码，可取值301,302,307。
                     * @param _rewriteCodes 重定向状态码，可取值301,302,307。
                     * 
                     */
                    void SetRewriteCodes(const std::vector<int64_t>& _rewriteCodes);

                    /**
                     * 判断参数 RewriteCodes 是否已赋值
                     * @return RewriteCodes 是否已赋值
                     * 
                     */
                    bool RewriteCodesHasBeenSet() const;

                    /**
                     * 获取重定向是否携带匹配的URL。
                     * @return TakeUrls 重定向是否携带匹配的URL。
                     * 
                     */
                    std::vector<bool> GetTakeUrls() const;

                    /**
                     * 设置重定向是否携带匹配的URL。
                     * @param _takeUrls 重定向是否携带匹配的URL。
                     * 
                     */
                    void SetTakeUrls(const std::vector<bool>& _takeUrls);

                    /**
                     * 判断参数 TakeUrls 是否已赋值
                     * @return TakeUrls 是否已赋值
                     * 
                     */
                    bool TakeUrlsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * HTTPS:443监听器的ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * HTTPS:443监听器下需要重定向的域名，若不填，则对HTTPS:443监听器下的所有域名都设置重定向。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 重定向状态码，可取值301,302,307。
                     */
                    std::vector<int64_t> m_rewriteCodes;
                    bool m_rewriteCodesHasBeenSet;

                    /**
                     * 重定向是否携带匹配的URL。
                     */
                    std::vector<bool> m_takeUrls;
                    bool m_takeUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_AUTOREWRITEREQUEST_H_
