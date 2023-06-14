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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_CREATEDOMAINREQUEST_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_CREATEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * CreateDomain请求参数结构体
                */
                class CreateDomainRequest : public AbstractModel
                {
                public:
                    CreateDomainRequest();
                    ~CreateDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监控的服务器类型（0：web，1：smtp，2：imap，3：pops）
                     * @return ServerType 监控的服务器类型（0：web，1：smtp，2：imap，3：pops）
                     * 
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置监控的服务器类型（0：web，1：smtp，2：imap，3：pops）
                     * @param _serverType 监控的服务器类型（0：web，1：smtp，2：imap，3：pops）
                     * 
                     */
                    void SetServerType(const int64_t& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     * 
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取添加的域名
                     * @return Domain 添加的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置添加的域名
                     * @param _domain 添加的域名
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
                     * 获取添加的端口
                     * @return Port 添加的端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置添加的端口
                     * @param _port 添加的端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取指定域名的IP
                     * @return IP 指定域名的IP
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置指定域名的IP
                     * @param _iP 指定域名的IP
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取是否开启通知告警；true：开启通知告警，false：关闭通知告警
                     * @return Notice 是否开启通知告警；true：开启通知告警，false：关闭通知告警
                     * 
                     */
                    bool GetNotice() const;

                    /**
                     * 设置是否开启通知告警；true：开启通知告警，false：关闭通知告警
                     * @param _notice 是否开启通知告警；true：开启通知告警，false：关闭通知告警
                     * 
                     */
                    void SetNotice(const bool& _notice);

                    /**
                     * 判断参数 Notice 是否已赋值
                     * @return Notice 是否已赋值
                     * 
                     */
                    bool NoticeHasBeenSet() const;

                    /**
                     * 获取给域名添加标签，多个以逗号隔开
                     * @return Tags 给域名添加标签，多个以逗号隔开
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置给域名添加标签，多个以逗号隔开
                     * @param _tags 给域名添加标签，多个以逗号隔开
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 监控的服务器类型（0：web，1：smtp，2：imap，3：pops）
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * 添加的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 添加的端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 指定域名的IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 是否开启通知告警；true：开启通知告警，false：关闭通知告警
                     */
                    bool m_notice;
                    bool m_noticeHasBeenSet;

                    /**
                     * 给域名添加标签，多个以逗号隔开
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_CREATEDOMAINREQUEST_H_
