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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYDIRECTCONNECTGATEWAYATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYDIRECTCONNECTGATEWAYATTRIBUTEREQUEST_H_

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
                * ModifyDirectConnectGatewayAttribute请求参数结构体
                */
                class ModifyDirectConnectGatewayAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDirectConnectGatewayAttributeRequest();
                    ~ModifyDirectConnectGatewayAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专线网关唯一`ID`，形如：`dcg-9o233uri`。
                     * @return DirectConnectGatewayId 专线网关唯一`ID`，形如：`dcg-9o233uri`。
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置专线网关唯一`ID`，形如：`dcg-9o233uri`。
                     * @param _directConnectGatewayId 专线网关唯一`ID`，形如：`dcg-9o233uri`。
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取专线网关名称，可任意命名，但不得超过60个字符。
                     * @return DirectConnectGatewayName 专线网关名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetDirectConnectGatewayName() const;

                    /**
                     * 设置专线网关名称，可任意命名，但不得超过60个字符。
                     * @param _directConnectGatewayName 专线网关名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetDirectConnectGatewayName(const std::string& _directConnectGatewayName);

                    /**
                     * 判断参数 DirectConnectGatewayName 是否已赋值
                     * @return DirectConnectGatewayName 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayNameHasBeenSet() const;

                    /**
                     * 获取云联网路由学习类型，可选值：`BGP`（自动学习）、`STATIC`（静态，即用户配置）。只有云联网类型专线网关且开启了BGP功能才支持修改`CcnRouteType`。
                     * @return CcnRouteType 云联网路由学习类型，可选值：`BGP`（自动学习）、`STATIC`（静态，即用户配置）。只有云联网类型专线网关且开启了BGP功能才支持修改`CcnRouteType`。
                     * 
                     */
                    std::string GetCcnRouteType() const;

                    /**
                     * 设置云联网路由学习类型，可选值：`BGP`（自动学习）、`STATIC`（静态，即用户配置）。只有云联网类型专线网关且开启了BGP功能才支持修改`CcnRouteType`。
                     * @param _ccnRouteType 云联网路由学习类型，可选值：`BGP`（自动学习）、`STATIC`（静态，即用户配置）。只有云联网类型专线网关且开启了BGP功能才支持修改`CcnRouteType`。
                     * 
                     */
                    void SetCcnRouteType(const std::string& _ccnRouteType);

                    /**
                     * 判断参数 CcnRouteType 是否已赋值
                     * @return CcnRouteType 是否已赋值
                     * 
                     */
                    bool CcnRouteTypeHasBeenSet() const;

                    /**
                     * 获取云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持修改`ModeType`。
                     * @return ModeType 云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持修改`ModeType`。
                     * 
                     */
                    std::string GetModeType() const;

                    /**
                     * 设置云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持修改`ModeType`。
                     * @param _modeType 云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持修改`ModeType`。
                     * 
                     */
                    void SetModeType(const std::string& _modeType);

                    /**
                     * 判断参数 ModeType 是否已赋值
                     * @return ModeType 是否已赋值
                     * 
                     */
                    bool ModeTypeHasBeenSet() const;

                private:

                    /**
                     * 专线网关唯一`ID`，形如：`dcg-9o233uri`。
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * 专线网关名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_directConnectGatewayName;
                    bool m_directConnectGatewayNameHasBeenSet;

                    /**
                     * 云联网路由学习类型，可选值：`BGP`（自动学习）、`STATIC`（静态，即用户配置）。只有云联网类型专线网关且开启了BGP功能才支持修改`CcnRouteType`。
                     */
                    std::string m_ccnRouteType;
                    bool m_ccnRouteTypeHasBeenSet;

                    /**
                     * 云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持修改`ModeType`。
                     */
                    std::string m_modeType;
                    bool m_modeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYDIRECTCONNECTGATEWAYATTRIBUTEREQUEST_H_
