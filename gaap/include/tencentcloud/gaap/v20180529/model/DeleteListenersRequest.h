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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSREQUEST_H_

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
                * DeleteListeners请求参数结构体
                */
                class DeleteListenersRequest : public AbstractModel
                {
                public:
                    DeleteListenersRequest();
                    ~DeleteListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的监听器ID列表
                     * @return ListenerIds 待删除的监听器ID列表
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置待删除的监听器ID列表
                     * @param _listenerIds 待删除的监听器ID列表
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                    /**
                     * 获取已绑定源站的监听器是否允许强制删除，1：允许， 0：不允许
                     * @return Force 已绑定源站的监听器是否允许强制删除，1：允许， 0：不允许
                     * 
                     */
                    uint64_t GetForce() const;

                    /**
                     * 设置已绑定源站的监听器是否允许强制删除，1：允许， 0：不允许
                     * @param _force 已绑定源站的监听器是否允许强制删除，1：允许， 0：不允许
                     * 
                     */
                    void SetForce(const uint64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                    /**
                     * 获取通道组ID，该参数和ProxyId必须设置一个，但不能同时设置。
                     * @return GroupId 通道组ID，该参数和ProxyId必须设置一个，但不能同时设置。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID，该参数和ProxyId必须设置一个，但不能同时设置。
                     * @param _groupId 通道组ID，该参数和ProxyId必须设置一个，但不能同时设置。
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
                     * 获取通道ID，该参数和GroupId必须设置一个，但不能同时设置。
                     * @return ProxyId 通道ID，该参数和GroupId必须设置一个，但不能同时设置。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置通道ID，该参数和GroupId必须设置一个，但不能同时设置。
                     * @param _proxyId 通道ID，该参数和GroupId必须设置一个，但不能同时设置。
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
                     * 待删除的监听器ID列表
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * 已绑定源站的监听器是否允许强制删除，1：允许， 0：不允许
                     */
                    uint64_t m_force;
                    bool m_forceHasBeenSet;

                    /**
                     * 通道组ID，该参数和ProxyId必须设置一个，但不能同时设置。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 通道ID，该参数和GroupId必须设置一个，但不能同时设置。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSREQUEST_H_
