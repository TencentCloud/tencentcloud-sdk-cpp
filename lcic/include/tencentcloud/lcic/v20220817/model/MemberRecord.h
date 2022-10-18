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
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID。
                     * @param UserId 用户ID。
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户名称。
                     * @return UserName 用户名称。
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称。
                     * @param UserName 用户名称。
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取在线时长，单位秒。
                     * @return PresentTime 在线时长，单位秒。
                     */
                    uint64_t GetPresentTime() const;

                    /**
                     * 设置在线时长，单位秒。
                     * @param PresentTime 在线时长，单位秒。
                     */
                    void SetPresentTime(const uint64_t& _presentTime);

                    /**
                     * 判断参数 PresentTime 是否已赋值
                     * @return PresentTime 是否已赋值
                     */
                    bool PresentTimeHasBeenSet() const;

                    /**
                     * 获取是否开启摄像头。
                     * @return Camera 是否开启摄像头。
                     */
                    uint64_t GetCamera() const;

                    /**
                     * 设置是否开启摄像头。
                     * @param Camera 是否开启摄像头。
                     */
                    void SetCamera(const uint64_t& _camera);

                    /**
                     * 判断参数 Camera 是否已赋值
                     * @return Camera 是否已赋值
                     */
                    bool CameraHasBeenSet() const;

                    /**
                     * 获取是否开启麦克风。
                     * @return Mic 是否开启麦克风。
                     */
                    uint64_t GetMic() const;

                    /**
                     * 设置是否开启麦克风。
                     * @param Mic 是否开启麦克风。
                     */
                    void SetMic(const uint64_t& _mic);

                    /**
                     * 判断参数 Mic 是否已赋值
                     * @return Mic 是否已赋值
                     */
                    bool MicHasBeenSet() const;

                    /**
                     * 获取是否禁言。
                     * @return Silence 是否禁言。
                     */
                    uint64_t GetSilence() const;

                    /**
                     * 设置是否禁言。
                     * @param Silence 是否禁言。
                     */
                    void SetSilence(const uint64_t& _silence);

                    /**
                     * 判断参数 Silence 是否已赋值
                     * @return Silence 是否已赋值
                     */
                    bool SilenceHasBeenSet() const;

                    /**
                     * 获取回答问题数量。
                     * @return AnswerQuestions 回答问题数量。
                     */
                    uint64_t GetAnswerQuestions() const;

                    /**
                     * 设置回答问题数量。
                     * @param AnswerQuestions 回答问题数量。
                     */
                    void SetAnswerQuestions(const uint64_t& _answerQuestions);

                    /**
                     * 判断参数 AnswerQuestions 是否已赋值
                     * @return AnswerQuestions 是否已赋值
                     */
                    bool AnswerQuestionsHasBeenSet() const;

                    /**
                     * 获取举手数量。
                     * @return HandUps 举手数量。
                     */
                    uint64_t GetHandUps() const;

                    /**
                     * 设置举手数量。
                     * @param HandUps 举手数量。
                     */
                    void SetHandUps(const uint64_t& _handUps);

                    /**
                     * 判断参数 HandUps 是否已赋值
                     * @return HandUps 是否已赋值
                     */
                    bool HandUpsHasBeenSet() const;

                    /**
                     * 获取首次进入房间的unix时间戳。
                     * @return FirstJoinTimestamp 首次进入房间的unix时间戳。
                     */
                    uint64_t GetFirstJoinTimestamp() const;

                    /**
                     * 设置首次进入房间的unix时间戳。
                     * @param FirstJoinTimestamp 首次进入房间的unix时间戳。
                     */
                    void SetFirstJoinTimestamp(const uint64_t& _firstJoinTimestamp);

                    /**
                     * 判断参数 FirstJoinTimestamp 是否已赋值
                     * @return FirstJoinTimestamp 是否已赋值
                     */
                    bool FirstJoinTimestampHasBeenSet() const;

                    /**
                     * 获取最后一次退出房间的unix时间戳。
                     * @return LastQuitTimestamp 最后一次退出房间的unix时间戳。
                     */
                    uint64_t GetLastQuitTimestamp() const;

                    /**
                     * 设置最后一次退出房间的unix时间戳。
                     * @param LastQuitTimestamp 最后一次退出房间的unix时间戳。
                     */
                    void SetLastQuitTimestamp(const uint64_t& _lastQuitTimestamp);

                    /**
                     * 判断参数 LastQuitTimestamp 是否已赋值
                     * @return LastQuitTimestamp 是否已赋值
                     */
                    bool LastQuitTimestampHasBeenSet() const;

                    /**
                     * 获取奖励次数。
                     * @return Rewords 奖励次数。
                     */
                    uint64_t GetRewords() const;

                    /**
                     * 设置奖励次数。
                     * @param Rewords 奖励次数。
                     */
                    void SetRewords(const uint64_t& _rewords);

                    /**
                     * 判断参数 Rewords 是否已赋值
                     * @return Rewords 是否已赋值
                     */
                    bool RewordsHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MEMBERRECORD_H_
