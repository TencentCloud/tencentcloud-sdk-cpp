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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_NETWORKINTERFACES_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_NETWORKINTERFACES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 创建实例时的网卡配置信息，包含主网卡和辅助网卡的VPC、子网、IP分配等网络参数。

此功能仅部分地区灰度开放，如需使用[请提交工单咨询](https://console.cloud.tencent.com/workorder/category)
                */
                class NetworkInterfaces : public AbstractModel
                {
                public:
                    NetworkInterfaces();
                    ~NetworkInterfaces() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>表示是主网卡还是辅助网卡。注意：枚举值要全部大写；<strong>NetworkInterfaces数组中必须要有PRIMARY</strong>，且PRIMARY只能存在一个，SECONDARY可以存在多个。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul>
                     * @return InterfaceType <p>表示是主网卡还是辅助网卡。注意：枚举值要全部大写；<strong>NetworkInterfaces数组中必须要有PRIMARY</strong>，且PRIMARY只能存在一个，SECONDARY可以存在多个。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul>
                     * 
                     */
                    std::string GetInterfaceType() const;

                    /**
                     * 设置<p>表示是主网卡还是辅助网卡。注意：枚举值要全部大写；<strong>NetworkInterfaces数组中必须要有PRIMARY</strong>，且PRIMARY只能存在一个，SECONDARY可以存在多个。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul>
                     * @param _interfaceType <p>表示是主网卡还是辅助网卡。注意：枚举值要全部大写；<strong>NetworkInterfaces数组中必须要有PRIMARY</strong>，且PRIMARY只能存在一个，SECONDARY可以存在多个。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul>
                     * 
                     */
                    void SetInterfaceType(const std::string& _interfaceType);

                    /**
                     * 判断参数 InterfaceType 是否已赋值
                     * @return InterfaceType 是否已赋值
                     * 
                     */
                    bool InterfaceTypeHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * @return VpcId <p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * @param _vpcId <p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * @return SubnetId <p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * @param _subnetId <p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>此字段是必填字段，表示每张网卡自动分配私有网卡IP个数。注意：不允许客户同时指定ip且动态分配ip。</p><p>取值范围：[1, 50]</p>
                     * @return PrivateIpv4AddressCount <p>此字段是必填字段，表示每张网卡自动分配私有网卡IP个数。注意：不允许客户同时指定ip且动态分配ip。</p><p>取值范围：[1, 50]</p>
                     * 
                     */
                    int64_t GetPrivateIpv4AddressCount() const;

                    /**
                     * 设置<p>此字段是必填字段，表示每张网卡自动分配私有网卡IP个数。注意：不允许客户同时指定ip且动态分配ip。</p><p>取值范围：[1, 50]</p>
                     * @param _privateIpv4AddressCount <p>此字段是必填字段，表示每张网卡自动分配私有网卡IP个数。注意：不允许客户同时指定ip且动态分配ip。</p><p>取值范围：[1, 50]</p>
                     * 
                     */
                    void SetPrivateIpv4AddressCount(const int64_t& _privateIpv4AddressCount);

                    /**
                     * 判断参数 PrivateIpv4AddressCount 是否已赋值
                     * @return PrivateIpv4AddressCount 是否已赋值
                     * 
                     */
                    bool PrivateIpv4AddressCountHasBeenSet() const;

                    /**
                     * 获取<p>指定存量的网卡ID用于绑定。只对辅助网卡生效，主网卡的生成采用既有流程。注：客户手动指定已有弹性网卡时，相关接口InstanceCount必须为1。主网卡不支持指定。</p>
                     * @return NetworkInterfaceId <p>指定存量的网卡ID用于绑定。只对辅助网卡生效，主网卡的生成采用既有流程。注：客户手动指定已有弹性网卡时，相关接口InstanceCount必须为1。主网卡不支持指定。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置<p>指定存量的网卡ID用于绑定。只对辅助网卡生效，主网卡的生成采用既有流程。注：客户手动指定已有弹性网卡时，相关接口InstanceCount必须为1。主网卡不支持指定。</p>
                     * @param _networkInterfaceId <p>指定存量的网卡ID用于绑定。只对辅助网卡生效，主网卡的生成采用既有流程。注：客户手动指定已有弹性网卡时，相关接口InstanceCount必须为1。主网卡不支持指定。</p>
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p><p>每个用户在每个地域每个项目下最多可设置50个安全组。</p>
                     * @return SecurityGroupIds <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p><p>每个用户在每个地域每个项目下最多可设置50个安全组。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p><p>每个用户在每个地域每个项目下最多可设置50个安全组。</p>
                     * @param _securityGroupIds <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p><p>每个用户在每个地域每个项目下最多可设置50个安全组。</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否随CVM删除绑定的弹性网卡，参数只对辅助网卡生效。默认保留辅助网卡兼容当前线上行为。该参数放置在主网卡上不生效，主网卡会随着CVM一同销毁。</p><p>默认值：<code>false</code></p>
                     * @return DeleteWithInstance <p>是否随CVM删除绑定的弹性网卡，参数只对辅助网卡生效。默认保留辅助网卡兼容当前线上行为。该参数放置在主网卡上不生效，主网卡会随着CVM一同销毁。</p><p>默认值：<code>false</code></p>
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置<p>是否随CVM删除绑定的弹性网卡，参数只对辅助网卡生效。默认保留辅助网卡兼容当前线上行为。该参数放置在主网卡上不生效，主网卡会随着CVM一同销毁。</p><p>默认值：<code>false</code></p>
                     * @param _deleteWithInstance <p>是否随CVM删除绑定的弹性网卡，参数只对辅助网卡生效。默认保留辅助网卡兼容当前线上行为。该参数放置在主网卡上不生效，主网卡会随着CVM一同销毁。</p><p>默认值：<code>false</code></p>
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                private:

                    /**
                     * <p>表示是主网卡还是辅助网卡。注意：枚举值要全部大写；<strong>NetworkInterfaces数组中必须要有PRIMARY</strong>，且PRIMARY只能存在一个，SECONDARY可以存在多个。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul>
                     */
                    std::string m_interfaceType;
                    bool m_interfaceTypeHasBeenSet;

                    /**
                     * <p>私有网络ID，形如<code>vpc-xxx</code>。有效的VpcId可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc?rid=1">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a> ，从接口返回中的<code>VpcId</code>字段获取。若在创建子机时VpcId与SubnetId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网ID，形如<code>subnet-xxx</code>。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet?rid=1">控制台</a>查询；也可以调用接口  <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的<code>SubnetId</code>字段获取。若在创建子机时SubnetId与VpcId同时传入<code>DEFAULT</code>，则强制使用默认vpc网络。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>此字段是必填字段，表示每张网卡自动分配私有网卡IP个数。注意：不允许客户同时指定ip且动态分配ip。</p><p>取值范围：[1, 50]</p>
                     */
                    int64_t m_privateIpv4AddressCount;
                    bool m_privateIpv4AddressCountHasBeenSet;

                    /**
                     * <p>指定存量的网卡ID用于绑定。只对辅助网卡生效，主网卡的生成采用既有流程。注：客户手动指定已有弹性网卡时，相关接口InstanceCount必须为1。主网卡不支持指定。</p>
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p><p>每个用户在每个地域每个项目下最多可设置50个安全组。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>是否随CVM删除绑定的弹性网卡，参数只对辅助网卡生效。默认保留辅助网卡兼容当前线上行为。该参数放置在主网卡上不生效，主网卡会随着CVM一同销毁。</p><p>默认值：<code>false</code></p>
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_NETWORKINTERFACES_H_
