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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OPENCLUSTERNATFWSWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OPENCLUSTERNATFWSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NatCcnSwitchConfig.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * OpenClusterNatFwSwitch请求参数结构体
                */
                class OpenClusterNatFwSwitchRequest : public AbstractModel
                {
                public:
                    OpenClusterNatFwSwitchRequest();
                    ~OpenClusterNatFwSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT CCN防火墙开关配置
                     * @return NatCcnSwitch NAT CCN防火墙开关配置
                     * 
                     */
                    NatCcnSwitchConfig GetNatCcnSwitch() const;

                    /**
                     * 设置NAT CCN防火墙开关配置
                     * @param _natCcnSwitch NAT CCN防火墙开关配置
                     * 
                     */
                    void SetNatCcnSwitch(const NatCcnSwitchConfig& _natCcnSwitch);

                    /**
                     * 判断参数 NatCcnSwitch 是否已赋值
                     * @return NatCcnSwitch 是否已赋值
                     * 
                     */
                    bool NatCcnSwitchHasBeenSet() const;

                private:

                    /**
                     * NAT CCN防火墙开关配置
                     */
                    NatCcnSwitchConfig m_natCcnSwitch;
                    bool m_natCcnSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OPENCLUSTERNATFWSWITCHREQUEST_H_
