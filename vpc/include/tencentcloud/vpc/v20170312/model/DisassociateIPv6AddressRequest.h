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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEIPV6ADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEIPV6ADDRESSREQUEST_H_

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
                * DisassociateIPv6Address请求参数结构体
                */
                class DisassociateIPv6AddressRequest : public AbstractModel
                {
                public:
                    DisassociateIPv6AddressRequest();
                    ~DisassociateIPv6AddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。
                     * @return IPv6AddressId 弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。
                     * 
                     */
                    std::string GetIPv6AddressId() const;

                    /**
                     * 设置弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。
                     * @param _iPv6AddressId 弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。
                     * 
                     */
                    void SetIPv6AddressId(const std::string& _iPv6AddressId);

                    /**
                     * 判断参数 IPv6AddressId 是否已赋值
                     * @return IPv6AddressId 是否已赋值
                     * 
                     */
                    bool IPv6AddressIdHasBeenSet() const;

                    /**
                     * 获取解绑时是否保持绑定弹性网卡。
                     * @return KeepBindWithEni 解绑时是否保持绑定弹性网卡。
                     * 
                     */
                    bool GetKeepBindWithEni() const;

                    /**
                     * 设置解绑时是否保持绑定弹性网卡。
                     * @param _keepBindWithEni 解绑时是否保持绑定弹性网卡。
                     * 
                     */
                    void SetKeepBindWithEni(const bool& _keepBindWithEni);

                    /**
                     * 判断参数 KeepBindWithEni 是否已赋值
                     * @return KeepBindWithEni 是否已赋值
                     * 
                     */
                    bool KeepBindWithEniHasBeenSet() const;

                private:

                    /**
                     * 弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。
                     */
                    std::string m_iPv6AddressId;
                    bool m_iPv6AddressIdHasBeenSet;

                    /**
                     * 解绑时是否保持绑定弹性网卡。
                     */
                    bool m_keepBindWithEni;
                    bool m_keepBindWithEniHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISASSOCIATEIPV6ADDRESSREQUEST_H_
