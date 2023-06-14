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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_CREATEKTVROBOTREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_CREATEKTVROBOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/JoinRoomInput.h>
#include <tencentcloud/yinsuda/v20220527/model/SyncRobotCommand.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * CreateKTVRobot请求参数结构体
                */
                class CreateKTVRobotRequest : public AbstractModel
                {
                public:
                    CreateKTVRobotRequest();
                    ~CreateKTVRobotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param _userId 用户标识。
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
                     * 获取RTC厂商类型，取值有：
<li>TRTC</li>
                     * @return RTCSystem RTC厂商类型，取值有：
<li>TRTC</li>
                     * 
                     */
                    std::string GetRTCSystem() const;

                    /**
                     * 设置RTC厂商类型，取值有：
<li>TRTC</li>
                     * @param _rTCSystem RTC厂商类型，取值有：
<li>TRTC</li>
                     * 
                     */
                    void SetRTCSystem(const std::string& _rTCSystem);

                    /**
                     * 判断参数 RTCSystem 是否已赋值
                     * @return RTCSystem 是否已赋值
                     * 
                     */
                    bool RTCSystemHasBeenSet() const;

                    /**
                     * 获取进房参数。
                     * @return JoinRoomInput 进房参数。
                     * 
                     */
                    JoinRoomInput GetJoinRoomInput() const;

                    /**
                     * 设置进房参数。
                     * @param _joinRoomInput 进房参数。
                     * 
                     */
                    void SetJoinRoomInput(const JoinRoomInput& _joinRoomInput);

                    /**
                     * 判断参数 JoinRoomInput 是否已赋值
                     * @return JoinRoomInput 是否已赋值
                     * 
                     */
                    bool JoinRoomInputHasBeenSet() const;

                    /**
                     * 获取创建机器人时初始化参数。
                     * @return SyncRobotCommands 创建机器人时初始化参数。
                     * 
                     */
                    std::vector<SyncRobotCommand> GetSyncRobotCommands() const;

                    /**
                     * 设置创建机器人时初始化参数。
                     * @param _syncRobotCommands 创建机器人时初始化参数。
                     * 
                     */
                    void SetSyncRobotCommands(const std::vector<SyncRobotCommand>& _syncRobotCommands);

                    /**
                     * 判断参数 SyncRobotCommands 是否已赋值
                     * @return SyncRobotCommands 是否已赋值
                     * 
                     */
                    bool SyncRobotCommandsHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * RTC厂商类型，取值有：
<li>TRTC</li>
                     */
                    std::string m_rTCSystem;
                    bool m_rTCSystemHasBeenSet;

                    /**
                     * 进房参数。
                     */
                    JoinRoomInput m_joinRoomInput;
                    bool m_joinRoomInputHasBeenSet;

                    /**
                     * 创建机器人时初始化参数。
                     */
                    std::vector<SyncRobotCommand> m_syncRobotCommands;
                    bool m_syncRobotCommandsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_CREATEKTVROBOTREQUEST_H_
