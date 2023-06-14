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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_LOADBALANCERSTATUS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_LOADBALANCERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 负载均衡状态信息
                */
                class LoadBalancerStatus : public AbstractModel
                {
                public:
                    LoadBalancerStatus();
                    ~LoadBalancerStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡实例 ID
                     * @return LoadBalancerId 负载均衡实例 ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID
                     * @param _loadBalancerId 负载均衡实例 ID
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
                     * 获取负载均衡实例名字
                     * @return LoadBalancerName 负载均衡实例名字
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例名字
                     * @param _loadBalancerName 负载均衡实例名字
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
                     * 获取负载均衡实例 VIP
                     * @return LoadBalancerVip 负载均衡实例 VIP
                     * 
                     */
                    std::string GetLoadBalancerVip() const;

                    /**
                     * 设置负载均衡实例 VIP
                     * @param _loadBalancerVip 负载均衡实例 VIP
                     * 
                     */
                    void SetLoadBalancerVip(const std::string& _loadBalancerVip);

                    /**
                     * 判断参数 LoadBalancerVip 是否已赋值
                     * @return LoadBalancerVip 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipHasBeenSet() const;

                    /**
                     * 获取负载均衡实例 Hostname
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerHostname 负载均衡实例 Hostname
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoadBalancerHostname() const;

                    /**
                     * 设置负载均衡实例 Hostname
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadBalancerHostname 负载均衡实例 Hostname
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadBalancerHostname(const std::string& _loadBalancerHostname);

                    /**
                     * 判断参数 LoadBalancerHostname 是否已赋值
                     * @return LoadBalancerHostname 是否已赋值
                     * 
                     */
                    bool LoadBalancerHostnameHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡实例名字
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡实例 VIP
                     */
                    std::string m_loadBalancerVip;
                    bool m_loadBalancerVipHasBeenSet;

                    /**
                     * 负载均衡实例 Hostname
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadBalancerHostname;
                    bool m_loadBalancerHostnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_LOADBALANCERSTATUS_H_
