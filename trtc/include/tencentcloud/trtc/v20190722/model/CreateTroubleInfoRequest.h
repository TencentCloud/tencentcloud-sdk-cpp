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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATETROUBLEINFOREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATETROUBLEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateTroubleInfo请求参数结构体
                */
                class CreateTroubleInfoRequest : public AbstractModel
                {
                public:
                    CreateTroubleInfoRequest();
                    ~CreateTroubleInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用的ID
                     * @return SdkAppId 应用的ID
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置应用的ID
                     * @param SdkAppId 应用的ID
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取房间ID
                     * @return RoomId 房间ID
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间ID
                     * @param RoomId 房间ID
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取老师用户ID
                     * @return TeacherUserId 老师用户ID
                     */
                    std::string GetTeacherUserId() const;

                    /**
                     * 设置老师用户ID
                     * @param TeacherUserId 老师用户ID
                     */
                    void SetTeacherUserId(const std::string& _teacherUserId);

                    /**
                     * 判断参数 TeacherUserId 是否已赋值
                     * @return TeacherUserId 是否已赋值
                     */
                    bool TeacherUserIdHasBeenSet() const;

                    /**
                     * 获取学生用户ID
                     * @return StudentUserId 学生用户ID
                     */
                    std::string GetStudentUserId() const;

                    /**
                     * 设置学生用户ID
                     * @param StudentUserId 学生用户ID
                     */
                    void SetStudentUserId(const std::string& _studentUserId);

                    /**
                     * 判断参数 StudentUserId 是否已赋值
                     * @return StudentUserId 是否已赋值
                     */
                    bool StudentUserIdHasBeenSet() const;

                    /**
                     * 获取体验异常端（老师或学生）的用户 ID。
                     * @return TroubleUserId 体验异常端（老师或学生）的用户 ID。
                     */
                    std::string GetTroubleUserId() const;

                    /**
                     * 设置体验异常端（老师或学生）的用户 ID。
                     * @param TroubleUserId 体验异常端（老师或学生）的用户 ID。
                     */
                    void SetTroubleUserId(const std::string& _troubleUserId);

                    /**
                     * 判断参数 TroubleUserId 是否已赋值
                     * @return TroubleUserId 是否已赋值
                     */
                    bool TroubleUserIdHasBeenSet() const;

                    /**
                     * 获取异常类型。
1. 仅视频异常
2. 仅声音异常
3. 音视频都异常
5. 进房异常
4. 切课
6. 求助
7. 问题反馈
8. 投诉
                     * @return TroubleType 异常类型。
1. 仅视频异常
2. 仅声音异常
3. 音视频都异常
5. 进房异常
4. 切课
6. 求助
7. 问题反馈
8. 投诉
                     */
                    uint64_t GetTroubleType() const;

                    /**
                     * 设置异常类型。
1. 仅视频异常
2. 仅声音异常
3. 音视频都异常
5. 进房异常
4. 切课
6. 求助
7. 问题反馈
8. 投诉
                     * @param TroubleType 异常类型。
1. 仅视频异常
2. 仅声音异常
3. 音视频都异常
5. 进房异常
4. 切课
6. 求助
7. 问题反馈
8. 投诉
                     */
                    void SetTroubleType(const uint64_t& _troubleType);

                    /**
                     * 判断参数 TroubleType 是否已赋值
                     * @return TroubleType 是否已赋值
                     */
                    bool TroubleTypeHasBeenSet() const;

                    /**
                     * 获取异常发生的UNIX 时间戳，单位为秒。
                     * @return TroubleTime 异常发生的UNIX 时间戳，单位为秒。
                     */
                    uint64_t GetTroubleTime() const;

                    /**
                     * 设置异常发生的UNIX 时间戳，单位为秒。
                     * @param TroubleTime 异常发生的UNIX 时间戳，单位为秒。
                     */
                    void SetTroubleTime(const uint64_t& _troubleTime);

                    /**
                     * 判断参数 TroubleTime 是否已赋值
                     * @return TroubleTime 是否已赋值
                     */
                    bool TroubleTimeHasBeenSet() const;

                    /**
                     * 获取异常详情
                     * @return TroubleMsg 异常详情
                     */
                    std::string GetTroubleMsg() const;

                    /**
                     * 设置异常详情
                     * @param TroubleMsg 异常详情
                     */
                    void SetTroubleMsg(const std::string& _troubleMsg);

                    /**
                     * 判断参数 TroubleMsg 是否已赋值
                     * @return TroubleMsg 是否已赋值
                     */
                    bool TroubleMsgHasBeenSet() const;

                private:

                    /**
                     * 应用的ID
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 房间ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 老师用户ID
                     */
                    std::string m_teacherUserId;
                    bool m_teacherUserIdHasBeenSet;

                    /**
                     * 学生用户ID
                     */
                    std::string m_studentUserId;
                    bool m_studentUserIdHasBeenSet;

                    /**
                     * 体验异常端（老师或学生）的用户 ID。
                     */
                    std::string m_troubleUserId;
                    bool m_troubleUserIdHasBeenSet;

                    /**
                     * 异常类型。
1. 仅视频异常
2. 仅声音异常
3. 音视频都异常
5. 进房异常
4. 切课
6. 求助
7. 问题反馈
8. 投诉
                     */
                    uint64_t m_troubleType;
                    bool m_troubleTypeHasBeenSet;

                    /**
                     * 异常发生的UNIX 时间戳，单位为秒。
                     */
                    uint64_t m_troubleTime;
                    bool m_troubleTimeHasBeenSet;

                    /**
                     * 异常详情
                     */
                    std::string m_troubleMsg;
                    bool m_troubleMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATETROUBLEINFOREQUEST_H_
