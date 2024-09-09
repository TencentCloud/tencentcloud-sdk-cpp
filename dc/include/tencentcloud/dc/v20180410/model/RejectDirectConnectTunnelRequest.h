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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_REJECTDIRECTCONNECTTUNNELREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_REJECTDIRECTCONNECTTUNNELREQUEST_H_

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
                * RejectDirectConnectTunnel请求参数结构体
                */
                class RejectDirectConnectTunnelRequest : public AbstractModel
                {
                public:
                    RejectDirectConnectTunnelRequest();
                    ~RejectDirectConnectTunnelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专用通道ID。
                     * @return DirectConnectTunnelId 专用通道ID。
                     * 
                     */
                    std::string GetDirectConnectTunnelId() const;

                    /**
                     * 设置专用通道ID。
                     * @param _directConnectTunnelId 专用通道ID。
                     * 
                     */
                    void SetDirectConnectTunnelId(const std::string& _directConnectTunnelId);

                    /**
                     * 判断参数 DirectConnectTunnelId 是否已赋值
                     * @return DirectConnectTunnelId 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelIdHasBeenSet() const;

                private:

                    /**
                     * 专用通道ID。
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_REJECTDIRECTCONNECTTUNNELREQUEST_H_
