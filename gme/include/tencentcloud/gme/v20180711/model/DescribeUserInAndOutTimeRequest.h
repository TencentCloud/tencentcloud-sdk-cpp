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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEUSERINANDOUTTIMEREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEUSERINANDOUTTIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeUserInAndOutTime请求参数结构体
                */
                class DescribeUserInAndOutTimeRequest : public AbstractModel
                {
                public:
                    DescribeUserInAndOutTimeRequest();
                    ~DescribeUserInAndOutTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BizId 应用ID
                     * 
                     */
                    int64_t GetBizId() const;

                    /**
                     * 设置应用ID
                     * @param _bizId 应用ID
                     * 
                     */
                    void SetBizId(const int64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取房间ID
                     * @return RoomId 房间ID
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置房间ID
                     * @param _roomId 房间ID
                     * 
                     */
                    void SetRoomId(const int64_t& _roomId);

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
                    int64_t GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const int64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取字符串类型用户ID
                     * @return UserIdStr 字符串类型用户ID
                     * 
                     */
                    std::string GetUserIdStr() const;

                    /**
                     * 设置字符串类型用户ID
                     * @param _userIdStr 字符串类型用户ID
                     * 
                     */
                    void SetUserIdStr(const std::string& _userIdStr);

                    /**
                     * 判断参数 UserIdStr 是否已赋值
                     * @return UserIdStr 是否已赋值
                     * 
                     */
                    bool UserIdStrHasBeenSet() const;

                    /**
                     * 获取字符串类型房间ID
                     * @return RoomIdStr 字符串类型房间ID
                     * 
                     */
                    std::string GetRoomIdStr() const;

                    /**
                     * 设置字符串类型房间ID
                     * @param _roomIdStr 字符串类型房间ID
                     * 
                     */
                    void SetRoomIdStr(const std::string& _roomIdStr);

                    /**
                     * 判断参数 RoomIdStr 是否已赋值
                     * @return RoomIdStr 是否已赋值
                     * 
                     */
                    bool RoomIdStrHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    int64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 房间ID
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 用户ID
                     */
                    int64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 字符串类型用户ID
                     */
                    std::string m_userIdStr;
                    bool m_userIdStrHasBeenSet;

                    /**
                     * 字符串类型房间ID
                     */
                    std::string m_roomIdStr;
                    bool m_roomIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEUSERINANDOUTTIMEREQUEST_H_
