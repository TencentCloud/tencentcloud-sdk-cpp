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
                     * 获取<p>防火墙类型，&quot;VPC_FW&quot;-VPC防火墙，&quot;NAT_FW&quot;-NAT防火墙</p>
                     * @return FwType <p>防火墙类型，&quot;VPC_FW&quot;-VPC防火墙，&quot;NAT_FW&quot;-NAT防火墙</p>
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置<p>防火墙类型，&quot;VPC_FW&quot;-VPC防火墙，&quot;NAT_FW&quot;-NAT防火墙</p>
                     * @param _fwType <p>防火墙类型，&quot;VPC_FW&quot;-VPC防火墙，&quot;NAT_FW&quot;-NAT防火墙</p>
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
                     * 获取<p>云联网实例ID</p>
                     * @return CcnId <p>云联网实例ID</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网实例ID</p>
                     * @param _ccnId <p>云联网实例ID</p>
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
                     * 获取<p>Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）</p>
                     * @return Enable <p>Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）</p>
                     * @param _enable <p>Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）</p>
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
                     * 获取<p>NAT防火墙实例ID，FwType为nat时必填</p>
                     * @return NatInsId <p>NAT防火墙实例ID，FwType为nat时必填</p>
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置<p>NAT防火墙实例ID，FwType为nat时必填</p>
                     * @param _natInsId <p>NAT防火墙实例ID，FwType为nat时必填</p>
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
                     * <p>防火墙类型，&quot;VPC_FW&quot;-VPC防火墙，&quot;NAT_FW&quot;-NAT防火墙</p>
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * <p>云联网实例ID</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>Bypass开关，true-开启Bypass（禁用正常下一跳，流量绕过防火墙），false-关闭Bypass（启用正常下一跳，流量经过防火墙）</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>NAT防火墙实例ID，FwType为nat时必填</p>
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYCLUSTERFWBYPASSREQUEST_H_
