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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYCLUSTERFWBYPASSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYCLUSTERFWBYPASSREQUEST_H_

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
                * ModifyClusterFwBypass请求参数结构体
                */
                class ModifyClusterFwBypassRequest : public AbstractModel
                {
                public:
                    ModifyClusterFwBypassRequest();
                    ~ModifyClusterFwBypassRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防火墙类型，"VPC_FW"-VPC防火墙，"NAT_FW"-NAT防火墙
                     * @return FwType 防火墙类型，"VPC_FW"-VPC防火墙，"NAT_FW"-NAT防火墙
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置防火墙类型，"VPC_FW"-VPC防火墙，"NAT_FW"-NAT防火墙
                     * @param _fwType 防火墙类型，"VPC_FW"-VPC防火墙，"NAT_FW"-NAT防火墙
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取云联网实例ID
                     * @return CcnId 云联网实例ID
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网实例ID
                     * @param _ccnId 云联网实例ID
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）
                     * @return Enable Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）
                     * @param _enable Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取NAT防火墙实例ID，FwType为nat时必填
                     * @return NatInsId NAT防火墙实例ID，FwType为nat时必填
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置NAT防火墙实例ID，FwType为nat时必填
                     * @param _natInsId NAT防火墙实例ID，FwType为nat时必填
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

                private:

                    /**
                     * 防火墙类型，"VPC_FW"-VPC防火墙，"NAT_FW"-NAT防火墙
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 云联网实例ID
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * NAT防火墙实例ID，FwType为nat时必填
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYCLUSTERFWBYPASSREQUEST_H_
