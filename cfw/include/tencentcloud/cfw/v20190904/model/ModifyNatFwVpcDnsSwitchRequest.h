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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWVPCDNSSWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWVPCDNSSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/DnsVpcSwitch.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyNatFwVpcDnsSwitch请求参数结构体
                */
                class ModifyNatFwVpcDnsSwitchRequest : public AbstractModel
                {
                public:
                    ModifyNatFwVpcDnsSwitchRequest();
                    ~ModifyNatFwVpcDnsSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>nat 防火墙 id</p>
                     * @return NatFwInsId <p>nat 防火墙 id</p>
                     * 
                     */
                    std::string GetNatFwInsId() const;

                    /**
                     * 设置<p>nat 防火墙 id</p>
                     * @param _natFwInsId <p>nat 防火墙 id</p>
                     * 
                     */
                    void SetNatFwInsId(const std::string& _natFwInsId);

                    /**
                     * 判断参数 NatFwInsId 是否已赋值
                     * @return NatFwInsId 是否已赋值
                     * 
                     */
                    bool NatFwInsIdHasBeenSet() const;

                    /**
                     * 获取<p>DNS 开关切换列表</p>
                     * @return DnsVpcSwitchLst <p>DNS 开关切换列表</p>
                     * 
                     */
                    std::vector<DnsVpcSwitch> GetDnsVpcSwitchLst() const;

                    /**
                     * 设置<p>DNS 开关切换列表</p>
                     * @param _dnsVpcSwitchLst <p>DNS 开关切换列表</p>
                     * 
                     */
                    void SetDnsVpcSwitchLst(const std::vector<DnsVpcSwitch>& _dnsVpcSwitchLst);

                    /**
                     * 判断参数 DnsVpcSwitchLst 是否已赋值
                     * @return DnsVpcSwitchLst 是否已赋值
                     * 
                     */
                    bool DnsVpcSwitchLstHasBeenSet() const;

                private:

                    /**
                     * <p>nat 防火墙 id</p>
                     */
                    std::string m_natFwInsId;
                    bool m_natFwInsIdHasBeenSet;

                    /**
                     * <p>DNS 开关切换列表</p>
                     */
                    std::vector<DnsVpcSwitch> m_dnsVpcSwitchLst;
                    bool m_dnsVpcSwitchLstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWVPCDNSSWITCHREQUEST_H_
