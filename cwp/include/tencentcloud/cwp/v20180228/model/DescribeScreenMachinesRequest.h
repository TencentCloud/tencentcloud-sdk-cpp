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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENMACHINESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENMACHINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScreenMachines请求参数结构体
                */
                class DescribeScreenMachinesRequest : public AbstractModel
                {
                public:
                    DescribeScreenMachinesRequest();
                    ~DescribeScreenMachinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机区域
                     * @return MachineRegion 主机区域
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置主机区域
                     * @param _machineRegion 主机区域
                     * 
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取IP 支持内网IP,主机别名
                     * @return MachineIpOrAlias IP 支持内网IP,主机别名
                     * 
                     */
                    std::string GetMachineIpOrAlias() const;

                    /**
                     * 设置IP 支持内网IP,主机别名
                     * @param _machineIpOrAlias IP 支持内网IP,主机别名
                     * 
                     */
                    void SetMachineIpOrAlias(const std::string& _machineIpOrAlias);

                    /**
                     * 判断参数 MachineIpOrAlias 是否已赋值
                     * @return MachineIpOrAlias 是否已赋值
                     * 
                     */
                    bool MachineIpOrAliasHasBeenSet() const;

                    /**
                     * 获取风险状态类型：0：全部类型，1：风险主机，2：潜在风险主机 ， 3：已关机/离线主机，4：无风险主机
                     * @return SecurityStatus 风险状态类型：0：全部类型，1：风险主机，2：潜在风险主机 ， 3：已关机/离线主机，4：无风险主机
                     * 
                     */
                    uint64_t GetSecurityStatus() const;

                    /**
                     * 设置风险状态类型：0：全部类型，1：风险主机，2：潜在风险主机 ， 3：已关机/离线主机，4：无风险主机
                     * @param _securityStatus 风险状态类型：0：全部类型，1：风险主机，2：潜在风险主机 ， 3：已关机/离线主机，4：无风险主机
                     * 
                     */
                    void SetSecurityStatus(const uint64_t& _securityStatus);

                    /**
                     * 判断参数 SecurityStatus 是否已赋值
                     * @return SecurityStatus 是否已赋值
                     * 
                     */
                    bool SecurityStatusHasBeenSet() const;

                private:

                    /**
                     * 主机区域
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * IP 支持内网IP,主机别名
                     */
                    std::string m_machineIpOrAlias;
                    bool m_machineIpOrAliasHasBeenSet;

                    /**
                     * 风险状态类型：0：全部类型，1：风险主机，2：潜在风险主机 ， 3：已关机/离线主机，4：无风险主机
                     */
                    uint64_t m_securityStatus;
                    bool m_securityStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENMACHINESREQUEST_H_
