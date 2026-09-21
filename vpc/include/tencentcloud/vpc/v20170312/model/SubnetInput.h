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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SUBNETINPUT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SUBNETINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 子网对象
                */
                class SubnetInput : public AbstractModel
                {
                public:
                    SubnetInput();
                    ~SubnetInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子网名称。</p>
                     * @return SubnetName <p>子网名称。</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>子网名称。</p>
                     * @param _subnetName <p>子网名称。</p>
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取<p>可用区。形如：<code>ap-guangzhou-2</code>。</p>
                     * @return Zone <p>可用区。形如：<code>ap-guangzhou-2</code>。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区。形如：<code>ap-guangzhou-2</code>。</p>
                     * @param _zone <p>可用区。形如：<code>ap-guangzhou-2</code>。</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * @return StackType <p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * 
                     */
                    std::string GetStackType() const;

                    /**
                     * 设置<p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * @param _stackType <p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * 
                     */
                    void SetStackType(const std::string& _stackType);

                    /**
                     * 判断参数 StackType 是否已赋值
                     * @return StackType 是否已赋值
                     * 
                     */
                    bool StackTypeHasBeenSet() const;

                    /**
                     * 获取<p>子网的<code>CIDR</code>。</p>
                     * @return CidrBlock <p>子网的<code>CIDR</code>。</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>子网的<code>CIDR</code>。</p>
                     * @param _cidrBlock <p>子网的<code>CIDR</code>。</p>
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
                     * @return Ipv6CidrBlock <p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置<p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
                     * @param _ipv6CidrBlock <p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
                     * 
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>指定关联路由表，形如：<code>rtb-3ryrwzuu</code>。</p>
                     * @return RouteTableId <p>指定关联路由表，形如：<code>rtb-3ryrwzuu</code>。</p>
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置<p>指定关联路由表，形如：<code>rtb-3ryrwzuu</code>。</p>
                     * @param _routeTableId <p>指定关联路由表，形如：<code>rtb-3ryrwzuu</code>。</p>
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                private:

                    /**
                     * <p>子网名称。</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>可用区。形如：<code>ap-guangzhou-2</code>。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     */
                    std::string m_stackType;
                    bool m_stackTypeHasBeenSet;

                    /**
                     * <p>子网的<code>CIDR</code>。</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>子网的 <code>IPv6</code> <code>CIDR</code>。</p>
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * <p>指定关联路由表，形如：<code>rtb-3ryrwzuu</code>。</p>
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SUBNETINPUT_H_
