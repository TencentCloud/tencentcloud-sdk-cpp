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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL7BACKENDPORTREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL7BACKENDPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyL7BackendPort请求参数结构体
                */
                class ModifyL7BackendPortRequest : public AbstractModel
                {
                public:
                    ModifyL7BackendPortRequest();
                    ~ModifyL7BackendPortRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @return LoadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @param _loadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
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
                     * 获取七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * @return ListenerId 七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * @param _listenerId 七层监听器实例ID，可通过接口DescribeL7Listeners查询。
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
                     * 获取转发域名实例ID，可通过接口DescribeL7Rules查询。
                     * @return DomainId 转发域名实例ID，可通过接口DescribeL7Rules查询。
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置转发域名实例ID，可通过接口DescribeL7Rules查询。
                     * @param _domainId 转发域名实例ID，可通过接口DescribeL7Rules查询。
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取转发路径实例ID，可通过接口DescribeL7Rules查询。
                     * @return LocationId 转发路径实例ID，可通过接口DescribeL7Rules查询。
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发路径实例ID，可通过接口DescribeL7Rules查询。
                     * @param _locationId 转发路径实例ID，可通过接口DescribeL7Rules查询。
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
                     * 获取黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     * @return InstanceId 黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     * @param _instanceId 黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取已绑定的主机端口。
                     * @return Port 已绑定的主机端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置已绑定的主机端口。
                     * @param _port 已绑定的主机端口。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取新的主机端口，可选值1~65535。
                     * @return NewPort 新的主机端口，可选值1~65535。
                     * 
                     */
                    int64_t GetNewPort() const;

                    /**
                     * 设置新的主机端口，可选值1~65535。
                     * @param _newPort 新的主机端口，可选值1~65535。
                     * 
                     */
                    void SetNewPort(const int64_t& _newPort);

                    /**
                     * 判断参数 NewPort 是否已赋值
                     * @return NewPort 是否已赋值
                     * 
                     */
                    bool NewPortHasBeenSet() const;

                    /**
                     * 获取绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     * @return BindType 绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     * 
                     */
                    int64_t GetBindType() const;

                    /**
                     * 设置绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     * @param _bindType 绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     * 
                     */
                    void SetBindType(const int64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 转发域名实例ID，可通过接口DescribeL7Rules查询。
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 转发路径实例ID，可通过接口DescribeL7Rules查询。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 已绑定的主机端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 新的主机端口，可选值1~65535。
                     */
                    int64_t m_newPort;
                    bool m_newPortHasBeenSet;

                    /**
                     * 绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     */
                    int64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL7BACKENDPORTREQUEST_H_
