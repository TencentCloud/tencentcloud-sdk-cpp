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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLSERVERRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLSERVERRESPONSE_H_

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
                * CreateVpnGatewaySslServer返回参数结构体
                */
                class CreateVpnGatewaySslServerResponse : public AbstractModel
                {
                public:
                    CreateVpnGatewaySslServerResponse();
                    ~CreateVpnGatewaySslServerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建SSL-VPN server 异步任务ID
                     * @return TaskId 创建SSL-VPN server 异步任务ID
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取SSL-VPN server 唯一ID
                     * @return SslVpnServerId SSL-VPN server 唯一ID
                     */
                    std::string GetSslVpnServerId() const;

                    /**
                     * 判断参数 SslVpnServerId 是否已赋值
                     * @return SslVpnServerId 是否已赋值
                     */
                    bool SslVpnServerIdHasBeenSet() const;

                private:

                    /**
                     * 创建SSL-VPN server 异步任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * SSL-VPN server 唯一ID
                     */
                    std::string m_sslVpnServerId;
                    bool m_sslVpnServerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLSERVERRESPONSE_H_
