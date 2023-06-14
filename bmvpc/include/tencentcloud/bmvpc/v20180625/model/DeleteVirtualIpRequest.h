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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETEVIRTUALIPREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETEVIRTUALIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DeleteVirtualIp请求参数结构体
                */
                class DeleteVirtualIpRequest : public AbstractModel
                {
                public:
                    DeleteVirtualIpRequest();
                    ~DeleteVirtualIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络唯一ID。
                     * @return VpcId 私有网络唯一ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络唯一ID。
                     * @param _vpcId 私有网络唯一ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取退还的IP列表。
                     * @return Ips 退还的IP列表。
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置退还的IP列表。
                     * @param _ips 退还的IP列表。
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                private:

                    /**
                     * 私有网络唯一ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 退还的IP列表。
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETEVIRTUALIPREQUEST_H_
