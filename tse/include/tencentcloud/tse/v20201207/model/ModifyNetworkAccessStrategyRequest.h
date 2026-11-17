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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNETWORKACCESSSTRATEGYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNETWORKACCESSSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/NetworkAccessControl.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyNetworkAccessStrategy请求参数结构体
                */
                class ModifyNetworkAccessStrategyRequest : public AbstractModel
                {
                public:
                    ModifyNetworkAccessStrategyRequest();
                    ~ModifyNetworkAccessStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云原生API网关实例ID。</p>
                     * @return GatewayId <p>云原生API网关实例ID。</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>云原生API网关实例ID。</p>
                     * @param _gatewayId <p>云原生API网关实例ID。</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>分组id</p>
                     * @return GroupId <p>分组id</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>分组id</p>
                     * @param _groupId <p>分组id</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>网络类型： </p><ul><li>Open 公网</li><li>Internal 内网    （暂不支持）</li></ul>
                     * @return NetworkType <p>网络类型： </p><ul><li>Open 公网</li><li>Internal 内网    （暂不支持）</li></ul>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>网络类型： </p><ul><li>Open 公网</li><li>Internal 内网    （暂不支持）</li></ul>
                     * @param _networkType <p>网络类型： </p><ul><li>Open 公网</li><li>Internal 内网    （暂不支持）</li></ul>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取<p>ip地址</p>
                     * @return Vip <p>ip地址</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>ip地址</p>
                     * @param _vip <p>ip地址</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>访问控制策略</p>
                     * @return AccessControl <p>访问控制策略</p>
                     * 
                     */
                    NetworkAccessControl GetAccessControl() const;

                    /**
                     * 设置<p>访问控制策略</p>
                     * @param _accessControl <p>访问控制策略</p>
                     * 
                     */
                    void SetAccessControl(const NetworkAccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取<p>GlobalConfig / Custom；不传默认 Custom</p>
                     * @return AccessControlSource <p>GlobalConfig / Custom；不传默认 Custom</p>
                     * 
                     */
                    std::string GetAccessControlSource() const;

                    /**
                     * 设置<p>GlobalConfig / Custom；不传默认 Custom</p>
                     * @param _accessControlSource <p>GlobalConfig / Custom；不传默认 Custom</p>
                     * 
                     */
                    void SetAccessControlSource(const std::string& _accessControlSource);

                    /**
                     * 判断参数 AccessControlSource 是否已赋值
                     * @return AccessControlSource 是否已赋值
                     * 
                     */
                    bool AccessControlSourceHasBeenSet() const;

                    /**
                     * 获取<p>全局配置ID</p>
                     * @return GlobalConfigId <p>全局配置ID</p>
                     * 
                     */
                    std::string GetGlobalConfigId() const;

                    /**
                     * 设置<p>全局配置ID</p>
                     * @param _globalConfigId <p>全局配置ID</p>
                     * 
                     */
                    void SetGlobalConfigId(const std::string& _globalConfigId);

                    /**
                     * 判断参数 GlobalConfigId 是否已赋值
                     * @return GlobalConfigId 是否已赋值
                     * 
                     */
                    bool GlobalConfigIdHasBeenSet() const;

                private:

                    /**
                     * <p>云原生API网关实例ID。</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>分组id</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>网络类型： </p><ul><li>Open 公网</li><li>Internal 内网    （暂不支持）</li></ul>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>ip地址</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>访问控制策略</p>
                     */
                    NetworkAccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * <p>GlobalConfig / Custom；不传默认 Custom</p>
                     */
                    std::string m_accessControlSource;
                    bool m_accessControlSourceHasBeenSet;

                    /**
                     * <p>全局配置ID</p>
                     */
                    std::string m_globalConfigId;
                    bool m_globalConfigIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNETWORKACCESSSTRATEGYREQUEST_H_
