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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_ACTIONALTERCKUSERREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_ACTIONALTERCKUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/CkUserAlterInfo.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * ActionAlterCkUser请求参数结构体
                */
                class ActionAlterCkUserRequest : public AbstractModel
                {
                public:
                    ActionAlterCkUserRequest();
                    ~ActionAlterCkUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户信息
                     * @return UserInfo 用户信息
                     * 
                     */
                    CkUserAlterInfo GetUserInfo() const;

                    /**
                     * 设置用户信息
                     * @param _userInfo 用户信息
                     * 
                     */
                    void SetUserInfo(const CkUserAlterInfo& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取api接口类型，
AddSystemUser新增用户，UpdateSystemUser，修改用户
                     * @return ApiType api接口类型，
AddSystemUser新增用户，UpdateSystemUser，修改用户
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置api接口类型，
AddSystemUser新增用户，UpdateSystemUser，修改用户
                     * @param _apiType api接口类型，
AddSystemUser新增用户，UpdateSystemUser，修改用户
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                private:

                    /**
                     * 用户信息
                     */
                    CkUserAlterInfo m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * api接口类型，
AddSystemUser新增用户，UpdateSystemUser，修改用户
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_ACTIONALTERCKUSERREQUEST_H_
