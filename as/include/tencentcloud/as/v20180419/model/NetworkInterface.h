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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_NETWORKINTERFACE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_NETWORKINTERFACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 启动配置中的弹性网卡配置。
                */
                class NetworkInterface : public AbstractModel
                {
                public:
                    NetworkInterface();
                    ~NetworkInterface() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网卡类型。本字段在每个网卡项的请求中必填。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul><p>配置上层 NetworkInterfaces 时，数组必须显式包含且只能包含一个 PRIMARY，AS 不自动补齐主网卡。</p>
                     * @return InterfaceType <p>网卡类型。本字段在每个网卡项的请求中必填。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul><p>配置上层 NetworkInterfaces 时，数组必须显式包含且只能包含一个 PRIMARY，AS 不自动补齐主网卡。</p>
                     * 
                     */
                    std::string GetInterfaceType() const;

                    /**
                     * 设置<p>网卡类型。本字段在每个网卡项的请求中必填。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul><p>配置上层 NetworkInterfaces 时，数组必须显式包含且只能包含一个 PRIMARY，AS 不自动补齐主网卡。</p>
                     * @param _interfaceType <p>网卡类型。本字段在每个网卡项的请求中必填。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul><p>配置上层 NetworkInterfaces 时，数组必须显式包含且只能包含一个 PRIMARY，AS 不自动补齐主网卡。</p>
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
                     * 获取<p>网卡请求分配的内网 IPv4 地址总数，包含主 IP。</p><p>取值范围：[1, 40]</p><p>SECONDARY 网卡请求时必填；PRIMARY 网卡请求时可选，未填写时仅在实际扩容构造 CVM 请求副本时按 1 处理，不写回启动配置。显式传入的值由 AS 透传给 CVM，最终由 CVM/VPC 校验。</p>
                     * @return PrivateIpv4AddressCount <p>网卡请求分配的内网 IPv4 地址总数，包含主 IP。</p><p>取值范围：[1, 40]</p><p>SECONDARY 网卡请求时必填；PRIMARY 网卡请求时可选，未填写时仅在实际扩容构造 CVM 请求副本时按 1 处理，不写回启动配置。显式传入的值由 AS 透传给 CVM，最终由 CVM/VPC 校验。</p>
                     * 
                     */
                    int64_t GetPrivateIpv4AddressCount() const;

                    /**
                     * 设置<p>网卡请求分配的内网 IPv4 地址总数，包含主 IP。</p><p>取值范围：[1, 40]</p><p>SECONDARY 网卡请求时必填；PRIMARY 网卡请求时可选，未填写时仅在实际扩容构造 CVM 请求副本时按 1 处理，不写回启动配置。显式传入的值由 AS 透传给 CVM，最终由 CVM/VPC 校验。</p>
                     * @param _privateIpv4AddressCount <p>网卡请求分配的内网 IPv4 地址总数，包含主 IP。</p><p>取值范围：[1, 40]</p><p>SECONDARY 网卡请求时必填；PRIMARY 网卡请求时可选，未填写时仅在实际扩容构造 CVM 请求副本时按 1 处理，不写回启动配置。显式传入的值由 AS 透传给 CVM，最终由 CVM/VPC 校验。</p>
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
                     * 获取<p>弹性网卡绑定的安全组 ID 列表。</p><p>入参限制：最多 10 个。</p><p>对于 PRIMARY，网卡中显式配置的非空列表优先于启动配置中的 SecurityGroupIds 参数；网卡中未配置时使用启动配置中的 SecurityGroupIds 参数，两处均未配置时 AS 不指定安全组，继续按 CVM 缺省规则处理。对于 SECONDARY，仅透传网卡中显式配置的非空列表，不继承启动配置中的 SecurityGroupIds 参数。</p>
                     * @return SecurityGroupIds <p>弹性网卡绑定的安全组 ID 列表。</p><p>入参限制：最多 10 个。</p><p>对于 PRIMARY，网卡中显式配置的非空列表优先于启动配置中的 SecurityGroupIds 参数；网卡中未配置时使用启动配置中的 SecurityGroupIds 参数，两处均未配置时 AS 不指定安全组，继续按 CVM 缺省规则处理。对于 SECONDARY，仅透传网卡中显式配置的非空列表，不继承启动配置中的 SecurityGroupIds 参数。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>弹性网卡绑定的安全组 ID 列表。</p><p>入参限制：最多 10 个。</p><p>对于 PRIMARY，网卡中显式配置的非空列表优先于启动配置中的 SecurityGroupIds 参数；网卡中未配置时使用启动配置中的 SecurityGroupIds 参数，两处均未配置时 AS 不指定安全组，继续按 CVM 缺省规则处理。对于 SECONDARY，仅透传网卡中显式配置的非空列表，不继承启动配置中的 SecurityGroupIds 参数。</p>
                     * @param _securityGroupIds <p>弹性网卡绑定的安全组 ID 列表。</p><p>入参限制：最多 10 个。</p><p>对于 PRIMARY，网卡中显式配置的非空列表优先于启动配置中的 SecurityGroupIds 参数；网卡中未配置时使用启动配置中的 SecurityGroupIds 参数，两处均未配置时 AS 不指定安全组，继续按 CVM 缺省规则处理。对于 SECONDARY，仅透传网卡中显式配置的非空列表，不继承启动配置中的 SecurityGroupIds 参数。</p>
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
                     * 获取<p>实例销毁时是否保留辅助网卡，仅对 SECONDARY 有效。</p><p>枚举值：</p><ul><li>false： 不保留辅助网卡，辅助网卡随实例销毁</li><li>true： 保留辅助网卡</li></ul><p>默认值：false</p><p>PRIMARY 不允许配置 true。</p>
                     * @return IsKeepENI <p>实例销毁时是否保留辅助网卡，仅对 SECONDARY 有效。</p><p>枚举值：</p><ul><li>false： 不保留辅助网卡，辅助网卡随实例销毁</li><li>true： 保留辅助网卡</li></ul><p>默认值：false</p><p>PRIMARY 不允许配置 true。</p>
                     * 
                     */
                    bool GetIsKeepENI() const;

                    /**
                     * 设置<p>实例销毁时是否保留辅助网卡，仅对 SECONDARY 有效。</p><p>枚举值：</p><ul><li>false： 不保留辅助网卡，辅助网卡随实例销毁</li><li>true： 保留辅助网卡</li></ul><p>默认值：false</p><p>PRIMARY 不允许配置 true。</p>
                     * @param _isKeepENI <p>实例销毁时是否保留辅助网卡，仅对 SECONDARY 有效。</p><p>枚举值：</p><ul><li>false： 不保留辅助网卡，辅助网卡随实例销毁</li><li>true： 保留辅助网卡</li></ul><p>默认值：false</p><p>PRIMARY 不允许配置 true。</p>
                     * 
                     */
                    void SetIsKeepENI(const bool& _isKeepENI);

                    /**
                     * 判断参数 IsKeepENI 是否已赋值
                     * @return IsKeepENI 是否已赋值
                     * 
                     */
                    bool IsKeepENIHasBeenSet() const;

                private:

                    /**
                     * <p>网卡类型。本字段在每个网卡项的请求中必填。</p><p>枚举值：</p><ul><li>PRIMARY： 主网卡</li><li>SECONDARY： 辅助网卡</li></ul><p>配置上层 NetworkInterfaces 时，数组必须显式包含且只能包含一个 PRIMARY，AS 不自动补齐主网卡。</p>
                     */
                    std::string m_interfaceType;
                    bool m_interfaceTypeHasBeenSet;

                    /**
                     * <p>网卡请求分配的内网 IPv4 地址总数，包含主 IP。</p><p>取值范围：[1, 40]</p><p>SECONDARY 网卡请求时必填；PRIMARY 网卡请求时可选，未填写时仅在实际扩容构造 CVM 请求副本时按 1 处理，不写回启动配置。显式传入的值由 AS 透传给 CVM，最终由 CVM/VPC 校验。</p>
                     */
                    int64_t m_privateIpv4AddressCount;
                    bool m_privateIpv4AddressCountHasBeenSet;

                    /**
                     * <p>弹性网卡绑定的安全组 ID 列表。</p><p>入参限制：最多 10 个。</p><p>对于 PRIMARY，网卡中显式配置的非空列表优先于启动配置中的 SecurityGroupIds 参数；网卡中未配置时使用启动配置中的 SecurityGroupIds 参数，两处均未配置时 AS 不指定安全组，继续按 CVM 缺省规则处理。对于 SECONDARY，仅透传网卡中显式配置的非空列表，不继承启动配置中的 SecurityGroupIds 参数。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>实例销毁时是否保留辅助网卡，仅对 SECONDARY 有效。</p><p>枚举值：</p><ul><li>false： 不保留辅助网卡，辅助网卡随实例销毁</li><li>true： 保留辅助网卡</li></ul><p>默认值：false</p><p>PRIMARY 不允许配置 true。</p>
                     */
                    bool m_isKeepENI;
                    bool m_isKeepENIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_NETWORKINTERFACE_H_
