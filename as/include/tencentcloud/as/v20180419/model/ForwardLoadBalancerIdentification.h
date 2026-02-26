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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCERIDENTIFICATION_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCERIDENTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 应用型负载均衡器标识信息
                */
                class ForwardLoadBalancerIdentification : public AbstractModel
                {
                public:
                    ForwardLoadBalancerIdentification();
                    ~ForwardLoadBalancerIdentification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>负载均衡器ID</p>
                     * @return LoadBalancerId <p>负载均衡器ID</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>负载均衡器ID</p>
                     * @param _loadBalancerId <p>负载均衡器ID</p>
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
                     * 获取<p>应用型负载均衡监听器 ID</p>
                     * @return ListenerId <p>应用型负载均衡监听器 ID</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>应用型负载均衡监听器 ID</p>
                     * @param _listenerId <p>应用型负载均衡监听器 ID</p>
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
                     * 获取<p>转发规则ID，注意：针对七层监听器此参数必填</p>
                     * @return LocationId <p>转发规则ID，注意：针对七层监听器此参数必填</p>
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置<p>转发规则ID，注意：针对七层监听器此参数必填</p>
                     * @param _locationId <p>转发规则ID，注意：针对七层监听器此参数必填</p>
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取<p>监听器或转发路径需解绑的端口号列表。</p><p>取值范围：[1, 65535]</p><p>不传递该参数时，默认解绑指定监听器或转发路径关联的所有端口。</p>
                     * @return PortList <p>监听器或转发路径需解绑的端口号列表。</p><p>取值范围：[1, 65535]</p><p>不传递该参数时，默认解绑指定监听器或转发路径关联的所有端口。</p>
                     * 
                     */
                    std::vector<uint64_t> GetPortList() const;

                    /**
                     * 设置<p>监听器或转发路径需解绑的端口号列表。</p><p>取值范围：[1, 65535]</p><p>不传递该参数时，默认解绑指定监听器或转发路径关联的所有端口。</p>
                     * @param _portList <p>监听器或转发路径需解绑的端口号列表。</p><p>取值范围：[1, 65535]</p><p>不传递该参数时，默认解绑指定监听器或转发路径关联的所有端口。</p>
                     * 
                     */
                    void SetPortList(const std::vector<uint64_t>& _portList);

                    /**
                     * 判断参数 PortList 是否已赋值
                     * @return PortList 是否已赋值
                     * 
                     */
                    bool PortListHasBeenSet() const;

                private:

                    /**
                     * <p>负载均衡器ID</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>应用型负载均衡监听器 ID</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>转发规则ID，注意：针对七层监听器此参数必填</p>
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * <p>监听器或转发路径需解绑的端口号列表。</p><p>取值范围：[1, 65535]</p><p>不传递该参数时，默认解绑指定监听器或转发路径关联的所有端口。</p>
                     */
                    std::vector<uint64_t> m_portList;
                    bool m_portListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCERIDENTIFICATION_H_
