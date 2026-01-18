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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPLISTENERREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPLISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateHTTPListener请求参数结构体
                */
                class CreateHTTPListenerRequest : public AbstractModel
                {
                public:
                    CreateHTTPListenerRequest();
                    ~CreateHTTPListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>监听器名称</p>
                     * @return ListenerName <p>监听器名称</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>监听器名称</p>
                     * @param _listenerName <p>监听器名称</p>
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取<p>监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复</p>
                     * @return Port <p>监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复</p>
                     * @param _port <p>监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>通道ID，与GroupId不能同时设置，对应为通道创建监听器</p>
                     * @return ProxyId <p>通道ID，与GroupId不能同时设置，对应为通道创建监听器</p>
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置<p>通道ID，与GroupId不能同时设置，对应为通道创建监听器</p>
                     * @param _proxyId <p>通道ID，与GroupId不能同时设置，对应为通道创建监听器</p>
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取<p>通道组ID，与ProxyId不能同时设置，对应为通道组创建监听器</p>
                     * @return GroupId <p>通道组ID，与ProxyId不能同时设置，对应为通道组创建监听器</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>通道组ID，与ProxyId不能同时设置，对应为通道组创建监听器</p>
                     * @param _groupId <p>通道组ID，与ProxyId不能同时设置，对应为通道组创建监听器</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>监听器名称</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>通道ID，与GroupId不能同时设置，对应为通道创建监听器</p>
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * <p>通道组ID，与ProxyId不能同时设置，对应为通道组创建监听器</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPLISTENERREQUEST_H_
