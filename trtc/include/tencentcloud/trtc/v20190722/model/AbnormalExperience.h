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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEXPERIENCE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEXPERIENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AbnormalEvent.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 用户的异常体验及可能的原因
                */
                class AbnormalExperience : public AbstractModel
                {
                public:
                    AbnormalExperience();
                    ~AbnormalExperience() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
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
                     * 获取异常体验ID
                     * @return ExperienceId 异常体验ID
                     * 
                     */
                    uint64_t GetExperienceId() const;

                    /**
                     * 设置异常体验ID
                     * @param _experienceId 异常体验ID
                     * 
                     */
                    void SetExperienceId(const uint64_t& _experienceId);

                    /**
                     * 判断参数 ExperienceId 是否已赋值
                     * @return ExperienceId 是否已赋值
                     * 
                     */
                    bool ExperienceIdHasBeenSet() const;

                    /**
                     * 获取字符串房间号
                     * @return RoomId 字符串房间号
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置字符串房间号
                     * @param _roomId 字符串房间号
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取异常事件数组
                     * @return AbnormalEventList 异常事件数组
                     * 
                     */
                    std::vector<AbnormalEvent> GetAbnormalEventList() const;

                    /**
                     * 设置异常事件数组
                     * @param _abnormalEventList 异常事件数组
                     * 
                     */
                    void SetAbnormalEventList(const std::vector<AbnormalEvent>& _abnormalEventList);

                    /**
                     * 判断参数 AbnormalEventList 是否已赋值
                     * @return AbnormalEventList 是否已赋值
                     * 
                     */
                    bool AbnormalEventListHasBeenSet() const;

                    /**
                     * 获取异常事件的上报时间
                     * @return EventTime 异常事件的上报时间
                     * 
                     */
                    uint64_t GetEventTime() const;

                    /**
                     * 设置异常事件的上报时间
                     * @param _eventTime 异常事件的上报时间
                     * 
                     */
                    void SetEventTime(const uint64_t& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 异常体验ID
                     */
                    uint64_t m_experienceId;
                    bool m_experienceIdHasBeenSet;

                    /**
                     * 字符串房间号
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 异常事件数组
                     */
                    std::vector<AbnormalEvent> m_abnormalEventList;
                    bool m_abnormalEventListHasBeenSet;

                    /**
                     * 异常事件的上报时间
                     */
                    uint64_t m_eventTime;
                    bool m_eventTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ABNORMALEXPERIENCE_H_
