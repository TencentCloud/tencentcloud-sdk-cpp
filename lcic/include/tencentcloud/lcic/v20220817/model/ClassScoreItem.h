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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CLASSSCOREITEM_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CLASSSCOREITEM_H_

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
                * 课堂评分字段
                */
                class ClassScoreItem : public AbstractModel
                {
                public:
                    ClassScoreItem();
                    ~ClassScoreItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取课堂iD
                     * @return RoomId 课堂iD
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置课堂iD
                     * @param _roomId 课堂iD
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
                     * 获取评分时间
                     * @return CreateTime 评分时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置评分时间
                     * @param _createTime 评分时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取课堂评分
                     * @return Score 课堂评分
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置课堂评分
                     * @param _score 课堂评分
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取课堂评价
                     * @return ScoreMsg 课堂评价
                     * 
                     */
                    std::string GetScoreMsg() const;

                    /**
                     * 设置课堂评价
                     * @param _scoreMsg 课堂评价
                     * 
                     */
                    void SetScoreMsg(const std::string& _scoreMsg);

                    /**
                     * 判断参数 ScoreMsg 是否已赋值
                     * @return ScoreMsg 是否已赋值
                     * 
                     */
                    bool ScoreMsgHasBeenSet() const;

                private:

                    /**
                     * 课堂iD
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 评分时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 课堂评分
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 课堂评价
                     */
                    std::string m_scoreMsg;
                    bool m_scoreMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CLASSSCOREITEM_H_
