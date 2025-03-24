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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERPUBLICLB_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERPUBLICLB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 弹性容器集群公网访问负载均衡信息
                */
                class ClusterPublicLB : public AbstractModel
                {
                public:
                    ClusterPublicLB();
                    ~ClusterPublicLB() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启公网访问LB
                     * @return Enabled 是否开启公网访问LB
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启公网访问LB
                     * @param _enabled 是否开启公网访问LB
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取允许访问的来源CIDR列表
                     * @return AllowFromCidrs 允许访问的来源CIDR列表
                     * 
                     */
                    std::vector<std::string> GetAllowFromCidrs() const;

                    /**
                     * 设置允许访问的来源CIDR列表
                     * @param _allowFromCidrs 允许访问的来源CIDR列表
                     * 
                     */
                    void SetAllowFromCidrs(const std::vector<std::string>& _allowFromCidrs);

                    /**
                     * 判断参数 AllowFromCidrs 是否已赋值
                     * @return AllowFromCidrs 是否已赋值
                     * 
                     */
                    bool AllowFromCidrsHasBeenSet() const;

                    /**
                     * 获取安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     * @return SecurityPolicies 安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     * 
                     */
                    std::vector<std::string> GetSecurityPolicies() const;

                    /**
                     * 设置安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     * @param _securityPolicies 安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     * 
                     */
                    void SetSecurityPolicies(const std::vector<std::string>& _securityPolicies);

                    /**
                     * 判断参数 SecurityPolicies 是否已赋值
                     * @return SecurityPolicies 是否已赋值
                     * 
                     */
                    bool SecurityPoliciesHasBeenSet() const;

                    /**
                     * 获取外网访问相关的扩展参数，格式为json
                     * @return ExtraParam 外网访问相关的扩展参数，格式为json
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置外网访问相关的扩展参数，格式为json
                     * @param _extraParam 外网访问相关的扩展参数，格式为json
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                    /**
                     * 获取新内外网功能，需要传递安全组
                     * @return SecurityGroup 新内外网功能，需要传递安全组
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置新内外网功能，需要传递安全组
                     * @param _securityGroup 新内外网功能，需要传递安全组
                     * 
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                private:

                    /**
                     * 是否开启公网访问LB
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 允许访问的来源CIDR列表
                     */
                    std::vector<std::string> m_allowFromCidrs;
                    bool m_allowFromCidrsHasBeenSet;

                    /**
                     * 安全策略放通单个IP或CIDR(例如: "192.168.1.0/24",默认为拒绝所有)
                     */
                    std::vector<std::string> m_securityPolicies;
                    bool m_securityPoliciesHasBeenSet;

                    /**
                     * 外网访问相关的扩展参数，格式为json
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * 新内外网功能，需要传递安全组
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERPUBLICLB_H_
