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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEENDPOINTGROUPREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEENDPOINTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/EndpointGroupConfiguration.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateEndpointGroup请求参数结构体
                */
                class CreateEndpointGroupRequest : public AbstractModel
                {
                public:
                    CreateEndpointGroupRequest();
                    ~CreateEndpointGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取全球加速实例ID。
                     * @return GlobalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置全球加速实例ID。
                     * @param _globalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取监听器ID。
                     * @return ListenerId 监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。
                     * @param _listenerId 监听器ID。
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
                     * 获取终端节点组类型。支持VIRTUAL，DEFAULT。
                     * @return EndpointGroupType 终端节点组类型。支持VIRTUAL，DEFAULT。
                     * 
                     */
                    std::string GetEndpointGroupType() const;

                    /**
                     * 设置终端节点组类型。支持VIRTUAL，DEFAULT。
                     * @param _endpointGroupType 终端节点组类型。支持VIRTUAL，DEFAULT。
                     * 
                     */
                    void SetEndpointGroupType(const std::string& _endpointGroupType);

                    /**
                     * 判断参数 EndpointGroupType 是否已赋值
                     * @return EndpointGroupType 是否已赋值
                     * 
                     */
                    bool EndpointGroupTypeHasBeenSet() const;

                    /**
                     * 获取终端节点组配置。
                     * @return EndpointGroupConfiguration 终端节点组配置。
                     * 
                     */
                    EndpointGroupConfiguration GetEndpointGroupConfiguration() const;

                    /**
                     * 设置终端节点组配置。
                     * @param _endpointGroupConfiguration 终端节点组配置。
                     * 
                     */
                    void SetEndpointGroupConfiguration(const EndpointGroupConfiguration& _endpointGroupConfiguration);

                    /**
                     * 判断参数 EndpointGroupConfiguration 是否已赋值
                     * @return EndpointGroupConfiguration 是否已赋值
                     * 
                     */
                    bool EndpointGroupConfigurationHasBeenSet() const;

                private:

                    /**
                     * 全球加速实例ID。
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * 监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 终端节点组类型。支持VIRTUAL，DEFAULT。
                     */
                    std::string m_endpointGroupType;
                    bool m_endpointGroupTypeHasBeenSet;

                    /**
                     * 终端节点组配置。
                     */
                    EndpointGroupConfiguration m_endpointGroupConfiguration;
                    bool m_endpointGroupConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEENDPOINTGROUPREQUEST_H_
