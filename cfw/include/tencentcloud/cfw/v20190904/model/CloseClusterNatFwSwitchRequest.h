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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CLOSECLUSTERNATFWSWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CLOSECLUSTERNATFWSWITCHREQUEST_H_

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
                * CloseClusterNatFwSwitch请求参数结构体
                */
                class CloseClusterNatFwSwitchRequest : public AbstractModel
                {
                public:
                    CloseClusterNatFwSwitchRequest();
                    ~CloseClusterNatFwSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>NAT防火墙实例ID</p>
                     * @return NatInsId <p>NAT防火墙实例ID</p>
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置<p>NAT防火墙实例ID</p>
                     * @param _natInsId <p>NAT防火墙实例ID</p>
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

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

                private:

                    /**
                     * <p>NAT防火墙实例ID</p>
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                    /**
                     * <p>云联网实例ID</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CLOSECLUSTERNATFWSWITCHREQUEST_H_
