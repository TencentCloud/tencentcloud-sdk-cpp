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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_HAVIPASSOCIATEADDRESSIPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_HAVIPASSOCIATEADDRESSIPREQUEST_H_

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
                * HaVipAssociateAddressIp请求参数结构体
                */
                class HaVipAssociateAddressIpRequest : public AbstractModel
                {
                public:
                    HaVipAssociateAddressIpRequest();
                    ~HaVipAssociateAddressIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`HAVIP`唯一`ID`，形如：`havip-9o233uri`。必须是没有绑定`EIP`的`HAVIP`。
                     * @return HaVipId `HAVIP`唯一`ID`，形如：`havip-9o233uri`。必须是没有绑定`EIP`的`HAVIP`。
                     * 
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置`HAVIP`唯一`ID`，形如：`havip-9o233uri`。必须是没有绑定`EIP`的`HAVIP`。
                     * @param _haVipId `HAVIP`唯一`ID`，形如：`havip-9o233uri`。必须是没有绑定`EIP`的`HAVIP`。
                     * 
                     */
                    void SetHaVipId(const std::string& _haVipId);

                    /**
                     * 判断参数 HaVipId 是否已赋值
                     * @return HaVipId 是否已赋值
                     * 
                     */
                    bool HaVipIdHasBeenSet() const;

                    /**
                     * 获取弹性公网`IP`。必须是没有绑定`HAVIP`的`EIP`。
                     * @return AddressIp 弹性公网`IP`。必须是没有绑定`HAVIP`的`EIP`。
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置弹性公网`IP`。必须是没有绑定`HAVIP`的`EIP`。
                     * @param _addressIp 弹性公网`IP`。必须是没有绑定`HAVIP`的`EIP`。
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                private:

                    /**
                     * `HAVIP`唯一`ID`，形如：`havip-9o233uri`。必须是没有绑定`EIP`的`HAVIP`。
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * 弹性公网`IP`。必须是没有绑定`HAVIP`的`EIP`。
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HAVIPASSOCIATEADDRESSIPREQUEST_H_
