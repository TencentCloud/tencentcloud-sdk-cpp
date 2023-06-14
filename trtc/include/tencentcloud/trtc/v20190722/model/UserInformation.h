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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_USERINFORMATION_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_USERINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 用户信息，包括用户进房时间，退房时间等
                */
                class UserInformation : public AbstractModel
                {
                public:
                    UserInformation();
                    ~UserInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取房间号
                     * @return RoomStr 房间号
                     * 
                     */
                    std::string GetRoomStr() const;

                    /**
                     * 设置房间号
                     * @param _roomStr 房间号
                     * 
                     */
                    void SetRoomStr(const std::string& _roomStr);

                    /**
                     * 判断参数 RoomStr 是否已赋值
                     * @return RoomStr 是否已赋值
                     * 
                     */
                    bool RoomStrHasBeenSet() const;

                    /**
                     * 获取用户Id
                     * @return UserId 用户Id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id
                     * @param _userId 用户Id
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户进房时间
                     * @return JoinTs 用户进房时间
                     * 
                     */
                    uint64_t GetJoinTs() const;

                    /**
                     * 设置用户进房时间
                     * @param _joinTs 用户进房时间
                     * 
                     */
                    void SetJoinTs(const uint64_t& _joinTs);

                    /**
                     * 判断参数 JoinTs 是否已赋值
                     * @return JoinTs 是否已赋值
                     * 
                     */
                    bool JoinTsHasBeenSet() const;

                    /**
                     * 获取用户退房时间，用户没有退房则返回当前时间
                     * @return LeaveTs 用户退房时间，用户没有退房则返回当前时间
                     * 
                     */
                    uint64_t GetLeaveTs() const;

                    /**
                     * 设置用户退房时间，用户没有退房则返回当前时间
                     * @param _leaveTs 用户退房时间，用户没有退房则返回当前时间
                     * 
                     */
                    void SetLeaveTs(const uint64_t& _leaveTs);

                    /**
                     * 判断参数 LeaveTs 是否已赋值
                     * @return LeaveTs 是否已赋值
                     * 
                     */
                    bool LeaveTsHasBeenSet() const;

                    /**
                     * 获取终端类型
                     * @return DeviceType 终端类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置终端类型
                     * @param _deviceType 终端类型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取Sdk版本号
                     * @return SdkVersion Sdk版本号
                     * 
                     */
                    std::string GetSdkVersion() const;

                    /**
                     * 设置Sdk版本号
                     * @param _sdkVersion Sdk版本号
                     * 
                     */
                    void SetSdkVersion(const std::string& _sdkVersion);

                    /**
                     * 判断参数 SdkVersion 是否已赋值
                     * @return SdkVersion 是否已赋值
                     * 
                     */
                    bool SdkVersionHasBeenSet() const;

                    /**
                     * 获取客户端IP地址
                     * @return ClientIp 客户端IP地址
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端IP地址
                     * @param _clientIp 客户端IP地址
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取判断用户是否已经离开房间
                     * @return Finished 判断用户是否已经离开房间
                     * 
                     */
                    bool GetFinished() const;

                    /**
                     * 设置判断用户是否已经离开房间
                     * @param _finished 判断用户是否已经离开房间
                     * 
                     */
                    void SetFinished(const bool& _finished);

                    /**
                     * 判断参数 Finished 是否已赋值
                     * @return Finished 是否已赋值
                     * 
                     */
                    bool FinishedHasBeenSet() const;

                private:

                    /**
                     * 房间号
                     */
                    std::string m_roomStr;
                    bool m_roomStrHasBeenSet;

                    /**
                     * 用户Id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户进房时间
                     */
                    uint64_t m_joinTs;
                    bool m_joinTsHasBeenSet;

                    /**
                     * 用户退房时间，用户没有退房则返回当前时间
                     */
                    uint64_t m_leaveTs;
                    bool m_leaveTsHasBeenSet;

                    /**
                     * 终端类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Sdk版本号
                     */
                    std::string m_sdkVersion;
                    bool m_sdkVersionHasBeenSet;

                    /**
                     * 客户端IP地址
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 判断用户是否已经离开房间
                     */
                    bool m_finished;
                    bool m_finishedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_USERINFORMATION_H_
