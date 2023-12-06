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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTTUNNELRESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTTUNNELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * CreateDirectConnectTunnel返回参数结构体
                */
                class CreateDirectConnectTunnelResponse : public AbstractModel
                {
                public:
                    CreateDirectConnectTunnelResponse();
                    ~CreateDirectConnectTunnelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取专用通道ID。
                     * @return DirectConnectTunnelIdSet 专用通道ID。
                     * 
                     */
                    std::vector<std::string> GetDirectConnectTunnelIdSet() const;

                    /**
                     * 判断参数 DirectConnectTunnelIdSet 是否已赋值
                     * @return DirectConnectTunnelIdSet 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelIdSetHasBeenSet() const;

                private:

                    /**
                     * 专用通道ID。
                     */
                    std::vector<std::string> m_directConnectTunnelIdSet;
                    bool m_directConnectTunnelIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTTUNNELRESPONSE_H_
