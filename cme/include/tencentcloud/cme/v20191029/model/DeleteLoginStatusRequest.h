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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DELETELOGINSTATUSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DELETELOGINSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DeleteLoginStatus请求参数结构体
                */
                class DeleteLoginStatusRequest : public AbstractModel
                {
                public:
                    DeleteLoginStatusRequest();
                    ~DeleteLoginStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param _platform 平台名称，指定访问的平台。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取用户 Id 列表，N 从 0 开始取值，最大 19。
                     * @return UserIds 用户 Id 列表，N 从 0 开始取值，最大 19。
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置用户 Id 列表，N 从 0 开始取值，最大 19。
                     * @param _userIds 用户 Id 列表，N 从 0 开始取值，最大 19。
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 用户 Id 列表，N 从 0 开始取值，最大 19。
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DELETELOGINSTATUSREQUEST_H_
