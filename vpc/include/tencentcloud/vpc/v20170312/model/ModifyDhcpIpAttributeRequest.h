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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYDHCPIPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYDHCPIPATTRIBUTEREQUEST_H_

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
                * ModifyDhcpIpAttribute请求参数结构体
                */
                class ModifyDhcpIpAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDhcpIpAttributeRequest();
                    ~ModifyDhcpIpAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`DhcpIp`唯一`ID`，形如：`dhcpip-9o233uri`。
                     * @return DhcpIpId `DhcpIp`唯一`ID`，形如：`dhcpip-9o233uri`。
                     * 
                     */
                    std::string GetDhcpIpId() const;

                    /**
                     * 设置`DhcpIp`唯一`ID`，形如：`dhcpip-9o233uri`。
                     * @param _dhcpIpId `DhcpIp`唯一`ID`，形如：`dhcpip-9o233uri`。
                     * 
                     */
                    void SetDhcpIpId(const std::string& _dhcpIpId);

                    /**
                     * 判断参数 DhcpIpId 是否已赋值
                     * @return DhcpIpId 是否已赋值
                     * 
                     */
                    bool DhcpIpIdHasBeenSet() const;

                    /**
                     * 获取`DhcpIp`名称，可任意命名，但不得超过60个字符。
                     * @return DhcpIpName `DhcpIp`名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetDhcpIpName() const;

                    /**
                     * 设置`DhcpIp`名称，可任意命名，但不得超过60个字符。
                     * @param _dhcpIpName `DhcpIp`名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetDhcpIpName(const std::string& _dhcpIpName);

                    /**
                     * 判断参数 DhcpIpName 是否已赋值
                     * @return DhcpIpName 是否已赋值
                     * 
                     */
                    bool DhcpIpNameHasBeenSet() const;

                private:

                    /**
                     * `DhcpIp`唯一`ID`，形如：`dhcpip-9o233uri`。
                     */
                    std::string m_dhcpIpId;
                    bool m_dhcpIpIdHasBeenSet;

                    /**
                     * `DhcpIp`名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_dhcpIpName;
                    bool m_dhcpIpNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYDHCPIPATTRIBUTEREQUEST_H_
