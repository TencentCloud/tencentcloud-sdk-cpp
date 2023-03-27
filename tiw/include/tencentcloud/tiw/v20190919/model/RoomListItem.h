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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_ROOMLISTITEM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_ROOMLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 日志查询里返回的白板房间数据
                */
                class RoomListItem : public AbstractModel
                {
                public:
                    RoomListItem();
                    ~RoomListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取房间在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     * @return StartTime 房间在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置房间在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     * @param StartTime 房间在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取房间在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     * @return EndTime 房间在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置房间在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     * @param EndTime 房间在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取房间里成员数
                     * @return UserNumber 房间里成员数
                     */
                    int64_t GetUserNumber() const;

                    /**
                     * 设置房间里成员数
                     * @param UserNumber 房间里成员数
                     */
                    void SetUserNumber(const int64_t& _userNumber);

                    /**
                     * 判断参数 UserNumber 是否已赋值
                     * @return UserNumber 是否已赋值
                     */
                    bool UserNumberHasBeenSet() const;

                private:

                    /**
                     * 房间ID
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 房间在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 房间在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 房间里成员数
                     */
                    int64_t m_userNumber;
                    bool m_userNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_ROOMLISTITEM_H_
