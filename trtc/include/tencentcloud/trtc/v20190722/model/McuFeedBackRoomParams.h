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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUFEEDBACKROOMPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUFEEDBACKROOMPARAMS_H_

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
                * 回推房间参数。
                */
                class McuFeedBackRoomParams : public AbstractModel
                {
                public:
                    McuFeedBackRoomParams();
                    ~McuFeedBackRoomParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回推房间的RoomId。
                     * @return RoomId 回推房间的RoomId。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置回推房间的RoomId。
                     * @param _roomId 回推房间的RoomId。
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
                     * 获取房间类型，必须和回推房间所对应的RoomId类型相同，0为整形房间号，1为字符串房间号。
                     * @return RoomIdType 房间类型，必须和回推房间所对应的RoomId类型相同，0为整形房间号，1为字符串房间号。
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置房间类型，必须和回推房间所对应的RoomId类型相同，0为整形房间号，1为字符串房间号。
                     * @param _roomIdType 房间类型，必须和回推房间所对应的RoomId类型相同，0为整形房间号，1为字符串房间号。
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取回推房间使用的UserId(https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转推服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     * @return UserId 回推房间使用的UserId(https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转推服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置回推房间使用的UserId(https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转推服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     * @param _userId 回推房间使用的UserId(https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转推服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
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
                     * 获取回推房间UserId对应的用户签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @return UserSig 回推房间UserId对应的用户签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置回推房间UserId对应的用户签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @param _userSig 回推房间UserId对应的用户签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                private:

                    /**
                     * 回推房间的RoomId。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 房间类型，必须和回推房间所对应的RoomId类型相同，0为整形房间号，1为字符串房间号。
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * 回推房间使用的UserId(https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者转推服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 回推房间UserId对应的用户签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUFEEDBACKROOMPARAMS_H_
