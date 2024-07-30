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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERPRIVILEGESV3REQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERPRIVILEGESV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/UpdateUserPrivileges.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyUserPrivilegesV3请求参数结构体
                */
                class ModifyUserPrivilegesV3Request : public AbstractModel
                {
                public:
                    ModifyUserPrivilegesV3Request();
                    ~ModifyUserPrivilegesV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户权限
                     * @return UserPrivileges 用户权限
                     * 
                     */
                    UpdateUserPrivileges GetUserPrivileges() const;

                    /**
                     * 设置用户权限
                     * @param _userPrivileges 用户权限
                     * 
                     */
                    void SetUserPrivileges(const UpdateUserPrivileges& _userPrivileges);

                    /**
                     * 判断参数 UserPrivileges 是否已赋值
                     * @return UserPrivileges 是否已赋值
                     * 
                     */
                    bool UserPrivilegesHasBeenSet() const;

                    /**
                     * 获取用户链接来自的 IP	
                     * @return WhiteHost 用户链接来自的 IP	
                     * 
                     */
                    std::string GetWhiteHost() const;

                    /**
                     * 设置用户链接来自的 IP	
                     * @param _whiteHost 用户链接来自的 IP	
                     * 
                     */
                    void SetWhiteHost(const std::string& _whiteHost);

                    /**
                     * 判断参数 WhiteHost 是否已赋值
                     * @return WhiteHost 是否已赋值
                     * 
                     */
                    bool WhiteHostHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户权限
                     */
                    UpdateUserPrivileges m_userPrivileges;
                    bool m_userPrivilegesHasBeenSet;

                    /**
                     * 用户链接来自的 IP	
                     */
                    std::string m_whiteHost;
                    bool m_whiteHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERPRIVILEGESV3REQUEST_H_
