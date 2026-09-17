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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 对端网关
                */
                class CustomerGateway : public AbstractModel
                {
                public:
                    CustomerGateway();
                    ~CustomerGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户网关唯一ID</p>
                     * @return CustomerGatewayId <p>用户网关唯一ID</p>
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置<p>用户网关唯一ID</p>
                     * @param _customerGatewayId <p>用户网关唯一ID</p>
                     * 
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     * 
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>网关名称</p>
                     * @return CustomerGatewayName <p>网关名称</p>
                     * 
                     */
                    std::string GetCustomerGatewayName() const;

                    /**
                     * 设置<p>网关名称</p>
                     * @param _customerGatewayName <p>网关名称</p>
                     * 
                     */
                    void SetCustomerGatewayName(const std::string& _customerGatewayName);

                    /**
                     * 判断参数 CustomerGatewayName 是否已赋值
                     * @return CustomerGatewayName 是否已赋值
                     * 
                     */
                    bool CustomerGatewayNameHasBeenSet() const;

                    /**
                     * 获取<p>公网地址</p>
                     * @return IpAddress <p>公网地址</p>
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置<p>公网地址</p>
                     * @param _ipAddress <p>公网地址</p>
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>BGP ASN。</p>
                     * @return BgpAsn <p>BGP ASN。</p>
                     * 
                     */
                    uint64_t GetBgpAsn() const;

                    /**
                     * 设置<p>BGP ASN。</p>
                     * @param _bgpAsn <p>BGP ASN。</p>
                     * 
                     */
                    void SetBgpAsn(const uint64_t& _bgpAsn);

                    /**
                     * 判断参数 BgpAsn 是否已赋值
                     * @return BgpAsn 是否已赋值
                     * 
                     */
                    bool BgpAsnHasBeenSet() const;

                    /**
                     * 获取<p>关联通道数</p>
                     * @return VpnConnNum <p>关联通道数</p>
                     * 
                     */
                    uint64_t GetVpnConnNum() const;

                    /**
                     * 设置<p>关联通道数</p>
                     * @param _vpnConnNum <p>关联通道数</p>
                     * 
                     */
                    void SetVpnConnNum(const uint64_t& _vpnConnNum);

                    /**
                     * 判断参数 VpnConnNum 是否已赋值
                     * @return VpnConnNum 是否已赋值
                     * 
                     */
                    bool VpnConnNumHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return TagSet <p>标签信息</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tagSet <p>标签信息</p>
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * <p>用户网关唯一ID</p>
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * <p>网关名称</p>
                     */
                    std::string m_customerGatewayName;
                    bool m_customerGatewayNameHasBeenSet;

                    /**
                     * <p>公网地址</p>
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>BGP ASN。</p>
                     */
                    uint64_t m_bgpAsn;
                    bool m_bgpAsnHasBeenSet;

                    /**
                     * <p>关联通道数</p>
                     */
                    uint64_t m_vpnConnNum;
                    bool m_vpnConnNumHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAY_H_
