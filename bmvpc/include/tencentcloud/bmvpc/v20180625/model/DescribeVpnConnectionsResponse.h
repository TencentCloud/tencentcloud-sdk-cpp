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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPNCONNECTIONSRESPONSE_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPNCONNECTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/VpnConnection.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeVpnConnections返回参数结构体
                */
                class DescribeVpnConnectionsResponse : public AbstractModel
                {
                public:
                    DescribeVpnConnectionsResponse();
                    ~DescribeVpnConnectionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的实例数量。
                     * @return TotalCount 符合条件的实例数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取VPN通道实例。
                     * @return VpnConnectionSet VPN通道实例。
                     * 
                     */
                    std::vector<VpnConnection> GetVpnConnectionSet() const;

                    /**
                     * 判断参数 VpnConnectionSet 是否已赋值
                     * @return VpnConnectionSet 是否已赋值
                     * 
                     */
                    bool VpnConnectionSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的实例数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * VPN通道实例。
                     */
                    std::vector<VpnConnection> m_vpnConnectionSet;
                    bool m_vpnConnectionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPNCONNECTIONSRESPONSE_H_
