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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEHTTPLISTENERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEHTTPLISTENERSREQUEST_H_

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
                * DescribeHTTPListeners请求参数结构体
                */
                class DescribeHTTPListenersRequest : public AbstractModel
                {
                public:
                    DescribeHTTPListenersRequest();
                    ~DescribeHTTPListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通道ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * @return ProxyId <p>通道ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置<p>通道ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * @param _proxyId <p>通道ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
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
                     * 获取<p>通道组ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * @return GroupId <p>通道组ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>通道组ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * @param _groupId <p>通道组ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，按照监听器ID进行精确查询。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * @return ListenerId <p>过滤条件，按照监听器ID进行精确查询。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>过滤条件，按照监听器ID进行精确查询。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     * @param _listenerId <p>过滤条件，按照监听器ID进行精确查询。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
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
                     * 获取<p>过滤条件，按照监听器名称进行精确查询</p>
                     * @return ListenerName <p>过滤条件，按照监听器名称进行精确查询</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>过滤条件，按照监听器名称进行精确查询</p>
                     * @param _listenerName <p>过滤条件，按照监听器名称进行精确查询</p>
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
                     * 获取<p>过滤条件，按照监听器端口进行精确查询</p>
                     * @return Port <p>过滤条件，按照监听器端口进行精确查询</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>过滤条件，按照监听器端口进行精确查询</p>
                     * @param _port <p>过滤条件，按照监听器端口进行精确查询</p>
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
                     * 获取<p>偏移量，默认为0</p>
                     * @return Offset <p>偏移量，默认为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0</p>
                     * @param _offset <p>偏移量，默认为0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>限制数量，默认为20个</p>
                     * @return Limit <p>限制数量，默认为20个</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>限制数量，默认为20个</p>
                     * @param _limit <p>限制数量，默认为20个</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用</p>
                     * @return SearchValue <p>过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用</p>
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置<p>过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用</p>
                     * @param _searchValue <p>过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用</p>
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                private:

                    /**
                     * <p>通道ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * <p>通道组ID。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>过滤条件，按照监听器ID进行精确查询。ListenerId、ProxyId、GroupId须至少填写一个，且ProxyId与GroupId至多只能填写其中一个。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>过滤条件，按照监听器名称进行精确查询</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>过滤条件，按照监听器端口进行精确查询</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>偏移量，默认为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限制数量，默认为20个</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用</p>
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEHTTPLISTENERSREQUEST_H_
