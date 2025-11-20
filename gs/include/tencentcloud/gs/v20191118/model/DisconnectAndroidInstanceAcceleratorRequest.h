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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DISCONNECTANDROIDINSTANCEACCELERATORREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DISCONNECTANDROIDINSTANCEACCELERATORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DisconnectAndroidInstanceAccelerator请求参数结构体
                */
                class DisconnectAndroidInstanceAcceleratorRequest : public AbstractModel
                {
                public:
                    DisconnectAndroidInstanceAcceleratorRequest();
                    ~DisconnectAndroidInstanceAcceleratorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return AndroidInstanceId 实例ID
                     * 
                     */
                    std::string GetAndroidInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _androidInstanceId 实例ID
                     * 
                     */
                    void SetAndroidInstanceId(const std::string& _androidInstanceId);

                    /**
                     * 判断参数 AndroidInstanceId 是否已赋值
                     * @return AndroidInstanceId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdHasBeenSet() const;

                    /**
                     * 获取用户 ID。用户 ID 为空，将断开该实例的所有用户连接；用户 ID 不为空，只断开该用户的连接。
                     * @return UserId 用户 ID。用户 ID 为空，将断开该实例的所有用户连接；用户 ID 不为空，只断开该用户的连接。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 ID。用户 ID 为空，将断开该实例的所有用户连接；用户 ID 不为空，只断开该用户的连接。
                     * @param _userId 用户 ID。用户 ID 为空，将断开该实例的所有用户连接；用户 ID 不为空，只断开该用户的连接。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_androidInstanceId;
                    bool m_androidInstanceIdHasBeenSet;

                    /**
                     * 用户 ID。用户 ID 为空，将断开该实例的所有用户连接；用户 ID 不为空，只断开该用户的连接。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DISCONNECTANDROIDINSTANCEACCELERATORREQUEST_H_
