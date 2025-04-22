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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BINDITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BINDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 配置绑定关系
                */
                class BindItem : public AbstractModel
                {
                public:
                    BindItem();
                    ~BindItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置绑定的CLB ID
                     * @return LoadBalancerId 配置绑定的CLB ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置配置绑定的CLB ID
                     * @param _loadBalancerId 配置绑定的CLB ID
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
                     * 获取配置绑定的监听器ID
                     * @return ListenerId 配置绑定的监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置配置绑定的监听器ID
                     * @param _listenerId 配置绑定的监听器ID
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
                     * 获取配置绑定的域名
                     * @return Domain 配置绑定的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置配置绑定的域名
                     * @param _domain 配置绑定的域名
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
                     * 获取配置绑定的规则
                     * @return LocationId 配置绑定的规则
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置配置绑定的规则
                     * @param _locationId 配置绑定的规则
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                private:

                    /**
                     * 配置绑定的CLB ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 配置绑定的监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 配置绑定的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 配置绑定的规则
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BINDITEM_H_
