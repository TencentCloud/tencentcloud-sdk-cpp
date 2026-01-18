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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_BINDLISTENERREALSERVERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_BINDLISTENERREALSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RealServerBindSetReq.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * BindListenerRealServers请求参数结构体
                */
                class BindListenerRealServersRequest : public AbstractModel
                {
                public:
                    BindListenerRealServersRequest();
                    ~BindListenerRealServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>监听器ID</p>
                     * @return ListenerId <p>监听器ID</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器ID</p>
                     * @param _listenerId <p>监听器ID</p>
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
                     * 获取<p>待绑定源站列表。如果该监听器的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。</p>
                     * @return RealServerBindSet <p>待绑定源站列表。如果该监听器的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。</p>
                     * 
                     */
                    std::vector<RealServerBindSetReq> GetRealServerBindSet() const;

                    /**
                     * 设置<p>待绑定源站列表。如果该监听器的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。</p>
                     * @param _realServerBindSet <p>待绑定源站列表。如果该监听器的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。</p>
                     * 
                     */
                    void SetRealServerBindSet(const std::vector<RealServerBindSetReq>& _realServerBindSet);

                    /**
                     * 判断参数 RealServerBindSet 是否已赋值
                     * @return RealServerBindSet 是否已赋值
                     * 
                     */
                    bool RealServerBindSetHasBeenSet() const;

                private:

                    /**
                     * <p>监听器ID</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>待绑定源站列表。如果该监听器的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。</p>
                     */
                    std::vector<RealServerBindSetReq> m_realServerBindSet;
                    bool m_realServerBindSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_BINDLISTENERREALSERVERSREQUEST_H_
