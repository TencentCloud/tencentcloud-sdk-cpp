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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERVPCCONNECTIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERVPCCONNECTIONREQUEST_H_

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
                * CreateUserVpcConnection请求参数结构体
                */
                class CreateUserVpcConnectionRequest : public AbstractModel
                {
                public:
                    CreateUserVpcConnectionRequest();
                    ~CreateUserVpcConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户vpcid
                     * @return UserVpcId 用户vpcid
                     * 
                     */
                    std::string GetUserVpcId() const;

                    /**
                     * 设置用户vpcid
                     * @param _userVpcId 用户vpcid
                     * 
                     */
                    void SetUserVpcId(const std::string& _userVpcId);

                    /**
                     * 判断参数 UserVpcId 是否已赋值
                     * @return UserVpcId 是否已赋值
                     * 
                     */
                    bool UserVpcIdHasBeenSet() const;

                    /**
                     * 获取用户子网
                     * @return UserSubnetId 用户子网
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置用户子网
                     * @param _userSubnetId 用户子网
                     * 
                     */
                    void SetUserSubnetId(const std::string& _userSubnetId);

                    /**
                     * 判断参数 UserSubnetId 是否已赋值
                     * @return UserSubnetId 是否已赋值
                     * 
                     */
                    bool UserSubnetIdHasBeenSet() const;

                    /**
                     * 获取用户终端节点名称
                     * @return UserVpcEndpointName 用户终端节点名称
                     * 
                     */
                    std::string GetUserVpcEndpointName() const;

                    /**
                     * 设置用户终端节点名称
                     * @param _userVpcEndpointName 用户终端节点名称
                     * 
                     */
                    void SetUserVpcEndpointName(const std::string& _userVpcEndpointName);

                    /**
                     * 判断参数 UserVpcEndpointName 是否已赋值
                     * @return UserVpcEndpointName 是否已赋值
                     * 
                     */
                    bool UserVpcEndpointNameHasBeenSet() const;

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
                     * 获取手动指定vip，不填自动分配子网下的一个ip
                     * @return UserVpcEndpointVip 手动指定vip，不填自动分配子网下的一个ip
                     * 
                     */
                    std::string GetUserVpcEndpointVip() const;

                    /**
                     * 设置手动指定vip，不填自动分配子网下的一个ip
                     * @param _userVpcEndpointVip 手动指定vip，不填自动分配子网下的一个ip
                     * 
                     */
                    void SetUserVpcEndpointVip(const std::string& _userVpcEndpointVip);

                    /**
                     * 判断参数 UserVpcEndpointVip 是否已赋值
                     * @return UserVpcEndpointVip 是否已赋值
                     * 
                     */
                    bool UserVpcEndpointVipHasBeenSet() const;

                private:

                    /**
                     * 用户vpcid
                     */
                    std::string m_userVpcId;
                    bool m_userVpcIdHasBeenSet;

                    /**
                     * 用户子网
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * 用户终端节点名称
                     */
                    std::string m_userVpcEndpointName;
                    bool m_userVpcEndpointNameHasBeenSet;

                    /**
                     * 引擎网络ID
                     */
                    std::string m_engineNetworkId;
                    bool m_engineNetworkIdHasBeenSet;

                    /**
                     * 手动指定vip，不填自动分配子网下的一个ip
                     */
                    std::string m_userVpcEndpointVip;
                    bool m_userVpcEndpointVipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERVPCCONNECTIONREQUEST_H_
