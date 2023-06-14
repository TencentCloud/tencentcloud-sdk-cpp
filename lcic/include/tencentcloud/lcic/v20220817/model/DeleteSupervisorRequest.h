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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DELETESUPERVISORREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DELETESUPERVISORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DeleteSupervisor请求参数结构体
                */
                class DeleteSupervisorRequest : public AbstractModel
                {
                public:
                    DeleteSupervisorRequest();
                    ~DeleteSupervisorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return SdkAppId 应用ID
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID
                     * @param _sdkAppId 应用ID
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取用户ID列表
                     * @return Users 用户ID列表
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置用户ID列表
                     * @param _users 用户ID列表
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 用户ID列表
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DELETESUPERVISORREQUEST_H_
