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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ACCEPTVPCPEERINGCONNECTIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ACCEPTVPCPEERINGCONNECTIONREQUEST_H_

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
                * AcceptVpcPeeringConnection请求参数结构体
                */
                class AcceptVpcPeeringConnectionRequest : public AbstractModel
                {
                public:
                    AcceptVpcPeeringConnectionRequest();
                    ~AcceptVpcPeeringConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对等连接唯一ID。
                     * @return PeeringConnectionId 对等连接唯一ID。
                     * 
                     */
                    std::string GetPeeringConnectionId() const;

                    /**
                     * 设置对等连接唯一ID。
                     * @param _peeringConnectionId 对等连接唯一ID。
                     * 
                     */
                    void SetPeeringConnectionId(const std::string& _peeringConnectionId);

                    /**
                     * 判断参数 PeeringConnectionId 是否已赋值
                     * @return PeeringConnectionId 是否已赋值
                     * 
                     */
                    bool PeeringConnectionIdHasBeenSet() const;

                private:

                    /**
                     * 对等连接唯一ID。
                     */
                    std::string m_peeringConnectionId;
                    bool m_peeringConnectionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ACCEPTVPCPEERINGCONNECTIONREQUEST_H_
