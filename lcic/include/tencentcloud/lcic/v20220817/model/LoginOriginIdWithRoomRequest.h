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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_LOGINORIGINIDWITHROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_LOGINORIGINIDWITHROOMREQUEST_H_

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
                * LoginOriginIdWithRoom请求参数结构体
                */
                class LoginOriginIdWithRoomRequest : public AbstractModel
                {
                public:
                    LoginOriginIdWithRoomRequest();
                    ~LoginOriginIdWithRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>低代码互动课堂的SdkAppId。</p>
                     * @return SdkAppId <p>低代码互动课堂的SdkAppId。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>低代码互动课堂的SdkAppId。</p>
                     * @param _sdkAppId <p>低代码互动课堂的SdkAppId。</p>
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
                     * 获取<p>用户在客户系统的Id，需要在同一应用下唯一。</p>
                     * @return OriginId <p>用户在客户系统的Id，需要在同一应用下唯一。</p>
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置<p>用户在客户系统的Id，需要在同一应用下唯一。</p>
                     * @param _originId <p>用户在客户系统的Id，需要在同一应用下唯一。</p>
                     * 
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取<p>课堂 ID</p>
                     * @return RoomId <p>课堂 ID</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>课堂 ID</p>
                     * @param _roomId <p>课堂 ID</p>
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * <p>低代码互动课堂的SdkAppId。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>用户在客户系统的Id，需要在同一应用下唯一。</p>
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * <p>课堂 ID</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_LOGINORIGINIDWITHROOMREQUEST_H_
