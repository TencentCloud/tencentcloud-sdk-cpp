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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBETCPLISTENERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBETCPLISTENERSREQUEST_H_

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
                * DescribeTCPListeners请求参数结构体
                */
                class DescribeTCPListenersRequest : public AbstractModel
                {
                public:
                    DescribeTCPListenersRequest();
                    ~DescribeTCPListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，根据通道ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
                     * @return ProxyId 过滤条件，根据通道ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置过滤条件，根据通道ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
                     * @param _proxyId 过滤条件，根据通道ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
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
                     * 获取过滤条件，根据监听器ID精确查询。
当设置了ProxyId时，会检查该监听器是否归属于该通道。
当设置了GroupId时，会检查该监听器是否归属于该通道组。
                     * @return ListenerId 过滤条件，根据监听器ID精确查询。
当设置了ProxyId时，会检查该监听器是否归属于该通道。
当设置了GroupId时，会检查该监听器是否归属于该通道组。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置过滤条件，根据监听器ID精确查询。
当设置了ProxyId时，会检查该监听器是否归属于该通道。
当设置了GroupId时，会检查该监听器是否归属于该通道组。
                     * @param _listenerId 过滤条件，根据监听器ID精确查询。
当设置了ProxyId时，会检查该监听器是否归属于该通道。
当设置了GroupId时，会检查该监听器是否归属于该通道组。
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
                     * 获取过滤条件，根据监听器名称精确查询
                     * @return ListenerName 过滤条件，根据监听器名称精确查询
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置过滤条件，根据监听器名称精确查询
                     * @param _listenerName 过滤条件，根据监听器名称精确查询
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
                     * 获取过滤条件，根据监听器端口精确查询
                     * @return Port 过滤条件，根据监听器端口精确查询
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置过滤条件，根据监听器端口精确查询
                     * @param _port 过滤条件，根据监听器端口精确查询
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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取限制数量，默认为20
                     * @return Limit 限制数量，默认为20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数量，默认为20
                     * @param _limit 限制数量，默认为20
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
                     * 获取过滤条件，根据通道组ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
                     * @return GroupId 过滤条件，根据通道组ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置过滤条件，根据通道组ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
                     * @param _groupId 过滤条件，根据通道组ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
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
                     * 获取过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用
                     * @return SearchValue 过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用
                     * @param _searchValue 过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用
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
                     * 过滤条件，根据通道ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 过滤条件，根据监听器ID精确查询。
当设置了ProxyId时，会检查该监听器是否归属于该通道。
当设置了GroupId时，会检查该监听器是否归属于该通道组。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 过滤条件，根据监听器名称精确查询
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 过滤条件，根据监听器端口精确查询
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数量，默认为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件，根据通道组ID进行拉取，ProxyId/GroupId/ListenerId必须设置一个，但ProxyId和GroupId不能同时设置。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 过滤条件，支持按照端口或监听器名称进行模糊查询，该参数不能与ListenerName和Port同时使用
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBETCPLISTENERSREQUEST_H_
