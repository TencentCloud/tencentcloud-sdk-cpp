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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SCALEINFOMATION_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SCALEINFOMATION_H_

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
                * 历史规模信息
                */
                class ScaleInfomation : public AbstractModel
                {
                public:
                    ScaleInfomation();
                    ~ScaleInfomation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每天开始的时间
                     * @return Time 每天开始的时间
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置每天开始的时间
                     * @param _time 每天开始的时间
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取房间人数，用户重复进入同一个房间为1次
                     * @return UserNumber 房间人数，用户重复进入同一个房间为1次
                     * 
                     */
                    uint64_t GetUserNumber() const;

                    /**
                     * 设置房间人数，用户重复进入同一个房间为1次
                     * @param _userNumber 房间人数，用户重复进入同一个房间为1次
                     * 
                     */
                    void SetUserNumber(const uint64_t& _userNumber);

                    /**
                     * 判断参数 UserNumber 是否已赋值
                     * @return UserNumber 是否已赋值
                     * 
                     */
                    bool UserNumberHasBeenSet() const;

                    /**
                     * 获取房间人次，用户每次进入房间为一次
                     * @return UserCount 房间人次，用户每次进入房间为一次
                     * 
                     */
                    uint64_t GetUserCount() const;

                    /**
                     * 设置房间人次，用户每次进入房间为一次
                     * @param _userCount 房间人次，用户每次进入房间为一次
                     * 
                     */
                    void SetUserCount(const uint64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取sdkappid下一天内的房间数
                     * @return RoomNumbers sdkappid下一天内的房间数
                     * 
                     */
                    uint64_t GetRoomNumbers() const;

                    /**
                     * 设置sdkappid下一天内的房间数
                     * @param _roomNumbers sdkappid下一天内的房间数
                     * 
                     */
                    void SetRoomNumbers(const uint64_t& _roomNumbers);

                    /**
                     * 判断参数 RoomNumbers 是否已赋值
                     * @return RoomNumbers 是否已赋值
                     * 
                     */
                    bool RoomNumbersHasBeenSet() const;

                private:

                    /**
                     * 每天开始的时间
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 房间人数，用户重复进入同一个房间为1次
                     */
                    uint64_t m_userNumber;
                    bool m_userNumberHasBeenSet;

                    /**
                     * 房间人次，用户每次进入房间为一次
                     */
                    uint64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * sdkappid下一天内的房间数
                     */
                    uint64_t m_roomNumbers;
                    bool m_roomNumbersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SCALEINFOMATION_H_
