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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYPRIVATENATGATEWAYATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYPRIVATENATGATEWAYATTRIBUTEREQUEST_H_

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
                * ModifyPrivateNatGatewayAttribute请求参数结构体
                */
                class ModifyPrivateNatGatewayAttributeRequest : public AbstractModel
                {
                public:
                    ModifyPrivateNatGatewayAttributeRequest();
                    ~ModifyPrivateNatGatewayAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * @return NatGatewayId 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * @param _natGatewayId 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取私网网关名称，可任意命名，但不得超过60个字符。
                     * @return NatGatewayName 私网网关名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置私网网关名称，可任意命名，但不得超过60个字符。
                     * @param _natGatewayName 私网网关名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     * 
                     */
                    bool NatGatewayNameHasBeenSet() const;

                private:

                    /**
                     * 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 私网网关名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYPRIVATENATGATEWAYATTRIBUTEREQUEST_H_
