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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYHTTPLISTENERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYHTTPLISTENERATTRIBUTEREQUEST_H_

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
                * ModifyHTTPListenerAttribute请求参数结构体
                */
                class ModifyHTTPListenerAttributeRequest : public AbstractModel
                {
                public:
                    ModifyHTTPListenerAttributeRequest();
                    ~ModifyHTTPListenerAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的监听器ID
                     * @return ListenerId 需要修改的监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置需要修改的监听器ID
                     * @param _listenerId 需要修改的监听器ID
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
                     * 获取新的监听器名称
                     * @return ListenerName 新的监听器名称
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置新的监听器名称
                     * @param _listenerName 新的监听器名称
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
                     * 获取通道ID
                     * @return ProxyId 通道ID
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置通道ID
                     * @param _proxyId 通道ID
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                private:

                    /**
                     * 需要修改的监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 新的监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 通道ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYHTTPLISTENERATTRIBUTEREQUEST_H_
