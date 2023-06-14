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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_REJECTVPCPEERCONNECTIONREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_REJECTVPCPEERCONNECTIONREQUEST_H_

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
                * RejectVpcPeerConnection请求参数结构体
                */
                class RejectVpcPeerConnectionRequest : public AbstractModel
                {
                public:
                    RejectVpcPeerConnectionRequest();
                    ~RejectVpcPeerConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取黑石对等连接实例ID
                     * @return VpcPeerConnectionId 黑石对等连接实例ID
                     * 
                     */
                    std::string GetVpcPeerConnectionId() const;

                    /**
                     * 设置黑石对等连接实例ID
                     * @param _vpcPeerConnectionId 黑石对等连接实例ID
                     * 
                     */
                    void SetVpcPeerConnectionId(const std::string& _vpcPeerConnectionId);

                    /**
                     * 判断参数 VpcPeerConnectionId 是否已赋值
                     * @return VpcPeerConnectionId 是否已赋值
                     * 
                     */
                    bool VpcPeerConnectionIdHasBeenSet() const;

                private:

                    /**
                     * 黑石对等连接实例ID
                     */
                    std::string m_vpcPeerConnectionId;
                    bool m_vpcPeerConnectionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_REJECTVPCPEERCONNECTIONREQUEST_H_
