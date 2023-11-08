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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_FORBIDSENDMSGREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_FORBIDSENDMSGREQUEST_H_

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
                * ForbidSendMsg请求参数结构体
                */
                class ForbidSendMsgRequest : public AbstractModel
                {
                public:
                    ForbidSendMsgRequest();
                    ~ForbidSendMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。
                     * @param _sdkAppId 低代码互动课堂的SdkAppId。
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
                     * 获取房间ID。
                     * @return RoomId 房间ID。
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置房间ID。
                     * @param _roomId 房间ID。
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取需要禁言的用户账号，最多支持500个账号
                     * @return MembersAccount 需要禁言的用户账号，最多支持500个账号
                     * 
                     */
                    std::vector<std::string> GetMembersAccount() const;

                    /**
                     * 设置需要禁言的用户账号，最多支持500个账号
                     * @param _membersAccount 需要禁言的用户账号，最多支持500个账号
                     * 
                     */
                    void SetMembersAccount(const std::vector<std::string>& _membersAccount);

                    /**
                     * 判断参数 MembersAccount 是否已赋值
                     * @return MembersAccount 是否已赋值
                     * 
                     */
                    bool MembersAccountHasBeenSet() const;

                    /**
                     * 获取需禁言时间，单位为秒，为0时表示取消禁言，4294967295为永久禁言。
                     * @return MuteTime 需禁言时间，单位为秒，为0时表示取消禁言，4294967295为永久禁言。
                     * 
                     */
                    uint64_t GetMuteTime() const;

                    /**
                     * 设置需禁言时间，单位为秒，为0时表示取消禁言，4294967295为永久禁言。
                     * @param _muteTime 需禁言时间，单位为秒，为0时表示取消禁言，4294967295为永久禁言。
                     * 
                     */
                    void SetMuteTime(const uint64_t& _muteTime);

                    /**
                     * 判断参数 MuteTime 是否已赋值
                     * @return MuteTime 是否已赋值
                     * 
                     */
                    bool MuteTimeHasBeenSet() const;

                private:

                    /**
                     * 低代码互动课堂的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 房间ID。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 需要禁言的用户账号，最多支持500个账号
                     */
                    std::vector<std::string> m_membersAccount;
                    bool m_membersAccountHasBeenSet;

                    /**
                     * 需禁言时间，单位为秒，为0时表示取消禁言，4294967295为永久禁言。
                     */
                    uint64_t m_muteTime;
                    bool m_muteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_FORBIDSENDMSGREQUEST_H_
