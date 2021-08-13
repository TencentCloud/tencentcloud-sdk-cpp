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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCSWITCHSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCSWITCHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyVPCSwitchStatus请求参数结构体
                */
                class ModifyVPCSwitchStatusRequest : public AbstractModel
                {
                public:
                    ModifyVPCSwitchStatusRequest();
                    ~ModifyVPCSwitchStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取公网IP
                     * @return FirewallVpcId 公网IP
                     */
                    std::string GetFirewallVpcId() const;

                    /**
                     * 设置公网IP
                     * @param FirewallVpcId 公网IP
                     */
                    void SetFirewallVpcId(const std::string& _firewallVpcId);

                    /**
                     * 判断参数 FirewallVpcId 是否已赋值
                     * @return FirewallVpcId 是否已赋值
                     */
                    bool FirewallVpcIdHasBeenSet() const;

                    /**
                     * 获取状态值，0: 关闭 ,1:开启
                     * @return Status 状态值，0: 关闭 ,1:开启
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态值，0: 关闭 ,1:开启
                     * @param Status 状态值，0: 关闭 ,1:开启
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 公网IP
                     */
                    std::string m_firewallVpcId;
                    bool m_firewallVpcIdHasBeenSet;

                    /**
                     * 状态值，0: 关闭 ,1:开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCSWITCHSTATUSREQUEST_H_
