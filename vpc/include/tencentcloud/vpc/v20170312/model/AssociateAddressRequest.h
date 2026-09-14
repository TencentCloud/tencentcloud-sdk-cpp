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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AssociateAddress请求参数结构体
                */
                class AssociateAddressRequest : public AbstractModel
                {
                public:
                    AssociateAddressRequest();
                    ~AssociateAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>标识 EIP 的唯一 ID。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。EIP 唯一 ID 形如：<code>eip-11112222</code>。</p>
                     * @return AddressId <p>标识 EIP 的唯一 ID。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。EIP 唯一 ID 形如：<code>eip-11112222</code>。</p>
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置<p>标识 EIP 的唯一 ID。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。EIP 唯一 ID 形如：<code>eip-11112222</code>。</p>
                     * @param _addressId <p>标识 EIP 的唯一 ID。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。EIP 唯一 ID 形如：<code>eip-11112222</code>。</p>
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取<p>要绑定的实例 ID。实例 ID 形如：<code>ins-11112222</code>、<code>lb-11112222</code>。可通过登录<a href="https://console.cloud.tencent.com/cvm">控制台</a>查询，也可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
                     * @return InstanceId <p>要绑定的实例 ID。实例 ID 形如：<code>ins-11112222</code>、<code>lb-11112222</code>。可通过登录<a href="https://console.cloud.tencent.com/cvm">控制台</a>查询，也可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>要绑定的实例 ID。实例 ID 形如：<code>ins-11112222</code>、<code>lb-11112222</code>。可通过登录<a href="https://console.cloud.tencent.com/cvm">控制台</a>查询，也可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
                     * @param _instanceId <p>要绑定的实例 ID。实例 ID 形如：<code>ins-11112222</code>、<code>lb-11112222</code>。可通过登录<a href="https://console.cloud.tencent.com/cvm">控制台</a>查询，也可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
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
                     * 获取<p>要绑定的弹性网卡 ID。 弹性网卡 ID 形如：<code>eni-11112222</code>。<code>NetworkInterfaceId</code> 与 <code>InstanceId</code> 不可同时指定。弹性网卡 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>networkInterfaceId</code>获取。</p>
                     * @return NetworkInterfaceId <p>要绑定的弹性网卡 ID。 弹性网卡 ID 形如：<code>eni-11112222</code>。<code>NetworkInterfaceId</code> 与 <code>InstanceId</code> 不可同时指定。弹性网卡 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>networkInterfaceId</code>获取。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置<p>要绑定的弹性网卡 ID。 弹性网卡 ID 形如：<code>eni-11112222</code>。<code>NetworkInterfaceId</code> 与 <code>InstanceId</code> 不可同时指定。弹性网卡 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>networkInterfaceId</code>获取。</p>
                     * @param _networkInterfaceId <p>要绑定的弹性网卡 ID。 弹性网卡 ID 形如：<code>eni-11112222</code>。<code>NetworkInterfaceId</code> 与 <code>InstanceId</code> 不可同时指定。弹性网卡 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>networkInterfaceId</code>获取。</p>
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
                     * 获取<p>要绑定的内网 IP。如果指定了 <code>NetworkInterfaceId</code> 则也必须指定 <code>PrivateIpAddress</code> ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 <code>PrivateIpAddress</code> 是指定的 <code>NetworkInterfaceId</code> 上的一个内网 IP。指定弹性网卡的内网 IP 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>privateIpAddress</code>获取。</p>
                     * @return PrivateIpAddress <p>要绑定的内网 IP。如果指定了 <code>NetworkInterfaceId</code> 则也必须指定 <code>PrivateIpAddress</code> ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 <code>PrivateIpAddress</code> 是指定的 <code>NetworkInterfaceId</code> 上的一个内网 IP。指定弹性网卡的内网 IP 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>privateIpAddress</code>获取。</p>
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置<p>要绑定的内网 IP。如果指定了 <code>NetworkInterfaceId</code> 则也必须指定 <code>PrivateIpAddress</code> ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 <code>PrivateIpAddress</code> 是指定的 <code>NetworkInterfaceId</code> 上的一个内网 IP。指定弹性网卡的内网 IP 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>privateIpAddress</code>获取。</p>
                     * @param _privateIpAddress <p>要绑定的内网 IP。如果指定了 <code>NetworkInterfaceId</code> 则也必须指定 <code>PrivateIpAddress</code> ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 <code>PrivateIpAddress</code> 是指定的 <code>NetworkInterfaceId</code> 上的一个内网 IP。指定弹性网卡的内网 IP 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>privateIpAddress</code>获取。</p>
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>指定绑定时是否设置直通。弹性公网 IP 直通请参见 <a href="https://cloud.tencent.com/document/product/1199/41709">EIP 直通</a>。取值：true、false，默认值为 false。当绑定 CVM 实例、EKS 弹性集群时，可设定此参数为 true。此参数目前处于内测中，如需使用，请提交 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=6&amp;level2_id=163&amp;source=0&amp;data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&amp;level3_id=1071&amp;queue=96&amp;scene_code=34639&amp;step=2">工单申请</a>。</p>
                     * @return EipDirectConnection <p>指定绑定时是否设置直通。弹性公网 IP 直通请参见 <a href="https://cloud.tencent.com/document/product/1199/41709">EIP 直通</a>。取值：true、false，默认值为 false。当绑定 CVM 实例、EKS 弹性集群时，可设定此参数为 true。此参数目前处于内测中，如需使用，请提交 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=6&amp;level2_id=163&amp;source=0&amp;data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&amp;level3_id=1071&amp;queue=96&amp;scene_code=34639&amp;step=2">工单申请</a>。</p>
                     * 
                     */
                    bool GetEipDirectConnection() const;

                    /**
                     * 设置<p>指定绑定时是否设置直通。弹性公网 IP 直通请参见 <a href="https://cloud.tencent.com/document/product/1199/41709">EIP 直通</a>。取值：true、false，默认值为 false。当绑定 CVM 实例、EKS 弹性集群时，可设定此参数为 true。此参数目前处于内测中，如需使用，请提交 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=6&amp;level2_id=163&amp;source=0&amp;data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&amp;level3_id=1071&amp;queue=96&amp;scene_code=34639&amp;step=2">工单申请</a>。</p>
                     * @param _eipDirectConnection <p>指定绑定时是否设置直通。弹性公网 IP 直通请参见 <a href="https://cloud.tencent.com/document/product/1199/41709">EIP 直通</a>。取值：true、false，默认值为 false。当绑定 CVM 实例、EKS 弹性集群时，可设定此参数为 true。此参数目前处于内测中，如需使用，请提交 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=6&amp;level2_id=163&amp;source=0&amp;data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&amp;level3_id=1071&amp;queue=96&amp;scene_code=34639&amp;step=2">工单申请</a>。</p>
                     * 
                     */
                    void SetEipDirectConnection(const bool& _eipDirectConnection);

                    /**
                     * 判断参数 EipDirectConnection 是否已赋值
                     * @return EipDirectConnection 是否已赋值
                     * 
                     */
                    bool EipDirectConnectionHasBeenSet() const;

                    /**
                     * 获取<p>要绑定的实例所在地域。默认无需填写，仅限GAAP特殊场景需指定实例所在地域。</p>
                     * @return InstanceRegion <p>要绑定的实例所在地域。默认无需填写，仅限GAAP特殊场景需指定实例所在地域。</p>
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置<p>要绑定的实例所在地域。默认无需填写，仅限GAAP特殊场景需指定实例所在地域。</p>
                     * @param _instanceRegion <p>要绑定的实例所在地域。默认无需填写，仅限GAAP特殊场景需指定实例所在地域。</p>
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                private:

                    /**
                     * <p>标识 EIP 的唯一 ID。可以使用<a href="https://cloud.tencent.com/document/product/215/16702">DescribeAddresses</a>接口获取AddressId。EIP 唯一 ID 形如：<code>eip-11112222</code>。</p>
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * <p>要绑定的实例 ID。实例 ID 形如：<code>ins-11112222</code>、<code>lb-11112222</code>。可通过登录<a href="https://console.cloud.tencent.com/cvm">控制台</a>查询，也可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>要绑定的弹性网卡 ID。 弹性网卡 ID 形如：<code>eni-11112222</code>。<code>NetworkInterfaceId</code> 与 <code>InstanceId</code> 不可同时指定。弹性网卡 ID 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>networkInterfaceId</code>获取。</p>
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * <p>要绑定的内网 IP。如果指定了 <code>NetworkInterfaceId</code> 则也必须指定 <code>PrivateIpAddress</code> ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 <code>PrivateIpAddress</code> 是指定的 <code>NetworkInterfaceId</code> 上的一个内网 IP。指定弹性网卡的内网 IP 可通过登录<a href="https://console.cloud.tencent.com/vpc/eni">控制台</a>查询，也可通过<a href="https://cloud.tencent.com/document/api/215/15817">DescribeNetworkInterfaces</a>接口返回值中的<code>privateIpAddress</code>获取。</p>
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * <p>指定绑定时是否设置直通。弹性公网 IP 直通请参见 <a href="https://cloud.tencent.com/document/product/1199/41709">EIP 直通</a>。取值：true、false，默认值为 false。当绑定 CVM 实例、EKS 弹性集群时，可设定此参数为 true。此参数目前处于内测中，如需使用，请提交 <a href="https://console.cloud.tencent.com/workorder/category?level1_id=6&amp;level2_id=163&amp;source=0&amp;data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20CLB&amp;level3_id=1071&amp;queue=96&amp;scene_code=34639&amp;step=2">工单申请</a>。</p>
                     */
                    bool m_eipDirectConnection;
                    bool m_eipDirectConnectionHasBeenSet;

                    /**
                     * <p>要绑定的实例所在地域。默认无需填写，仅限GAAP特殊场景需指定实例所在地域。</p>
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEADDRESSREQUEST_H_
