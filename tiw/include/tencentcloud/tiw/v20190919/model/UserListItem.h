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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_USERLISTITEM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_USERLISTITEM_H_

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
                * 日志查询里返回的白板用户数据
                */
                class UserListItem : public AbstractModel
                {
                public:
                    UserListItem();
                    ~UserListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取房间内的用户ID
                     * @return UserId 房间内的用户ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置房间内的用户ID
                     * @param UserId 房间内的用户ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     * @return StartTime 用户在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置用户在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     * @param StartTime 用户在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取用户在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     * @return EndTime 用户在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置用户在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     * @param EndTime 用户在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 房间内的用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户在查询时间段内最早出现的时间，Unix时间戳，单位毫秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 用户在查询时间段内最晚出现的时间，Unix时间戳，单位毫秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_USERLISTITEM_H_
