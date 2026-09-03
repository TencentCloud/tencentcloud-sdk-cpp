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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LBITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 负载均衡条目（字段严格对齐 CLB DescribeLoadBalancers）
                */
                class LbItem : public AbstractModel
                {
                public:
                    LbItem();
                    ~LbItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>负载均衡实例 ID，例如 lb-xxxxxxxx</p>
                     * @return LoadBalancerId <p>负载均衡实例 ID，例如 lb-xxxxxxxx</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>负载均衡实例 ID，例如 lb-xxxxxxxx</p>
                     * @param _loadBalancerId <p>负载均衡实例 ID，例如 lb-xxxxxxxx</p>
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
                     * 获取<p>负载均衡实例名称</p>
                     * @return LoadBalancerName <p>负载均衡实例名称</p>
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置<p>负载均衡实例名称</p>
                     * @param _loadBalancerName <p>负载均衡实例名称</p>
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取<p>网络类型：OPEN=公网属性；INTERNAL=内网属性</p>
                     * @return LoadBalancerType <p>网络类型：OPEN=公网属性；INTERNAL=内网属性</p>
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置<p>网络类型：OPEN=公网属性；INTERNAL=内网属性</p>
                     * @param _loadBalancerType <p>网络类型：OPEN=公网属性；INTERNAL=内网属性</p>
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                private:

                    /**
                     * <p>负载均衡实例 ID，例如 lb-xxxxxxxx</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>负载均衡实例名称</p>
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * <p>网络类型：OPEN=公网属性；INTERNAL=内网属性</p>
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LBITEM_H_
