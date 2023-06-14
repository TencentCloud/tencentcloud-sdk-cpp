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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_CREATELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_CREATELOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/CreateLoadBalancerBzConf.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateLoadBalancers请求参数结构体
                */
                class CreateLoadBalancersRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancersRequest();
                    ~CreateLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取黑石负载均衡实例所属的私有网络ID。
                     * @return VpcId 黑石负载均衡实例所属的私有网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置黑石负载均衡实例所属的私有网络ID。
                     * @param _vpcId 黑石负载均衡实例所属的私有网络ID。
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
                     * 获取负载均衡的类型，取值为open或internal。open表示公网(有日租)，internal表示内网。
                     * @return LoadBalancerType 负载均衡的类型，取值为open或internal。open表示公网(有日租)，internal表示内网。
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡的类型，取值为open或internal。open表示公网(有日租)，internal表示内网。
                     * @param _loadBalancerType 负载均衡的类型，取值为open或internal。open表示公网(有日租)，internal表示内网。
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取在私有网络内购买内网负载均衡实例的时候需要指定子网ID，内网负载均衡实例的VIP将从这个子网中产生。其他情况不用填写该字段。
                     * @return SubnetId 在私有网络内购买内网负载均衡实例的时候需要指定子网ID，内网负载均衡实例的VIP将从这个子网中产生。其他情况不用填写该字段。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置在私有网络内购买内网负载均衡实例的时候需要指定子网ID，内网负载均衡实例的VIP将从这个子网中产生。其他情况不用填写该字段。
                     * @param _subnetId 在私有网络内购买内网负载均衡实例的时候需要指定子网ID，内网负载均衡实例的VIP将从这个子网中产生。其他情况不用填写该字段。
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
                     * 获取负载均衡所属项目ID。不填则属于默认项目。
                     * @return ProjectId 负载均衡所属项目ID。不填则属于默认项目。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置负载均衡所属项目ID。不填则属于默认项目。
                     * @param _projectId 负载均衡所属项目ID。不填则属于默认项目。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取购买黑石负载均衡实例的数量。默认值为1, 最大值为20。
                     * @return GoodsNum 购买黑石负载均衡实例的数量。默认值为1, 最大值为20。
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置购买黑石负载均衡实例的数量。默认值为1, 最大值为20。
                     * @param _goodsNum 购买黑石负载均衡实例的数量。默认值为1, 最大值为20。
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取黑石负载均衡的计费模式，取值为flow和bandwidth，其中flow模式表示流量模式，bandwidth表示带宽模式。默认值为flow。
                     * @return PayMode 黑石负载均衡的计费模式，取值为flow和bandwidth，其中flow模式表示流量模式，bandwidth表示带宽模式。默认值为flow。
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置黑石负载均衡的计费模式，取值为flow和bandwidth，其中flow模式表示流量模式，bandwidth表示带宽模式。默认值为flow。
                     * @param _payMode 黑石负载均衡的计费模式，取值为flow和bandwidth，其中flow模式表示流量模式，bandwidth表示带宽模式。默认值为flow。
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取负载均衡对应的TGW集群类别，取值为tunnel、fullnat或dnat。tunnel表示隧道集群，fullnat表示FULLNAT集群（普通外网负载均衡），dnat表示DNAT集群（增强型外网负载均衡）。默认值为fullnat。如需获取client IP，可以选择 tunnel 模式，fullnat 模式（tcp 通过toa 获取），dnat 模式。
                     * @return TgwSetType 负载均衡对应的TGW集群类别，取值为tunnel、fullnat或dnat。tunnel表示隧道集群，fullnat表示FULLNAT集群（普通外网负载均衡），dnat表示DNAT集群（增强型外网负载均衡）。默认值为fullnat。如需获取client IP，可以选择 tunnel 模式，fullnat 模式（tcp 通过toa 获取），dnat 模式。
                     * 
                     */
                    std::string GetTgwSetType() const;

                    /**
                     * 设置负载均衡对应的TGW集群类别，取值为tunnel、fullnat或dnat。tunnel表示隧道集群，fullnat表示FULLNAT集群（普通外网负载均衡），dnat表示DNAT集群（增强型外网负载均衡）。默认值为fullnat。如需获取client IP，可以选择 tunnel 模式，fullnat 模式（tcp 通过toa 获取），dnat 模式。
                     * @param _tgwSetType 负载均衡对应的TGW集群类别，取值为tunnel、fullnat或dnat。tunnel表示隧道集群，fullnat表示FULLNAT集群（普通外网负载均衡），dnat表示DNAT集群（增强型外网负载均衡）。默认值为fullnat。如需获取client IP，可以选择 tunnel 模式，fullnat 模式（tcp 通过toa 获取），dnat 模式。
                     * 
                     */
                    void SetTgwSetType(const std::string& _tgwSetType);

                    /**
                     * 判断参数 TgwSetType 是否已赋值
                     * @return TgwSetType 是否已赋值
                     * 
                     */
                    bool TgwSetTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡的独占类别，取值为0表示非独占，1表示四层独占，2表示七层独占，3表示四层和七层独占，4表示共享容灾。
                     * @return Exclusive 负载均衡的独占类别，取值为0表示非独占，1表示四层独占，2表示七层独占，3表示四层和七层独占，4表示共享容灾。
                     * 
                     */
                    int64_t GetExclusive() const;

                    /**
                     * 设置负载均衡的独占类别，取值为0表示非独占，1表示四层独占，2表示七层独占，3表示四层和七层独占，4表示共享容灾。
                     * @param _exclusive 负载均衡的独占类别，取值为0表示非独占，1表示四层独占，2表示七层独占，3表示四层和七层独占，4表示共享容灾。
                     * 
                     */
                    void SetExclusive(const int64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取指定的VIP，如果指定，则数量必须与goodsNum一致。如果不指定，则由后台分配随机VIP。
                     * @return SpecifiedVips 指定的VIP，如果指定，则数量必须与goodsNum一致。如果不指定，则由后台分配随机VIP。
                     * 
                     */
                    std::vector<std::string> GetSpecifiedVips() const;

                    /**
                     * 设置指定的VIP，如果指定，则数量必须与goodsNum一致。如果不指定，则由后台分配随机VIP。
                     * @param _specifiedVips 指定的VIP，如果指定，则数量必须与goodsNum一致。如果不指定，则由后台分配随机VIP。
                     * 
                     */
                    void SetSpecifiedVips(const std::vector<std::string>& _specifiedVips);

                    /**
                     * 判断参数 SpecifiedVips 是否已赋值
                     * @return SpecifiedVips 是否已赋值
                     * 
                     */
                    bool SpecifiedVipsHasBeenSet() const;

                    /**
                     * 获取（未全地域开放）保障型负载均衡设定参数，如果类别选择保障型则需传入此参数。
                     * @return BzConf （未全地域开放）保障型负载均衡设定参数，如果类别选择保障型则需传入此参数。
                     * 
                     */
                    CreateLoadBalancerBzConf GetBzConf() const;

                    /**
                     * 设置（未全地域开放）保障型负载均衡设定参数，如果类别选择保障型则需传入此参数。
                     * @param _bzConf （未全地域开放）保障型负载均衡设定参数，如果类别选择保障型则需传入此参数。
                     * 
                     */
                    void SetBzConf(const CreateLoadBalancerBzConf& _bzConf);

                    /**
                     * 判断参数 BzConf 是否已赋值
                     * @return BzConf 是否已赋值
                     * 
                     */
                    bool BzConfHasBeenSet() const;

                    /**
                     * 获取IP协议类型。可取的值为“ipv4”或“ipv6”。
                     * @return IpProtocolType IP协议类型。可取的值为“ipv4”或“ipv6”。
                     * 
                     */
                    std::string GetIpProtocolType() const;

                    /**
                     * 设置IP协议类型。可取的值为“ipv4”或“ipv6”。
                     * @param _ipProtocolType IP协议类型。可取的值为“ipv4”或“ipv6”。
                     * 
                     */
                    void SetIpProtocolType(const std::string& _ipProtocolType);

                    /**
                     * 判断参数 IpProtocolType 是否已赋值
                     * @return IpProtocolType 是否已赋值
                     * 
                     */
                    bool IpProtocolTypeHasBeenSet() const;

                private:

                    /**
                     * 黑石负载均衡实例所属的私有网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 负载均衡的类型，取值为open或internal。open表示公网(有日租)，internal表示内网。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 在私有网络内购买内网负载均衡实例的时候需要指定子网ID，内网负载均衡实例的VIP将从这个子网中产生。其他情况不用填写该字段。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 负载均衡所属项目ID。不填则属于默认项目。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 购买黑石负载均衡实例的数量。默认值为1, 最大值为20。
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 黑石负载均衡的计费模式，取值为flow和bandwidth，其中flow模式表示流量模式，bandwidth表示带宽模式。默认值为flow。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 负载均衡对应的TGW集群类别，取值为tunnel、fullnat或dnat。tunnel表示隧道集群，fullnat表示FULLNAT集群（普通外网负载均衡），dnat表示DNAT集群（增强型外网负载均衡）。默认值为fullnat。如需获取client IP，可以选择 tunnel 模式，fullnat 模式（tcp 通过toa 获取），dnat 模式。
                     */
                    std::string m_tgwSetType;
                    bool m_tgwSetTypeHasBeenSet;

                    /**
                     * 负载均衡的独占类别，取值为0表示非独占，1表示四层独占，2表示七层独占，3表示四层和七层独占，4表示共享容灾。
                     */
                    int64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * 指定的VIP，如果指定，则数量必须与goodsNum一致。如果不指定，则由后台分配随机VIP。
                     */
                    std::vector<std::string> m_specifiedVips;
                    bool m_specifiedVipsHasBeenSet;

                    /**
                     * （未全地域开放）保障型负载均衡设定参数，如果类别选择保障型则需传入此参数。
                     */
                    CreateLoadBalancerBzConf m_bzConf;
                    bool m_bzConfHasBeenSet;

                    /**
                     * IP协议类型。可取的值为“ipv4”或“ipv6”。
                     */
                    std::string m_ipProtocolType;
                    bool m_ipProtocolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_CREATELOADBALANCERSREQUEST_H_
