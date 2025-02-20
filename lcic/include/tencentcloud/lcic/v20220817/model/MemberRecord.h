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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MEMBERRECORD_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MEMBERRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 成员记录信息。
                */
                class MemberRecord : public AbstractModel
                {
                public:
                    MemberRecord();
                    ~MemberRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID。
                     * @return UserId 用户ID。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID。
                     * @param _userId 用户ID。
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
                     * 获取用户名称。
                     * @return UserName 用户名称。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称。
                     * @param _userName 用户名称。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取在线时长，单位秒。
                     * @return PresentTime 在线时长，单位秒。
                     * 
                     */
                    uint64_t GetPresentTime() const;

                    /**
                     * 设置在线时长，单位秒。
                     * @param _presentTime 在线时长，单位秒。
                     * 
                     */
                    void SetPresentTime(const uint64_t& _presentTime);

                    /**
                     * 判断参数 PresentTime 是否已赋值
                     * @return PresentTime 是否已赋值
                     * 
                     */
                    bool PresentTimeHasBeenSet() const;

                    /**
                     * 获取是否开启摄像头。
                     * @return Camera 是否开启摄像头。
                     * 
                     */
                    uint64_t GetCamera() const;

                    /**
                     * 设置是否开启摄像头。
                     * @param _camera 是否开启摄像头。
                     * 
                     */
                    void SetCamera(const uint64_t& _camera);

                    /**
                     * 判断参数 Camera 是否已赋值
                     * @return Camera 是否已赋值
                     * 
                     */
                    bool CameraHasBeenSet() const;

                    /**
                     * 获取是否开启麦克风。
                     * @return Mic 是否开启麦克风。
                     * 
                     */
                    uint64_t GetMic() const;

                    /**
                     * 设置是否开启麦克风。
                     * @param _mic 是否开启麦克风。
                     * 
                     */
                    void SetMic(const uint64_t& _mic);

                    /**
                     * 判断参数 Mic 是否已赋值
                     * @return Mic 是否已赋值
                     * 
                     */
                    bool MicHasBeenSet() const;

                    /**
                     * 获取是否禁言。
                     * @return Silence 是否禁言。
                     * 
                     */
                    uint64_t GetSilence() const;

                    /**
                     * 设置是否禁言。
                     * @param _silence 是否禁言。
                     * 
                     */
                    void SetSilence(const uint64_t& _silence);

                    /**
                     * 判断参数 Silence 是否已赋值
                     * @return Silence 是否已赋值
                     * 
                     */
                    bool SilenceHasBeenSet() const;

                    /**
                     * 获取回答问题数量。
                     * @return AnswerQuestions 回答问题数量。
                     * 
                     */
                    uint64_t GetAnswerQuestions() const;

                    /**
                     * 设置回答问题数量。
                     * @param _answerQuestions 回答问题数量。
                     * 
                     */
                    void SetAnswerQuestions(const uint64_t& _answerQuestions);

                    /**
                     * 判断参数 AnswerQuestions 是否已赋值
                     * @return AnswerQuestions 是否已赋值
                     * 
                     */
                    bool AnswerQuestionsHasBeenSet() const;

                    /**
                     * 获取举手数量。
                     * @return HandUps 举手数量。
                     * 
                     */
                    uint64_t GetHandUps() const;

                    /**
                     * 设置举手数量。
                     * @param _handUps 举手数量。
                     * 
                     */
                    void SetHandUps(const uint64_t& _handUps);

                    /**
                     * 判断参数 HandUps 是否已赋值
                     * @return HandUps 是否已赋值
                     * 
                     */
                    bool HandUpsHasBeenSet() const;

                    /**
                     * 获取首次进入房间的unix时间戳。
                     * @return FirstJoinTimestamp 首次进入房间的unix时间戳。
                     * 
                     */
                    uint64_t GetFirstJoinTimestamp() const;

                    /**
                     * 设置首次进入房间的unix时间戳。
                     * @param _firstJoinTimestamp 首次进入房间的unix时间戳。
                     * 
                     */
                    void SetFirstJoinTimestamp(const uint64_t& _firstJoinTimestamp);

                    /**
                     * 判断参数 FirstJoinTimestamp 是否已赋值
                     * @return FirstJoinTimestamp 是否已赋值
                     * 
                     */
                    bool FirstJoinTimestampHasBeenSet() const;

                    /**
                     * 获取最后一次退出房间的unix时间戳。
                     * @return LastQuitTimestamp 最后一次退出房间的unix时间戳。
                     * 
                     */
                    uint64_t GetLastQuitTimestamp() const;

                    /**
                     * 设置最后一次退出房间的unix时间戳。
                     * @param _lastQuitTimestamp 最后一次退出房间的unix时间戳。
                     * 
                     */
                    void SetLastQuitTimestamp(const uint64_t& _lastQuitTimestamp);

                    /**
                     * 判断参数 LastQuitTimestamp 是否已赋值
                     * @return LastQuitTimestamp 是否已赋值
                     * 
                     */
                    bool LastQuitTimestampHasBeenSet() const;

                    /**
                     * 获取奖励次数。
                     * @return Rewords 奖励次数。
                     * 
                     */
                    uint64_t GetRewords() const;

                    /**
                     * 设置奖励次数。
                     * @param _rewords 奖励次数。
                     * 
                     */
                    void SetRewords(const uint64_t& _rewords);

                    /**
                     * 判断参数 Rewords 是否已赋值
                     * @return Rewords 是否已赋值
                     * 
                     */
                    bool RewordsHasBeenSet() const;

                    /**
                     * 获取用户IP。
                     * @return IPAddress 用户IP。
                     * 
                     */
                    std::string GetIPAddress() const;

                    /**
                     * 设置用户IP。
                     * @param _iPAddress 用户IP。
                     * 
                     */
                    void SetIPAddress(const std::string& _iPAddress);

                    /**
                     * 判断参数 IPAddress 是否已赋值
                     * @return IPAddress 是否已赋值
                     * 
                     */
                    bool IPAddressHasBeenSet() const;

                    /**
                     * 获取用户位置信息。
                     * @return Location 用户位置信息。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置用户位置信息。
                     * @param _location 用户位置信息。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取用户设备平台信息。0:unknown  1:windows  2:mac  3:android  4:ios  5:web   6:h5   7:miniprogram （小程序）
                     * @return Device 用户设备平台信息。0:unknown  1:windows  2:mac  3:android  4:ios  5:web   6:h5   7:miniprogram （小程序）
                     * 
                     */
                    int64_t GetDevice() const;

                    /**
                     * 设置用户设备平台信息。0:unknown  1:windows  2:mac  3:android  4:ios  5:web   6:h5   7:miniprogram （小程序）
                     * @param _device 用户设备平台信息。0:unknown  1:windows  2:mac  3:android  4:ios  5:web   6:h5   7:miniprogram （小程序）
                     * 
                     */
                    void SetDevice(const int64_t& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取每个成员上麦次数。
                     * @return PerMemberMicCount 每个成员上麦次数。
                     * 
                     */
                    int64_t GetPerMemberMicCount() const;

                    /**
                     * 设置每个成员上麦次数。
                     * @param _perMemberMicCount 每个成员上麦次数。
                     * 
                     */
                    void SetPerMemberMicCount(const int64_t& _perMemberMicCount);

                    /**
                     * 判断参数 PerMemberMicCount 是否已赋值
                     * @return PerMemberMicCount 是否已赋值
                     * 
                     */
                    bool PerMemberMicCountHasBeenSet() const;

                    /**
                     * 获取每个成员发送消息数量。

                     * @return PerMemberMessageCount 每个成员发送消息数量。

                     * 
                     */
                    int64_t GetPerMemberMessageCount() const;

                    /**
                     * 设置每个成员发送消息数量。

                     * @param _perMemberMessageCount 每个成员发送消息数量。

                     * 
                     */
                    void SetPerMemberMessageCount(const int64_t& _perMemberMessageCount);

                    /**
                     * 判断参数 PerMemberMessageCount 是否已赋值
                     * @return PerMemberMessageCount 是否已赋值
                     * 
                     */
                    bool PerMemberMessageCountHasBeenSet() const;

                    /**
                     * 获取用户角色。0代表学生；1代表老师； 2助教；3巡课。
                     * @return Role 用户角色。0代表学生；1代表老师； 2助教；3巡课。
                     * 
                     */
                    uint64_t GetRole() const;

                    /**
                     * 设置用户角色。0代表学生；1代表老师； 2助教；3巡课。
                     * @param _role 用户角色。0代表学生；1代表老师； 2助教；3巡课。
                     * 
                     */
                    void SetRole(const uint64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取上课班号
                     * @return GroupId 上课班号
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置上课班号
                     * @param _groupId 上课班号
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取子上课班号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubGroupId 子上课班号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubGroupId() const;

                    /**
                     * 设置子上课班号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subGroupId 子上课班号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubGroupId(const std::vector<std::string>& _subGroupId);

                    /**
                     * 判断参数 SubGroupId 是否已赋值
                     * @return SubGroupId 是否已赋值
                     * 
                     */
                    bool SubGroupIdHasBeenSet() const;

                    /**
                     * 获取用户的上台状态
                     * @return Stage 用户的上台状态
                     * 
                     */
                    int64_t GetStage() const;

                    /**
                     * 设置用户的上台状态
                     * @param _stage 用户的上台状态
                     * 
                     */
                    void SetStage(const int64_t& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取用户状态。0为未到，1为在线，2为离线，3为被踢，4为永久被踢，5为暂时掉线
                     * @return CurrentState 用户状态。0为未到，1为在线，2为离线，3为被踢，4为永久被踢，5为暂时掉线
                     * 
                     */
                    uint64_t GetCurrentState() const;

                    /**
                     * 设置用户状态。0为未到，1为在线，2为离线，3为被踢，4为永久被踢，5为暂时掉线
                     * @param _currentState 用户状态。0为未到，1为在线，2为离线，3为被踢，4为永久被踢，5为暂时掉线
                     * 
                     */
                    void SetCurrentState(const uint64_t& _currentState);

                    /**
                     * 判断参数 CurrentState 是否已赋值
                     * @return CurrentState 是否已赋值
                     * 
                     */
                    bool CurrentStateHasBeenSet() const;

                private:

                    /**
                     * 用户ID。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户名称。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 在线时长，单位秒。
                     */
                    uint64_t m_presentTime;
                    bool m_presentTimeHasBeenSet;

                    /**
                     * 是否开启摄像头。
                     */
                    uint64_t m_camera;
                    bool m_cameraHasBeenSet;

                    /**
                     * 是否开启麦克风。
                     */
                    uint64_t m_mic;
                    bool m_micHasBeenSet;

                    /**
                     * 是否禁言。
                     */
                    uint64_t m_silence;
                    bool m_silenceHasBeenSet;

                    /**
                     * 回答问题数量。
                     */
                    uint64_t m_answerQuestions;
                    bool m_answerQuestionsHasBeenSet;

                    /**
                     * 举手数量。
                     */
                    uint64_t m_handUps;
                    bool m_handUpsHasBeenSet;

                    /**
                     * 首次进入房间的unix时间戳。
                     */
                    uint64_t m_firstJoinTimestamp;
                    bool m_firstJoinTimestampHasBeenSet;

                    /**
                     * 最后一次退出房间的unix时间戳。
                     */
                    uint64_t m_lastQuitTimestamp;
                    bool m_lastQuitTimestampHasBeenSet;

                    /**
                     * 奖励次数。
                     */
                    uint64_t m_rewords;
                    bool m_rewordsHasBeenSet;

                    /**
                     * 用户IP。
                     */
                    std::string m_iPAddress;
                    bool m_iPAddressHasBeenSet;

                    /**
                     * 用户位置信息。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 用户设备平台信息。0:unknown  1:windows  2:mac  3:android  4:ios  5:web   6:h5   7:miniprogram （小程序）
                     */
                    int64_t m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * 每个成员上麦次数。
                     */
                    int64_t m_perMemberMicCount;
                    bool m_perMemberMicCountHasBeenSet;

                    /**
                     * 每个成员发送消息数量。

                     */
                    int64_t m_perMemberMessageCount;
                    bool m_perMemberMessageCountHasBeenSet;

                    /**
                     * 用户角色。0代表学生；1代表老师； 2助教；3巡课。
                     */
                    uint64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 上课班号
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 子上课班号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subGroupId;
                    bool m_subGroupIdHasBeenSet;

                    /**
                     * 用户的上台状态
                     */
                    int64_t m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 用户状态。0为未到，1为在线，2为离线，3为被踢，4为永久被踢，5为暂时掉线
                     */
                    uint64_t m_currentState;
                    bool m_currentStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MEMBERRECORD_H_
