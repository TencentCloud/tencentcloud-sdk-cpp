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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCONSOLENETWORKREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCONSOLENETWORKREQUEST_H_

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
                * ModifyConsoleNetwork请求参数结构体
                */
                class ModifyConsoleNetworkRequest : public AbstractModel
                {
                public:
                    ModifyConsoleNetworkRequest();
                    ~ModifyConsoleNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云原生API网关实例ID。
                     * @return GatewayId 云原生API网关实例ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置云原生API网关实例ID。
                     * @param _gatewayId 云原生API网关实例ID。
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
                     * 获取网络类型：
- Open 公网
- Internal 内网（暂不支持）
                     * @return NetworkType 网络类型：
- Open 公网
- Internal 内网（暂不支持）
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型：
- Open 公网
- Internal 内网（暂不支持）
                     * @param _networkType 网络类型：
- Open 公网
- Internal 内网（暂不支持）
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
                     * 获取开启Konga网络，不填时默认为Open
- Open，开启
- Close，关闭
                     * @return Operate 开启Konga网络，不填时默认为Open
- Open，开启
- Close，关闭
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置开启Konga网络，不填时默认为Open
- Open，开启
- Close，关闭
                     * @param _operate 开启Konga网络，不填时默认为Open
- Open，开启
- Close，关闭
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取访问控制策略
                     * @return AccessControl 访问控制策略
                     * 
                     */
                    NetworkAccessControl GetAccessControl() const;

                    /**
                     * 设置访问控制策略
                     * @param _accessControl 访问控制策略
                     * 
                     */
                    void SetAccessControl(const NetworkAccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网络类型：
- Open 公网
- Internal 内网（暂不支持）
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 开启Konga网络，不填时默认为Open
- Open，开启
- Close，关闭
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 访问控制策略
                     */
                    NetworkAccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCONSOLENETWORKREQUEST_H_
