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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCDNSINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCDNSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * nat防火墙 vpc dns 开关信息
                */
                class VpcDnsInfo : public AbstractModel
                {
                public:
                    VpcDnsInfo();
                    ~VpcDnsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
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
                     * 获取vpc 名称
                     * @return VpcName vpc 名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc 名称
                     * @param _vpcName vpc 名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取nat 防火墙模式 0：新增模式， 1: 接入模式
                     * @return FwMode nat 防火墙模式 0：新增模式， 1: 接入模式
                     * 
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置nat 防火墙模式 0：新增模式， 1: 接入模式
                     * @param _fwMode nat 防火墙模式 0：新增模式， 1: 接入模式
                     * 
                     */
                    void SetFwMode(const int64_t& _fwMode);

                    /**
                     * 判断参数 FwMode 是否已赋值
                     * @return FwMode 是否已赋值
                     * 
                     */
                    bool FwModeHasBeenSet() const;

                    /**
                     * 获取vpc ipv4网段范围 CIDR（Classless Inter-Domain Routing，无类域间路由选择）
                     * @return VpcIpv4Cidr vpc ipv4网段范围 CIDR（Classless Inter-Domain Routing，无类域间路由选择）
                     * 
                     */
                    std::string GetVpcIpv4Cidr() const;

                    /**
                     * 设置vpc ipv4网段范围 CIDR（Classless Inter-Domain Routing，无类域间路由选择）
                     * @param _vpcIpv4Cidr vpc ipv4网段范围 CIDR（Classless Inter-Domain Routing，无类域间路由选择）
                     * 
                     */
                    void SetVpcIpv4Cidr(const std::string& _vpcIpv4Cidr);

                    /**
                     * 判断参数 VpcIpv4Cidr 是否已赋值
                     * @return VpcIpv4Cidr 是否已赋值
                     * 
                     */
                    bool VpcIpv4CidrHasBeenSet() const;

                    /**
                     * 获取外网弹性ip，防火墙 dns解析地址
                     * @return DNSEip 外网弹性ip，防火墙 dns解析地址
                     * 
                     */
                    std::string GetDNSEip() const;

                    /**
                     * 设置外网弹性ip，防火墙 dns解析地址
                     * @param _dNSEip 外网弹性ip，防火墙 dns解析地址
                     * 
                     */
                    void SetDNSEip(const std::string& _dNSEip);

                    /**
                     * 判断参数 DNSEip 是否已赋值
                     * @return DNSEip 是否已赋值
                     * 
                     */
                    bool DNSEipHasBeenSet() const;

                    /**
                     * 获取nat网关id
                     * @return NatInsId nat网关id
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置nat网关id
                     * @param _natInsId nat网关id
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

                    /**
                     * 获取nat网关名称
                     * @return NatInsName nat网关名称
                     * 
                     */
                    std::string GetNatInsName() const;

                    /**
                     * 设置nat网关名称
                     * @param _natInsName nat网关名称
                     * 
                     */
                    void SetNatInsName(const std::string& _natInsName);

                    /**
                     * 判断参数 NatInsName 是否已赋值
                     * @return NatInsName 是否已赋值
                     * 
                     */
                    bool NatInsNameHasBeenSet() const;

                    /**
                     * 获取0：开关关闭 ， 1: 开关打开
                     * @return SwitchStatus 0：开关关闭 ， 1: 开关打开
                     * 
                     */
                    int64_t GetSwitchStatus() const;

                    /**
                     * 设置0：开关关闭 ， 1: 开关打开
                     * @param _switchStatus 0：开关关闭 ， 1: 开关打开
                     * 
                     */
                    void SetSwitchStatus(const int64_t& _switchStatus);

                    /**
                     * 判断参数 SwitchStatus 是否已赋值
                     * @return SwitchStatus 是否已赋值
                     * 
                     */
                    bool SwitchStatusHasBeenSet() const;

                    /**
                     * 获取0：未防护， 1: 已防护，2：忽略此字段
                     * @return ProtectedStatus 0：未防护， 1: 已防护，2：忽略此字段
                     * 
                     */
                    uint64_t GetProtectedStatus() const;

                    /**
                     * 设置0：未防护， 1: 已防护，2：忽略此字段
                     * @param _protectedStatus 0：未防护， 1: 已防护，2：忽略此字段
                     * 
                     */
                    void SetProtectedStatus(const uint64_t& _protectedStatus);

                    /**
                     * 判断参数 ProtectedStatus 是否已赋值
                     * @return ProtectedStatus 是否已赋值
                     * 
                     */
                    bool ProtectedStatusHasBeenSet() const;

                    /**
                     * 获取是否支持DNS FW，0-不支持、1-支持
                     * @return SupportDNSFW 是否支持DNS FW，0-不支持、1-支持
                     * 
                     */
                    uint64_t GetSupportDNSFW() const;

                    /**
                     * 设置是否支持DNS FW，0-不支持、1-支持
                     * @param _supportDNSFW 是否支持DNS FW，0-不支持、1-支持
                     * 
                     */
                    void SetSupportDNSFW(const uint64_t& _supportDNSFW);

                    /**
                     * 判断参数 SupportDNSFW 是否已赋值
                     * @return SupportDNSFW 是否已赋值
                     * 
                     */
                    bool SupportDNSFWHasBeenSet() const;

                private:

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc 名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * nat 防火墙模式 0：新增模式， 1: 接入模式
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * vpc ipv4网段范围 CIDR（Classless Inter-Domain Routing，无类域间路由选择）
                     */
                    std::string m_vpcIpv4Cidr;
                    bool m_vpcIpv4CidrHasBeenSet;

                    /**
                     * 外网弹性ip，防火墙 dns解析地址
                     */
                    std::string m_dNSEip;
                    bool m_dNSEipHasBeenSet;

                    /**
                     * nat网关id
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                    /**
                     * nat网关名称
                     */
                    std::string m_natInsName;
                    bool m_natInsNameHasBeenSet;

                    /**
                     * 0：开关关闭 ， 1: 开关打开
                     */
                    int64_t m_switchStatus;
                    bool m_switchStatusHasBeenSet;

                    /**
                     * 0：未防护， 1: 已防护，2：忽略此字段
                     */
                    uint64_t m_protectedStatus;
                    bool m_protectedStatusHasBeenSet;

                    /**
                     * 是否支持DNS FW，0-不支持、1-支持
                     */
                    uint64_t m_supportDNSFW;
                    bool m_supportDNSFWHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCDNSINFO_H_
