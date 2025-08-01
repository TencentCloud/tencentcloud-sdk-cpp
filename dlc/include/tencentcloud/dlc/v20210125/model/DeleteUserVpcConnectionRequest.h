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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETEUSERVPCCONNECTIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETEUSERVPCCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DeleteUserVpcConnection请求参数结构体
                */
                class DeleteUserVpcConnectionRequest : public AbstractModel
                {
                public:
                    DeleteUserVpcConnectionRequest();
                    ~DeleteUserVpcConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎网络ID
                     * @return EngineNetworkId 引擎网络ID
                     * 
                     */
                    std::string GetEngineNetworkId() const;

                    /**
                     * 设置引擎网络ID
                     * @param _engineNetworkId 引擎网络ID
                     * 
                     */
                    void SetEngineNetworkId(const std::string& _engineNetworkId);

                    /**
                     * 判断参数 EngineNetworkId 是否已赋值
                     * @return EngineNetworkId 是否已赋值
                     * 
                     */
                    bool EngineNetworkIdHasBeenSet() const;

                    /**
                     * 获取终端节点ID
                     * @return UserVpcEndpointId 终端节点ID
                     * 
                     */
                    std::string GetUserVpcEndpointId() const;

                    /**
                     * 设置终端节点ID
                     * @param _userVpcEndpointId 终端节点ID
                     * 
                     */
                    void SetUserVpcEndpointId(const std::string& _userVpcEndpointId);

                    /**
                     * 判断参数 UserVpcEndpointId 是否已赋值
                     * @return UserVpcEndpointId 是否已赋值
                     * 
                     */
                    bool UserVpcEndpointIdHasBeenSet() const;

                private:

                    /**
                     * 引擎网络ID
                     */
                    std::string m_engineNetworkId;
                    bool m_engineNetworkIdHasBeenSet;

                    /**
                     * 终端节点ID
                     */
                    std::string m_userVpcEndpointId;
                    bool m_userVpcEndpointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETEUSERVPCCONNECTIONREQUEST_H_
