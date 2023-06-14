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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ROOMSTATE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ROOMSTATE_H_

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
                * 房间信息列表
                */
                class RoomState : public AbstractModel
                {
                public:
                    RoomState();
                    ~RoomState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通话ID（唯一标识一次通话）
                     * @return CommId 通话ID（唯一标识一次通话）
                     * 
                     */
                    std::string GetCommId() const;

                    /**
                     * 设置通话ID（唯一标识一次通话）
                     * @param _commId 通话ID（唯一标识一次通话）
                     * 
                     */
                    void SetCommId(const std::string& _commId);

                    /**
                     * 判断参数 CommId 是否已赋值
                     * @return CommId 是否已赋值
                     * 
                     */
                    bool CommIdHasBeenSet() const;

                    /**
                     * 获取房间号
                     * @return RoomString 房间号
                     * 
                     */
                    std::string GetRoomString() const;

                    /**
                     * 设置房间号
                     * @param _roomString 房间号
                     * 
                     */
                    void SetRoomString(const std::string& _roomString);

                    /**
                     * 判断参数 RoomString 是否已赋值
                     * @return RoomString 是否已赋值
                     * 
                     */
                    bool RoomStringHasBeenSet() const;

                    /**
                     * 获取房间创建时间
                     * @return CreateTime 房间创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置房间创建时间
                     * @param _createTime 房间创建时间
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
                     * 获取房间销毁时间
                     * @return DestroyTime 房间销毁时间
                     * 
                     */
                    uint64_t GetDestroyTime() const;

                    /**
                     * 设置房间销毁时间
                     * @param _destroyTime 房间销毁时间
                     * 
                     */
                    void SetDestroyTime(const uint64_t& _destroyTime);

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                    /**
                     * 获取房间是否已经结束
                     * @return IsFinished 房间是否已经结束
                     * 
                     */
                    bool GetIsFinished() const;

                    /**
                     * 设置房间是否已经结束
                     * @param _isFinished 房间是否已经结束
                     * 
                     */
                    void SetIsFinished(const bool& _isFinished);

                    /**
                     * 判断参数 IsFinished 是否已赋值
                     * @return IsFinished 是否已赋值
                     * 
                     */
                    bool IsFinishedHasBeenSet() const;

                    /**
                     * 获取房间创建者Id
                     * @return UserId 房间创建者Id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置房间创建者Id
                     * @param _userId 房间创建者Id
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 通话ID（唯一标识一次通话）
                     */
                    std::string m_commId;
                    bool m_commIdHasBeenSet;

                    /**
                     * 房间号
                     */
                    std::string m_roomString;
                    bool m_roomStringHasBeenSet;

                    /**
                     * 房间创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 房间销毁时间
                     */
                    uint64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                    /**
                     * 房间是否已经结束
                     */
                    bool m_isFinished;
                    bool m_isFinishedHasBeenSet;

                    /**
                     * 房间创建者Id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ROOMSTATE_H_
