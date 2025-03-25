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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ACTIONALTERUSERREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ACTIONALTERUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/UserInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ActionAlterUser请求参数结构体
                */
                class ActionAlterUserRequest : public AbstractModel
                {
                public:
                    ActionAlterUserRequest();
                    ~ActionAlterUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户信息
                     * @return UserInfo 用户信息
                     * 
                     */
                    UserInfo GetUserInfo() const;

                    /**
                     * 设置用户信息
                     * @param _userInfo 用户信息
                     * 
                     */
                    void SetUserInfo(const UserInfo& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取api接口类型
                     * @return ApiType api接口类型
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置api接口类型
                     * @param _apiType api接口类型
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取用户权限类型 0:普通用户 1:管理员
                     * @return UserPrivilege 用户权限类型 0:普通用户 1:管理员
                     * 
                     */
                    int64_t GetUserPrivilege() const;

                    /**
                     * 设置用户权限类型 0:普通用户 1:管理员
                     * @param _userPrivilege 用户权限类型 0:普通用户 1:管理员
                     * 
                     */
                    void SetUserPrivilege(const int64_t& _userPrivilege);

                    /**
                     * 判断参数 UserPrivilege 是否已赋值
                     * @return UserPrivilege 是否已赋值
                     * 
                     */
                    bool UserPrivilegeHasBeenSet() const;

                    /**
                     * 获取计算组列表
                     * @return ComputeGroups 计算组列表
                     * 
                     */
                    std::vector<std::string> GetComputeGroups() const;

                    /**
                     * 设置计算组列表
                     * @param _computeGroups 计算组列表
                     * 
                     */
                    void SetComputeGroups(const std::vector<std::string>& _computeGroups);

                    /**
                     * 判断参数 ComputeGroups 是否已赋值
                     * @return ComputeGroups 是否已赋值
                     * 
                     */
                    bool ComputeGroupsHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 用户信息
                     */
                    UserInfo m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * api接口类型
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * 用户权限类型 0:普通用户 1:管理员
                     */
                    int64_t m_userPrivilege;
                    bool m_userPrivilegeHasBeenSet;

                    /**
                     * 计算组列表
                     */
                    std::vector<std::string> m_computeGroups;
                    bool m_computeGroupsHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ACTIONALTERUSERREQUEST_H_
