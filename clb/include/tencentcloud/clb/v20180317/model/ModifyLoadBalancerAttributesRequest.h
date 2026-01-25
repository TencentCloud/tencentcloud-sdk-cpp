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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetRegionInfo.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerAttributes请求参数结构体
                */
                class ModifyLoadBalancerAttributesRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerAttributesRequest();
                    ~ModifyLoadBalancerAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>负载均衡的唯一ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * @return LoadBalancerId <p>负载均衡的唯一ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>负载均衡的唯一ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * @param _loadBalancerId <p>负载均衡的唯一ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
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
                     * 获取<p>负载均衡实例名称，规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * @return LoadBalancerName <p>负载均衡实例名称，规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置<p>负载均衡实例名称，规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * @param _loadBalancerName <p>负载均衡实例名称，规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
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
                     * 获取<p>设置负载均衡跨地域绑定1.0的后端服务信息</p>
                     * @return TargetRegionInfo <p>设置负载均衡跨地域绑定1.0的后端服务信息</p>
                     * 
                     */
                    TargetRegionInfo GetTargetRegionInfo() const;

                    /**
                     * 设置<p>设置负载均衡跨地域绑定1.0的后端服务信息</p>
                     * @param _targetRegionInfo <p>设置负载均衡跨地域绑定1.0的后端服务信息</p>
                     * 
                     */
                    void SetTargetRegionInfo(const TargetRegionInfo& _targetRegionInfo);

                    /**
                     * 判断参数 TargetRegionInfo 是否已赋值
                     * @return TargetRegionInfo 是否已赋值
                     * 
                     */
                    bool TargetRegionInfoHasBeenSet() const;

                    /**
                     * 获取<p>网络计费相关参数</p>
                     * @return InternetChargeInfo <p>网络计费相关参数</p>
                     * 
                     */
                    InternetAccessible GetInternetChargeInfo() const;

                    /**
                     * 设置<p>网络计费相关参数</p>
                     * @param _internetChargeInfo <p>网络计费相关参数</p>
                     * 
                     */
                    void SetInternetChargeInfo(const InternetAccessible& _internetChargeInfo);

                    /**
                     * 判断参数 InternetChargeInfo 是否已赋值
                     * @return InternetChargeInfo 是否已赋值
                     * 
                     */
                    bool InternetChargeInfoHasBeenSet() const;

                    /**
                     * 获取<p>Target是否放通来自CLB的流量。<br>开启放通（true）：只验证CLB上的安全组；<br>不开启放通（false）：需同时验证CLB和后端实例上的安全组。<br>不填则不修改。</p>
                     * @return LoadBalancerPassToTarget <p>Target是否放通来自CLB的流量。<br>开启放通（true）：只验证CLB上的安全组；<br>不开启放通（false）：需同时验证CLB和后端实例上的安全组。<br>不填则不修改。</p>
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置<p>Target是否放通来自CLB的流量。<br>开启放通（true）：只验证CLB上的安全组；<br>不开启放通（false）：需同时验证CLB和后端实例上的安全组。<br>不填则不修改。</p>
                     * @param _loadBalancerPassToTarget <p>Target是否放通来自CLB的流量。<br>开启放通（true）：只验证CLB上的安全组；<br>不开启放通（false）：需同时验证CLB和后端实例上的安全组。<br>不填则不修改。</p>
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                    /**
                     * 获取<p>不同计费模式之间的切换：0表示不切换，1表示预付费和后付费切换，2表示后付费之间切换。默认值：0</p>
                     * @return SwitchFlag <p>不同计费模式之间的切换：0表示不切换，1表示预付费和后付费切换，2表示后付费之间切换。默认值：0</p>
                     * 
                     */
                    uint64_t GetSwitchFlag() const;

                    /**
                     * 设置<p>不同计费模式之间的切换：0表示不切换，1表示预付费和后付费切换，2表示后付费之间切换。默认值：0</p>
                     * @param _switchFlag <p>不同计费模式之间的切换：0表示不切换，1表示预付费和后付费切换，2表示后付费之间切换。默认值：0</p>
                     * 
                     */
                    void SetSwitchFlag(const uint64_t& _switchFlag);

                    /**
                     * 判断参数 SwitchFlag 是否已赋值
                     * @return SwitchFlag 是否已赋值
                     * 
                     */
                    bool SwitchFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否开启跨地域绑定2.0功能。不填则不修改。</p>
                     * @return SnatPro <p>是否开启跨地域绑定2.0功能。不填则不修改。</p>
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置<p>是否开启跨地域绑定2.0功能。不填则不修改。</p>
                     * @param _snatPro <p>是否开启跨地域绑定2.0功能。不填则不修改。</p>
                     * 
                     */
                    void SetSnatPro(const bool& _snatPro);

                    /**
                     * 判断参数 SnatPro 是否已赋值
                     * @return SnatPro 是否已赋值
                     * 
                     */
                    bool SnatProHasBeenSet() const;

                    /**
                     * 获取<p>是否开启删除保护，不填则不修改。</p>
                     * @return DeleteProtect <p>是否开启删除保护，不填则不修改。</p>
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置<p>是否开启删除保护，不填则不修改。</p>
                     * @param _deleteProtect <p>是否开启删除保护，不填则不修改。</p>
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                    /**
                     * 获取<p>将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。</p>
                     * @return ModifyClassicDomain <p>将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。</p>
                     * 
                     */
                    bool GetModifyClassicDomain() const;

                    /**
                     * 设置<p>将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。</p>
                     * @param _modifyClassicDomain <p>将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。</p>
                     * 
                     */
                    void SetModifyClassicDomain(const bool& _modifyClassicDomain);

                    /**
                     * 判断参数 ModifyClassicDomain 是否已赋值
                     * @return ModifyClassicDomain 是否已赋值
                     * 
                     */
                    bool ModifyClassicDomainHasBeenSet() const;

                    /**
                     * 获取<p>关联的终端节点Id，可通过<a href="https://cloud.tencent.com/document/product/215/54679">DescribeVpcEndPoint</a>接口查询。传空字符串代表解除关联。</p>
                     * @return AssociateEndpoint <p>关联的终端节点Id，可通过<a href="https://cloud.tencent.com/document/product/215/54679">DescribeVpcEndPoint</a>接口查询。传空字符串代表解除关联。</p>
                     * 
                     */
                    std::string GetAssociateEndpoint() const;

                    /**
                     * 设置<p>关联的终端节点Id，可通过<a href="https://cloud.tencent.com/document/product/215/54679">DescribeVpcEndPoint</a>接口查询。传空字符串代表解除关联。</p>
                     * @param _associateEndpoint <p>关联的终端节点Id，可通过<a href="https://cloud.tencent.com/document/product/215/54679">DescribeVpcEndPoint</a>接口查询。传空字符串代表解除关联。</p>
                     * 
                     */
                    void SetAssociateEndpoint(const std::string& _associateEndpoint);

                    /**
                     * 判断参数 AssociateEndpoint 是否已赋值
                     * @return AssociateEndpoint 是否已赋值
                     * 
                     */
                    bool AssociateEndpointHasBeenSet() const;

                private:

                    /**
                     * <p>负载均衡的唯一ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>负载均衡实例名称，规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * <p>设置负载均衡跨地域绑定1.0的后端服务信息</p>
                     */
                    TargetRegionInfo m_targetRegionInfo;
                    bool m_targetRegionInfoHasBeenSet;

                    /**
                     * <p>网络计费相关参数</p>
                     */
                    InternetAccessible m_internetChargeInfo;
                    bool m_internetChargeInfoHasBeenSet;

                    /**
                     * <p>Target是否放通来自CLB的流量。<br>开启放通（true）：只验证CLB上的安全组；<br>不开启放通（false）：需同时验证CLB和后端实例上的安全组。<br>不填则不修改。</p>
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * <p>不同计费模式之间的切换：0表示不切换，1表示预付费和后付费切换，2表示后付费之间切换。默认值：0</p>
                     */
                    uint64_t m_switchFlag;
                    bool m_switchFlagHasBeenSet;

                    /**
                     * <p>是否开启跨地域绑定2.0功能。不填则不修改。</p>
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * <p>是否开启删除保护，不填则不修改。</p>
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                    /**
                     * <p>将负载均衡二级域名由mycloud.com改为tencentclb.com，子域名也会变换，修改后mycloud.com域名将失效。不填则不修改。</p>
                     */
                    bool m_modifyClassicDomain;
                    bool m_modifyClassicDomainHasBeenSet;

                    /**
                     * <p>关联的终端节点Id，可通过<a href="https://cloud.tencent.com/document/product/215/54679">DescribeVpcEndPoint</a>接口查询。传空字符串代表解除关联。</p>
                     */
                    std::string m_associateEndpoint;
                    bool m_associateEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERATTRIBUTESREQUEST_H_
